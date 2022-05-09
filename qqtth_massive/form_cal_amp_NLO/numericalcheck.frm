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
Symbol cross1x12x34,cross2x12;
Autodeclare Symbol a,[];

Load ../../../data_save/qqtth_massive/NLO/amp_ID.sav;

.sort
#do i=1,31
    #do j=1,2
        Local amp10`i'o`j'=a10o`i'o`j';
    #enddo
#enddo
.sort

Local matsum=
#do i=1,31
    #do j=1,2
        +amp10o`i'o`j'
    #enddo
#enddo
;

.sort
Format mathematica;

#write <../../../data_save/qqtth_massive/NLO/matsum.m> "(%E)",matsum

.end
