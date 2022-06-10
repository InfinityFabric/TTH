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
CFunction pentagon1,pentagon1x12x34,pentagon1x12x345,pentagon1x12x354,pentagon1x12,pentagon1x12x45;
Symbol [];

Load ../../../data_save/qqtth_massless/NLO/Mat.sav;

#call momentumshift

Print +s am10o27o1;
.store

save ../../../data_save/qqtth_massless/NLO/am_after_momentumshift.sav;

.end
