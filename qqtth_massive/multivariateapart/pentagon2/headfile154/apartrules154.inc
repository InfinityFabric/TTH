#if `rule1'==1
#write "calc module nr 1"
#do j=1,1
if (match(q2*s12));
id q2*s12 = 1;
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
id d*q1 = 1 + 4*q1;
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
if (match(mt^2*q3));
id mt^2*q3 = 1 + q3*s53;
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
if (match(q4*s24));
id q4*s24 = 1 + q4*s53;
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
if (match(q4*q5*s53));
id q4*q5*s53 = -(q2*q4) - q5 + mt^2*q2*q5 - q2*q5*s24;
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
if (match(mt^2*q5*s24));
id mt^2*q5*s24 = 1 + q5*s12*s24 + q5*s24^2 + mt^2*q5*s53 - q5*s24*s53;
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
if (match(q3*q5*s12*s24));
id q3*q5*s12*s24 = -q3 + q5*s24 - q3*q5*s24^2 - q5*s53 + 2*q3*q5*s24*s53 - q3*q5*s53^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule8'==1
#write "calc module nr 8"
#do j=1,1
if (match(q2*q3*q5*s24^2));
id q2*q3*q5*s24^2 = -(q2*q3) + q2*q5*s24 - q3*q5*s24 - q2*q5*s53 + 2*q2*q3*q5*s24*s53 - q2*q3*q5*s53^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
