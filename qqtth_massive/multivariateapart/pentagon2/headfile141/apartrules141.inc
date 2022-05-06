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
if (match(q3*s24));
id q3*s24 = 1 + q3*s53;
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
if (match(mt^4*q3*q4*s53));
id mt^4*q3*q4*s53 = -q3 + mh^2*mt^2*q4 - mt^4*q4 - mt^2*q4*s24 - mh^2*q4*s31 + mt^2*q4*s31 + q4*s31*s53 + 2*mt^2*q3*q4*s31*s53 - q3*q4*s31^2*s53;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule5'==1
#write "calc module nr 5"
#do j=1,1
if (match(mh^2*mt^2*q4*s24));
id mh^2*mt^2*q4*s24 = 1 + mt^4*q4*s24 + mt^2*q4*s24^2 + mh^2*q4*s24*s31 - mt^2*q4*s24*s31 + mh^2*mt^2*q4*s53 - mt^2*q4*s24*s53 - mh^2*q4*s31*s53 - mt^2*q4*s31*s53 - q4*s24*s31*s53 + q4*s31^2*s53 + q4*s31*s53^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule6'==1
#write "calc module nr 6"
#do j=1,1
if (match(mh^2*q2*q4*s24^2));
id mh^2*q2*q4*s24^2 = q2 - mh^2*q4*s24 + mt^2*q4*s24 + 2*q4*s24^2 + 2*q2*q4*s24^3 - q4*s24*s31 + mh^2*q2*q4*s24*s31 - q2*q4*s24^2*s31 + mh^2*q4*s53 - q4*s24*s53 + mh^2*q2*q4*s24*s53 - q2*q4*s24^2*s53 - q4*s31*s53 - mh^2*q2*q4*s31*s53 - 2*q2*q4*s24*s31*s53 + q2*q4*s31^2*s53 + q2*q4*s31*s53^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule7'==1
#write "calc module nr 7"
#do j=1,1
if (match(q2*q3*q4*s31^2*s53));
id q2*q3*q4*s31^2*s53 = -(q2*q3) + mh^2*q4 - mt^2*q4 - 2*q4*s24 + mh^2*q2*q4*s24 - 2*q2*q4*s24^2 + q4*s31 - mh^2*q2*q4*s31 + q2*q4*s24*s31 - q4*s53 - mt^2*q3*q4*s53 - q2*q4*s24*s53 + 3*q2*q4*s31*s53 + 2*q3*q4*s31*s53 - q2*q4*s53^2 - q3*q4*s53^2 + 2*q2*q3*q4*s31*s53^2 - q2*q3*q4*s53^3;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
