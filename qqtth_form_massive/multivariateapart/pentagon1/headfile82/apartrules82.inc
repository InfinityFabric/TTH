#if `rule1'==1
#write "calc module nr 1"
#do j=1,1
if (match(mh^4*q1));
id mh^4*q1 = 1 + 2*mh^2*q1*s12 - q1*s12^2 + 2*mh^2*q1*s34 + 2*q1*s12*s34 - q1*s34^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
