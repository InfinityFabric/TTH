#-
Autodeclare Index i;
Autodeclare Vector p,q,k;
Autodeclare Symbol prop;
Symbol s12,s23,s34,s45,s51,s24,s53,s31;

Autodeclare CFunction pentagon;
CFunction pentagon1x12x34,pentagon2x12;
CFunction Sector,F,Log,DiLog;
Symbol sc,sc1,sc2,sc3,sc4,sc5;
Symbol mu,mt,mh,N,Mu,Pi,Eps;
*Symbol cross1x12x34,cross2x12;
Autodeclare Symbol a,[];
CFunction cross1x12,cross1x123,cross1x1234,cross1x124,cross1x1243,cross1x12x34,cross1x13,cross1x132,cross1x1324,cross1x134,cross1x14;

Load ../../../data_save/ggtth_massless/NLO/matsum.sav;

Global amplitude=matsum;
.sort
Delete storage;

id basis1*Basis1 = N*(N^2 - 1);
id basis2*Basis1 = 0;
id basis3*Basis1 = 0;
id basis1*Basis2 = 0;
id basis2*Basis2 = N*(N^2 - 1)/2;
id basis3*Basis2 = 0;
id basis1*Basis3 = 0;
id basis2*Basis3 = 0;
id basis3*Basis3 = -(4 - N^2)*(N^2 - 1)/(2*N);

if (match(cross1x12));
Multiply replace_(s51,-s12+s34-s51,s23,s45-s12-s23);
endif;

if (match(cross1x123));
Multiply replace_(s12,s23,s34,-s45-s51+s23,s51,-s12+s34-s51,s23,s34-s12-s23);
endif;

if (match(cross1x1234));
Multiply replace_(s45,s51,s12,s23,s34,-s45-s51+s23,s51,-s12+s34-s51,s23,s34);
endif;

if (match(cross1x124));
Multiply replace_(s45,s51,s12,-s34+s51-s23,s34,s45-s12-s23,s51,-s12+s34-s51,s23,s34);
endif;

if (match(cross1x1243));
Multiply replace_(s45,-s45+s12-s34,s12,-s34+s51-s23,s34,s45-s12-s23,s51,-s12+s34-s51,s23,-s45-s51+s23);
endif;

if (match(cross1x12x34));
Multiply replace_(s45,-s45+s12-s34,s51,-s12+s34-s51,s23,-s45-s51+s23);
endif;

if (match(cross1x13));
Multiply replace_(s12,s23,s34,-s45-s51+s23,s51,-s45+s12-s34,s23,s12);
endif;

if (match(cross1x132));
Multiply replace_(s12,s45-s12-s23,s34,-s34+s51-s23,s51,-s45+s12-s34,s23,s12);
endif;

if (match(cross1x1324));
Multiply replace_(s45,s51,s12,s34,s34,s12,s51,-s45+s12-s34,s23,-s34+s51-s23);
endif;

if (match(cross1x134));
Multiply replace_(s45,s51,s12,s23,s34,-s45-s51+s23,s51,-s45+s12-s34,s23,-s34+s51-s23);
endif;

if (match(cross1x14));
Multiply replace_(s45,s51,s12,-s34+s51-s23,s34,s45-s12-s23,s51,s45);
endif;

id den(a?)=1/a;
id Nc=N;
id D=4-2*Eps;
id d=4-2*Eps;

#include ./rule1.h

.sort
Format mathematica;

#write <../../../data_save/ggtth_massless/NLO/ma.m> "(%E)",amplitude
save ../../../data_save/ggtth_massless/NLO/ma.sav;
.end
