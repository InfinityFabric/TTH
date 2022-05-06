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
if (match(mt^2*q3*s24));
id mt^2*q3*s24 = 1 + q3*s12*s24 + q3*s24^2 + mt^2*q3*s53 - q3*s24*s53;
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
if (match(mt^4*q4));
id mt^4*q4 = 1 + 2*mt^2*q4*s12 - q4*s12^2 + 2*mt^2*q4*s53 + 2*q4*s12*s53 - q4*s53^2;
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
if (match(mt^2*q3*q4*s12*s53));
id mt^2*q3*q4*s12*s53 = -(mt^2*q4) + q4*s12 + q3*s24 - q4*s24 - q3*q4*s24^3 - q3*s53 + 2*q4*s53 + q3*q4*s12^2*s53 + 3*q3*q4*s12*s24*s53 + 3*q3*q4*s24^2*s53 - 2*q3*q4*s12*s53^2 - 3*q3*q4*s24*s53^2 + q3*q4*s53^3;
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
if (match(q2*q3*q4*s24^3));
id q2*q3*q4*s24^3 = q4 - mt^2*q2*q4 + q2*q3*s24 - q2*q4*s24 - q2*q3*s53 + 2*q2*q4*s53 - mt^2*q3*q4*s53 + q3*q4*s12*s53 + 3*q3*q4*s24*s53 + 3*q2*q3*q4*s24^2*s53 - 2*q3*q4*s53^2 - 3*q2*q3*q4*s24*s53^2 + q2*q3*q4*s53^3;
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
if (match(q3*q4*s24^4));
id q3*q4*s24^4 = -(mt^2*q4*s24) + q4*s12*s24 + q3*s24^2 - q4*s24^2 + mt^2*q4*s53 - 2*q4*s12*s53 - 2*q3*s24*s53 + 3*q4*s24*s53 + 2*q3*q4*s12*s24^2*s53 + 4*q3*q4*s24^3*s53 + q3*s53^2 - 2*q4*s53^2 - q3*q4*s12^2*s53^2 - 4*q3*q4*s12*s24*s53^2 - 6*q3*q4*s24^2*s53^2 + 2*q3*q4*s12*s53^3 + 4*q3*q4*s24*s53^3 - q3*q4*s53^4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
