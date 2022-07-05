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
*Symbol cross1x12x34,cross2x12;
Autodeclare Symbol a,[];

Load ../../../data_save/ggtth_massless/NLO/amp_master.sav;

#do i=1,140
    #do j=1,8
        Local bmp10o`i'o`j'=a10o`i'o`j';
    #enddo
#enddo

.sort
*Delete storage;
Format mathematica;
#do i=1,140
    #do j=1,8
    #write <../../../data_save/ggtth_massless/NLO/test/bmp10o`i'o`j'.m> "(%E)",bmp10o`i'o`j'
    #enddo
#enddo

.end
