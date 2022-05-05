#if `rule1'==1
#write "calc module nr 1"
#do j=1,1
if (match(mh*mt*q1*q2));
id mh*mt*q1*q2 = q1/4 - q2/4;
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
if (match(mh^2*q1));
id mh^2*q1 = 1 + 2*mh*mt*q1 - mt^2*q1 + q1*s53;
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
if (match(mh^2*q2));
id mh^2*q2 = 1 - 2*mh*mt*q2 - mt^2*q2 + q2*s53;
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
if (match(mt^3*q1*q2));
id mt^3*q1*q2 = -(mh*q1)/4 + (mt*q1)/2 + (mh*q2)/4 + (mt*q2)/2 + mt*q1*q2*s53;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
