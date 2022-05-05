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
Autodeclare CFunction pentagon,pentagonbox,hexagonbox,doublepentagon;
Symbol [];

Load ../formsav/NLO/Mat.sav;

#call momentumshift

Print;
.store

save ../formsav/NLO/am_after_momentumshift.sav;

.end
