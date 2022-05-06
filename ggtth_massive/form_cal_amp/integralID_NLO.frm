#-

#include ./procedure/integralID/scalarproduct.h
#include ./procedure/integralID/integralID_NLO.h

Autodeclare Index i;
Autodeclare Vector p,q,k;
Autodeclare Symbol prop;
Symbol s12,s13,s14,s23,s24,s34;

Autodeclare CFunction pentagon;
CFunction Sector,F;
Symbol sc,sc1,sc2,sc3,sc4,sc5;
Symbol mu,mt;
Autodeclare Symbol a,[];

Set scalarset:sc1,sc2,sc3,sc4,sc5;

Off statistics;

Load ../formsav/NLO/am_after_momentumshift.sav;

.sort

#do i=1,31
    #do j=1,2
*        Drop am10o`i'o`j';
*        Skip;
	Global amp10o`i'o`j'=am10o`i'o`j';
        
	.sort
    #enddo
#enddo

#call scalarproduct
#call integralID
Print;
.store

save ../formsav/NLO/amp_ID.sav;

.end
