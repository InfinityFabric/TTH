#if `rule1'==1
#write "calc module nr 1"
#do j=1,1
if (match(d*q1));
id d*q1 = 1 + 4*q1;
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
if (match(mt^2*q2));
id mt^2*q2 = 1 + q2*s24;
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
if (match(q2*q3*s24*s31^2));
id q2*q3*s24*s31^2 = -q2 + mh^2*q3*s31 - mt^2*q3*s31 - q3*s31^2 - mh^2*q3*s45 + q3*s24*s45 + q3*s31*s45 + 2*q2*q3*s24*s31*s45 - q2*q3*s24*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule4'==1
#write "calc module nr 4"
#do j=1,1
if (match(mh^2*mt^2*q3*s31));
id mh^2*mt^2*q3*s31 = 1 + mt^4*q3*s31 + mh^2*q3*s24*s31 - mt^2*q3*s24*s31 + mt^2*q3*s31^2 + mh^2*mt^2*q3*s45 - mh^2*q3*s24*s45 - mt^2*q3*s24*s45 + q3*s24^2*s45 - mt^2*q3*s31*s45 - q3*s24*s31*s45 + q3*s24*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
