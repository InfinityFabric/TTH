#if `rule1'==1
#write "calc module nr 1"
#do j=1,1
if (match(d*q1));
id d*q1 = 1 + 4*q1;
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
if (match(q2*q4*s34));
id q2*q4*s34 = q2 - q4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule3'==1
#write "calc module nr 3"
#do j=1,1
if (match(q2*s23));
id q2*s23 = 1 + q2*s51;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule4'==1
#write "calc module nr 4"
#do j=1,1
if (match(q3*s34));
id q3*s34 = 1 + q3*s51;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule5'==1
#write "calc module nr 5"
#do j=1,1
if (match(q4*s23));
id q4*s23 = 1 - q4*s34 + q4*s51;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule6'==1
#write "calc module nr 6"
#do j=1,1
if (match(q2*q3*q4*s51));
id q2*q3*q4*s51 = q2*q3 - q2*q4 - q3*q4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
