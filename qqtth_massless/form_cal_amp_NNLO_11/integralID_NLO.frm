#-

#include ./procedure/integralID/scalarproduct.h
#include ./procedure/integralID/integralID_NLO.h
#include ./procedure/integralID/crossing.h
#include ./procedure/integralID/proprule.h

Autodeclare Index i;
Autodeclare Vector p,q,k;
Autodeclare Symbol prop;
Symbol s12,s23,s34,s45,s51,s24,s53,s31;

Autodeclare CFunction pentagon;
CFunction pentagon1x12x34,pentagon2x12;
CFunction Sector,F;
Symbol sc,sc1,sc2,sc3,sc4,sc5;
Symbol mu,mt,mh;
Symbol cross1x12x34,cross1x12,cross1x12x345,cross1x12x354,cross1x12x45;
Autodeclare Symbol a,[],Ca,Cf;

Set scalarset:sc1,sc2,sc3,sc4,sc5;

Off statistics;

Load ../../../data_save/qqtth_massless/NLO/am_after_momentumshift.sav;

.sort

#do i=1,31
    #do j=1,2
*        Drop am10o`i'o`j';
*        Skip;
	Global amp10o`i'o`j'=am10o`i'o`j';
        
	.sort
    #enddo
#enddo

Delete storage;
#call crossing
#call proprule
#call scalarproduct
#call integralID

*Bracket pentagon1,pentagon2;

Format mathematica;
*Print +s amp10o27o1;
Print +s;
.sort
*Format mathematica;
*#write <test.m> "(%E)",amp10o27o1
.store

save ../../../data_save/qqtth_massless/NLO/amp_ID.sav;

.end
