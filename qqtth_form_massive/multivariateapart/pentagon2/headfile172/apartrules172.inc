#if `rule1'==1
#write "calc module nr 1"
#do j=1,1
if (match(q2*s45));
id q2*s45 = 1;
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
id d*q1 = 1 + 2*q1;
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
if (match(mt^4*q3));
id mt^4*q3 = 1 + 2*mt^2*q3*s12 - q3*s12^2 + 2*mt^2*q3*s45 + 2*q3*s12*s45 - q3*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
