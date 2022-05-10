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
if (match(mt^2*q3*s31));
id mt^2*q3*s31 = 1 + q3*s12*s31 + q3*s31^2 + mt^2*q3*s45 - q3*s31*s45;
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
id mt^4*q4 = 1 + 2*mt^2*q4*s12 - q4*s12^2 + 2*mt^2*q4*s45 + 2*q4*s12*s45 - q4*s45^2;
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
if (match(mt^2*q3*q4*s12*s45));
id mt^2*q3*q4*s12*s45 = -(mt^2*q4) + q4*s12 + q3*s31 - q4*s31 - q3*q4*s31^3 - q3*s45 + 2*q4*s45 + q3*q4*s12^2*s45 + 3*q3*q4*s12*s31*s45 + 3*q3*q4*s31^2*s45 - 2*q3*q4*s12*s45^2 - 3*q3*q4*s31*s45^2 + q3*q4*s45^3;
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
if (match(q2*q3*q4*s31^3));
id q2*q3*q4*s31^3 = q4 - mt^2*q2*q4 + q2*q3*s31 - q2*q4*s31 - q2*q3*s45 + 2*q2*q4*s45 - mt^2*q3*q4*s45 + q3*q4*s12*s45 + 3*q3*q4*s31*s45 + 3*q2*q3*q4*s31^2*s45 - 2*q3*q4*s45^2 - 3*q2*q3*q4*s31*s45^2 + q2*q3*q4*s45^3;
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
if (match(q3*q4*s31^4));
id q3*q4*s31^4 = -(mt^2*q4*s31) + q4*s12*s31 + q3*s31^2 - q4*s31^2 + mt^2*q4*s45 - 2*q4*s12*s45 - 2*q3*s31*s45 + 3*q4*s31*s45 + 2*q3*q4*s12*s31^2*s45 + 4*q3*q4*s31^3*s45 + q3*s45^2 - 2*q4*s45^2 - q3*q4*s12^2*s45^2 - 4*q3*q4*s12*s31*s45^2 - 6*q3*q4*s31^2*s45^2 + 2*q3*q4*s12*s45^3 + 4*q3*q4*s31*s45^3 - q3*q4*s45^4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
