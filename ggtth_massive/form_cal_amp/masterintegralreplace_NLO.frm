#-
Symbol D;
Autodeclare Index i;
Autodeclare Vector p,q,k;
Autodeclare Symbol gs,Y,N;
Symbol s12,s13,s14,s23,s24,s34;
CFunction pentagon1,pentagon2,pentagon3,pentagon4;
Autodeclare Symbol basis,Basis;

***** loacl declaration *****

Function num,den;
Symbol d;

Load ../formsav/NLO/amp_ID.sav;

#do i=1,31
    #do j=1,2
        Global a10o`i'o`j'=amp10o`i'o`j';
    #enddo
#enddo

***** transform kira default dimension d into my default dimension D *****
id D=d;
*****

#do i=1,4
    
#include ../kira/results/pentagon`i'/kira_myintegrals`i'.inc

#enddo

***** tansfrom kira d into D *****
id d=D;
*****

id mu=0;
id mt=0;

.sort
Bracket pentagon1,pentagon2,pentagon3,pentagon4,basis1,basis2,Basis1,Basis2,Nc,Y,gs;
Print +s;
Format mathematica;
*#write <../myresults.nb> "(%E)",a10o10o1
.store

save ../formsav/NLO/amp_master.sav;

.end
