#if `rule1'==1
#write "calc module nr 1"
#do j=1,1
if (match(mt^2*q1*s31));
id mt^2*q1*s31 = 1 + q1*s12*s31 + q1*s31^2 + mt^2*q1*s45 - q1*s31*s45;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
