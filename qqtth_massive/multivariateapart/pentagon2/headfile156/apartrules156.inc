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
if (match(mt^2*q2*s24));
id mt^2*q2*s24 = 1 + q2*s12*s24 + q2*s24^2 + mt^2*q2*s53 - q2*s24*s53;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif