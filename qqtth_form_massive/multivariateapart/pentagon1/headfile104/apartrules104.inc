#if `rule1'==1
#write "calc module nr 1"
#do j=1,1
if (match(mh^4*mt^2*q1));
id mh^4*mt^2*q1 = 1 + 2*mh^2*mt^2*q1*s12 - mt^2*q1*s12^2 + mh^2*mt^2*q1*s34 - mt^4*q1*s34 - mh^2*q1*s12*s34 + mt^2*q1*s12*s34 + mh^2*q1*s34*s45 + 2*mt^2*q1*s34*s45 + q1*s12*s34*s45 - q1*s34^2*s45 - q1*s34*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
