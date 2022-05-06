#if `rule1'==1
#write "calc module nr 1"
#do j=1,1
if (match(mt*q2));
id mt*q2 = 1;
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
if (match(d*q1));
id d*q1 = 1 + 3*q1;
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
if (match(mh*q3*q4));
id mh*q3*q4 = (q2*q3)/4 - (q2*q4)/4;
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
if (match(mh^2*q3));
id mh^2*q3 = 1 + 2*mh*mt*q3 - mt^2*q3 + q3*s45;
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
if (match(mh^2*q4));
id mh^2*q4 = 1 - 2*mh*mt*q4 - mt^2*q4 + q4*s45;
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
if (match(mt^2*q3*q4));
id mt^2*q3*q4 = q3/2 - (mh*q2*q3)/4 + q4/2 + (mh*q2*q4)/4 + q3*q4*s45;
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
if (match(q2*q3*q4*s45));
id q2*q3*q4*s45 = -(q2*q3)/2 + (mh*q2^2*q3)/4 - (q2*q4)/2 - (mh*q2^2*q4)/4 + mt*q3*q4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
