#if `rule1'==1
#write "calc module nr 1"
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
#if `rule2'==1
#write "calc module nr 2"
#do j=1,1
if (match(q2*s12^2));
id q2*s12^2 = 1 - 2*q2*s12*s13 - q2*s13^2 + 4*q2*s14*s23 - 2*q2*s12*s24 - 2*q2*s13*s24 - q2*s24^2 - 2*q2*s12*s34 - 2*q2*s13*s34 - 2*q2*s24*s34 - q2*s34^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
