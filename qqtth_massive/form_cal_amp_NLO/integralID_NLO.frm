#-

#include ./procedure/integralID/scalarproduct.h
#include ./procedure/integralID/integralID_NLO.h
#include ./procedure/integralID/crossing.h

Autodeclare Index i;
Autodeclare Vector p,q,k;
Autodeclare Symbol prop;
Symbol s12,s23,s34,s45,s51,s24,s53,s31;

Autodeclare CFunction pentagon;
CFunction pentagon1x12x34,pentagon2x12;
CFunction Sector,F;
Symbol sc,sc1,sc2,sc3,sc4,sc5;
Symbol mu,mt,mh;
Symbol cross1x12x34,cross2x12;
Autodeclare Symbol a,[];

Set scalarset:sc1,sc2,sc3,sc4,sc5;

Off statistics;

Load ../../../data_save/qqtth_massive/NLO/am_after_momentumshift.sav;

.sort

#do i=1,31
    #do j=1,2
*        Drop am10o`i'o`j';
*        Skip;
	Global amp10o`i'o`j'=am10o`i'o`j';
        
	.sort
    #enddo
#enddo

#call crossing
#call scalarproduct
#call integralID

Bracket pentagon1,pentagon2;
format mathematica;
Print;
.store

save ../../../data_save/qqtth_massive/NLO/amp_ID.sav;

.sort
.end
