#-
#include ./procedure/momentumshift/momentumshift_10.h

Off statistics;

* global declaration

Symbol D;
Dimension D;
Symbol CA,CF,N,M;
Symbol s12,s13,s14,s23,s24,s34;
Autodeclare Vector p,q,k;
Symbol m,mt,mu,mh;
CFunction prop;
Symbol gs,Y;

* local declaration

CFunction DiaMatch,Sector,Shift;
CFunction pentagon2,pentagon2x12,pentagon1,pentagon1x12x34;
Symbol [];

Load ../../../data_save/qqtth_massive/NNLO/20/Mat.sav;

#call momentumshift

Print;
.store

save ../../../data_save/qqtth_massive/NNLO/20/am_after_momentumshift.sav;

.end
