#-
Symbol x,y,z,a;
CFunction pentagon1,num,den;
Symbol d,mt,mh,mu,s12,s23,s34,s45,s51;
Table tab(1:81);

Off statistics;

#include expr.h
#include kira_myintegrals.inc
#$total=81;

#$allterm3=0;
#$nu=0;
#do i=1,$total
    #$nterm`i'=termsin_(expr`i');
    .sort
    if ($nterm`i'==0);
    $nterm`i'=1;
    endif;
    .sort
    #$nu=$nu+$nterm`i';
    #message `$nterm`i''
#enddo
    #message `$nu'

#do i=1,$total
    Local instant1=expr`i';
    Local instant2=0;
    .sort
    #message `i' `$nterm`i''
    #do j=1,$nterm`i'
    
    #$allterm3=$allterm3+1;
    #$numb`i'o`j'=$allterm3;
    Local terms`i'o`j'=firstterm_(instant1);

    Local instant2=instant1-terms`i'o`j';
    #message `$allterm3' `$numb`i'o`j''
    .sort
    Skip;
    NSkip terms`i'o`j';
    id num(x?$x)=x;
    Print terms`i'o`j';
    .sort
    Local instant1=instant2;
    .sort
    #enddo

#enddo

#do i=1,$total
    #do j=1,$nterm`i'
        #include headfile`$numb`i'o`j''/apartreduce`$numb`i'o`j''.h
	.sort
	Skip;
	NSkip terms`i'o`j';

        #include headfile`$numb`i'o`j''/idrule_den_q_`$numb`i'o`j''.h
	Print;
	.sort
    #enddo
#enddo

#do i=1,$total
    #do j=1,$nterm`i'
        #call apartreduce`$numb`i'o`j''(terms`i'o`j')
	Print;
	.sort
	Skip;
	NSkip terms`i'o`j';

        #include headfile`$numb`i'o`j''/idrule_q_den_`$numb`i'o`j''.h
	Print;
	.sort
    #enddo
#enddo

#do i=1,$total
    Local terms`i'=
    #do j=1,$nterm`i'
        +terms`i'o`j'
    #enddo
    ;
#enddo

#do i=1,$total
Local exp`i'=tab(`i');
#enddo
.sort
#do i=1,$total
    Local in=`i';
    .sort
    #write <kira_rule.inc> "id %E=",exp`i'
    #write <kira_rule.inc> "%E;",terms`i'
    #write <kira_rule.inc> "\n"
#enddo

*#do i=1,$total
*    Local in=`i';
*    .sort
*    #write <kira_rule.inc> "id expr%E=",in
*    #do j=1,$nterm`i'
*    #write <kira_rule.inc> "%E",terms`i'o`j'
*    #write <kira_rule.inc> "\n"
*    .sort
*    #enddo
*#enddo
*#do i=1,$total
*    Local in=`i';
*    .sort
*    #write <kira_rule.inc> "id expr%E=",in
*    #do j=1,$nterm`i'
*    if (`j'!=`$nterm`i'');
*    #write <kira_rule.inc> "%E+\n",terms`i'o`j'
*    else;
*    #write <kira_rule.inc> "%E;\n",terms`i'o`j'
*    endif;
*    .sort
*    #enddo
*#enddo

.end
