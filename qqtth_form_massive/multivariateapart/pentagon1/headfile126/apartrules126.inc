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
if (match(mh^4*mt^2*q2));
id mh^4*mt^2*q2 = 1 + 2*mh^2*mt^2*q2*s12 - mt^2*q2*s12^2 + mh^2*mt^2*q2*s34 - mt^4*q2*s34 - mh^2*q2*s12*s34 + mt^2*q2*s12*s34 + mh^2*q2*s34*s45 + 2*mt^2*q2*s34*s45 + q2*s12*s34*s45 - q2*s34^2*s45 - q2*s34*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
