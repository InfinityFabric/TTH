#-
Symbol D;
Autodeclare Index i;
Autodeclare Vector p,q,k;
Autodeclare Symbol gs,Y,N;
Symbol s12,s23,s34,s45,s51,s24,s53,s31;
Symbol mt,mh,mu;
CFunction pentagon1,pentagon2;
Autodeclare Symbol basis,Basis;

***** loacl declaration *****

Function num,den;
Symbol d;

Load ../../../data_save/qqtth_massless/NLO/amp_ID.sav;

#do i=1,31
    #do j=1,2
        Global a10o`i'o`j'=amp10o`i'o`j';
    #enddo
#enddo

.sort
Delete storage;
***** transform kira default dimension d into my default dimension D *****
id D=d;
*****

#do i=1,1
    
#include ../multivariateapart/pentagon`i'/kira_rule.inc

#enddo

id prop(?a)=den(?a);

***** tansfrom kira d into D *****
id d=D;
*****

*id mu=0;
*id mt=0;

*.sort
*Bracket pentagon1,pentagon2,basis1,basis2,Basis1,Basis2,Nc,Y,gs;
*Print +s;
*Format mathematica;
*#write <myresults.m> "(%E)",a10o27o1
.store

save ../../../data_save/qqtth_massless/NLO/amp_master.sav;

.end
