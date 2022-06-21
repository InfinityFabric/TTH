#if `rule1'==1
#write "calc module nr 1"
#do j=1,1
if (match(q3*s23));
id q3*s23 = 1;
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
if (match(d*q1));
id d*q1 = 1 + 4*q1;
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
if (match(d*q2));
id d*q2 = 1 + 2*q2;
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
if (match(q1*q2));
id q1*q2 = q1/2 - q2/2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
