#-

#include ./procedure/integralID/scalarproduct.h
#include ./procedure/integralID/integralID_NLO.h
#include ./procedure/integralID/crossing.h
#include ./procedure/integralID/proprule.h

Autodeclare Index i;
Autodeclare Vector p,q,k;
Symbol prop1,prop2,prop3,prop4,prop5;
CFunction prop;
Symbol s12,s23,s34,s45,s51,s24,s53,s31;
Vector [p1+p2-p3-p4];

Autodeclare CFunction pentagon;
CFunction pentagon1x12x34,pentagon2x12;
CFunction Sector,F;
Symbol sc,sc1,sc2,sc3,sc4,sc5;
Symbol mu,mt,mh;
Symbol cross1x12x34,cross1x12,cross1x12x345,cross1x12x354,cross1x12x45;
Autodeclare Symbol a,[],Ca,Cf;
Symbol D,gs,Y,Nc,basis2,Basis2;

Set scalarset:sc1,sc2,sc3,sc4,sc5;

Off statistics;

Local test=- 64*prop(p1.p1 + 2*p1.p2 + p2.p2)^2*prop(p1.p1 + 2*p1.p2 - 2*p1.p4 +
      p2.p2 - 2*p2.p4 + p4.p4)*Sector(pentagon1x12x345,4,29)*p1.p4*p2.p4*
      p3.q^2*i_*gs^6*Y^2*Nc*basis2*Basis2;

Print +s;
.sort
Delete storage;
#call crossing
*#call proprule
*#call scalarproduct
*#call integralID

*Bracket pentagon1,pentagon2;

*Format mathematica;
Print +s test;
.sort
*Format mathematica;
*#write <test.m> "(%E)",amp10o27o1
*.store
*
*save ../../../data_save/qqtth_massless/NLO/amp_ID.sav;

.end
