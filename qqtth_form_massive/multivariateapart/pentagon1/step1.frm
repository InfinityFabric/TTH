#-
Symbol x,y,z,a;
CFunction pentagon1,num,den;
CFunction del;
Symbol d,mt,mh,mu,s12,s23,s34,s45,s51;
Table rest(1:52);

Off statistics;

#include kira_myintegrals.inc
#$total=52;

*id den(x?number_)=1/x;
*.sort
*#do i=1,$total
*Local denominator`i'=expr`i';
*#enddo

*id pentagon1(?a)=1;
*id num(?a)=1;
*
*.sort
*Skip;
*#do i=1,$total
*NSkip denominator`i';
*Drop expr`i';
*#enddo
*
*.sort

*#do i=1,$total
*    #$nterm`i'=termsin_(denominator`i');
*    #message `$nterm`i''
*    .sort
*    Local instant1=denominator`i';
*    Local instant2=0;
*
*    .sort
*    #do j=1,$nterm`i'
*
*    Local terms`i'o`j'=firstterm_(instant1);
*
*    Local instant2=instant1-terms`i'o`j';
*    .sort
*    Local instant1=instant2;
*    DropCoefficient;
**    Print terms`i'o`j';
*    .sort
*    #if ($nterm`i'!=0);
*    #write <denominators.m> "%E,",terms`i'o`j'
*    #else;
*    #write <denominators.m> "1,"
*    #endif;
*    .sort
*    #enddo
*
*#enddo
*#do i=1,$total
*    #$nterm`i'=termsin_(denominator`i');
*    #message `$nterm`i''
*    if ($nterm`i'==0);
*    $nterm`i'=1;
*    endif;
*    #message `$nterm`i''
*#enddo
#do i=1,$total
    #$nterm`i'=termsin_(expr`i');
    if ($nterm`i'==0);
    $nterm`i'=1;
    endif;
    .sort
    #message `i' `$nterm`i''
#enddo

#do i=1,$total
    Local instant1=expr`i';
    Local instant2=0;
    .sort  
    #message `i' `$nterm`i''
    #do j=1,$nterm`i'

    Local terms`i'o`j'=firstterm_(instant1);

    Local instant2=instant1-terms`i'o`j';
    .sort
    Skip;
    NSkip  terms`i'o`j';
    Bracket den;
    .sort
    Skip;
    NSkip  terms`i'o`j';
    Collect del;
    id del(?a)=1;
    id den(x?number_)=s12;
    Print terms`i'o`j';
    .sort
*    .sort
*    Skip
*    NSkip terms`i'o`j';
*    id pentagon1(?a)=1;
*    id num(?a)=1;
*    id den(x?number_)=s12;
    .sort
    Local instant1=instant2;
    DropCoefficient;
*    Print terms`i'o`j';
    .sort
    format mathematica;
    #write <denominators.m> "%E,",terms`i'o`j'
    .sort
    #enddo

#enddo
.end
