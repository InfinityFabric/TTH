#-
#include ./procedure/momentumshift/momentumshift_10.h

Off statistics;

* global declaration

Symbol D;
Dimension D;
Symbol CA,CF,N,M;
Symbol s12,s23,s34,s45,s51;
Autodeclare Vector p,q,k;
Symbol m,mt,mu,mh;
CFunction prop,den,num;
Symbol gs,Y,a;

Set kset:k1,k2,-k1,-k2;
* local declaration

CFunction DiaMatch,Sector,Shift;
CFunction pentagon1,pentagon1x12,pentagon1x123,pentagon1x1234,pentagon1x124,pentagon1x1243,pentagon1x12x34,pentagon1x13,pentagon1x132,pentagon1x1324,pentagon1x134,pentagon1x14;
Symbol [];

Load ../../../data_save/ggtth_massless/NLO/Mat.sav;

#call momentumshift

Print +s am10o27o1;
.store

save ../../../data_save/ggtth_massless/NLO/am_after_momentumshift.sav;

.end
