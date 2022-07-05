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
CFunction pentagon1,pentagon1x12,pentagon1x12x34,pentagon1x34,pentagon2,pentagon2x12,pentagon3,pentagon3x12,pentagon3x12x34,pentagon3x34,pentagon4,pentagon4x12;
Symbol [];

Load ../../../data_save/ggtth_massive/NLO/Mat.sav;

#call momentumshift

Print +s am10o27o1;
.store

save ../../../data_save/ggtth_massive/NLO/am_after_momentumshift.sav;

.end
