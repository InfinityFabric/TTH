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
id mt^2*q3 = 1 + q3*s45;
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
if (match(q4*s31));
id q4*s31 = 1 + q4*s45;
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
if (match(q4*q5*s45));
id q4*q5*s45 = -(q2*q4) - q5 + mt^2*q2*q5 - q2*q5*s31;
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
if (match(q3*q6*s12));
id q3*q6*s12 = q2*q3 + 2*q6 - mt^2*q2*q6 + q2*q6*s45 + 4*q3*q6*s45;
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
if (match(q2*q3*q6*s45));
id q2*q3*q6*s45 = -(q2^2*q3)/4 - (q2*q6)/2 + (mt^2*q2^2*q6)/4 + (q3*q6)/4 - (q2^2*q6*s45)/4;
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
if (match(mt^2*q5*s31));
id mt^2*q5*s31 = 1 + q5*s12*s31 + q5*s31^2 + mt^2*q5*s45 - q5*s31*s45;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule9'==1
#write "calc module nr 9"
#do j=1,1
if (match(q3*q5*s12*s31));
id q3*q5*s12*s31 = -q3 + q5*s31 - q3*q5*s31^2 - q5*s45 + 2*q3*q5*s31*s45 - q3*q5*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule10'==1
#write "calc module nr 10"
#do j=1,1
if (match(q2*q3*q5*s31^2));
id q2*q3*q5*s31^2 = -(q2*q3) + q2*q5*s31 - q3*q5*s31 - q2*q5*s45 + 2*q2*q3*q5*s31*s45 - q2*q3*q5*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule11'==1
#write "calc module nr 11"
#do j=1,1
if (match(mt^4*q6));
id mt^4*q6 = 1 + 2*mt^2*q6*s12 - q6*s12^2 + 2*mt^2*q6*s45 + 2*q6*s12*s45 - q6*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule12'==1
#write "calc module nr 12"
#do j=1,1
if (match(q3*q5*q6*s31^2));
id q3*q5*q6*s31^2 = q2*q6 - q3*q6 - q2*q3*q5*s31 + q2*q5*q6*s31^2 - q5*q6*s45 + mt^2*q2*q5*q6*s45 - 2*q2*q5*q6*s31*s45 - 2*q3*q5*q6*s31*s45 - q3*q5*q6*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule13'==1
#write "calc module nr 13"
#do j=1,1
if (match(q3*q4*q5*q6));
id q3*q4*q5*q6 = -(q2^3*q3*q5) + q2^2*q3*q4*q5 - q2^3*q4*q6 - 4*q2^2*q3*q4*q6 + q2^2*q5*q6 + 2*mt^2*q2^3*q5*q6 - 3*q2*q3*q5*q6 + 2*q2*q4*q5*q6 - mt^2*q2^2*q4*q5*q6 - q2^3*q5*q6*s31 - 4*q2^2*q3*q5*q6*s31 - q2^3*q5*q6*s45;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule14'==1
#write "calc module nr 14"
#do j=1,1
if (match(mt^2*q5*q6*s12*s45));
id mt^2*q5*q6*s12*s45 = -(mt^2*q6) + q6*s12 + q5*s31 - q6*s31 - q5*q6*s31^3 - q5*s45 + 2*q6*s45 + q5*q6*s12^2*s45 + 3*q5*q6*s12*s31*s45 + 3*q5*q6*s31^2*s45 - 2*q5*q6*s12*s45^2 - 3*q5*q6*s31*s45^2 + q5*q6*s45^3;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule15'==1
#write "calc module nr 15"
#do j=1,1
if (match(q2*q5*q6*s31^3));
id q2*q5*q6*s31^3 = q6 - mt^2*q2*q6 + q2*q5*s31 - q2*q6*s31 - q2*q5*s45 + 2*q2*q6*s45 - mt^2*q5*q6*s45 + q5*q6*s12*s45 + 3*q5*q6*s31*s45 + 3*q2*q5*q6*s31^2*s45 - 2*q5*q6*s45^2 - 3*q2*q5*q6*s31*s45^2 + q2*q5*q6*s45^3;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule16'==1
#write "calc module nr 16"
#do j=1,1
if (match(q5*q6*s31^4));
id q5*q6*s31^4 = -(mt^2*q6*s31) + q6*s12*s31 + q5*s31^2 - q6*s31^2 + mt^2*q6*s45 - 2*q6*s12*s45 - 2*q5*s31*s45 + 3*q6*s31*s45 + 2*q5*q6*s12*s31^2*s45 + 4*q5*q6*s31^3*s45 + q5*s45^2 - 2*q6*s45^2 - q5*q6*s12^2*s45^2 - 4*q5*q6*s12*s31*s45^2 - 6*q5*q6*s31^2*s45^2 + 2*q5*q6*s12*s45^3 + 4*q5*q6*s31*s45^3 - q5*q6*s45^4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
