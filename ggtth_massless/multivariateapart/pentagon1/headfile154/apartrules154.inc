#if `rule1'==1
#write "calc module nr 1"
#do j=1,1
if (match(d*q1));
id d*q1 = 1 + 3*q1;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule2'==1
#write "calc module nr 2"
#do j=1,1
if (match(q2*s12));
id q2*s12 = 1 + q2*s34 - q2*s51;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
