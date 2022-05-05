#if `rule1'==1
#write "calc module nr 1"
#do j=1,1
if (match(mt*q2));
id mt*q2 = 1;
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
if (match(mt^2*q3));
id mt^2*q3 = 1/4 + (q3*s34)/4;
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
if (match(q2*q3*s34));
id q2*q3*s34 = -q2 + 4*mt*q3;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
