#if `rule1'==1
#write "calc module nr 1"
#do j=1,1
if (match(mh^2*mt^2*q1*s24));
id mh^2*mt^2*q1*s24 = 1 + mt^4*q1*s24 + mt^2*q1*s24^2 + mh^2*q1*s24*s31 - mt^2*q1*s24*s31 + mh^2*mt^2*q1*s53 - mt^2*q1*s24*s53 - mh^2*q1*s31*s53 - mt^2*q1*s31*s53 - q1*s24*s31*s53 + q1*s31^2*s53 + q1*s31*s53^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
