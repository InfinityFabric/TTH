#if `rule1'==1
#write "calc module nr 1"
#do j=1,1
if (match(mh^2*mt^2*q1*s31));
id mh^2*mt^2*q1*s31 = 1 + mt^4*q1*s31 + mh^2*q1*s24*s31 - mt^2*q1*s24*s31 + mt^2*q1*s31^2 + mh^2*mt^2*q1*s45 - mh^2*q1*s24*s45 - mt^2*q1*s24*s45 + q1*s24^2*s45 - mt^2*q1*s31*s45 - q1*s24*s31*s45 + q1*s24*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
