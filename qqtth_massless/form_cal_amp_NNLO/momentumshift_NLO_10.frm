#-
#include ./procedure/momentumshift/momentumshift_20.h

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
CFunction pentagonbox1,
pentagonbox1x12,
pentagonbox1x1234,
pentagonbox1x12x34,
pentagonbox1x12x345,
pentagonbox1x12x354,
pentagonbox1x12x45;
CFunction hexagonbox1,
hexagonbox1x12,
hexagonbox1x12345,
hexagonbox1x1235,
hexagonbox1x12354,
hexagonbox1x12435,
hexagonbox1x1245,
hexagonbox1x124x35,
hexagonbox1x125,
hexagonbox1x125x34,
hexagonbox1x12x34,
hexagonbox1x12x354,
hexagonbox1x132,
hexagonbox1x1342,
hexagonbox1x13425,
hexagonbox1x134x25,
hexagonbox1x13x24,
hexagonbox1x13x25,
hexagonbox1x142;
Symbol [];

Load ../../../data_save/qqtth_massless/NLO/Mat20.sav;

#call momentumshift

Print;
.store

save ../../../data_save/qqtth_massless/NLO/am_after_momentumshift20.sav;

.end
