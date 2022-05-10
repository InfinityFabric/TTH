#if `rule1'==1
#write "calc module nr 1"
#do j=1,1
if (match(mh^2*mt^4*q1));
id mh^2*mt^4*q1 = -1 + 2*mt^6*q1 + mh^4*q1*s12 - 2*mh^2*mt^2*q1*s12 - mt^4*q1*s12 + mh^2*q1*s12^2 + mh^2*mt^2*q1*s45 - mt^4*q1*s45 - mh^2*q1*s12*s45 + mt^2*q1*s12*s45 + mh^2*mt^2*q1*s53 - mt^4*q1*s53 - mh^2*q1*s12*s53 + mt^2*q1*s12*s53 - mh^2*q1*s45*s53 - 2*mt^2*q1*s45*s53 - q1*s12*s45*s53 + q1*s45^2*s53 + q1*s45*s53^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
