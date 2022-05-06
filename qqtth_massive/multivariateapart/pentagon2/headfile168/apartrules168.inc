#if `rule1'==1
#write "calc module nr 1"
#do j=1,1
if (match(mt*q3));
id mt*q3 = 1;
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
if (match(q4*s12));
id q4*s12 = 1;
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
if (match(d*q1));
id d*q1 = 1 + 4*q1;
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
if (match(d*q2));
id d*q2 = 1 + 3*q2;
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
if (match(q1*q2));
id q1*q2 = q1 - q2;
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
if (match(q6*q7));
id q6*q7 = -(q5*q6) + q5*q7;
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
if (match(mt^2*q5));
id mt^2*q5 = 1 + q5*s31;
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
if (match(q3*q5*s31));
id q3*q5*s31 = -q3 + mt*q5;
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
if (match(mt^2*q6));
id mt^2*q6 = 1 + q6*s45;
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
if (match(q3*q6*s45));
id q3*q6*s45 = -q3 + mt*q6;
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
if (match(q7*s31));
id q7*s31 = 1 + q7*s45;
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
if (match(q5*q6*s31));
id q5*q6*s31 = q5 - q6 + q5*q6*s45;
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
if (match(q3*q5*q7*s45));
id q3*q5*q7*s45 = -(q3*q5) - q3*q7 + mt*q5*q7;
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
if (match(q5*q8));
id q5*q8 = -(q3^2*q4*q5) + q3^2*q8 + q3^2*q4*q8*s31 - q3^2*q4*q8*s45;
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
if (match(q7*q8*s45));
id q7*q8*s45 = -(q4*q7) - q8 + mt^2*q4*q8 - q4*q8*s31;
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
if (match(q4*q6*q9));
id q4*q6*q9 = -(q3^2*q4^2*q6)/4 + (q3^2*q4*q9)/2 + (q4^2*q9)/4 + (q3^2*q6*q9)/4 - (q3^2*q4^2*q9*s45)/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule17'==1
#write "calc module nr 17"
#do j=1,1
if (match(q6*q9*s12));
id q6*q9*s12 = q4*q6 + 2*q9 - mt^2*q4*q9 + q4*q9*s45 + 4*q6*q9*s45;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule18'==1
#write "calc module nr 18"
#do j=1,1
if (match(mt^2*q8*s31));
id mt^2*q8*s31 = 1 + q8*s12*s31 + q8*s31^2 + mt^2*q8*s45 - q8*s31*s45;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule19'==1
#write "calc module nr 19"
#do j=1,1
if (match(q3*q8*s12*s31));
id q3*q8*s12*s31 = -q3 + mt*q8*s31 - q3*q8*s31^2 - mt*q8*s45 + q3*q8*s31*s45;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule20'==1
#write "calc module nr 20"
#do j=1,1
if (match(q3*q4*q8*s31^2));
id q3*q4*q8*s31^2 = -(q3*q4) - q3*q8*s31 + mt*q4*q8*s31 - mt*q4*q8*s45 + q3*q4*q8*s31*s45;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule21'==1
#write "calc module nr 21"
#do j=1,1
if (match(q6*q8*s12*s31));
id q6*q8*s12*s31 = -q6 + q8*s31 - q6*q8*s31^2 - q8*s45 + 2*q6*q8*s31*s45 - q6*q8*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule22'==1
#write "calc module nr 22"
#do j=1,1
if (match(q4*q6*q8*s31^2));
id q4*q6*q8*s31^2 = -(q4*q6) + q4*q8*s31 - q6*q8*s31 - q4*q8*s45 + 2*q4*q6*q8*s31*s45 - q4*q6*q8*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule23'==1
#write "calc module nr 23"
#do j=1,1
if (match(mt^4*q9));
id mt^4*q9 = 1 + 2*mt^2*q9*s12 - q9*s12^2 + 2*mt^2*q9*s45 + 2*q9*s12*s45 - q9*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule24'==1
#write "calc module nr 24"
#do j=1,1
if (match(q3*q9*s12^2));
id q3*q9*s12^2 = q3 - mt^3*q9 + 2*mt*q9*s12 + 2*mt*q9*s45 + 2*q3*q9*s12*s45 - q3*q9*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule25'==1
#write "calc module nr 25"
#do j=1,1
if (match(q3*q4*q9*s45^2));
id q3*q4*q9*s45^2 = q3*q4 + 2*mt*q9 - mt^3*q4*q9 - q3*q9*s12 + 2*q3*q9*s45 + 2*mt*q4*q9*s45;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule26'==1
#write "calc module nr 26"
#do j=1,1
if (match(q4*q5*q7*q9));
id q4*q5*q7*q9 = -(q3^2*q4^2*q5*q7)/4 + (q3^2*q4*q5*q9)/2 + (q4^2*q5*q9)/4 + (q3^2*q4*q7*q9)/2 + (q4^2*q7*q9)/4 + (q3^2*q5*q7*q9)/4 - (q3^2*q4^2*q5*q9*s45)/4 - (q3^2*q4^2*q7*q9*s45)/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule27'==1
#write "calc module nr 27"
#do j=1,1
if (match(q5*q7*q9*s12));
id q5*q7*q9*s12 = q4*q5*q7 - q4*q9 + 2*q5*q9 + 2*q7*q9 - mt^2*q4*q7*q9 - q4*q5*q9*s31 + q4*q5*q9*s45 + q4*q7*q9*s45 + 4*q5*q7*q9*s45;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule28'==1
#write "calc module nr 28"
#do j=1,1
if (match(q3*q8*q9*s31^3));
id q3*q8*q9*s31^3 = -(mt*q9) + q3*q9*s12 + q3*q8*s31 - q3*q9*s31 - q3*q9*s45 - mt^3*q8*q9*s45 + mt*q8*q9*s12*s45 + 3*mt*q8*q9*s31*s45 - mt*q8*q9*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule29'==1
#write "calc module nr 29"
#do j=1,1
if (match(q6*q8*q9*s31^2));
id q6*q8*q9*s31^2 = q4*q9 - q6*q9 - q4*q6*q8*s31 + q4*q8*q9*s31^2 - q8*q9*s45 + mt^2*q4*q8*q9*s45 - 2*q4*q8*q9*s31*s45 - 2*q6*q8*q9*s31*s45 - q6*q8*q9*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule30'==1
#write "calc module nr 30"
#do j=1,1
if (match(q5*q9*s12^2));
id q5*q9*s12^2 = q5 - mt^2*q9 + 2*q9*s12 - q9*s31 + 2*q5*q9*s12*s31 - q5*q9*s31^2 + 2*q9*s45 + 2*q5*q9*s12*s45 + 2*q5*q9*s31*s45 - q5*q9*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule31'==1
#write "calc module nr 31"
#do j=1,1
if (match(q4*q5*q9*s31^2));
id q4*q5*q9*s31^2 = q4*q5 + 2*q9 - mt^2*q4*q9 - q5*q9*s12 - q4*q9*s31 + 2*q5*q9*s31 + 2*q4*q9*s45 + 2*q5*q9*s45 + 2*q4*q5*q9*s31*s45 - q4*q5*q9*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule32'==1
#write "calc module nr 32"
#do j=1,1
if (match(q4*q7*q8*q9));
id q4*q7*q8*q9 = q3^4*q4*q7*q8 - 2*q3^4*q4*q7*q9 - 2*q3^2*q4^2*q7*q9 - 2*q3^4*q8*q9 + 2*q4^2*q8*q9 + 2*q3^2*q7*q8*q9 - q3^4*q7*q8*q9*s12 - 2*q3^4*q4*q8*q9*s31 - 2*q3^2*q4^2*q8*q9*s31 + q3^4*q4^2*q7*q9*s45 + q3^4*q4*q8*q9*s45 - q3^2*q4^2*q8*q9*s45 + q3^4*q4^2*q8*q9*s31*s45;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule33'==1
#write "calc module nr 33"
#do j=1,1
if (match(mt^2*q8*q9*s12*s45));
id mt^2*q8*q9*s12*s45 = -(mt^2*q9) + q9*s12 + q8*s31 - q9*s31 - q8*q9*s31^3 - q8*s45 + 2*q9*s45 + q8*q9*s12^2*s45 + 3*q8*q9*s12*s31*s45 + 3*q8*q9*s31^2*s45 - 2*q8*q9*s12*s45^2 - 3*q8*q9*s31*s45^2 + q8*q9*s45^3;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule34'==1
#write "calc module nr 34"
#do j=1,1
if (match(q4*q8*q9*s31^3));
id q4*q8*q9*s31^3 = q9 - mt^2*q4*q9 + q4*q8*s31 - q4*q9*s31 - q4*q8*s45 + 2*q4*q9*s45 - mt^2*q8*q9*s45 + q8*q9*s12*s45 + 3*q8*q9*s31*s45 + 3*q4*q8*q9*s31^2*s45 - 2*q8*q9*s45^2 - 3*q4*q8*q9*s31*s45^2 + q4*q8*q9*s45^3;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule35'==1
#write "calc module nr 35"
#do j=1,1
if (match(q8*q9*s31^4));
id q8*q9*s31^4 = -(mt^2*q9*s31) + q9*s12*s31 + q8*s31^2 - q9*s31^2 + mt^2*q9*s45 - 2*q9*s12*s45 - 2*q8*s31*s45 + 3*q9*s31*s45 + 2*q8*q9*s12*s31^2*s45 + 4*q8*q9*s31^3*s45 + q8*s45^2 - 2*q9*s45^2 - q8*q9*s12^2*s45^2 - 4*q8*q9*s12*s31*s45^2 - 6*q8*q9*s31^2*s45^2 + 2*q8*q9*s12*s45^3 + 4*q8*q9*s31*s45^3 - q8*q9*s45^4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
