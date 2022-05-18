#-
#include ./procedure/squareamplitude/numbertoindex.h
#include ./procedure/squareamplitude/feynmanrule.h 
#include ./procedure/squareamplitude/seperatecolorlorentzindex.h
#include ./procedure/squareamplitude/complexconjugate.h
#include ./procedure/squareamplitude/squareamplitude.h
#include ./procedure/squareamplitude/calcolorfactor.h
#include ./procedure/squareamplitude/colorbasis.h
#include ./procedure/squareamplitude/calamp_NLO_10.h
#include ./procedure/squareamplitude/findnf.h

Symbol D;
Dimension D;
Symbol CA,CF,Nc,Na;
Symbol s12,s13,s14,s23,s24,s34;
Autodeclare Index i,ie,ii,iie,ig,l,le,ll,lle,a=Nc,ae=Nc,aa=Nc,c=Na,ce=Na,cc=Na,cg=Na,ccg=Na;
Autodeclare Symbol m,mt,mu,mh;
Autodeclare Vector p,q,k;
CFunction UB,U,VB,V;
CFunction ghprop,glprop,fpropu,fpropt,fprop,vrtx,prop;
CFunction f,g,t,gl,gh,gv,gg,ch,mom;
Symbol Uug,Ttg,Tth,gggg,ggg,Ghghg;
Symbol gs,Y,nf,up,top;
Autodeclare Symbol basis,Basis;

Set quarkset:up,top;

Set iset:i1,...,i100;
Set ieset:ie1,...,ie100;
Set igset:ig1,...,ig100;
Set iiset:ii1,...,ii100;
Set iieset:iie1,...,iie100;
Set lset:l1,...,l100;
Set leset:le1,...,le100;
Set llset:ll1,...,ll100;
Set lleset:lle1,...,lle100;
Set aset:a1,...,a100;
Set cset:c1,...,c100;
Set aeset:ae1,...,ae100;
Set ceset:ce1,...,ce100;
Set aaset:aa1,...,aa100;
Set ccset:cc1,...,cc100;
Set cgset:cg1,...,cg100;
Set ccgset:ccg1,...,ccg100;

Off statistics;

#include ../qgraf/diagram/qqtthtree.frm

#include ../qgraf/diagram/qqtthoneloop.frm

Multiply left U(-1,p1,0,up)*VB(-3,p2,0,up)*UB(-2,p3,0,top)*V(-4,p4,0,top);
.sort

#call numbertoindex
#call feynmanrule
#call seperatecolorlorentzindex
#call calcolorfactor
#call colorbasis

***** square amplitude in this procedure ****

#call calamponebyone

Bracket basis1,basis2,Basis1,Basis2;
Print +s;
.store

save ../../../data_save/qqtth_massless/NLO/Mat.sav;

.end