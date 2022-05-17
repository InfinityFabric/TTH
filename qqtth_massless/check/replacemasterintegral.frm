#-
Autodeclare Index i;
Autodeclare Vector p,q,k;
Autodeclare Symbol prop;
Symbol s12,s23,s34,s45,s51,s24,s53,s31;

Autodeclare CFunction pentagon;
CFunction pentagon1x12x34,pentagon2x12;
CFunction Sector,F;
Symbol sc,sc1,sc2,sc3,sc4,sc5;
Symbol mu,mt,mh;
Symbol cross1x12,cross1x12x34,cross1x12x345,cross1x12x354,cross1x12x45;
Autodeclare Symbol a,[];

CFunction DiLog,Log;
Symbol Mu2,Eps;

Load ../../../data_save/qqtth_massless/NLO/matsum.sav

Local amp=matsum;

#include masterintegral.h

if (match(cross1x12));
   Multiply replace_(s12,s12,s23,-s12-s23+s45,s34,s34,s45,s45,s51,-s12+s34-s51);
elseif (match(cross1x12x34));
   Multiply replace_(s12,s12,s23,s23-s45-s51,s34,s34,s45,s12-s34-s45,s51,-s12+s34-s51);
elseif (match(crossx1x12x345));
   Multiply replace_(s12,s12,s23,s51,s34,s12-s34-s45,s45,s34,s51,-s23-s34+s51);
elseif (match(crossx1x12x354));
   Multiply replace_(s12,s12,s23,s23-s45-s51,s34,s45,s45,s12-s34-s45,s51,s23);
elseif (match(crossx1x12x45));
   Multiply replace_(s12,s12,s23,-s12-s23+s45,s34,s12-s34-s45,s45,s45,s51,-s23-s34+s51);
endif;

id D=4-2*Eps;

Format mathematica;
#write <../../../data_save/qqtth_massless/NLO/amp.m> "(%E)",amp

Print +s;
.end
