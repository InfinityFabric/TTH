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
CFunction pentagon1,pentagon1x12,pentagon1x123,pentagon1x1234,pentagon1x124,pentagon1x1243,pentagon1x12x34,pentagon1x13,pentagon1x132,pentagon1x1324,pentagon1x134,pentagon1x14;
CFunction Sector,F;
Symbol mu,mt,mh;
CFunction cross1x12,cross1x123,cross1x1234,cross1x124,cross1x1243,cross1x12x34,cross1x13,cross1x132,cross1x1324,cross1x134,cross1x14;
Autodeclare Symbol a,[],Ca,Cf;

Off statistics;

Load ../../../data_save/ggtth_massless/NLO/am_after_momentumshift.sav;

.sort

#do i=1,140
    #do j=1,8
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
Bracket pentagon1;
*Print +s amp10o27o1;
Print +s;
.sort
*Format mathematica;
*#write <test.m> "(%E)",amp10o27o1
.store

save ../../../data_save/ggtth_massless/NLO/amp_ID.sav;

.end
