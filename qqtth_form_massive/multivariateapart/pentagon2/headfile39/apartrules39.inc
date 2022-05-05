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
if (match(mt^2*q2));
id mt^2*q2 = 1 + q2*s31;
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
if (match(q3*s31));
id q3*s31 = 1 + q3*s45;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
