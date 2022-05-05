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
if (match(d*q2));
id d*q2 = 1 + 3*q2;
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
if (match(q1*q2));
id q1*q2 = q1 - q2;
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
if (match(mh*q5*q6));
id mh*q5*q6 = (q3*q5)/4 - (q3*q6)/4;
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
if (match(mt^2*q4));
id mt^2*q4 = 1/4 + (q4*s34)/4;
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
if (match(q3*q4*s34));
id q3*q4*s34 = -q3 + 4*mt*q4;
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
if (match(mh^2*q5));
id mh^2*q5 = 1 + 2*mh*mt*q5 - mt^2*q5 + q5*s45;
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
if (match(mh^2*q6));
id mh^2*q6 = 1 - 2*mh*mt*q6 - mt^2*q6 + q6*s45;
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
if (match(mt^2*q5*q6));
id mt^2*q5*q6 = q5/2 - (mh*q3*q5)/4 + q6/2 + (mh*q3*q6)/4 + q5*q6*s45;
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
if (match(q3*q5*q6*s45));
id q3*q5*q6*s45 = -(q3*q5)/2 + (mh*q3^2*q5)/4 - (q3*q6)/2 - (mh*q3^2*q6)/4 + mt*q5*q6;
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
if (match(q4*q5*q6*s34));
id q4*q5*q6*s34 = 2*q4*q5 - mh*q3*q4*q5 + 2*q4*q6 + mh*q3*q4*q6 - q5*q6 + 4*q4*q5*q6*s45;
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
if (match(mt^4*q7));
id mt^4*q7 = 1 + 2*mt^2*q7*s12 - q7*s12^2 + 2*mt^2*q7*s45 + 2*q7*s12*s45 - q7*s45^2;
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
if (match(q3*q7*s12^2));
id q3*q7*s12^2 = q3 - mt^3*q7 + 2*mt*q7*s12 + 2*mt*q7*s45 + 2*q3*q7*s12*s45 - q3*q7*s45^2;
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
if (match(q4*q7*s12^2));
id q4*q7*s12^2 = q4 - (mt^2*q7)/4 + (q7*s12)/2 - (q7*s34)/16 + (q4*q7*s12*s34)/2 - (q4*q7*s34^2)/16 + (q7*s45)/2 + 2*q4*q7*s12*s45 + (q4*q7*s34*s45)/2 - q4*q7*s45^2;
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
if (match(mh^4*mt^2*q8));
id mh^4*mt^2*q8 = 1 + 2*mh^2*mt^2*q8*s12 - mt^2*q8*s12^2 + mh^2*mt^2*q8*s34 - mt^4*q8*s34 - mh^2*q8*s12*s34 + mt^2*q8*s12*s34 + mh^2*q8*s34*s45 + 2*mt^2*q8*s34*s45 + q8*s12*s34*s45 - q8*s34^2*s45 - q8*s34*s45^2;
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
if (match(mh^2*q3*q8*s12*s34));
id mh^2*q3*q8*s12*s34 = q3 - mh^4*mt*q8 + 2*mh^2*mt*q8*s12 - mt*q8*s12^2 + mh^2*mt*q8*s34 - mt^3*q8*s34 + mt*q8*s12*s34 + 2*mt*q8*s34*s45 + mh^2*q3*q8*s34*s45 + q3*q8*s12*s34*s45 - q3*q8*s34^2*s45 - q3*q8*s34*s45^2;
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
if (match(q5*q6*q7*s12^2));
id q5*q6*q7*s12^2 = q5*q6 + (mh*mt*q5*q7)/4 - (mt^2*q5*q7)/2 - (mh*mt*q6*q7)/4 - (mt^2*q6*q7)/2 + q5*q7*s12 - (mh*q3*q5*q7*s12)/2 + q6*q7*s12 + (mh*q3*q6*q7*s12)/2 + (q5*q7*s45)/2 - (mh*q3*q5*q7*s45)/4 + (q6*q7*s45)/2 + (mh*q3*q6*q7*s45)/4 + 4*q5*q6*q7*s12*s45;
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
if (match(mh^4*q4*q8));
id mh^4*q4*q8 = q3^2*q4 + mh^2*q3^2*q8*s12 - 2*mh^2*q4*q8*s12 - q4*q8*s12^2 - (q8*s34)/4 + mh^2*q4*q8*s34 + q4*q8*s12*s34 - (q4*q8*s34^2)/4 - mh^2*q3^2*q8*s45 + 4*mh^2*q4*q8*s45 - q3^2*q8*s12*s45 + 4*q4*q8*s12*s45 + q3^2*q8*s34*s45 - 2*q4*q8*s34*s45 + q3^2*q8*s45^2 - 4*q4*q8*s45^2;
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
if (match(q3*q7*q8*s12*s34^2*s45));
id q3*q7*q8*s12*s34^2*s45 = q3*q7*s12 - mh^4*mt*q7*q8*s12 + 2*mh^2*mt*q7*q8*s12^2 - mt*q7*q8*s12^3 - mh^2*q3*q8*s34 + mh^2*mt^3*q7*q8*s34 - mh^2*mt*q7*q8*s12*s34 - mt^3*q7*q8*s12*s34 + mt*q7*q8*s12^2*s34 - q3*q7*s45 + mh^4*mt*q7*q8*s45 - 2*mh^2*mt*q7*q8*s12*s45 + mt*q7*q8*s12^2*s45 + q3*q8*s34*s45 - 3*mh^2*mt*q7*q8*s34*s45 + 3*mt*q7*q8*s12*s34*s45 + q3*q7*q8*s34^2*s45^2;
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
if (match(q3*q5*q8*s34^2*s45));
id q3*q5*q8*s34^2*s45 = q3*q5 - mh^2*mt*q8 - 2*mh*mt^2*q8 - 3*mt^3*q8 - 4*mh*mt^4*q5*q8 + 3*mt^5*q5*q8 + 2*mt*q8*s12 + 4*mh*mt^2*q5*q8*s12 - 2*mt^3*q5*q8*s12 - mt*q5*q8*s12^2 + mt*q8*s34 + 2*mh*mt^2*q5*q8*s34 - 2*mt^3*q5*q8*s34 - q3*q8*s12*s34 - 2*mh*q5*q8*s12*s34 + 2*mt*q5*q8*s12*s34 - mt*q8*s45 - 4*mh*mt^2*q5*q8*s45 - 2*mt^3*q5*q8*s45 + 2*mt*q5*q8*s12*s45 + q3*q8*s34*s45 + 2*mh*q5*q8*s34*s45 + 2*mt*q5*q8*s34*s45 - mt*q5*q8*s45^2;
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
if (match(mh*mt^5*q5*q8));
id mh*mt^5*q5*q8 = q5/4 - (mh^2*mt^2*q8)/4 - (mh*mt^3*q8)/2 - (3*mt^4*q8)/4 + (3*mt^6*q5*q8)/4 + (mt^2*q8*s12)/2 + mh*mt^3*q5*q8*s12 - (mt^4*q5*q8*s12)/2 - (mt^2*q5*q8*s12^2)/4 + (mt^2*q8*s34)/4 + (mh*mt^3*q5*q8*s34)/2 - (mt^4*q5*q8*s34)/2 - (q8*s12*s34)/4 - (mh*mt*q5*q8*s12*s34)/2 + (mt^2*q5*q8*s12*s34)/2 - (mt^2*q8*s45)/4 - mh*mt^3*q5*q8*s45 - (mt^4*q5*q8*s45)/2 + (mt^2*q5*q8*s12*s45)/2 + (q8*s34*s45)/4 + (mh*mt*q5*q8*s34*s45)/2 + (mt^2*q5*q8*s34*s45)/2 - (q5*q8*s34^2*s45)/4 - (mt^2*q5*q8*s45^2)/4;
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
if (match(q3*q4*q5*q8*s12^2));
id q3*q4*q5*q8*s12^2 = q3^3*q4*q5 - q3*q8 - 2*mh*q4*q8 + mt*q4*q8 - mh^2*q3*q4*q8 - mh*q5*q8 + (3*mt*q5*q8)/4 + q3^3*q8*s12 - 2*q3*q4*q8*s12 - 2*q3*q5*q8*s12 + 2*mh*q3^2*q5*q8*s12 - 4*mh*q4*q5*q8*s12 + 6*mt*q4*q5*q8*s12 + mh*q4*q5*q8*s34 - (5*mt*q4*q5*q8*s34)/4 - q3^3*q8*s45 + 3*q3*q4*q8*s45 + 2*q3*q5*q8*s45 - 2*mh*q3^2*q5*q8*s45 + 4*mh*q4*q5*q8*s45 - 10*mt*q4*q5*q8*s45 + 2*q3*q4*q5*q8*s12*s45 + q3^3*q5*q8*s34*s45 - q3*q4*q5*q8*s45^2;
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
if (match(q3*q6*q8*s34^2*s45));
id q3*q6*q8*s34^2*s45 = q3*q6 - mh^2*mt*q8 + 2*mh*mt^2*q8 - 3*mt^3*q8 + 4*mh*mt^4*q6*q8 + 3*mt^5*q6*q8 + 2*mt*q8*s12 - 4*mh*mt^2*q6*q8*s12 - 2*mt^3*q6*q8*s12 - mt*q6*q8*s12^2 + mt*q8*s34 - 2*mh*mt^2*q6*q8*s34 - 2*mt^3*q6*q8*s34 - q3*q8*s12*s34 + 2*mh*q6*q8*s12*s34 + 2*mt*q6*q8*s12*s34 - mt*q8*s45 + 4*mh*mt^2*q6*q8*s45 - 2*mt^3*q6*q8*s45 + 2*mt*q6*q8*s12*s45 + q3*q8*s34*s45 - 2*mh*q6*q8*s34*s45 + 2*mt*q6*q8*s34*s45 - mt*q6*q8*s45^2;
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
if (match(mh*mt^5*q6*q8));
id mh*mt^5*q6*q8 = -q6/4 + (mh^2*mt^2*q8)/4 - (mh*mt^3*q8)/2 + (3*mt^4*q8)/4 - (3*mt^6*q6*q8)/4 - (mt^2*q8*s12)/2 + mh*mt^3*q6*q8*s12 + (mt^4*q6*q8*s12)/2 + (mt^2*q6*q8*s12^2)/4 - (mt^2*q8*s34)/4 + (mh*mt^3*q6*q8*s34)/2 + (mt^4*q6*q8*s34)/2 + (q8*s12*s34)/4 - (mh*mt*q6*q8*s12*s34)/2 - (mt^2*q6*q8*s12*s34)/2 + (mt^2*q8*s45)/4 - mh*mt^3*q6*q8*s45 + (mt^4*q6*q8*s45)/2 - (mt^2*q6*q8*s12*s45)/2 - (q8*s34*s45)/4 + (mh*mt*q6*q8*s34*s45)/2 - (mt^2*q6*q8*s34*s45)/2 + (q6*q8*s34^2*s45)/4 + (mt^2*q6*q8*s45^2)/4;
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
if (match(q3*q4*q6*q8*s12^2));
id q3*q4*q6*q8*s12^2 = q3^3*q4*q6 - q3*q8 + 2*mh*q4*q8 + mt*q4*q8 - mh^2*q3*q4*q8 + mh*q6*q8 + (3*mt*q6*q8)/4 + q3^3*q8*s12 - 2*q3*q4*q8*s12 - 2*q3*q6*q8*s12 - 2*mh*q3^2*q6*q8*s12 + 4*mh*q4*q6*q8*s12 + 6*mt*q4*q6*q8*s12 - mh*q4*q6*q8*s34 - (5*mt*q4*q6*q8*s34)/4 - q3^3*q8*s45 + 3*q3*q4*q8*s45 + 2*q3*q6*q8*s45 + 2*mh*q3^2*q6*q8*s45 - 4*mh*q4*q6*q8*s45 - 10*mt*q4*q6*q8*s45 + 2*q3*q4*q6*q8*s12*s45 + q3^3*q6*q8*s34*s45 - q3*q4*q6*q8*s45^2;
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
if (match(q5*q6*q7*q8*s12));
id q5*q6*q7*q8*s12 = -(mh*q3^3*q4^2*q5*q7)/4 + (mh*q3^3*q4^2*q6*q7)/4 + (q3^2*q4*q5*q8)/2 + q4^2*q5*q8 - (3*mh*q3*q4^2*q5*q8)/4 + (q3^2*q4*q6*q8)/2 + q4^2*q6*q8 + (3*mh*q3*q4^2*q6*q8)/4 - 2*q4*q5*q6*q8 + (q4*q7*q8)/2 + mh^2*q4^2*q7*q8 + q3^2*q4^2*q5*q6*q7*s12 - q4^2*q5*q6*q8*s12 - q3^2*q4*q7*q8*s12 + q4^2*q7*q8*s12 + (q3^2*q5*q7*q8*s12)/2 - (mh*q3^3*q5*q7*q8*s12)/4 + (q3^2*q6*q7*q8*s12)/2 + (mh*q3^3*q6*q7*q8*s12)/4 - (q4^2*q7*q8*s34)/2 + 4*q4^2*q5*q6*q8*s45 + q3^2*q4*q7*q8*s45 - 2*q4^2*q7*q8*s45 + (mh*q3^3*q5*q7*q8*s45)/4 - (mh*q3^3*q6*q7*q8*s45)/4;
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
if (match(mh*mt*q4*q5*q8*s12));
id mh*mt*q4*q5*q8*s12 = (q3^2*q4*q5)/4 - (3*q8)/16 - (mh^2*q4*q8)/4 - (mh*mt*q4*q8)/2 - (mh*mt*q5*q8)/4 + (3*mt^2*q5*q8)/16 + (q3^2*q8*s12)/4 - (q4*q8*s12)/2 - (q5*q8*s12)/8 + (mh*q3*q5*q8*s12)/2 - (q4*q5*q8*s12^2)/4 + (q4*q8*s34)/16 - (5*q5*q8*s34)/64 + (mh*mt*q4*q5*q8*s34)/4 + (3*q4*q5*q8*s12*s34)/8 - (5*q4*q5*q8*s34^2)/64 - (q3^2*q8*s45)/4 + (3*q4*q8*s45)/4 - (q5*q8*s45)/8 - (mh*q3*q5*q8*s45)/2 + mh*mt*q4*q5*q8*s45 + (q4*q5*q8*s12*s45)/2 + (q3^2*q5*q8*s34*s45)/4 - (5*q4*q5*q8*s34*s45)/8 - (q4*q5*q8*s45^2)/4;
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
if (match(mh*mt*q4*q6*q8*s12));
id mh*mt*q4*q6*q8*s12 = -(q3^2*q4*q6)/4 + (3*q8)/16 + (mh^2*q4*q8)/4 - (mh*mt*q4*q8)/2 - (mh*mt*q6*q8)/4 - (3*mt^2*q6*q8)/16 - (q3^2*q8*s12)/4 + (q4*q8*s12)/2 + (q6*q8*s12)/8 + (mh*q3*q6*q8*s12)/2 + (q4*q6*q8*s12^2)/4 - (q4*q8*s34)/16 + (5*q6*q8*s34)/64 + (mh*mt*q4*q6*q8*s34)/4 - (3*q4*q6*q8*s12*s34)/8 + (5*q4*q6*q8*s34^2)/64 + (q3^2*q8*s45)/4 - (3*q4*q8*s45)/4 + (q6*q8*s45)/8 - (mh*q3*q6*q8*s45)/2 + mh*mt*q4*q6*q8*s45 - (q4*q6*q8*s12*s45)/2 - (q3^2*q6*q8*s34*s45)/4 + (5*q4*q6*q8*s34*s45)/8 + (q4*q6*q8*s45^2)/4;
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
if (match(q5*q6*q8*s12^2));
id q5*q6*q8*s12^2 = q3^2*q5*q6 - q8 - (3*mh*mt*q5*q8)/4 + (mt^2*q5*q8)/2 + (3*mh*mt*q6*q8)/4 + (mt^2*q6*q8)/2 + (mh*q3*q5*q8*s12)/2 - (mh*q3*q6*q8*s12)/2 - (q5*q8*s34)/2 + (mh*q3*q5*q8*s34)/2 - (q6*q8*s34)/2 - (mh*q3*q6*q8*s34)/2 - (q3^2*q5*q8*s12*s34)/2 - (q3^2*q6*q8*s12*s34)/2 + 2*q5*q6*q8*s12*s34 + (q3^2*q5*q8*s34^2)/2 - (mh*q3^3*q5*q8*s34^2)/4 + (q3^2*q6*q8*s34^2)/2 + (mh*q3^3*q6*q8*s34^2)/4 - q5*q6*q8*s34^2 - (q5*q8*s45)/2 - (mh*q3*q5*q8*s45)/4 - (q6*q8*s45)/2 + (mh*q3*q6*q8*s45)/4 + (q3^2*q5*q8*s34*s45)/2 + (q3^2*q6*q8*s34*s45)/2;
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
if (match(mt*q4*q5*q8*s12^2));
id mt*q4*q5*q8*s12^2 = q3*q4*q5 - (mh*q8)/2 - (3*mt*q8)/4 - mh^2*mt*q4*q8 - mh*mt^2*q5*q8 + (3*mt^3*q5*q8)/4 + q3*q8*s12 - 2*mt*q4*q8*s12 + mh*q5*q8*s12 - (mt*q5*q8*s12)/2 - (mh*q4*q8*s34)/2 + (mt*q4*q8*s34)/4 + (mh*q5*q8*s34)/4 - (5*mt*q5*q8*s34)/16 - mh*q4*q5*q8*s12*s34 + (3*mt*q4*q5*q8*s12*s34)/2 + (mh*q4*q5*q8*s34^2)/4 - (5*mt*q4*q5*q8*s34^2)/16 - q3*q8*s45 + 3*mt*q4*q8*s45 - mh*q5*q8*s45 - (mt*q5*q8*s45)/2 + 2*mt*q4*q5*q8*s12*s45 + q3*q5*q8*s34*s45 + mh*q4*q5*q8*s34*s45 - (5*mt*q4*q5*q8*s34*s45)/2 - mt*q4*q5*q8*s45^2;
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
if (match(mt*q4*q6*q8*s12^2));
id mt*q4*q6*q8*s12^2 = q3*q4*q6 + (mh*q8)/2 - (3*mt*q8)/4 - mh^2*mt*q4*q8 + mh*mt^2*q6*q8 + (3*mt^3*q6*q8)/4 + q3*q8*s12 - 2*mt*q4*q8*s12 - mh*q6*q8*s12 - (mt*q6*q8*s12)/2 + (mh*q4*q8*s34)/2 + (mt*q4*q8*s34)/4 - (mh*q6*q8*s34)/4 - (5*mt*q6*q8*s34)/16 + mh*q4*q6*q8*s12*s34 + (3*mt*q4*q6*q8*s12*s34)/2 - (mh*q4*q6*q8*s34^2)/4 - (5*mt*q4*q6*q8*s34^2)/16 - q3*q8*s45 + 3*mt*q4*q8*s45 + mh*q6*q8*s45 - (mt*q6*q8*s45)/2 + 2*mt*q4*q6*q8*s12*s45 + q3*q6*q8*s34*s45 - mh*q4*q6*q8*s34*s45 - (5*mt*q4*q6*q8*s34*s45)/2 - mt*q4*q6*q8*s45^2;
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
if (match(mh^4*q7*q8*s12^2));
id mh^4*q7*q8*s12^2 = -(mt^2*q7) + mh^4*q8 + 2*q7*s12 - 2*mh^2*q8*s12 + q8*s12^2 + 2*mh^2*q7*q8*s12^3 - q7*q8*s12^4 - mh^2*q8*s34 + mt^2*q8*s34 - q8*s12*s34 + mh^2*mt^2*q7*q8*s12*s34 - mh^2*q7*q8*s12^2*s34 - mt^2*q7*q8*s12^2*s34 + q7*q8*s12^3*s34 + 2*q7*s45 + 2*mh^4*q7*q8*s12*s45 - 4*mh^2*q7*q8*s12^2*s45 + 2*q7*q8*s12^3*s45 - 2*q8*s34*s45 - mh^2*mt^2*q7*q8*s34*s45 - 2*mh^2*q7*q8*s12*s34*s45 + mt^2*q7*q8*s12*s34*s45 + 2*q7*q8*s12^2*s34*s45 + mt^2*q7*q8*s34^2*s45 - 2*q7*q8*s12*s34^2*s45 - mh^4*q7*q8*s45^2 + 2*mh^2*q7*q8*s12*s45^2 - q7*q8*s12^2*s45^2 + 3*mh^2*q7*q8*s34*s45^2 - 3*q7*q8*s12*s34*s45^2 - 2*q7*q8*s34^2*s45^2;
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
if (match(mh*q4*q5*q8*s12^2));
id mh*q4*q5*q8*s12^2 = mh*q3^2*q4*q5 - (3*mh*q8)/4 - mt*q8 - mh^3*q4*q8 - 2*mh^2*mt*q4*q8 - (5*mh*mt^2*q5*q8)/4 + mt^3*q5*q8 + 2*q3*q8*s12 + mh*q3^2*q8*s12 - 2*mh*q4*q8*s12 - 4*mt*q4*q8*s12 + (3*mh*q5*q8*s12)/2 - mt*q5*q8*s12 + (mh*q4*q8*s34)/4 + mt*q4*q8*s34 + (3*mh*q5*q8*s34)/16 - (mt*q5*q8*s34)/4 - (mh*q4*q5*q8*s12*s34)/2 + mt*q4*q5*q8*s12*s34 + (3*mh*q4*q5*q8*s34^2)/16 - (mt*q4*q5*q8*s34^2)/4 - 2*q3*q8*s45 - mh*q3^2*q8*s45 + 3*mh*q4*q8*s45 + 4*mt*q4*q8*s45 - (5*mh*q5*q8*s45)/2 + 2*q3*q5*q8*s12*s45 + 2*mh*q4*q5*q8*s12*s45 - 4*mt*q4*q5*q8*s12*s45 + mh*q3^2*q5*q8*s34*s45 - (mh*q4*q5*q8*s34*s45)/2 - 2*q3*q5*q8*s45^2 - mh*q4*q5*q8*s45^2 + 4*mt*q4*q5*q8*s45^2;
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
if (match(mh*q4*q6*q8*s12^2));
id mh*q4*q6*q8*s12^2 = mh*q3^2*q4*q6 - (3*mh*q8)/4 + mt*q8 - mh^3*q4*q8 + 2*mh^2*mt*q4*q8 - (5*mh*mt^2*q6*q8)/4 - mt^3*q6*q8 - 2*q3*q8*s12 + mh*q3^2*q8*s12 - 2*mh*q4*q8*s12 + 4*mt*q4*q8*s12 + (3*mh*q6*q8*s12)/2 + mt*q6*q8*s12 + (mh*q4*q8*s34)/4 - mt*q4*q8*s34 + (3*mh*q6*q8*s34)/16 + (mt*q6*q8*s34)/4 - (mh*q4*q6*q8*s12*s34)/2 - mt*q4*q6*q8*s12*s34 + (3*mh*q4*q6*q8*s34^2)/16 + (mt*q4*q6*q8*s34^2)/4 + 2*q3*q8*s45 - mh*q3^2*q8*s45 + 3*mh*q4*q8*s45 - 4*mt*q4*q8*s45 - (5*mh*q6*q8*s45)/2 - 2*q3*q6*q8*s12*s45 + 2*mh*q4*q6*q8*s12*s45 + 4*mt*q4*q6*q8*s12*s45 + mh*q3^2*q6*q8*s34*s45 - (mh*q4*q6*q8*s34*s45)/2 + 2*q3*q6*q8*s45^2 - mh*q4*q6*q8*s45^2 - 4*mt*q4*q6*q8*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule36'==1
#write "calc module nr 36"
#do j=1,1
if (match(q3*q5*q7*q8*s12*s45));
id q3*q5*q7*q8*s12*s45 = -2*mh*q4^2*q5*q7 + mt*q4^2*q5*q7 + q3*q4*q8 - 2*mt*q4^2*q8 + (3*mh*q4*q5*q8)/2 - (5*mt*q4*q5*q8)/4 + (mh*q7*q8)/4 + (3*mt*q7*q8)/16 + (mh^3*q4*q7*q8)/2 + (3*mh^2*mt*q4*q7*q8)/4 + q3*q4^2*q5*q7*s12 - mt*q4^2*q5*q8*s12 - (3*mh*q4*q7*q8*s12)/2 - (5*mt*q4*q7*q8*s12)/4 - mh^2*mt*q4^2*q7*q8*s12 - (mh*q4^2*q5*q8*s34)/2 + (3*mt*q4^2*q5*q8*s34)/4 - (mt*q4*q7*q8*s34)/8 + (mh^3*q4^2*q7*q8*s34)/2 + (3*mh^2*mt*q4^2*q7*q8*s34)/4 + (mh*q4^2*q7*q8*s12*s34)/2 + (3*mt*q4^2*q7*q8*s12*s34)/4 - (mh*q4^2*q7*q8*s34^2)/4 - (5*mt*q4^2*q7*q8*s34^2)/16 - q3*q4^2*q5*q7*s45 + mt*q4^2*q5*q8*s45 + mh*q4*q7*q8*s45 + (7*mt*q4*q7*q8*s45)/2 + mh^2*mt*q4^2*q7*q8*s45 + 2*mh*q5*q7*q8*s45 - mt*q5*q7*q8*s45 + mt*q4^2*q7*q8*s12*s45 - mh*q4^2*q7*q8*s34*s45 - (5*mt*q4^2*q7*q8*s34*s45)/2 - mt*q4^2*q7*q8*s45^2 + q3*q5*q7*q8*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule37'==1
#write "calc module nr 37"
#do j=1,1
if (match(q3*q6*q7*q8*s12*s45));
id q3*q6*q7*q8*s12*s45 = 2*mh*q4^2*q6*q7 + mt*q4^2*q6*q7 + q3*q4*q8 - 2*mt*q4^2*q8 - (3*mh*q4*q6*q8)/2 - (5*mt*q4*q6*q8)/4 - (mh*q7*q8)/4 + (3*mt*q7*q8)/16 - (mh^3*q4*q7*q8)/2 + (3*mh^2*mt*q4*q7*q8)/4 + q3*q4^2*q6*q7*s12 - mt*q4^2*q6*q8*s12 + (3*mh*q4*q7*q8*s12)/2 - (5*mt*q4*q7*q8*s12)/4 - mh^2*mt*q4^2*q7*q8*s12 + (mh*q4^2*q6*q8*s34)/2 + (3*mt*q4^2*q6*q8*s34)/4 - (mt*q4*q7*q8*s34)/8 - (mh^3*q4^2*q7*q8*s34)/2 + (3*mh^2*mt*q4^2*q7*q8*s34)/4 - (mh*q4^2*q7*q8*s12*s34)/2 + (3*mt*q4^2*q7*q8*s12*s34)/4 + (mh*q4^2*q7*q8*s34^2)/4 - (5*mt*q4^2*q7*q8*s34^2)/16 - q3*q4^2*q6*q7*s45 + mt*q4^2*q6*q8*s45 - mh*q4*q7*q8*s45 + (7*mt*q4*q7*q8*s45)/2 + mh^2*mt*q4^2*q7*q8*s45 - 2*mh*q6*q7*q8*s45 - mt*q6*q7*q8*s45 + mt*q4^2*q7*q8*s12*s45 + mh*q4^2*q7*q8*s34*s45 - (5*mt*q4^2*q7*q8*s34*s45)/2 - mt*q4^2*q7*q8*s45^2 + q3*q6*q7*q8*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule38'==1
#write "calc module nr 38"
#do j=1,1
if (match(mt^7*q5*q8));
id mt^7*q5*q8 = -4*mh*q5 + 5*mt*q5 + 4*mh^3*mt^2*q8 + 3*mh^2*mt^3*q8 + 2*mh*mt^4*q8 + mt^5*q8 - 8*mh*mt^2*q8*s12 - 6*mt^3*q8*s12 - 4*mh*mt^4*q5*q8*s12 + 6*mt^5*q5*q8*s12 + 4*mh*mt^2*q5*q8*s12^2 - 5*mt^3*q5*q8*s12^2 - 4*mh*mt^2*q8*s34 - 3*mt^3*q8*s34 + 2*mh*mt^4*q5*q8*s34 - 2*mt^5*q5*q8*s34 + 4*mh*q8*s12*s34 + 3*mt*q8*s12*s34 - 2*mh*mt^2*q5*q8*s12*s34 + 2*mt^3*q5*q8*s12*s34 + 4*mh*mt^2*q8*s45 + 11*mt^3*q8*s45 + 20*mh*mt^4*q5*q8*s45 - 10*mt^5*q5*q8*s45 - 8*mh*mt^2*q5*q8*s12*s45 - 6*mt^3*q5*q8*s12*s45 - 4*mh*q8*s34*s45 - 3*mt*q8*s34*s45 - 14*mh*mt^2*q5*q8*s34*s45 + 10*mt^3*q5*q8*s34*s45 + 8*mt*q5*q8*s12*s34*s45 + 4*mh*q5*q8*s34^2*s45 - 5*mt*q5*q8*s34^2*s45 + 4*mh*mt^2*q5*q8*s45^2 + 11*mt^3*q5*q8*s45^2 - 8*mt*q5*q8*s34*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule39'==1
#write "calc module nr 39"
#do j=1,1
if (match(mt^7*q6*q8));
id mt^7*q6*q8 = 4*mh*q6 + 5*mt*q6 - 4*mh^3*mt^2*q8 + 3*mh^2*mt^3*q8 - 2*mh*mt^4*q8 + mt^5*q8 + 8*mh*mt^2*q8*s12 - 6*mt^3*q8*s12 + 4*mh*mt^4*q6*q8*s12 + 6*mt^5*q6*q8*s12 - 4*mh*mt^2*q6*q8*s12^2 - 5*mt^3*q6*q8*s12^2 + 4*mh*mt^2*q8*s34 - 3*mt^3*q8*s34 - 2*mh*mt^4*q6*q8*s34 - 2*mt^5*q6*q8*s34 - 4*mh*q8*s12*s34 + 3*mt*q8*s12*s34 + 2*mh*mt^2*q6*q8*s12*s34 + 2*mt^3*q6*q8*s12*s34 - 4*mh*mt^2*q8*s45 + 11*mt^3*q8*s45 - 20*mh*mt^4*q6*q8*s45 - 10*mt^5*q6*q8*s45 + 8*mh*mt^2*q6*q8*s12*s45 - 6*mt^3*q6*q8*s12*s45 + 4*mh*q8*s34*s45 - 3*mt*q8*s34*s45 + 14*mh*mt^2*q6*q8*s34*s45 + 10*mt^3*q6*q8*s34*s45 + 8*mt*q6*q8*s12*s34*s45 - 4*mh*q6*q8*s34^2*s45 - 5*mt*q6*q8*s34^2*s45 - 4*mh*mt^2*q6*q8*s45^2 + 11*mt^3*q6*q8*s45^2 - 8*mt*q6*q8*s34*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule40'==1
#write "calc module nr 40"
#do j=1,1
if (match(mh*mt*q5*q7*q8*s45));
id mh*mt*q5*q7*q8*s45 = -(q4*q5*q7)/8 + mh*mt*q4^2*q5*q7 - (q4*q8)/4 + (5*q5*q8)/32 - (3*mh*mt*q4*q5*q8)/4 - (3*mh^2*q7*q8)/32 - (mh*mt*q7*q8)/8 - (3*mt^2*q7*q8)/32 - (mh^3*mt*q4*q7*q8)/4 - (q4^2*q5*q7*s12)/2 + (q4*q5*q8*s12)/8 + (5*q7*q8*s12)/32 + (mh^2*q4*q7*q8*s12)/8 + (3*mh*mt*q4*q7*q8*s12)/4 - (q4^2*q5*q7*s34)/8 + (q4^2*q8*s34)/4 + (q4*q5*q8*s34)/16 + (mh*mt*q4^2*q5*q8*s34)/4 + (q7*q8*s34)/64 - (3*mh^2*q4*q7*q8*s34)/16 - (mh^3*mt*q4^2*q7*q8*s34)/4 + (q4^2*q5*q8*s12*s34)/8 + (q4*q7*q8*s12*s34)/16 + (mh^2*q4^2*q7*q8*s12*s34)/8 - (mh*mt*q4^2*q7*q8*s12*s34)/4 - (3*q4^2*q5*q8*s34^2)/32 + (7*q4*q7*q8*s34^2)/128 - (3*mh^2*q4^2*q7*q8*s34^2)/32 + (mh*mt*q4^2*q7*q8*s34^2)/8 - (3*q4^2*q7*q8*s12*s34^2)/32 + (5*q4^2*q7*q8*s34^3)/128 + (q4^2*q5*q7*s45)/2 - (q4*q5*q8*s45)/8 - (7*q7*q8*s45)/16 - (mh^2*q4*q7*q8*s45)/8 - (mh*mt*q4*q7*q8*s45)/2 + (mt^2*q5*q7*q8*s45)/2 - (q4*q7*q8*s12*s45)/8 + (q5*q7*q8*s12*s45)/2 - (q4^2*q5*q8*s34*s45)/8 - (q4*q7*q8*s34*s45)/8 - (mh^2*q4^2*q7*q8*s34*s45)/8 + (mh*mt*q4^2*q7*q8*s34*s45)/2 - (q4^2*q7*q8*s12*s34*s45)/8 + (5*q4^2*q7*q8*s34^2*s45)/16 + (q4*q7*q8*s45^2)/8 - (q5*q7*q8*s45^2)/2 + (q4^2*q7*q8*s34*s45^2)/8;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule41'==1
#write "calc module nr 41"
#do j=1,1
if (match(mh*mt*q6*q7*q8*s45));
id mh*mt*q6*q7*q8*s45 = (q4*q6*q7)/8 + mh*mt*q4^2*q6*q7 + (q4*q8)/4 - (5*q6*q8)/32 - (3*mh*mt*q4*q6*q8)/4 + (3*mh^2*q7*q8)/32 - (mh*mt*q7*q8)/8 + (3*mt^2*q7*q8)/32 - (mh^3*mt*q4*q7*q8)/4 + (q4^2*q6*q7*s12)/2 - (q4*q6*q8*s12)/8 - (5*q7*q8*s12)/32 - (mh^2*q4*q7*q8*s12)/8 + (3*mh*mt*q4*q7*q8*s12)/4 + (q4^2*q6*q7*s34)/8 - (q4^2*q8*s34)/4 - (q4*q6*q8*s34)/16 + (mh*mt*q4^2*q6*q8*s34)/4 - (q7*q8*s34)/64 + (3*mh^2*q4*q7*q8*s34)/16 - (mh^3*mt*q4^2*q7*q8*s34)/4 - (q4^2*q6*q8*s12*s34)/8 - (q4*q7*q8*s12*s34)/16 - (mh^2*q4^2*q7*q8*s12*s34)/8 - (mh*mt*q4^2*q7*q8*s12*s34)/4 + (3*q4^2*q6*q8*s34^2)/32 - (7*q4*q7*q8*s34^2)/128 + (3*mh^2*q4^2*q7*q8*s34^2)/32 + (mh*mt*q4^2*q7*q8*s34^2)/8 + (3*q4^2*q7*q8*s12*s34^2)/32 - (5*q4^2*q7*q8*s34^3)/128 - (q4^2*q6*q7*s45)/2 + (q4*q6*q8*s45)/8 + (7*q7*q8*s45)/16 + (mh^2*q4*q7*q8*s45)/8 - (mh*mt*q4*q7*q8*s45)/2 - (mt^2*q6*q7*q8*s45)/2 + (q4*q7*q8*s12*s45)/8 - (q6*q7*q8*s12*s45)/2 + (q4^2*q6*q8*s34*s45)/8 + (q4*q7*q8*s34*s45)/8 + (mh^2*q4^2*q7*q8*s34*s45)/8 + (mh*mt*q4^2*q7*q8*s34*s45)/2 + (q4^2*q7*q8*s12*s34*s45)/8 - (5*q4^2*q7*q8*s34^2*s45)/16 - (q4*q7*q8*s45^2)/8 + (q6*q7*q8*s45^2)/2 - (q4^2*q7*q8*s34*s45^2)/8;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule42'==1
#write "calc module nr 42"
#do j=1,1
if (match(q3*q7*q8*s34^3*s45^2));
id q3*q7*q8*s34^3*s45^2 = 2*mt^3*q7 - 2*mh^4*mt*q8 - 4*mt*q7*s12 - mh^2*q3*q7*s12 + 4*mh^2*mt*q8*s12 + mh^6*mt*q7*q8*s12 - 2*mt*q8*s12^2 - 3*mh^2*mt*q7*q8*s12^3 + 2*mt*q7*q8*s12^4 - mt*q7*s34 + 2*mh^2*mt*q8*s34 - 2*mt^3*q8*s34 + mh^4*q3*q8*s34 + 2*mt*q8*s12*s34 + mh^4*mt*q7*q8*s12*s34 - 3*mh^2*mt^3*q7*q8*s12*s34 + mh^2*mt*q7*q8*s12^2*s34 + 3*mt^3*q7*q8*s12^2*s34 - 2*mt*q7*q8*s12^3*s34 + mt*q8*s34^2 - mh^2*mt^3*q7*q8*s34^2 + mh^2*mt*q7*q8*s12*s34^2 + mt^3*q7*q8*s12*s34^2 - mt*q7*q8*s12^2*s34^2 - 4*mt*q7*s45 + mh^2*q3*q7*s45 - mh^6*mt*q7*q8*s45 + q3*q7*s12*s45 - 3*mh^4*mt*q7*q8*s12*s45 + 9*mh^2*mt*q7*q8*s12^2*s45 - 5*mt*q7*q8*s12^3*s45 + q3*q7*s34*s45 + 4*mt*q8*s34*s45 - 2*mh^2*q3*q8*s34*s45 + 2*mh^4*mt*q7*q8*s34*s45 + 3*mh^2*mt^3*q7*q8*s34*s45 + 2*mh^2*mt*q7*q8*s12*s34*s45 - 3*mt^3*q7*q8*s12*s34*s45 - 4*mt*q7*q8*s12^2*s34*s45 - 3*mt^3*q7*q8*s34^2*s45 + 6*mt*q7*q8*s12*s34^2*s45 + mt*q7*q8*s34^3*s45 - q3*q7*s45^2 + 3*mh^4*mt*q7*q8*s45^2 - 6*mh^2*mt*q7*q8*s12*s45^2 + 3*mt*q7*q8*s12^2*s45^2 + q3*q8*s34*s45^2 - 9*mh^2*mt*q7*q8*s34*s45^2 + 9*mt*q7*q8*s12*s34*s45^2 + 6*mt*q7*q8*s34^2*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule43'==1
#write "calc module nr 43"
#do j=1,1
if (match(mh*mt*q4*q5*q8*s34*s45));
id mh*mt*q4*q5*q8*s34*s45 = (-3*q4*q5)/4 + mh*q3*q4*q5 - (5*mh^2*q8)/16 - (3*mh*mt*q8)/8 - (7*mt^2*q8)/16 - mh^3*mt*q4*q8 - (mh*mt^3*q5*q8)/2 + (7*mt^4*q5*q8)/16 - (q3^2*q4*q5*s12)/4 + (13*q8*s12)/16 + mh*q3*q8*s12 + (mh^2*q4*q8*s12)/4 - (3*mh*mt*q4*q8*s12)/2 + mh*mt*q5*q8*s12 - (13*mt^2*q5*q8*s12)/16 - (q3^2*q8*s12^2)/4 + (q4*q8*s12^2)/2 + (5*q5*q8*s12^2)/16 - (mh*q3*q5*q8*s12^2)/2 + (q4*q5*q8*s12^3)/4 + (13*q8*s34)/64 - (5*mh^2*q4*q8*s34)/16 + (5*mh*mt*q4*q8*s34)/8 - (mt^2*q5*q8*s34)/64 - (11*q4*q8*s12*s34)/16 + (3*q5*q8*s12*s34)/64 - (3*q4*q5*q8*s12^2*s34)/16 + (13*q4*q8*s34^2)/64 - (q5*q8*s34^2)/256 + (3*q4*q5*q8*s12*s34^2)/64 - (q4*q5*q8*s34^3)/256 + (q3^2*q4*q5*s45)/4 - q8*s45 - mh*q3*q8*s45 - (mh^2*q4*q8*s45)/4 + (5*mh*mt*q4*q8*s45)/2 - 2*mh*mt*q5*q8*s45 + (9*mt^2*q5*q8*s45)/16 + (q3^2*q8*s12*s45)/2 - (5*q4*q8*s12*s45)/4 + (5*q5*q8*s12*s45)/8 + mh*q3*q5*q8*s12*s45 - (3*q4*q5*q8*s12^2*s45)/4 + (q4*q8*s34*s45)/2 - (23*q5*q8*s34*s45)/64 + mh*q3*q5*q8*s34*s45 - (q3^2*q5*q8*s12*s34*s45)/4 - (3*q4*q5*q8*s12*s34*s45)/8 + (25*q4*q5*q8*s34^2*s45)/64 - (q3^2*q8*s45^2)/4 + (3*q4*q8*s45^2)/4 - (15*q5*q8*s45^2)/16 - (mh*q3*q5*q8*s45^2)/2 + (3*q4*q5*q8*s12*s45^2)/4 + (q3^2*q5*q8*s34*s45^2)/4 + (9*q4*q5*q8*s34*s45^2)/16 - (q4*q5*q8*s45^3)/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule44'==1
#write "calc module nr 44"
#do j=1,1
if (match(mh*mt*q4*q6*q8*s34*s45));
id mh*mt*q4*q6*q8*s34*s45 = (3*q4*q6)/4 + mh*q3*q4*q6 + (5*mh^2*q8)/16 - (3*mh*mt*q8)/8 + (7*mt^2*q8)/16 - mh^3*mt*q4*q8 - (mh*mt^3*q6*q8)/2 - (7*mt^4*q6*q8)/16 + (q3^2*q4*q6*s12)/4 - (13*q8*s12)/16 + mh*q3*q8*s12 - (mh^2*q4*q8*s12)/4 - (3*mh*mt*q4*q8*s12)/2 + mh*mt*q6*q8*s12 + (13*mt^2*q6*q8*s12)/16 + (q3^2*q8*s12^2)/4 - (q4*q8*s12^2)/2 - (5*q6*q8*s12^2)/16 - (mh*q3*q6*q8*s12^2)/2 - (q4*q6*q8*s12^3)/4 - (13*q8*s34)/64 + (5*mh^2*q4*q8*s34)/16 + (5*mh*mt*q4*q8*s34)/8 + (mt^2*q6*q8*s34)/64 + (11*q4*q8*s12*s34)/16 - (3*q6*q8*s12*s34)/64 + (3*q4*q6*q8*s12^2*s34)/16 - (13*q4*q8*s34^2)/64 + (q6*q8*s34^2)/256 - (3*q4*q6*q8*s12*s34^2)/64 + (q4*q6*q8*s34^3)/256 - (q3^2*q4*q6*s45)/4 + q8*s45 - mh*q3*q8*s45 + (mh^2*q4*q8*s45)/4 + (5*mh*mt*q4*q8*s45)/2 - 2*mh*mt*q6*q8*s45 - (9*mt^2*q6*q8*s45)/16 - (q3^2*q8*s12*s45)/2 + (5*q4*q8*s12*s45)/4 - (5*q6*q8*s12*s45)/8 + mh*q3*q6*q8*s12*s45 + (3*q4*q6*q8*s12^2*s45)/4 - (q4*q8*s34*s45)/2 + (23*q6*q8*s34*s45)/64 + mh*q3*q6*q8*s34*s45 + (q3^2*q6*q8*s12*s34*s45)/4 + (3*q4*q6*q8*s12*s34*s45)/8 - (25*q4*q6*q8*s34^2*s45)/64 + (q3^2*q8*s45^2)/4 - (3*q4*q8*s45^2)/4 + (15*q6*q8*s45^2)/16 - (mh*q3*q6*q8*s45^2)/2 - (3*q4*q6*q8*s12*s45^2)/4 - (q3^2*q6*q8*s34*s45^2)/4 - (9*q4*q6*q8*s34*s45^2)/16 + (q4*q6*q8*s45^3)/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule45'==1
#write "calc module nr 45"
#do j=1,1
if (match(q4*q5*q6*q7*q8));
id q4*q5*q6*q7*q8 = -(q3^8*q4*q5*q7)/64 + (mh*q3^7*q4^2*q5*q7)/32 - (mh*q3^5*q4^3*q5*q7)/16 - (q3^8*q4*q6*q7)/64 - (mh*q3^7*q4^2*q6*q7)/32 + (mh*q3^5*q4^3*q6*q7)/16 + (q3^6*q4*q5*q6*q7)/16 - (3*q3^6*q4*q5*q8)/64 + (q3^4*q4^2*q5*q8)/4 - (mh*q3^5*q4^2*q5*q8)/32 - (q3^2*q4^3*q5*q8)/4 + (mh*q3^3*q4^3*q5*q8)/16 - (3*q3^6*q4*q6*q8)/64 + (q3^4*q4^2*q6*q8)/4 + (mh*q3^5*q4^2*q6*q8)/32 - (q3^2*q4^3*q6*q8)/4 - (mh*q3^3*q4^3*q6*q8)/16 + (3*q3^4*q4*q5*q6*q8)/16 - q3^2*q4^2*q5*q6*q8 + q4^3*q5*q6*q8 + (q3^6*q7*q8)/32 - (7*q3^4*q4*q7*q8)/32 + (mh^2*q3^6*q4*q7*q8)/32 + (q3^2*q4^2*q7*q8)/2 - (mh^2*q3^4*q4^2*q7*q8)/8 - (q4^3*q7*q8)/2 + (mh^2*q3^2*q4^3*q7*q8)/4 - (q3^4*q5*q7*q8)/8 + (mh*q3^5*q5*q7*q8)/16 + (q3^2*q4*q5*q7*q8)/2 - (mh*q3^3*q4*q5*q7*q8)/4 - (q3^4*q6*q7*q8)/8 - (mh*q3^5*q6*q7*q8)/16 + (q3^2*q4*q6*q7*q8)/2 + (mh*q3^3*q4*q6*q7*q8)/4 + (q3^2*q5*q6*q7*q8)/4 - (q3^6*q4^2*q5*q6*q7*s12)/8 + (q3^4*q4^3*q5*q6*q7*s12)/4 + (q3^4*q4^2*q5*q6*q8*s12)/8 - (q3^2*q4^3*q5*q6*q8*s12)/4 - (q3^8*q7*q8*s12)/32 + (3*q3^6*q4*q7*q8*s12)/16 - (3*q3^4*q4^2*q7*q8*s12)/8 + (q3^2*q4^3*q7*q8*s12)/4 - (q3^6*q5*q7*q8*s34)/32 + (mh*q3^7*q5*q7*q8*s34)/64 - (q3^6*q6*q7*q8*s34)/32 - (mh*q3^7*q6*q7*q8*s34)/64 + (q3^4*q5*q6*q7*q8*s34)/16 + (q3^8*q7*q8*s45)/32 - (7*q3^6*q4*q7*q8*s45)/32 + (q3^4*q4^2*q7*q8*s45)/2 - (q3^2*q4^3*q7*q8*s45)/2 - (q3^6*q5*q7*q8*s45)/16 + (q3^4*q4*q5*q7*q8*s45)/4 - (q3^6*q6*q7*q8*s45)/16 + (q3^4*q4*q6*q7*q8*s45)/4 - (q3^8*q5*q7*q8*s34*s45)/64 - (q3^8*q6*q7*q8*s34*s45)/64;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule46'==1
#write "calc module nr 46"
#do j=1,1
if (match(mh*q5*q7*q8*s34^2*s45));
id mh*q5*q7*q8*s34^2*s45 = (mh*q5*q7)/2 - (3*mt*q5*q7)/4 + (mt*q8)/4 + (mh*mt^2*q5*q8)/2 - (mt^3*q5*q8)/4 - (mh^3*mt^2*q7*q8)/2 - (mh^2*mt^3*q7*q8)/4 + mt*q4*q5*q7*s12 - (mt*q5*q8*s12)/4 - (mh^2*mt*q7*q8*s12)/4 + (mh*mt^2*q7*q8*s12)/2 + (mt^3*q7*q8*s12)/4 + (mt*q7*q8*s12^2)/4 - mt*q4*q8*s34 - (mh*q5*q8*s34)/2 + (mt*q5*q8*s34)/2 + (mh*mt^2*q7*q8*s34)/2 + (mt^3*q7*q8*s34)/2 - mt*q4^2*q5*q7*s12*s34 - (mh*q7*q8*s12*s34)/2 - (mt*q7*q8*s12*s34)/2 + (mh*q4^2*q5*q7*s34^2)/2 - (mt*q4^2*q5*q7*s34^2)/4 + (mt*q4^2*q8*s34^2)/2 - (3*mh*q4*q5*q8*s34^2)/8 + (5*mt*q4*q5*q8*s34^2)/16 - (mh*q7*q8*s34^2)/16 - (3*mt*q7*q8*s34^2)/64 - (mh^3*q4*q7*q8*s34^2)/8 - (3*mh^2*mt*q4*q7*q8*s34^2)/16 + (mt*q4^2*q5*q8*s12*s34^2)/4 + (3*mh*q4*q7*q8*s12*s34^2)/8 + (5*mt*q4*q7*q8*s12*s34^2)/16 + (mh^2*mt*q4^2*q7*q8*s12*s34^2)/4 + (mh*q4^2*q5*q8*s34^3)/8 - (3*mt*q4^2*q5*q8*s34^3)/16 + (mt*q4*q7*q8*s34^3)/32 - (mh^3*q4^2*q7*q8*s34^3)/8 - (3*mh^2*mt*q4^2*q7*q8*s34^3)/16 - (mh*q4^2*q7*q8*s12*s34^3)/8 - (3*mt*q4^2*q7*q8*s12*s34^3)/16 + (mh*q4^2*q7*q8*s34^4)/16 + (5*mt*q4^2*q7*q8*s34^4)/64 - mt*q4*q5*q7*s45 + (mt*q5*q8*s45)/4 + (mh^2*mt*q7*q8*s45)/4 - (mt*q7*q8*s12*s45)/4 + mt*q4^2*q5*q7*s34*s45 + (mh*q7*q8*s34*s45)/2 - (mt*q7*q8*s34*s45)/2 - (mt*q4^2*q5*q8*s34^2*s45)/4 - (mh*q4*q7*q8*s34^2*s45)/4 - (7*mt*q4*q7*q8*s34^2*s45)/8 - (mh^2*mt*q4^2*q7*q8*s34^2*s45)/4 + mt*q5*q7*q8*s34^2*s45 - (mt*q4^2*q7*q8*s12*s34^2*s45)/4 + (mh*q4^2*q7*q8*s34^3*s45)/4 + (5*mt*q4^2*q7*q8*s34^3*s45)/8 + (mt*q4^2*q7*q8*s34^2*s45^2)/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule47'==1
#write "calc module nr 47"
#do j=1,1
if (match(mh*q6*q7*q8*s34^2*s45));
id mh*q6*q7*q8*s34^2*s45 = (mh*q6*q7)/2 + (3*mt*q6*q7)/4 - (mt*q8)/4 + (mh*mt^2*q6*q8)/2 + (mt^3*q6*q8)/4 - (mh^3*mt^2*q7*q8)/2 + (mh^2*mt^3*q7*q8)/4 - mt*q4*q6*q7*s12 + (mt*q6*q8*s12)/4 + (mh^2*mt*q7*q8*s12)/4 + (mh*mt^2*q7*q8*s12)/2 - (mt^3*q7*q8*s12)/4 - (mt*q7*q8*s12^2)/4 + mt*q4*q8*s34 - (mh*q6*q8*s34)/2 - (mt*q6*q8*s34)/2 + (mh*mt^2*q7*q8*s34)/2 - (mt^3*q7*q8*s34)/2 + mt*q4^2*q6*q7*s12*s34 - (mh*q7*q8*s12*s34)/2 + (mt*q7*q8*s12*s34)/2 + (mh*q4^2*q6*q7*s34^2)/2 + (mt*q4^2*q6*q7*s34^2)/4 - (mt*q4^2*q8*s34^2)/2 - (3*mh*q4*q6*q8*s34^2)/8 - (5*mt*q4*q6*q8*s34^2)/16 - (mh*q7*q8*s34^2)/16 + (3*mt*q7*q8*s34^2)/64 - (mh^3*q4*q7*q8*s34^2)/8 + (3*mh^2*mt*q4*q7*q8*s34^2)/16 - (mt*q4^2*q6*q8*s12*s34^2)/4 + (3*mh*q4*q7*q8*s12*s34^2)/8 - (5*mt*q4*q7*q8*s12*s34^2)/16 - (mh^2*mt*q4^2*q7*q8*s12*s34^2)/4 + (mh*q4^2*q6*q8*s34^3)/8 + (3*mt*q4^2*q6*q8*s34^3)/16 - (mt*q4*q7*q8*s34^3)/32 - (mh^3*q4^2*q7*q8*s34^3)/8 + (3*mh^2*mt*q4^2*q7*q8*s34^3)/16 - (mh*q4^2*q7*q8*s12*s34^3)/8 + (3*mt*q4^2*q7*q8*s12*s34^3)/16 + (mh*q4^2*q7*q8*s34^4)/16 - (5*mt*q4^2*q7*q8*s34^4)/64 + mt*q4*q6*q7*s45 - (mt*q6*q8*s45)/4 - (mh^2*mt*q7*q8*s45)/4 + (mt*q7*q8*s12*s45)/4 - mt*q4^2*q6*q7*s34*s45 + (mh*q7*q8*s34*s45)/2 + (mt*q7*q8*s34*s45)/2 + (mt*q4^2*q6*q8*s34^2*s45)/4 - (mh*q4*q7*q8*s34^2*s45)/4 + (7*mt*q4*q7*q8*s34^2*s45)/8 + (mh^2*mt*q4^2*q7*q8*s34^2*s45)/4 - mt*q6*q7*q8*s34^2*s45 + (mt*q4^2*q7*q8*s12*s34^2*s45)/4 + (mh*q4^2*q7*q8*s34^3*s45)/4 - (5*mt*q4^2*q7*q8*s34^3*s45)/8 - (mt*q4^2*q7*q8*s34^2*s45^2)/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule48'==1
#write "calc module nr 48"
#do j=1,1
if (match(mt^3*q6*q7*q8*s45));
id mt^3*q6*q7*q8*s45 = (mt*q4*q6*q7)/4 - mh*q4*q8 + (mt*q4*q8)/2 + (mh*q6*q8)/4 + (3*mt*q6*q8)/16 - (mh^2*mt*q7*q8)/16 + (3*mh*mt^2*q7*q8)/8 - (5*mt^3*q7*q8)/16 - 2*mh*q4^2*q6*q7*s12 - 3*mt*q4^2*q6*q7*s12 + (mh*q4*q6*q8*s12)/2 + (3*mt*q4*q6*q8*s12)/4 - (mh*q7*q8*s12)/2 + (7*mt*q7*q8*s12)/16 + (mh^3*q4*q7*q8*s12)/2 - (mh^2*mt*q4*q7*q8*s12)/4 + (mt*q4^2*q6*q7*s34)/4 + mh*q4^2*q8*s34 - (mt*q4^2*q8*s34)/2 - (mt*q4*q6*q8*s34)/8 + (mh*q7*q8*s34)/16 - (mt*q7*q8*s34)/32 - (mh^2*mt*q4*q7*q8*s34)/8 + (mh*q4^2*q6*q8*s12*s34)/2 + (3*mt*q4^2*q6*q8*s12*s34)/4 - (mh*q4*q7*q8*s12*s34)/2 + (3*mt*q4*q7*q8*s12*s34)/8 + (mh^3*q4^2*q7*q8*s12*s34)/2 - (mh^2*mt*q4^2*q7*q8*s12*s34)/4 - (mh*q4^2*q6*q8*s34^2)/4 - (5*mt*q4^2*q6*q8*s34^2)/16 + (mh*q4*q7*q8*s34^2)/32 + (mt*q4*q7*q8*s34^2)/64 - (mh^2*mt*q4^2*q7*q8*s34^2)/16 - (mt*q4^2*q7*q8*s12*s34^2)/16 - (mh*q4^2*q7*q8*s34^3)/32 + (3*mt*q4^2*q7*q8*s34^3)/64 + 2*mh*q4^2*q6*q7*s45 - mt*q4^2*q6*q7*s45 - (mh*q4*q6*q8*s45)/2 + (9*mt*q4*q6*q8*s45)/4 - mh*q7*q8*s45 + (7*mt*q7*q8*s45)/8 - (mh^3*q4*q7*q8*s45)/2 + (5*mh^2*mt*q4*q7*q8*s45)/4 - (mh*q4*q7*q8*s12*s45)/2 - (11*mt*q4*q7*q8*s12*s45)/4 + 2*mh*q6*q7*q8*s12*s45 + 3*mt*q6*q7*q8*s12*s45 - (mh*q4^2*q6*q8*s34*s45)/2 - (7*mt*q4^2*q6*q8*s34*s45)/4 - (mh*q4*q7*q8*s34*s45)/2 + (mt*q4*q7*q8*s34*s45)/4 - (mh^3*q4^2*q7*q8*s34*s45)/2 + (5*mh^2*mt*q4^2*q7*q8*s34*s45)/4 - (mh*q4^2*q7*q8*s12*s34*s45)/2 + (5*mt*q4^2*q7*q8*s12*s34*s45)/4 + (mh*q4^2*q7*q8*s34^2*s45)/2 - (5*mt*q4^2*q7*q8*s34^2*s45)/8 + (mh*q4*q7*q8*s45^2)/2 + (7*mt*q4*q7*q8*s45^2)/4 - 2*mh*q6*q7*q8*s45^2 + mt*q6*q7*q8*s45^2 + (mh*q4^2*q7*q8*s34*s45^2)/2 - (9*mt*q4^2*q7*q8*s34*s45^2)/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule49'==1
#write "calc module nr 49"
#do j=1,1
if (match(mt^3*q5*q7*q8*s45));
id mt^3*q5*q7*q8*s45 = (mt*q4*q5*q7)/4 + mh*q4*q8 + (mt*q4*q8)/2 - (mh*q5*q8)/4 + (3*mt*q5*q8)/16 - (mh^2*mt*q7*q8)/16 - (3*mh*mt^2*q7*q8)/8 - (5*mt^3*q7*q8)/16 + 2*mh*q4^2*q5*q7*s12 - 3*mt*q4^2*q5*q7*s12 - (mh*q4*q5*q8*s12)/2 + (3*mt*q4*q5*q8*s12)/4 + (mh*q7*q8*s12)/2 + (7*mt*q7*q8*s12)/16 - (mh^3*q4*q7*q8*s12)/2 - (mh^2*mt*q4*q7*q8*s12)/4 + (mt*q4^2*q5*q7*s34)/4 - mh*q4^2*q8*s34 - (mt*q4^2*q8*s34)/2 - (mt*q4*q5*q8*s34)/8 - (mh*q7*q8*s34)/16 - (mt*q7*q8*s34)/32 - (mh^2*mt*q4*q7*q8*s34)/8 - (mh*q4^2*q5*q8*s12*s34)/2 + (3*mt*q4^2*q5*q8*s12*s34)/4 + (mh*q4*q7*q8*s12*s34)/2 + (3*mt*q4*q7*q8*s12*s34)/8 - (mh^3*q4^2*q7*q8*s12*s34)/2 - (mh^2*mt*q4^2*q7*q8*s12*s34)/4 + (mh*q4^2*q5*q8*s34^2)/4 - (5*mt*q4^2*q5*q8*s34^2)/16 - (mh*q4*q7*q8*s34^2)/32 + (mt*q4*q7*q8*s34^2)/64 - (mh^2*mt*q4^2*q7*q8*s34^2)/16 - (mt*q4^2*q7*q8*s12*s34^2)/16 + (mh*q4^2*q7*q8*s34^3)/32 + (3*mt*q4^2*q7*q8*s34^3)/64 - 2*mh*q4^2*q5*q7*s45 - mt*q4^2*q5*q7*s45 + (mh*q4*q5*q8*s45)/2 + (9*mt*q4*q5*q8*s45)/4 + mh*q7*q8*s45 + (7*mt*q7*q8*s45)/8 + (mh^3*q4*q7*q8*s45)/2 + (5*mh^2*mt*q4*q7*q8*s45)/4 + (mh*q4*q7*q8*s12*s45)/2 - (11*mt*q4*q7*q8*s12*s45)/4 - 2*mh*q5*q7*q8*s12*s45 + 3*mt*q5*q7*q8*s12*s45 + (mh*q4^2*q5*q8*s34*s45)/2 - (7*mt*q4^2*q5*q8*s34*s45)/4 + (mh*q4*q7*q8*s34*s45)/2 + (mt*q4*q7*q8*s34*s45)/4 + (mh^3*q4^2*q7*q8*s34*s45)/2 + (5*mh^2*mt*q4^2*q7*q8*s34*s45)/4 + (mh*q4^2*q7*q8*s12*s34*s45)/2 + (5*mt*q4^2*q7*q8*s12*s34*s45)/4 - (mh*q4^2*q7*q8*s34^2*s45)/2 - (5*mt*q4^2*q7*q8*s34^2*s45)/8 - (mh*q4*q7*q8*s45^2)/2 + (7*mt*q4*q7*q8*s45^2)/4 + 2*mh*q5*q7*q8*s45^2 + mt*q5*q7*q8*s45^2 - (mh*q4^2*q7*q8*s34*s45^2)/2 - (9*mt*q4^2*q7*q8*s34*s45^2)/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule50'==1
#write "calc module nr 50"
#do j=1,1
if (match(mh*q4*q5*q7*q8*s45));
id mh*q4*q5*q7*q8*s45 = -(q3^3*q4*q5*q7)/16 + (mh*q3^4*q4*q5*q7)/16 + (q3*q4^2*q5*q7)/8 - (mh*q3^2*q4^2*q5*q7)/4 + (mh*q4^3*q5*q7)/2 - (mt*q4^3*q5*q7)/4 + (q3^3*q4*q8)/8 - (q3*q4^2*q8)/2 + (mt*q4^3*q8)/2 - (3*q3*q4*q5*q8)/16 + (3*mh*q3^2*q4*q5*q8)/16 - (5*mh*q4^2*q5*q8)/8 + (11*mt*q4^2*q5*q8)/16 - (q3*q7*q8)/16 - (mh*q3^2*q7*q8)/16 + (mh*q4*q7*q8)/4 + (15*mt*q4*q7*q8)/64 - (mh^2*q3*q4*q7*q8)/16 - (mh^3*q3^2*q4*q7*q8)/16 + (mh^3*q4^2*q7*q8)/8 + (3*mh^2*mt*q4^2*q7*q8)/16 + (q3^3*q4^2*q5*q7*s12)/8 - (q3*q4^3*q5*q7*s12)/4 - (q3*q4^2*q5*q8*s12)/8 + (mt*q4^3*q5*q8*s12)/4 + (q3^3*q7*q8*s12)/16 + (mh*q3^4*q7*q8*s12)/16 - (3*q3*q4*q7*q8*s12)/8 - (3*mh*q3^2*q4*q7*q8*s12)/8 + (5*mh*q4^2*q7*q8*s12)/8 + (11*mt*q4^2*q7*q8*s12)/16 - (mh^2*q3*q4^2*q7*q8*s12)/8 + (mh^2*mt*q4^3*q7*q8*s12)/4 + (mh*q4^3*q5*q8*s34)/8 - (3*mt*q4^3*q5*q8*s34)/16 - (mh*q4^2*q7*q8*s34)/8 - (mt*q4^2*q7*q8*s34)/8 - (mh^3*q4^3*q7*q8*s34)/8 - (3*mh^2*mt*q4^3*q7*q8*s34)/16 - (mh*q4^3*q7*q8*s12*s34)/8 - (3*mt*q4^3*q7*q8*s12*s34)/16 + (mh*q4^3*q7*q8*s34^2)/16 + (5*mt*q4^3*q7*q8*s34^2)/64 - (q3^3*q4^2*q5*q7*s45)/8 + (q3*q4^3*q5*q7*s45)/4 + (q3*q4^2*q5*q8*s45)/8 - (mt*q4^3*q5*q8*s45)/4 - (q3^3*q7*q8*s45)/16 - (mh*q3^4*q7*q8*s45)/16 + (13*q3*q4*q7*q8*s45)/16 + (7*mh*q3^2*q4*q7*q8*s45)/16 - (3*mh*q4^2*q7*q8*s45)/4 - (17*mt*q4^2*q7*q8*s45)/8 + (mh^2*q3*q4^2*q7*q8*s45)/8 - (mh^2*mt*q4^3*q7*q8*s45)/4 - (q3*q5*q7*q8*s45)/4 + (mh*q3^2*q5*q7*q8*s45)/4 + mt*q4*q5*q7*q8*s45 + (q3*q4^2*q7*q8*s12*s45)/8 - (mt*q4^3*q7*q8*s12*s45)/4 + (mh*q4^3*q7*q8*s34*s45)/4 + (5*mt*q4^3*q7*q8*s34*s45)/8 - (q3^3*q5*q7*q8*s34*s45)/16 + (mh*q3^4*q5*q7*q8*s34*s45)/16 - (q3*q4^2*q7*q8*s45^2)/8 + (mt*q4^3*q7*q8*s45^2)/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule51'==1
#write "calc module nr 51"
#do j=1,1
if (match(mh*q4*q6*q7*q8*s45));
id mh*q4*q6*q7*q8*s45 = (q3^3*q4*q6*q7)/16 + (mh*q3^4*q4*q6*q7)/16 - (q3*q4^2*q6*q7)/8 - (mh*q3^2*q4^2*q6*q7)/4 + (mh*q4^3*q6*q7)/2 + (mt*q4^3*q6*q7)/4 - (q3^3*q4*q8)/8 + (q3*q4^2*q8)/2 - (mt*q4^3*q8)/2 + (3*q3*q4*q6*q8)/16 + (3*mh*q3^2*q4*q6*q8)/16 - (5*mh*q4^2*q6*q8)/8 - (11*mt*q4^2*q6*q8)/16 + (q3*q7*q8)/16 - (mh*q3^2*q7*q8)/16 + (mh*q4*q7*q8)/4 - (15*mt*q4*q7*q8)/64 + (mh^2*q3*q4*q7*q8)/16 - (mh^3*q3^2*q4*q7*q8)/16 + (mh^3*q4^2*q7*q8)/8 - (3*mh^2*mt*q4^2*q7*q8)/16 - (q3^3*q4^2*q6*q7*s12)/8 + (q3*q4^3*q6*q7*s12)/4 + (q3*q4^2*q6*q8*s12)/8 - (mt*q4^3*q6*q8*s12)/4 - (q3^3*q7*q8*s12)/16 + (mh*q3^4*q7*q8*s12)/16 + (3*q3*q4*q7*q8*s12)/8 - (3*mh*q3^2*q4*q7*q8*s12)/8 + (5*mh*q4^2*q7*q8*s12)/8 - (11*mt*q4^2*q7*q8*s12)/16 + (mh^2*q3*q4^2*q7*q8*s12)/8 - (mh^2*mt*q4^3*q7*q8*s12)/4 + (mh*q4^3*q6*q8*s34)/8 + (3*mt*q4^3*q6*q8*s34)/16 - (mh*q4^2*q7*q8*s34)/8 + (mt*q4^2*q7*q8*s34)/8 - (mh^3*q4^3*q7*q8*s34)/8 + (3*mh^2*mt*q4^3*q7*q8*s34)/16 - (mh*q4^3*q7*q8*s12*s34)/8 + (3*mt*q4^3*q7*q8*s12*s34)/16 + (mh*q4^3*q7*q8*s34^2)/16 - (5*mt*q4^3*q7*q8*s34^2)/64 + (q3^3*q4^2*q6*q7*s45)/8 - (q3*q4^3*q6*q7*s45)/4 - (q3*q4^2*q6*q8*s45)/8 + (mt*q4^3*q6*q8*s45)/4 + (q3^3*q7*q8*s45)/16 - (mh*q3^4*q7*q8*s45)/16 - (13*q3*q4*q7*q8*s45)/16 + (7*mh*q3^2*q4*q7*q8*s45)/16 - (3*mh*q4^2*q7*q8*s45)/4 + (17*mt*q4^2*q7*q8*s45)/8 - (mh^2*q3*q4^2*q7*q8*s45)/8 + (mh^2*mt*q4^3*q7*q8*s45)/4 + (q3*q6*q7*q8*s45)/4 + (mh*q3^2*q6*q7*q8*s45)/4 - mt*q4*q6*q7*q8*s45 - (q3*q4^2*q7*q8*s12*s45)/8 + (mt*q4^3*q7*q8*s12*s45)/4 + (mh*q4^3*q7*q8*s34*s45)/4 - (5*mt*q4^3*q7*q8*s34*s45)/8 + (q3^3*q6*q7*q8*s34*s45)/16 + (mh*q3^4*q6*q7*q8*s34*s45)/16 + (q3*q4^2*q7*q8*s45^2)/8 - (mt*q4^3*q7*q8*s45^2)/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule52'==1
#write "calc module nr 52"
#do j=1,1
if (match(q5*q6*q7*q8*s34^2));
id q5*q6*q7*q8*s34^2 = (mh*q3^3*q4*q5*q7)/2 - mh*q3*q4^2*q5*q7 - (mh*q3^3*q4*q6*q7)/2 + mh*q3*q4^2*q6*q7 + q3^2*q5*q6*q7 - q3^2*q5*q8 - 3*q4*q5*q8 + (7*mh*q3*q4*q5*q8)/2 - 3*mh*mt*q4^2*q5*q8 - q3^2*q6*q8 - 3*q4*q6*q8 - (7*mh*q3*q4*q6*q8)/2 + 3*mh*mt*q4^2*q6*q8 + 3*q5*q6*q8 - (3*q7*q8)/2 - mh^2*q4*q7*q8 - mh*mt*q5*q7*q8 + mt^2*q5*q7*q8 + mh*mt*q6*q7*q8 + mt^2*q6*q7*q8 - 2*q3^2*q4*q5*q6*q7*s12 + 4*q4^2*q5*q6*q7*s12 - 2*q4^2*q5*q8*s12 + mh*q3*q4^2*q5*q8*s12 - 2*q4^2*q6*q8*s12 - mh*q3*q4^2*q6*q8*s12 + 2*q4*q5*q6*q8*s12 + 2*q3^2*q7*q8*s12 - 5*q4*q7*q8*s12 - q5*q7*q8*s12 + mh*q3*q5*q7*q8*s12 - q6*q7*q8*s12 - mh*q3*q6*q7*q8*s12 + q4^2*q5*q8*s34 + q4^2*q6*q8*s34 + q4*q7*q8*s34 + mh^2*q4^2*q7*q8*s34 - (q5*q7*q8*s34)/2 + (mh*q3*q5*q7*q8*s34)/2 - (q6*q7*q8*s34)/2 - (mh*q3*q6*q7*q8*s34)/2 + q4^2*q7*q8*s12*s34 + (q3^2*q5*q7*q8*s12*s34)/2 - (mh*q3^3*q5*q7*q8*s12*s34)/2 + (q3^2*q6*q7*q8*s12*s34)/2 + (mh*q3^3*q6*q7*q8*s12*s34)/2 - (q4^2*q7*q8*s34^2)/2 + (q3^2*q5*q7*q8*s34^2)/2 - (mh*q3^3*q5*q7*q8*s34^2)/4 + (q3^2*q6*q7*q8*s34^2)/2 + (mh*q3^3*q6*q7*q8*s34^2)/4 + 8*q4^2*q5*q8*s45 - 4*mh*q3*q4^2*q5*q8*s45 + 8*q4^2*q6*q8*s45 + 4*mh*q3*q4^2*q6*q8*s45 - 16*q4*q5*q6*q8*s45 - 2*q3^2*q7*q8*s45 + 6*q4*q7*q8*s45 - q5*q7*q8*s45 - mh*q3*q5*q7*q8*s45 - q6*q7*q8*s45 + mh*q3*q6*q7*q8*s45 - 4*q4^2*q5*q6*q8*s12*s45 - 2*q4^2*q7*q8*s34*s45 + (q3^2*q5*q7*q8*s34*s45)/2 + (mh*q3^3*q5*q7*q8*s34*s45)/2 + (q3^2*q6*q7*q8*s34*s45)/2 - (mh*q3^3*q6*q7*q8*s34*s45)/2 + 16*q4^2*q5*q6*q8*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule53'==1
#write "calc module nr 53"
#do j=1,1
if (match(mh*q4*q5*q7*q8*s12));
id mh*q4*q5*q7*q8*s12 = (3*q3^3*q4*q5*q7)/16 + (mh*q3^4*q4*q5*q7)/16 + (q3*q4^2*q5*q7)/8 - (mh*q3^2*q4^2*q5*q7)/4 + (mh*q4^3*q5*q7)/2 - (mt*q4^3*q5*q7)/4 + (q3^3*q4*q8)/8 - (q3*q4^2*q8)/2 + (mt*q4^3*q8)/2 - (7*q3*q4*q5*q8)/16 + (3*mh*q3^2*q4*q5*q8)/16 - (5*mh*q4^2*q5*q8)/8 + (11*mt*q4^2*q5*q8)/16 - (5*q3*q7*q8)/16 - (mh*q3^2*q7*q8)/16 - (mh*q4*q7*q8)/4 + (31*mt*q4*q7*q8)/64 - (5*mh^2*q3*q4*q7*q8)/16 - (mh^3*q3^2*q4*q7*q8)/16 + (mh^3*q4^2*q7*q8)/8 + (3*mh^2*mt*q4^2*q7*q8)/16 - (mh*q5*q7*q8)/4 + (mt*q5*q7*q8)/4 + (q3^3*q4^2*q5*q7*s12)/8 - (q3*q4^3*q5*q7*s12)/4 - (q3*q4^2*q5*q8*s12)/8 + (mt*q4^3*q5*q8*s12)/4 + (5*q3^3*q7*q8*s12)/16 + (mh*q3^4*q7*q8*s12)/16 - (7*q3*q4*q7*q8*s12)/8 - (3*mh*q3^2*q4*q7*q8*s12)/8 + (5*mh*q4^2*q7*q8*s12)/8 + (11*mt*q4^2*q7*q8*s12)/16 - (mh^2*q3*q4^2*q7*q8*s12)/8 + (mh^2*mt*q4^3*q7*q8*s12)/4 - (q3*q5*q7*q8*s12)/2 + (mh*q3^2*q5*q7*q8*s12)/2 + mt*q4*q5*q7*q8*s12 + (mh*q4^3*q5*q8*s34)/8 - (3*mt*q4^3*q5*q8*s34)/16 - (mh*q4^2*q7*q8*s34)/8 - (mt*q4^2*q7*q8*s34)/8 - (mh^3*q4^3*q7*q8*s34)/8 - (3*mh^2*mt*q4^3*q7*q8*s34)/16 + (mh*q4*q5*q7*q8*s34)/4 - (mt*q4*q5*q7*q8*s34)/4 - (mh*q4^3*q7*q8*s12*s34)/8 - (3*mt*q4^3*q7*q8*s12*s34)/16 + (mh*q4^3*q7*q8*s34^2)/16 + (5*mt*q4^3*q7*q8*s34^2)/64 - (q3^3*q4^2*q5*q7*s45)/8 + (q3*q4^3*q5*q7*s45)/4 + (q3*q4^2*q5*q8*s45)/8 - (mt*q4^3*q5*q8*s45)/4 - (5*q3^3*q7*q8*s45)/16 - (mh*q3^4*q7*q8*s45)/16 + (25*q3*q4*q7*q8*s45)/16 + (7*mh*q3^2*q4*q7*q8*s45)/16 - (3*mh*q4^2*q7*q8*s45)/4 - (17*mt*q4^2*q7*q8*s45)/8 + (mh^2*q3*q4^2*q7*q8*s45)/8 - (mh^2*mt*q4^3*q7*q8*s45)/4 + (q3*q5*q7*q8*s45)/4 - (mh*q3^2*q5*q7*q8*s45)/4 - 2*mt*q4*q5*q7*q8*s45 + (q3*q4^2*q7*q8*s12*s45)/8 - (mt*q4^3*q7*q8*s12*s45)/4 + (mh*q4^3*q7*q8*s34*s45)/4 + (5*mt*q4^3*q7*q8*s34*s45)/8 + (3*q3^3*q5*q7*q8*s34*s45)/16 + (mh*q3^4*q5*q7*q8*s34*s45)/16 - (q3*q4^2*q7*q8*s45^2)/8 + (mt*q4^3*q7*q8*s45^2)/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule54'==1
#write "calc module nr 54"
#do j=1,1
if (match(mh*q4*q6*q7*q8*s12));
id mh*q4*q6*q7*q8*s12 = (-3*q3^3*q4*q6*q7)/16 + (mh*q3^4*q4*q6*q7)/16 - (q3*q4^2*q6*q7)/8 - (mh*q3^2*q4^2*q6*q7)/4 + (mh*q4^3*q6*q7)/2 + (mt*q4^3*q6*q7)/4 - (q3^3*q4*q8)/8 + (q3*q4^2*q8)/2 - (mt*q4^3*q8)/2 + (7*q3*q4*q6*q8)/16 + (3*mh*q3^2*q4*q6*q8)/16 - (5*mh*q4^2*q6*q8)/8 - (11*mt*q4^2*q6*q8)/16 + (5*q3*q7*q8)/16 - (mh*q3^2*q7*q8)/16 - (mh*q4*q7*q8)/4 - (31*mt*q4*q7*q8)/64 + (5*mh^2*q3*q4*q7*q8)/16 - (mh^3*q3^2*q4*q7*q8)/16 + (mh^3*q4^2*q7*q8)/8 - (3*mh^2*mt*q4^2*q7*q8)/16 - (mh*q6*q7*q8)/4 - (mt*q6*q7*q8)/4 - (q3^3*q4^2*q6*q7*s12)/8 + (q3*q4^3*q6*q7*s12)/4 + (q3*q4^2*q6*q8*s12)/8 - (mt*q4^3*q6*q8*s12)/4 - (5*q3^3*q7*q8*s12)/16 + (mh*q3^4*q7*q8*s12)/16 + (7*q3*q4*q7*q8*s12)/8 - (3*mh*q3^2*q4*q7*q8*s12)/8 + (5*mh*q4^2*q7*q8*s12)/8 - (11*mt*q4^2*q7*q8*s12)/16 + (mh^2*q3*q4^2*q7*q8*s12)/8 - (mh^2*mt*q4^3*q7*q8*s12)/4 + (q3*q6*q7*q8*s12)/2 + (mh*q3^2*q6*q7*q8*s12)/2 - mt*q4*q6*q7*q8*s12 + (mh*q4^3*q6*q8*s34)/8 + (3*mt*q4^3*q6*q8*s34)/16 - (mh*q4^2*q7*q8*s34)/8 + (mt*q4^2*q7*q8*s34)/8 - (mh^3*q4^3*q7*q8*s34)/8 + (3*mh^2*mt*q4^3*q7*q8*s34)/16 + (mh*q4*q6*q7*q8*s34)/4 + (mt*q4*q6*q7*q8*s34)/4 - (mh*q4^3*q7*q8*s12*s34)/8 + (3*mt*q4^3*q7*q8*s12*s34)/16 + (mh*q4^3*q7*q8*s34^2)/16 - (5*mt*q4^3*q7*q8*s34^2)/64 + (q3^3*q4^2*q6*q7*s45)/8 - (q3*q4^3*q6*q7*s45)/4 - (q3*q4^2*q6*q8*s45)/8 + (mt*q4^3*q6*q8*s45)/4 + (5*q3^3*q7*q8*s45)/16 - (mh*q3^4*q7*q8*s45)/16 - (25*q3*q4*q7*q8*s45)/16 + (7*mh*q3^2*q4*q7*q8*s45)/16 - (3*mh*q4^2*q7*q8*s45)/4 + (17*mt*q4^2*q7*q8*s45)/8 - (mh^2*q3*q4^2*q7*q8*s45)/8 + (mh^2*mt*q4^3*q7*q8*s45)/4 - (q3*q6*q7*q8*s45)/4 - (mh*q3^2*q6*q7*q8*s45)/4 + 2*mt*q4*q6*q7*q8*s45 - (q3*q4^2*q7*q8*s12*s45)/8 + (mt*q4^3*q7*q8*s12*s45)/4 + (mh*q4^3*q7*q8*s34*s45)/4 - (5*mt*q4^3*q7*q8*s34*s45)/8 - (3*q3^3*q6*q7*q8*s34*s45)/16 + (mh*q3^4*q6*q7*q8*s34*s45)/16 + (q3*q4^2*q7*q8*s45^2)/8 - (mt*q4^3*q7*q8*s45^2)/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule55'==1
#write "calc module nr 55"
#do j=1,1
if (match(q4*q5*q7*q8*s45^2));
id q4*q5*q7*q8*s45^2 = (q3^2*q4^3*q5)/16 + (q4^2*q5*q7)/16 - (mh*q3*q4^2*q5*q7)/8 + (mh*mt*q4^3*q5*q7)/4 + (q3^2*q4*q8)/8 + (mh*q3^3*q4*q8)/8 - (27*q4^2*q8)/64 - (mh*q3*q4^2*q8)/2 - (mh^2*q4^3*q8)/16 + (3*mh*mt*q4^3*q8)/8 - (q4*q5*q8)/256 - (q7*q8)/256 + (mh^2*q4*q7*q8)/64 - (mh*mt*q4*q7*q8)/64 + (mh^3*mt*q4^2*q7*q8)/16 - (q3^2*q4^2*q5*q7*s12)/8 + (mh*q3^3*q4^2*q5*q7*s12)/8 + (q4^3*q5*q7*s12)/4 - (mh*q3*q4^3*q5*q7*s12)/4 + (q3^2*q4^2*q8*s12)/16 - (q4^3*q8*s12)/8 + (q4^2*q5*q8*s12)/32 + (q4*q7*q8*s12)/64 - (mh^2*q4^2*q7*q8*s12)/16 + (mh*mt*q4^2*q7*q8*s12)/16 - (mh^3*q3*q4^2*q7*q8*s12)/8 + (mh^3*mt*q4^3*q7*q8*s12)/4 - (q4^3*q5*q8*s12^2)/16 - (q4^3*q5*q7*s34)/16 + (9*q4^3*q8*s34)/64 - (q4^2*q5*q8*s34)/128 - (q4*q7*q8*s34)/256 - (mh^3*mt*q4^3*q7*q8*s34)/16 + (q4^3*q5*q8*s12*s34)/32 + (mh^2*q4^3*q7*q8*s12*s34)/16 - (mh*mt*q4^3*q7*q8*s12*s34)/16 - (q4^3*q5*q8*s34^2)/256 + (q4^2*q7*q8*s34^2)/256 - (mh^2*q4^3*q7*q8*s34^2)/64 + (mh*mt*q4^3*q7*q8*s34^2)/64 - (q4^3*q7*q8*s12*s34^2)/64 + (q4^3*q7*q8*s34^3)/256 + (q3^4*q4*q5*q7*s45)/16 - (q3^2*q4^2*q5*q7*s45)/8 - (mh*q3^3*q4^2*q5*q7*s45)/8 + (q4^3*q5*q7*s45)/4 + (mh*q3*q4^3*q5*q7*s45)/4 - (q3^2*q4^2*q8*s45)/16 + (3*q4^3*q8*s45)/16 + (q3^2*q4*q5*q8*s45)/8 - (15*q4^2*q5*q8*s45)/32 - (q3^2*q7*q8*s45)/16 + (9*q4*q7*q8*s45)/32 + (3*mh*q3*q4*q7*q8*s45)/8 - (mh^2*q3^2*q4*q7*q8*s45)/16 + (3*mh^2*q4^2*q7*q8*s45)/16 - (11*mh*mt*q4^2*q7*q8*s45)/8 + (mh^3*q3*q4^2*q7*q8*s45)/8 - (mh^3*mt*q4^3*q7*q8*s45)/4 + (q4^3*q5*q8*s12*s45)/8 + (q3^4*q7*q8*s12*s45)/16 - (3*q3^2*q4*q7*q8*s12*s45)/8 + (11*q4^2*q7*q8*s12*s45)/16 + (mh*q3*q4^2*q7*q8*s12*s45)/8 - (mh*mt*q4^3*q7*q8*s12*s45)/4 + (q4^3*q5*q8*s34*s45)/32 - (3*q4^2*q7*q8*s34*s45)/8 - (3*mh^2*q4^3*q7*q8*s34*s45)/16 + (3*mh*mt*q4^3*q7*q8*s34*s45)/8 - (3*q4^3*q7*q8*s12*s34*s45)/16 + (5*q4^3*q7*q8*s34^2*s45)/32 - (q4^3*q5*q8*s45^2)/16 - (q3^4*q7*q8*s45^2)/16 + (7*q3^2*q4*q7*q8*s45^2)/16 - (13*q4^2*q7*q8*s45^2)/16 - (mh*q3*q4^2*q7*q8*s45^2)/8 + (mh*mt*q4^3*q7*q8*s45^2)/4 + (q3^2*q5*q7*q8*s45^2)/4 + (5*q4^3*q7*q8*s34*s45^2)/16 + (q3^4*q5*q7*q8*s34*s45^2)/16;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule56'==1
#write "calc module nr 56"
#do j=1,1
if (match(q4*q6*q7*q8*s45^2));
id q4*q6*q7*q8*s45^2 = (q3^2*q4^3*q6)/16 + (q4^2*q6*q7)/16 + (mh*q3*q4^2*q6*q7)/8 - (mh*mt*q4^3*q6*q7)/4 + (q3^2*q4*q8)/8 - (mh*q3^3*q4*q8)/8 - (27*q4^2*q8)/64 + (mh*q3*q4^2*q8)/2 - (mh^2*q4^3*q8)/16 - (3*mh*mt*q4^3*q8)/8 - (q4*q6*q8)/256 - (q7*q8)/256 + (mh^2*q4*q7*q8)/64 + (mh*mt*q4*q7*q8)/64 - (mh^3*mt*q4^2*q7*q8)/16 - (q3^2*q4^2*q6*q7*s12)/8 - (mh*q3^3*q4^2*q6*q7*s12)/8 + (q4^3*q6*q7*s12)/4 + (mh*q3*q4^3*q6*q7*s12)/4 + (q3^2*q4^2*q8*s12)/16 - (q4^3*q8*s12)/8 + (q4^2*q6*q8*s12)/32 + (q4*q7*q8*s12)/64 - (mh^2*q4^2*q7*q8*s12)/16 - (mh*mt*q4^2*q7*q8*s12)/16 + (mh^3*q3*q4^2*q7*q8*s12)/8 - (mh^3*mt*q4^3*q7*q8*s12)/4 - (q4^3*q6*q8*s12^2)/16 - (q4^3*q6*q7*s34)/16 + (9*q4^3*q8*s34)/64 - (q4^2*q6*q8*s34)/128 - (q4*q7*q8*s34)/256 + (mh^3*mt*q4^3*q7*q8*s34)/16 + (q4^3*q6*q8*s12*s34)/32 + (mh^2*q4^3*q7*q8*s12*s34)/16 + (mh*mt*q4^3*q7*q8*s12*s34)/16 - (q4^3*q6*q8*s34^2)/256 + (q4^2*q7*q8*s34^2)/256 - (mh^2*q4^3*q7*q8*s34^2)/64 - (mh*mt*q4^3*q7*q8*s34^2)/64 - (q4^3*q7*q8*s12*s34^2)/64 + (q4^3*q7*q8*s34^3)/256 + (q3^4*q4*q6*q7*s45)/16 - (q3^2*q4^2*q6*q7*s45)/8 + (mh*q3^3*q4^2*q6*q7*s45)/8 + (q4^3*q6*q7*s45)/4 - (mh*q3*q4^3*q6*q7*s45)/4 - (q3^2*q4^2*q8*s45)/16 + (3*q4^3*q8*s45)/16 + (q3^2*q4*q6*q8*s45)/8 - (15*q4^2*q6*q8*s45)/32 - (q3^2*q7*q8*s45)/16 + (9*q4*q7*q8*s45)/32 - (3*mh*q3*q4*q7*q8*s45)/8 - (mh^2*q3^2*q4*q7*q8*s45)/16 + (3*mh^2*q4^2*q7*q8*s45)/16 + (11*mh*mt*q4^2*q7*q8*s45)/8 - (mh^3*q3*q4^2*q7*q8*s45)/8 + (mh^3*mt*q4^3*q7*q8*s45)/4 + (q4^3*q6*q8*s12*s45)/8 + (q3^4*q7*q8*s12*s45)/16 - (3*q3^2*q4*q7*q8*s12*s45)/8 + (11*q4^2*q7*q8*s12*s45)/16 - (mh*q3*q4^2*q7*q8*s12*s45)/8 + (mh*mt*q4^3*q7*q8*s12*s45)/4 + (q4^3*q6*q8*s34*s45)/32 - (3*q4^2*q7*q8*s34*s45)/8 - (3*mh^2*q4^3*q7*q8*s34*s45)/16 - (3*mh*mt*q4^3*q7*q8*s34*s45)/8 - (3*q4^3*q7*q8*s12*s34*s45)/16 + (5*q4^3*q7*q8*s34^2*s45)/32 - (q4^3*q6*q8*s45^2)/16 - (q3^4*q7*q8*s45^2)/16 + (7*q3^2*q4*q7*q8*s45^2)/16 - (13*q4^2*q7*q8*s45^2)/16 + (mh*q3*q4^2*q7*q8*s45^2)/8 - (mh*mt*q4^3*q7*q8*s45^2)/4 + (q3^2*q6*q7*q8*s45^2)/4 + (5*q4^3*q7*q8*s34*s45^2)/16 + (q3^4*q6*q7*q8*s34*s45^2)/16;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule57'==1
#write "calc module nr 57"
#do j=1,1
if (match(q4*q5*q7*q8*s12*s45));
id q4*q5*q7*q8*s12*s45 = (q3^2*q4^3*q5)/16 - (q3^2*q4*q5*q7)/8 + (mh*q3^3*q4*q5*q7)/8 + (7*q4^2*q5*q7)/16 - (5*mh*q3*q4^2*q5*q7)/8 - (3*mh*mt*q4^3*q5*q7)/4 + (3*q3^2*q4*q8)/8 + (mh*q3^3*q4*q8)/8 - (43*q4^2*q8)/64 - (mh*q3*q4^2*q8)/2 - (mh^2*q4^3*q8)/16 + (3*mh*mt*q4^3*q8)/8 - (89*q4*q5*q8)/256 + (3*mh*q3*q4*q5*q8)/8 + (mh*mt*q4^2*q5*q8)/4 + (9*q7*q8)/256 - (mh*q3*q7*q8)/8 + (11*mh^2*q4*q7*q8)/64 + (47*mh*mt*q4*q7*q8)/64 - (mh^3*q3*q4*q7*q8)/8 + (13*mh^3*mt*q4^2*q7*q8)/16 + (q3^2*q4^2*q5*q7*s12)/8 + (mh*q3^3*q4^2*q5*q7*s12)/8 + (3*q4^3*q5*q7*s12)/4 - (mh*q3*q4^3*q5*q7*s12)/4 + (q3^2*q4^2*q8*s12)/16 - (q4^3*q8*s12)/8 - (11*q4^2*q5*q8*s12)/32 + (q3^2*q7*q8*s12)/8 + (mh*q3^3*q7*q8*s12)/8 - (45*q4*q7*q8*s12)/64 - (3*mh*q3*q4*q7*q8*s12)/4 - (7*mh^2*q4^2*q7*q8*s12)/16 - (3*mh*mt*q4^2*q7*q8*s12)/16 - (mh^3*q3*q4^2*q7*q8*s12)/8 + (mh^3*mt*q4^3*q7*q8*s12)/4 - (q4^3*q5*q8*s12^2)/16 + (q4^3*q5*q7*s34)/16 - (7*q4^3*q8*s34)/64 + (15*q4^2*q5*q8*s34)/128 - (mh*mt*q4^3*q5*q8*s34)/4 + (17*q4*q7*q8*s34)/256 + (3*mh^2*q4^2*q7*q8*s34)/8 - (mh*mt*q4^2*q7*q8*s34)/4 + (3*mh^3*mt*q4^3*q7*q8*s34)/16 - (3*q4^3*q5*q8*s12*s34)/32 + (q4^2*q7*q8*s12*s34)/8 - (mh^2*q4^3*q7*q8*s12*s34)/16 + (3*mh*mt*q4^3*q7*q8*s12*s34)/16 + (23*q4^3*q5*q8*s34^2)/256 - (33*q4^2*q7*q8*s34^2)/256 + (5*mh^2*q4^3*q7*q8*s34^2)/64 - (7*mh*mt*q4^3*q7*q8*s34^2)/64 + (5*q4^3*q7*q8*s12*s34^2)/64 - (9*q4^3*q7*q8*s34^3)/256 + (q3^4*q4*q5*q7*s45)/16 - (3*q3^2*q4^2*q5*q7*s45)/8 - (mh*q3^3*q4^2*q5*q7*s45)/8 - (q4^3*q5*q7*s45)/4 + (mh*q3*q4^3*q5*q7*s45)/4 - (q3^2*q4^2*q8*s45)/16 + (3*q4^3*q8*s45)/16 + (q3^2*q4*q5*q8*s45)/8 - (3*q4^2*q5*q8*s45)/32 - (3*q3^2*q7*q8*s45)/16 - (mh*q3^3*q7*q8*s45)/8 + (55*q4*q7*q8*s45)/32 + (5*mh*q3*q4*q7*q8*s45)/4 - (mh^2*q3^2*q4*q7*q8*s45)/16 + (9*mh^2*q4^2*q7*q8*s45)/16 - (15*mh*mt*q4^2*q7*q8*s45)/8 + (mh^3*q3*q4^2*q7*q8*s45)/8 - (mh^3*mt*q4^3*q7*q8*s45)/4 - (q5*q7*q8*s45)/4 + (mh*q3*q5*q7*q8*s45)/2 + (q4^3*q5*q8*s12*s45)/8 + (q3^4*q7*q8*s12*s45)/16 - (3*q3^2*q4*q7*q8*s12*s45)/8 + (17*q4^2*q7*q8*s12*s45)/16 + (mh*q3*q4^2*q7*q8*s12*s45)/8 - (mh*mt*q4^3*q7*q8*s12*s45)/4 + (5*q4^3*q5*q8*s34*s45)/32 - (7*q4^2*q7*q8*s34*s45)/8 - (mh^2*q4^3*q7*q8*s34*s45)/16 - (mh*mt*q4^3*q7*q8*s34*s45)/8 - (q3^2*q5*q7*q8*s34*s45)/8 + (mh*q3^3*q5*q7*q8*s34*s45)/8 + (q4*q5*q7*q8*s34*s45)/4 - (q4^3*q7*q8*s12*s34*s45)/16 - (5*q4^3*q7*q8*s34^2*s45)/32 - (q4^3*q5*q8*s45^2)/16 - (q3^4*q7*q8*s45^2)/16 + (7*q3^2*q4*q7*q8*s45^2)/16 - (19*q4^2*q7*q8*s45^2)/16 - (mh*q3*q4^2*q7*q8*s45^2)/8 + (mh*mt*q4^3*q7*q8*s45^2)/4 + (q3^2*q5*q7*q8*s45^2)/4 + (3*q4^3*q7*q8*s34*s45^2)/16 + (q3^4*q5*q7*q8*s34*s45^2)/16;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule58'==1
#write "calc module nr 58"
#do j=1,1
if (match(q4*q6*q7*q8*s12*s45));
id q4*q6*q7*q8*s12*s45 = (q3^2*q4^3*q6)/16 - (q3^2*q4*q6*q7)/8 - (mh*q3^3*q4*q6*q7)/8 + (7*q4^2*q6*q7)/16 + (5*mh*q3*q4^2*q6*q7)/8 + (3*mh*mt*q4^3*q6*q7)/4 + (3*q3^2*q4*q8)/8 - (mh*q3^3*q4*q8)/8 - (43*q4^2*q8)/64 + (mh*q3*q4^2*q8)/2 - (mh^2*q4^3*q8)/16 - (3*mh*mt*q4^3*q8)/8 - (89*q4*q6*q8)/256 - (3*mh*q3*q4*q6*q8)/8 - (mh*mt*q4^2*q6*q8)/4 + (9*q7*q8)/256 + (mh*q3*q7*q8)/8 + (11*mh^2*q4*q7*q8)/64 - (47*mh*mt*q4*q7*q8)/64 + (mh^3*q3*q4*q7*q8)/8 - (13*mh^3*mt*q4^2*q7*q8)/16 + (q3^2*q4^2*q6*q7*s12)/8 - (mh*q3^3*q4^2*q6*q7*s12)/8 + (3*q4^3*q6*q7*s12)/4 + (mh*q3*q4^3*q6*q7*s12)/4 + (q3^2*q4^2*q8*s12)/16 - (q4^3*q8*s12)/8 - (11*q4^2*q6*q8*s12)/32 + (q3^2*q7*q8*s12)/8 - (mh*q3^3*q7*q8*s12)/8 - (45*q4*q7*q8*s12)/64 + (3*mh*q3*q4*q7*q8*s12)/4 - (7*mh^2*q4^2*q7*q8*s12)/16 + (3*mh*mt*q4^2*q7*q8*s12)/16 + (mh^3*q3*q4^2*q7*q8*s12)/8 - (mh^3*mt*q4^3*q7*q8*s12)/4 - (q4^3*q6*q8*s12^2)/16 + (q4^3*q6*q7*s34)/16 - (7*q4^3*q8*s34)/64 + (15*q4^2*q6*q8*s34)/128 + (mh*mt*q4^3*q6*q8*s34)/4 + (17*q4*q7*q8*s34)/256 + (3*mh^2*q4^2*q7*q8*s34)/8 + (mh*mt*q4^2*q7*q8*s34)/4 - (3*mh^3*mt*q4^3*q7*q8*s34)/16 - (3*q4^3*q6*q8*s12*s34)/32 + (q4^2*q7*q8*s12*s34)/8 - (mh^2*q4^3*q7*q8*s12*s34)/16 - (3*mh*mt*q4^3*q7*q8*s12*s34)/16 + (23*q4^3*q6*q8*s34^2)/256 - (33*q4^2*q7*q8*s34^2)/256 + (5*mh^2*q4^3*q7*q8*s34^2)/64 + (7*mh*mt*q4^3*q7*q8*s34^2)/64 + (5*q4^3*q7*q8*s12*s34^2)/64 - (9*q4^3*q7*q8*s34^3)/256 + (q3^4*q4*q6*q7*s45)/16 - (3*q3^2*q4^2*q6*q7*s45)/8 + (mh*q3^3*q4^2*q6*q7*s45)/8 - (q4^3*q6*q7*s45)/4 - (mh*q3*q4^3*q6*q7*s45)/4 - (q3^2*q4^2*q8*s45)/16 + (3*q4^3*q8*s45)/16 + (q3^2*q4*q6*q8*s45)/8 - (3*q4^2*q6*q8*s45)/32 - (3*q3^2*q7*q8*s45)/16 + (mh*q3^3*q7*q8*s45)/8 + (55*q4*q7*q8*s45)/32 - (5*mh*q3*q4*q7*q8*s45)/4 - (mh^2*q3^2*q4*q7*q8*s45)/16 + (9*mh^2*q4^2*q7*q8*s45)/16 + (15*mh*mt*q4^2*q7*q8*s45)/8 - (mh^3*q3*q4^2*q7*q8*s45)/8 + (mh^3*mt*q4^3*q7*q8*s45)/4 - (q6*q7*q8*s45)/4 - (mh*q3*q6*q7*q8*s45)/2 + (q4^3*q6*q8*s12*s45)/8 + (q3^4*q7*q8*s12*s45)/16 - (3*q3^2*q4*q7*q8*s12*s45)/8 + (17*q4^2*q7*q8*s12*s45)/16 - (mh*q3*q4^2*q7*q8*s12*s45)/8 + (mh*mt*q4^3*q7*q8*s12*s45)/4 + (5*q4^3*q6*q8*s34*s45)/32 - (7*q4^2*q7*q8*s34*s45)/8 - (mh^2*q4^3*q7*q8*s34*s45)/16 + (mh*mt*q4^3*q7*q8*s34*s45)/8 - (q3^2*q6*q7*q8*s34*s45)/8 - (mh*q3^3*q6*q7*q8*s34*s45)/8 + (q4*q6*q7*q8*s34*s45)/4 - (q4^3*q7*q8*s12*s34*s45)/16 - (5*q4^3*q7*q8*s34^2*s45)/32 - (q4^3*q6*q8*s45^2)/16 - (q3^4*q7*q8*s45^2)/16 + (7*q3^2*q4*q7*q8*s45^2)/16 - (19*q4^2*q7*q8*s45^2)/16 + (mh*q3*q4^2*q7*q8*s45^2)/8 - (mh*mt*q4^3*q7*q8*s45^2)/4 + (q3^2*q6*q7*q8*s45^2)/4 + (3*q4^3*q7*q8*s34*s45^2)/16 + (q3^4*q6*q7*q8*s34*s45^2)/16;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule59'==1
#write "calc module nr 59"
#do j=1,1
if (match(q5*q7*q8*s34^2*s45^2));
id q5*q7*q8*s34^2*s45^2 = (q4*q5)/4 - (mh*mt*q5*q7)/4 + (mt^2*q5*q7)/4 + (3*mh^2*q8)/16 + (mh*mt*q8)/8 + (mt^2*q8)/16 - (mt^4*q5*q8)/16 + (mh^3*mt^3*q7*q8)/4 - (q5*q7*s12)/4 + mh*mt*q4*q5*q7*s12 - (q8*s12)/8 + (mt^2*q5*q8*s12)/8 - (mh^3*mt*q7*q8*s12)/4 + (mh^2*mt^2*q7*q8*s12)/4 - (mh*mt^3*q7*q8*s12)/4 - (q5*q8*s12^2)/16 - (mh^2*q7*q8*s12^2)/4 + (mh*mt*q7*q8*s12^2)/4 - (mt^2*q7*q8*s12^2)/4 + (q7*q8*s12^3)/4 + (q4^2*q5*s34)/4 - (9*q8*s34)/32 - (mh^2*q4*q8*s34)/8 - (5*mh*mt*q4*q8*s34)/4 - (mt^2*q5*q8*s34)/32 - mh*mt*q4^2*q5*q7*s12*s34 + (q5*q8*s12*s34)/16 - (q4*q5*q8*s12^2*s34)/8 - (q4*q5*q7*s34^2)/16 + (mh*mt*q4^2*q5*q7*s34^2)/4 - (9*q4*q8*s34^2)/64 - (mh^2*q4^2*q8*s34^2)/16 + (3*mh*mt*q4^2*q8*s34^2)/8 - (3*q5*q8*s34^2)/256 - (mh^2*q7*q8*s34^2)/64 + (mh*mt*q7*q8*s34^2)/64 + (mt^2*q7*q8*s34^2)/64 - (mh^3*mt*q4*q7*q8*s34^2)/16 + (q4^2*q5*q7*s12*s34^2)/4 - (q4^2*q8*s12*s34^2)/8 + (3*q4*q5*q8*s12*s34^2)/32 - (q7*q8*s12*s34^2)/64 + (mh^2*q4*q7*q8*s12*s34^2)/16 - (mh*mt*q4*q7*q8*s12*s34^2)/16 + (mh^3*mt*q4^2*q7*q8*s12*s34^2)/4 - (q4^2*q5*q8*s12^2*s34^2)/16 - (q4^2*q5*q7*s34^3)/16 + (9*q4^2*q8*s34^3)/64 - (q4*q5*q8*s34^3)/64 + (q7*q8*s34^3)/128 - (mh^2*q4*q7*q8*s34^3)/32 + (mh*mt*q4*q7*q8*s34^3)/32 - (mh^3*mt*q4^2*q7*q8*s34^3)/16 + (q4^2*q5*q8*s12*s34^3)/32 - (q4*q7*q8*s12*s34^3)/32 + (mh^2*q4^2*q7*q8*s12*s34^3)/16 - (mh*mt*q4^2*q7*q8*s12*s34^3)/16 - (q4^2*q5*q8*s34^4)/256 + (3*q4*q7*q8*s34^4)/256 - (mh^2*q4^2*q7*q8*s34^4)/64 + (mh*mt*q4^2*q7*q8*s34^4)/64 - (q4^2*q7*q8*s12*s34^4)/64 + (q4^2*q7*q8*s34^5)/256 + (3*q5*q7*s45)/4 - mh*mt*q4*q5*q7*s45 - (q8*s45)/16 + (mt^2*q5*q8*s45)/8 + (mh^3*mt*q7*q8*s45)/4 + (mh^2*mt^2*q7*q8*s45)/4 + (q5*q8*s12*s45)/8 + (mh^2*q7*q8*s12*s45)/2 - (mh*mt*q7*q8*s12*s45)/4 - (mt^2*q7*q8*s12*s45)/4 - (q7*q8*s12^2*s45)/2 + mh*mt*q4^2*q5*q7*s34*s45 + (q4*q8*s34*s45)/8 - (7*q5*q8*s34*s45)/16 - mh*mt*q7*q8*s34*s45 - (mt^2*q7*q8*s34*s45)/2 + (q4*q5*q8*s12*s34*s45)/4 - (q7*q8*s12*s34*s45)/2 + (q4^2*q5*q7*s34^2*s45)/4 + (3*q4^2*q8*s34^2*s45)/16 - (13*q4*q5*q8*s34^2*s45)/32 - (7*q7*q8*s34^2*s45)/32 - (3*mh^2*q4*q7*q8*s34^2*s45)/16 - (5*mh*mt*q4*q7*q8*s34^2*s45)/8 - (mh^3*mt*q4^2*q7*q8*s34^2*s45)/4 + (q4^2*q5*q8*s12*s34^2*s45)/8 + (5*q4*q7*q8*s12*s34^2*s45)/16 - (mh*mt*q4^2*q7*q8*s12*s34^2*s45)/4 + (q4^2*q5*q8*s34^3*s45)/32 - (q4*q7*q8*s34^3*s45)/16 - (3*mh^2*q4^2*q7*q8*s34^3*s45)/16 + (3*mh*mt*q4^2*q7*q8*s34^3*s45)/8 - (3*q4^2*q7*q8*s12*s34^3*s45)/16 + (5*q4^2*q7*q8*s34^4*s45)/32 - (q5*q8*s45^2)/16 - (mh^2*q7*q8*s45^2)/4 + (q7*q8*s12*s45^2)/4 - (q4*q5*q8*s34*s45^2)/8 + (q7*q8*s34*s45^2)/2 - (q4^2*q5*q8*s34^2*s45^2)/16 - (3*q4*q7*q8*s34^2*s45^2)/16 + (mh*mt*q4^2*q7*q8*s34^2*s45^2)/4 + (5*q4^2*q7*q8*s34^3*s45^2)/16;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule60'==1
#write "calc module nr 60"
#do j=1,1
if (match(q6*q7*q8*s34^2*s45^2));
id q6*q7*q8*s34^2*s45^2 = (q4*q6)/4 + (mh*mt*q6*q7)/4 + (mt^2*q6*q7)/4 + (3*mh^2*q8)/16 - (mh*mt*q8)/8 + (mt^2*q8)/16 - (mt^4*q6*q8)/16 - (mh^3*mt^3*q7*q8)/4 - (q6*q7*s12)/4 - mh*mt*q4*q6*q7*s12 - (q8*s12)/8 + (mt^2*q6*q8*s12)/8 + (mh^3*mt*q7*q8*s12)/4 + (mh^2*mt^2*q7*q8*s12)/4 + (mh*mt^3*q7*q8*s12)/4 - (q6*q8*s12^2)/16 - (mh^2*q7*q8*s12^2)/4 - (mh*mt*q7*q8*s12^2)/4 - (mt^2*q7*q8*s12^2)/4 + (q7*q8*s12^3)/4 + (q4^2*q6*s34)/4 - (9*q8*s34)/32 - (mh^2*q4*q8*s34)/8 + (5*mh*mt*q4*q8*s34)/4 - (mt^2*q6*q8*s34)/32 + mh*mt*q4^2*q6*q7*s12*s34 + (q6*q8*s12*s34)/16 - (q4*q6*q8*s12^2*s34)/8 - (q4*q6*q7*s34^2)/16 - (mh*mt*q4^2*q6*q7*s34^2)/4 - (9*q4*q8*s34^2)/64 - (mh^2*q4^2*q8*s34^2)/16 - (3*mh*mt*q4^2*q8*s34^2)/8 - (3*q6*q8*s34^2)/256 - (mh^2*q7*q8*s34^2)/64 - (mh*mt*q7*q8*s34^2)/64 + (mt^2*q7*q8*s34^2)/64 + (mh^3*mt*q4*q7*q8*s34^2)/16 + (q4^2*q6*q7*s12*s34^2)/4 - (q4^2*q8*s12*s34^2)/8 + (3*q4*q6*q8*s12*s34^2)/32 - (q7*q8*s12*s34^2)/64 + (mh^2*q4*q7*q8*s12*s34^2)/16 + (mh*mt*q4*q7*q8*s12*s34^2)/16 - (mh^3*mt*q4^2*q7*q8*s12*s34^2)/4 - (q4^2*q6*q8*s12^2*s34^2)/16 - (q4^2*q6*q7*s34^3)/16 + (9*q4^2*q8*s34^3)/64 - (q4*q6*q8*s34^3)/64 + (q7*q8*s34^3)/128 - (mh^2*q4*q7*q8*s34^3)/32 - (mh*mt*q4*q7*q8*s34^3)/32 + (mh^3*mt*q4^2*q7*q8*s34^3)/16 + (q4^2*q6*q8*s12*s34^3)/32 - (q4*q7*q8*s12*s34^3)/32 + (mh^2*q4^2*q7*q8*s12*s34^3)/16 + (mh*mt*q4^2*q7*q8*s12*s34^3)/16 - (q4^2*q6*q8*s34^4)/256 + (3*q4*q7*q8*s34^4)/256 - (mh^2*q4^2*q7*q8*s34^4)/64 - (mh*mt*q4^2*q7*q8*s34^4)/64 - (q4^2*q7*q8*s12*s34^4)/64 + (q4^2*q7*q8*s34^5)/256 + (3*q6*q7*s45)/4 + mh*mt*q4*q6*q7*s45 - (q8*s45)/16 + (mt^2*q6*q8*s45)/8 - (mh^3*mt*q7*q8*s45)/4 + (mh^2*mt^2*q7*q8*s45)/4 + (q6*q8*s12*s45)/8 + (mh^2*q7*q8*s12*s45)/2 + (mh*mt*q7*q8*s12*s45)/4 - (mt^2*q7*q8*s12*s45)/4 - (q7*q8*s12^2*s45)/2 - mh*mt*q4^2*q6*q7*s34*s45 + (q4*q8*s34*s45)/8 - (7*q6*q8*s34*s45)/16 + mh*mt*q7*q8*s34*s45 - (mt^2*q7*q8*s34*s45)/2 + (q4*q6*q8*s12*s34*s45)/4 - (q7*q8*s12*s34*s45)/2 + (q4^2*q6*q7*s34^2*s45)/4 + (3*q4^2*q8*s34^2*s45)/16 - (13*q4*q6*q8*s34^2*s45)/32 - (7*q7*q8*s34^2*s45)/32 - (3*mh^2*q4*q7*q8*s34^2*s45)/16 + (5*mh*mt*q4*q7*q8*s34^2*s45)/8 + (mh^3*mt*q4^2*q7*q8*s34^2*s45)/4 + (q4^2*q6*q8*s12*s34^2*s45)/8 + (5*q4*q7*q8*s12*s34^2*s45)/16 + (mh*mt*q4^2*q7*q8*s12*s34^2*s45)/4 + (q4^2*q6*q8*s34^3*s45)/32 - (q4*q7*q8*s34^3*s45)/16 - (3*mh^2*q4^2*q7*q8*s34^3*s45)/16 - (3*mh*mt*q4^2*q7*q8*s34^3*s45)/8 - (3*q4^2*q7*q8*s12*s34^3*s45)/16 + (5*q4^2*q7*q8*s34^4*s45)/32 - (q6*q8*s45^2)/16 - (mh^2*q7*q8*s45^2)/4 + (q7*q8*s12*s45^2)/4 - (q4*q6*q8*s34*s45^2)/8 + (q7*q8*s34*s45^2)/2 - (q4^2*q6*q8*s34^2*s45^2)/16 - (3*q4*q7*q8*s34^2*s45^2)/16 - (mh*mt*q4^2*q7*q8*s34^2*s45^2)/4 + (5*q4^2*q7*q8*s34^3*s45^2)/16;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule61'==1
#write "calc module nr 61"
#do j=1,1
if (match(q4*q5*q8*s12^4));
id q4*q5*q8*s12^4 = (-5*q5)/4 + 4*mh*mt*q4*q5 - mh^3*mt*q8 - (3*mh^2*mt^2*q8)/4 - (mh*mt^3*q8)/2 - (mt^4*q8)/4 + (mt^6*q5*q8)/4 + 2*q4*q5*s12 - 4*mh*q3*q4*q5*s12 + (3*mh^2*q8*s12)/2 + 4*mh*mt*q8*s12 + 4*mt^2*q8*s12 + 4*mh^3*mt*q4*q8*s12 + 4*mh*mt^3*q5*q8*s12 - 4*mt^4*q5*q8*s12 + q3^2*q4*q5*s12^2 - (15*q8*s12^2)/4 - 4*mh*q3*q8*s12^2 - mh^2*q4*q8*s12^2 + 6*mh*mt*q4*q8*s12^2 - 6*mh*mt*q5*q8*s12^2 + 5*mt^2*q5*q8*s12^2 + q3^2*q8*s12^3 - 2*q4*q8*s12^3 - q5*q8*s12^3 + 2*mh*q3*q5*q8*s12^3 - (3*q4*q5*s34)/4 - (5*mh^2*q8*s34)/16 + (5*mh*mt*q8*s34)/8 + (5*mt^2*q8*s34)/16 - mh^3*mt*q4*q8*s34 - mh*mt^3*q5*q8*s34 + (15*mt^4*q5*q8*s34)/16 - q8*s12*s34 + (3*mh^2*q4*q8*s12*s34)/2 - 4*mh*mt*q4*q8*s12*s34 + mh*mt*q5*q8*s12*s34 - (3*mt^2*q5*q8*s12*s34)/4 + (13*q4*q8*s12^2*s34)/4 - (3*q5*q8*s12^2*s34)/8 + q4*q5*q8*s12^3*s34 + (13*q8*s34^2)/64 - (5*mh^2*q4*q8*s34^2)/16 + (5*mh*mt*q4*q8*s34^2)/8 - (mt^2*q5*q8*s34^2)/64 - (3*q4*q8*s12*s34^2)/2 + (q5*q8*s12*s34^2)/16 - (3*q4*q5*q8*s12^2*s34^2)/8 + (13*q4*q8*s34^3)/64 - (q5*q8*s34^3)/256 + (q4*q5*q8*s12*s34^3)/16 - (q4*q5*q8*s34^4)/256 + 2*q4*q5*s45 + 4*mh*q3*q4*q5*s45 - (5*mh^2*q8*s45)/2 - 5*mh*mt*q8*s45 - (33*mt^2*q8*s45)/4 - 4*mh^3*mt*q4*q8*s45 - 12*mh*mt^3*q5*q8*s45 + 8*mt^4*q5*q8*s45 - 2*q3^2*q4*q5*s12*s45 + 10*q8*s12*s45 + 8*mh*q3*q8*s12*s45 + 2*mh^2*q4*q8*s12*s45 - 16*mh*mt*q4*q8*s12*s45 + 20*mh*mt*q5*q8*s12*s45 - 6*mt^2*q5*q8*s12*s45 - 3*q3^2*q8*s12^2*s45 + 7*q4*q8*s12^2*s45 - 3*q5*q8*s12^2*s45 - 6*mh*q3*q5*q8*s12^2*s45 + 4*q4*q5*q8*s12^3*s45 + (17*q8*s34*s45)/16 - (5*mh^2*q4*q8*s34*s45)/2 + 3*mh*mt*q4*q8*s34*s45 + 3*mh*mt*q5*q8*s34*s45 - (15*mt^2*q5*q8*s34*s45)/4 - 8*q4*q8*s12*s34*s45 + (7*q5*q8*s12*s34*s45)/4 - 4*mh*q3*q5*q8*s12*s34*s45 + q3^2*q5*q8*s12^2*s34*s45 - q4*q5*q8*s12^2*s34*s45 + (25*q4*q8*s34^2*s45)/16 + (9*q5*q8*s34^2*s45)/16 - (q4*q5*q8*s12*s34^2*s45)/4 + (q4*q5*q8*s34^3*s45)/16 + q3^2*q4*q5*s45^2 - (21*q8*s45^2)/4 - 4*mh*q3*q8*s45^2 - mh^2*q4*q8*s45^2 + 10*mh*mt*q4*q8*s45^2 - 14*mh*mt*q5*q8*s45^2 - 3*mt^2*q5*q8*s45^2 + 3*q3^2*q8*s12*s45^2 - 8*q4*q8*s12*s45^2 + 9*q5*q8*s12*s45^2 + 6*mh*q3*q5*q8*s12*s45^2 - 6*q4*q5*q8*s12^2*s45^2 + (23*q4*q8*s34*s45^2)/4 + (13*q5*q8*s34*s45^2)/8 + 4*mh*q3*q5*q8*s34*s45^2 - 2*q3^2*q5*q8*s12*s34*s45^2 - q4*q5*q8*s12*s34*s45^2 - (3*q4*q5*q8*s34^2*s45^2)/8 - q3^2*q8*s45^3 + 3*q4*q8*s45^3 - 5*q5*q8*s45^3 - 2*mh*q3*q5*q8*s45^3 + 4*q4*q5*q8*s12*s45^3 + q3^2*q5*q8*s34*s45^3 + q4*q5*q8*s34*s45^3 - q4*q5*q8*s45^4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule62'==1
#write "calc module nr 62"
#do j=1,1
if (match(q4*q6*q8*s12^4));
id q4*q6*q8*s12^4 = (-5*q6)/4 - 4*mh*mt*q4*q6 + mh^3*mt*q8 - (3*mh^2*mt^2*q8)/4 + (mh*mt^3*q8)/2 - (mt^4*q8)/4 + (mt^6*q6*q8)/4 + 2*q4*q6*s12 + 4*mh*q3*q4*q6*s12 + (3*mh^2*q8*s12)/2 - 4*mh*mt*q8*s12 + 4*mt^2*q8*s12 - 4*mh^3*mt*q4*q8*s12 - 4*mh*mt^3*q6*q8*s12 - 4*mt^4*q6*q8*s12 + q3^2*q4*q6*s12^2 - (15*q8*s12^2)/4 + 4*mh*q3*q8*s12^2 - mh^2*q4*q8*s12^2 - 6*mh*mt*q4*q8*s12^2 + 6*mh*mt*q6*q8*s12^2 + 5*mt^2*q6*q8*s12^2 + q3^2*q8*s12^3 - 2*q4*q8*s12^3 - q6*q8*s12^3 - 2*mh*q3*q6*q8*s12^3 - (3*q4*q6*s34)/4 - (5*mh^2*q8*s34)/16 - (5*mh*mt*q8*s34)/8 + (5*mt^2*q8*s34)/16 + mh^3*mt*q4*q8*s34 + mh*mt^3*q6*q8*s34 + (15*mt^4*q6*q8*s34)/16 - q8*s12*s34 + (3*mh^2*q4*q8*s12*s34)/2 + 4*mh*mt*q4*q8*s12*s34 - mh*mt*q6*q8*s12*s34 - (3*mt^2*q6*q8*s12*s34)/4 + (13*q4*q8*s12^2*s34)/4 - (3*q6*q8*s12^2*s34)/8 + q4*q6*q8*s12^3*s34 + (13*q8*s34^2)/64 - (5*mh^2*q4*q8*s34^2)/16 - (5*mh*mt*q4*q8*s34^2)/8 - (mt^2*q6*q8*s34^2)/64 - (3*q4*q8*s12*s34^2)/2 + (q6*q8*s12*s34^2)/16 - (3*q4*q6*q8*s12^2*s34^2)/8 + (13*q4*q8*s34^3)/64 - (q6*q8*s34^3)/256 + (q4*q6*q8*s12*s34^3)/16 - (q4*q6*q8*s34^4)/256 + 2*q4*q6*s45 - 4*mh*q3*q4*q6*s45 - (5*mh^2*q8*s45)/2 + 5*mh*mt*q8*s45 - (33*mt^2*q8*s45)/4 + 4*mh^3*mt*q4*q8*s45 + 12*mh*mt^3*q6*q8*s45 + 8*mt^4*q6*q8*s45 - 2*q3^2*q4*q6*s12*s45 + 10*q8*s12*s45 - 8*mh*q3*q8*s12*s45 + 2*mh^2*q4*q8*s12*s45 + 16*mh*mt*q4*q8*s12*s45 - 20*mh*mt*q6*q8*s12*s45 - 6*mt^2*q6*q8*s12*s45 - 3*q3^2*q8*s12^2*s45 + 7*q4*q8*s12^2*s45 - 3*q6*q8*s12^2*s45 + 6*mh*q3*q6*q8*s12^2*s45 + 4*q4*q6*q8*s12^3*s45 + (17*q8*s34*s45)/16 - (5*mh^2*q4*q8*s34*s45)/2 - 3*mh*mt*q4*q8*s34*s45 - 3*mh*mt*q6*q8*s34*s45 - (15*mt^2*q6*q8*s34*s45)/4 - 8*q4*q8*s12*s34*s45 + (7*q6*q8*s12*s34*s45)/4 + 4*mh*q3*q6*q8*s12*s34*s45 + q3^2*q6*q8*s12^2*s34*s45 - q4*q6*q8*s12^2*s34*s45 + (25*q4*q8*s34^2*s45)/16 + (9*q6*q8*s34^2*s45)/16 - (q4*q6*q8*s12*s34^2*s45)/4 + (q4*q6*q8*s34^3*s45)/16 + q3^2*q4*q6*s45^2 - (21*q8*s45^2)/4 + 4*mh*q3*q8*s45^2 - mh^2*q4*q8*s45^2 - 10*mh*mt*q4*q8*s45^2 + 14*mh*mt*q6*q8*s45^2 - 3*mt^2*q6*q8*s45^2 + 3*q3^2*q8*s12*s45^2 - 8*q4*q8*s12*s45^2 + 9*q6*q8*s12*s45^2 - 6*mh*q3*q6*q8*s12*s45^2 - 6*q4*q6*q8*s12^2*s45^2 + (23*q4*q8*s34*s45^2)/4 + (13*q6*q8*s34*s45^2)/8 - 4*mh*q3*q6*q8*s34*s45^2 - 2*q3^2*q6*q8*s12*s34*s45^2 - q4*q6*q8*s12*s34*s45^2 - (3*q4*q6*q8*s34^2*s45^2)/8 - q3^2*q8*s45^3 + 3*q4*q8*s45^3 - 5*q6*q8*s45^3 + 2*mh*q3*q6*q8*s45^3 + 4*q4*q6*q8*s12*s45^3 + q3^2*q6*q8*s34*s45^3 + q4*q6*q8*s34*s45^3 - q4*q6*q8*s45^4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule63'==1
#write "calc module nr 63"
#do j=1,1
if (match(mt^2*q6*q7*q8*s34^2*s45));
id mt^2*q6*q7*q8*s34^2*s45 = -(q4*q6)/4 + (3*mh*mt*q6*q7)/4 + (5*mt^2*q6*q7)/4 + (5*mh^2*q8)/16 + (mh*mt*q8)/8 - (9*mt^2*q8)/16 + mh*mt^3*q6*q8 + (9*mt^4*q6*q8)/16 - (3*mh^3*mt^3*q7*q8)/4 - (q6*q7*s12)/4 + mh*mt*q4*q6*q7*s12 - (3*q8*s12)/8 + (3*mt^2*q6*q8*s12)/8 - (mh^3*mt*q7*q8*s12)/4 + (5*mh^2*mt^2*q7*q8*s12)/4 + (3*mh*mt^3*q7*q8*s12)/4 + (q6*q8*s12^2)/16 - (mh^2*q7*q8*s12^2)/4 + (mh*mt*q7*q8*s12^2)/4 - (5*mt^2*q7*q8*s12^2)/4 + (q7*q8*s12^3)/4 - (q4^2*q6*s34)/4 - (7*q8*s34)/32 + (mh^2*q4*q8*s34)/8 - (5*mh*mt*q4*q8*s34)/4 - mh*mt*q6*q8*s34 - (31*mt^2*q6*q8*s34)/32 + mh*mt^3*q7*q8*s34 - mh*mt*q4^2*q6*q7*s12*s34 - (q6*q8*s12*s34)/16 - mh*mt*q7*q8*s12*s34 - mt^2*q7*q8*s12*s34 + (q4*q6*q8*s12^2*s34)/8 + q7*q8*s12^2*s34 - (q4*q6*q7*s34^2)/16 - (3*mh*mt*q4^2*q6*q7*s34^2)/4 - (7*q4*q8*s34^2)/64 + (mh^2*q4^2*q8*s34^2)/16 + (3*mh*mt*q4^2*q8*s34^2)/8 + (43*q6*q8*s34^2)/256 + (3*mh*mt*q4*q6*q8*s34^2)/4 - (5*mh^2*q7*q8*s34^2)/64 + (9*mh*mt*q7*q8*s34^2)/64 - (7*mt^2*q7*q8*s34^2)/64 + (3*mh^3*mt*q4*q7*q8*s34^2)/16 - (3*q4^2*q6*q7*s12*s34^2)/4 + (q4^2*q8*s12*s34^2)/8 + (q4*q6*q8*s12*s34^2)/32 + (11*q7*q8*s12*s34^2)/64 + (mh^2*q4*q7*q8*s12*s34^2)/16 - (13*mh*mt*q4*q7*q8*s12*s34^2)/16 + (mh^3*mt*q4^2*q7*q8*s12*s34^2)/4 + (q4^2*q6*q8*s12^2*s34^2)/16 - (q4^2*q6*q7*s34^3)/16 + (7*q4^2*q8*s34^3)/64 + (5*q4*q6*q8*s34^3)/64 - (mh*mt*q4^2*q6*q8*s34^3)/4 + (q7*q8*s34^3)/128 - (5*mh^2*q4*q7*q8*s34^3)/32 + (mh*mt*q4*q7*q8*s34^3)/32 + (3*mh^3*mt*q4^2*q7*q8*s34^3)/16 + (3*q4^2*q6*q8*s12*s34^3)/32 + (3*q4*q7*q8*s12*s34^3)/32 + (mh^2*q4^2*q7*q8*s12*s34^3)/16 + (3*mh*mt*q4^2*q7*q8*s12*s34^3)/16 - (23*q4^2*q6*q8*s34^4)/256 + (11*q4*q7*q8*s34^4)/256 - (5*mh^2*q4^2*q7*q8*s34^4)/64 - (7*mh*mt*q4^2*q7*q8*s34^4)/64 - (5*q4^2*q7*q8*s12*s34^4)/64 + (9*q4^2*q7*q8*s34^5)/256 - (q6*q7*s45)/4 - mh*mt*q4*q6*q7*s45 + (q8*s45)/16 - (5*mt^2*q6*q8*s45)/8 + (mh^3*mt*q7*q8*s45)/4 + (mh^2*mt^2*q7*q8*s45)/4 - (q6*q8*s12*s45)/8 + (mh^2*q7*q8*s12*s45)/2 - (mh*mt*q7*q8*s12*s45)/4 - (mt^2*q7*q8*s12*s45)/4 - (q7*q8*s12^2*s45)/2 + mh*mt*q4^2*q6*q7*s34*s45 - (q4*q8*s34*s45)/8 + (7*q6*q8*s34*s45)/16 - (mt^2*q7*q8*s34*s45)/2 - (q4*q6*q8*s12*s34*s45)/4 - (3*q7*q8*s12*s34*s45)/2 + (q4^2*q6*q7*s34^2*s45)/4 - (3*q4^2*q8*s34^2*s45)/16 + (9*q4*q6*q8*s34^2*s45)/32 - (7*q7*q8*s34^2*s45)/32 + (mh^2*q4*q7*q8*s34^2*s45)/16 - (mh*mt*q4*q7*q8*s34^2*s45)/8 - (mh^3*mt*q4^2*q7*q8*s34^2*s45)/4 - (q4^2*q6*q8*s12*s34^2*s45)/8 - (7*q4*q7*q8*s12*s34^2*s45)/16 - (mh*mt*q4^2*q7*q8*s12*s34^2*s45)/4 + q6*q7*q8*s12*s34^2*s45 - (5*q4^2*q6*q8*s34^3*s45)/32 - (q4*q7*q8*s34^3*s45)/16 + (mh^2*q4^2*q7*q8*s34^3*s45)/16 - (mh*mt*q4^2*q7*q8*s34^3*s45)/8 + (q4^2*q7*q8*s12*s34^3*s45)/16 + (5*q4^2*q7*q8*s34^4*s45)/32 + (q6*q8*s45^2)/16 - (mh^2*q7*q8*s45^2)/4 + (q7*q8*s12*s45^2)/4 + (q4*q6*q8*s34*s45^2)/8 + (q7*q8*s34*s45^2)/2 + (q4^2*q6*q8*s34^2*s45^2)/16 + (5*q4*q7*q8*s34^2*s45^2)/16 + (mh*mt*q4^2*q7*q8*s34^2*s45^2)/4 - (3*q4^2*q7*q8*s34^3*s45^2)/16;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule64'==1
#write "calc module nr 64"
#do j=1,1
if (match(mt^2*q5*q7*q8*s34^2*s45));
id mt^2*q5*q7*q8*s34^2*s45 = -(q4*q5)/4 - (3*mh*mt*q5*q7)/4 + (5*mt^2*q5*q7)/4 + (5*mh^2*q8)/16 - (mh*mt*q8)/8 - (9*mt^2*q8)/16 - mh*mt^3*q5*q8 + (9*mt^4*q5*q8)/16 + (3*mh^3*mt^3*q7*q8)/4 - (q5*q7*s12)/4 - mh*mt*q4*q5*q7*s12 - (3*q8*s12)/8 + (3*mt^2*q5*q8*s12)/8 + (mh^3*mt*q7*q8*s12)/4 + (5*mh^2*mt^2*q7*q8*s12)/4 - (3*mh*mt^3*q7*q8*s12)/4 + (q5*q8*s12^2)/16 - (mh^2*q7*q8*s12^2)/4 - (mh*mt*q7*q8*s12^2)/4 - (5*mt^2*q7*q8*s12^2)/4 + (q7*q8*s12^3)/4 - (q4^2*q5*s34)/4 - (7*q8*s34)/32 + (mh^2*q4*q8*s34)/8 + (5*mh*mt*q4*q8*s34)/4 + mh*mt*q5*q8*s34 - (31*mt^2*q5*q8*s34)/32 - mh*mt^3*q7*q8*s34 + mh*mt*q4^2*q5*q7*s12*s34 - (q5*q8*s12*s34)/16 + mh*mt*q7*q8*s12*s34 - mt^2*q7*q8*s12*s34 + (q4*q5*q8*s12^2*s34)/8 + q7*q8*s12^2*s34 - (q4*q5*q7*s34^2)/16 + (3*mh*mt*q4^2*q5*q7*s34^2)/4 - (7*q4*q8*s34^2)/64 + (mh^2*q4^2*q8*s34^2)/16 - (3*mh*mt*q4^2*q8*s34^2)/8 + (43*q5*q8*s34^2)/256 - (3*mh*mt*q4*q5*q8*s34^2)/4 - (5*mh^2*q7*q8*s34^2)/64 - (9*mh*mt*q7*q8*s34^2)/64 - (7*mt^2*q7*q8*s34^2)/64 - (3*mh^3*mt*q4*q7*q8*s34^2)/16 - (3*q4^2*q5*q7*s12*s34^2)/4 + (q4^2*q8*s12*s34^2)/8 + (q4*q5*q8*s12*s34^2)/32 + (11*q7*q8*s12*s34^2)/64 + (mh^2*q4*q7*q8*s12*s34^2)/16 + (13*mh*mt*q4*q7*q8*s12*s34^2)/16 - (mh^3*mt*q4^2*q7*q8*s12*s34^2)/4 + (q4^2*q5*q8*s12^2*s34^2)/16 - (q4^2*q5*q7*s34^3)/16 + (7*q4^2*q8*s34^3)/64 + (5*q4*q5*q8*s34^3)/64 + (mh*mt*q4^2*q5*q8*s34^3)/4 + (q7*q8*s34^3)/128 - (5*mh^2*q4*q7*q8*s34^3)/32 - (mh*mt*q4*q7*q8*s34^3)/32 - (3*mh^3*mt*q4^2*q7*q8*s34^3)/16 + (3*q4^2*q5*q8*s12*s34^3)/32 + (3*q4*q7*q8*s12*s34^3)/32 + (mh^2*q4^2*q7*q8*s12*s34^3)/16 - (3*mh*mt*q4^2*q7*q8*s12*s34^3)/16 - (23*q4^2*q5*q8*s34^4)/256 + (11*q4*q7*q8*s34^4)/256 - (5*mh^2*q4^2*q7*q8*s34^4)/64 + (7*mh*mt*q4^2*q7*q8*s34^4)/64 - (5*q4^2*q7*q8*s12*s34^4)/64 + (9*q4^2*q7*q8*s34^5)/256 - (q5*q7*s45)/4 + mh*mt*q4*q5*q7*s45 + (q8*s45)/16 - (5*mt^2*q5*q8*s45)/8 - (mh^3*mt*q7*q8*s45)/4 + (mh^2*mt^2*q7*q8*s45)/4 - (q5*q8*s12*s45)/8 + (mh^2*q7*q8*s12*s45)/2 + (mh*mt*q7*q8*s12*s45)/4 - (mt^2*q7*q8*s12*s45)/4 - (q7*q8*s12^2*s45)/2 - mh*mt*q4^2*q5*q7*s34*s45 - (q4*q8*s34*s45)/8 + (7*q5*q8*s34*s45)/16 - (mt^2*q7*q8*s34*s45)/2 - (q4*q5*q8*s12*s34*s45)/4 - (3*q7*q8*s12*s34*s45)/2 + (q4^2*q5*q7*s34^2*s45)/4 - (3*q4^2*q8*s34^2*s45)/16 + (9*q4*q5*q8*s34^2*s45)/32 - (7*q7*q8*s34^2*s45)/32 + (mh^2*q4*q7*q8*s34^2*s45)/16 + (mh*mt*q4*q7*q8*s34^2*s45)/8 + (mh^3*mt*q4^2*q7*q8*s34^2*s45)/4 - (q4^2*q5*q8*s12*s34^2*s45)/8 - (7*q4*q7*q8*s12*s34^2*s45)/16 + (mh*mt*q4^2*q7*q8*s12*s34^2*s45)/4 + q5*q7*q8*s12*s34^2*s45 - (5*q4^2*q5*q8*s34^3*s45)/32 - (q4*q7*q8*s34^3*s45)/16 + (mh^2*q4^2*q7*q8*s34^3*s45)/16 + (mh*mt*q4^2*q7*q8*s34^3*s45)/8 + (q4^2*q7*q8*s12*s34^3*s45)/16 + (5*q4^2*q7*q8*s34^4*s45)/32 + (q5*q8*s45^2)/16 - (mh^2*q7*q8*s45^2)/4 + (q7*q8*s12*s45^2)/4 + (q4*q5*q8*s34*s45^2)/8 + (q7*q8*s34*s45^2)/2 + (q4^2*q5*q8*s34^2*s45^2)/16 + (5*q4*q7*q8*s34^2*s45^2)/16 - (mh*mt*q4^2*q7*q8*s34^2*s45^2)/4 - (3*q4^2*q7*q8*s34^3*s45^2)/16;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule65'==1
#write "calc module nr 65"
#do j=1,1
if (match(mh*mt^2*q5*q7*q8*s12^2));
id mh*mt^2*q5*q7*q8*s12^2 = -(mh*q5*q7)/8 + (mt*q5*q7)/8 + (mh*q8)/8 + (mt*q8)/8 + (mh*mt^2*q5*q8)/8 - (mt^3*q5*q8)/8 + (mh^3*mt^2*q7*q8)/8 + (mh^2*mt^3*q7*q8)/8 - (3*mh*q4*q5*q7*s12)/2 + (5*mt*q4*q5*q7*s12)/2 - (5*mh*q5*q8*s12)/8 + (3*mt*q5*q8*s12)/8 + (3*mh^3*q7*q8*s12)/8 + (mh^2*mt*q7*q8*s12)/8 - (mh*mt^2*q7*q8*s12)/8 - (3*mt^3*q7*q8*s12)/8 - (7*mh*q7*q8*s12^2)/8 - (3*mt*q7*q8*s12^2)/8 + mt^3*q5*q7*q8*s12^2 + mh*q5*q7*q8*s12^3 - mt*q5*q7*q8*s12^3 + (mh*q4*q5*q7*s34)/8 - (3*mt*q4*q5*q7*s34)/8 + (mh*q4*q8*s34)/4 - (mt*q4*q8*s34)/4 + (7*mh*q5*q8*s34)/32 - (5*mt*q5*q8*s34)/32 - (mh^3*q7*q8*s34)/32 + (mh^2*mt*q7*q8*s34)/32 - (3*mh*mt^2*q7*q8*s34)/32 + (3*mt^3*q7*q8*s34)/32 - mh*q4^2*q5*q7*s12*s34 + mt*q4^2*q5*q7*s12*s34 + (5*mh*q4*q5*q8*s12*s34)/8 - (7*mt*q4*q5*q8*s12*s34)/8 - (mh*q7*q8*s12*s34)/32 - (7*mt*q7*q8*s12*s34)/32 + (5*mh^3*q4*q7*q8*s12*s34)/8 + (3*mh^2*mt*q4*q7*q8*s12*s34)/8 + (mh*mt^2*q5*q7*q8*s12*s34)/2 - (mt^3*q5*q7*q8*s12*s34)/2 - (mh*q5*q7*q8*s12^2*s34)/2 + (mt*q5*q7*q8*s12^2*s34)/2 + (mh*q4^2*q5*q7*s34^2)/4 - (mt*q4^2*q5*q7*s34^2)/4 + (mh*q4^2*q8*s34^2)/2 + (mt*q4^2*q8*s34^2)/2 - (11*mh*q4*q5*q8*s34^2)/32 + (13*mt*q4*q5*q8*s34^2)/32 - (mh*q7*q8*s34^2)/128 - (3*mt*q7*q8*s34^2)/128 - (3*mh^3*q4*q7*q8*s34^2)/32 - (mh^2*mt*q4*q7*q8*s34^2)/32 + (mh*q4^2*q5*q8*s12*s34^2)/4 - (mt*q4^2*q5*q8*s12*s34^2)/4 - (3*mh*q4*q7*q8*s12*s34^2)/32 - (mt*q4*q7*q8*s12*s34^2)/32 + (mh^3*q4^2*q7*q8*s12*s34^2)/4 + (mh^2*mt*q4^2*q7*q8*s12*s34^2)/4 - (mh*q4^2*q5*q8*s34^3)/16 + (mt*q4^2*q5*q8*s34^3)/16 + (mh*q4*q7*q8*s34^3)/128 - (mt*q4*q7*q8*s34^3)/128 - (mh^3*q4^2*q7*q8*s34^3)/16 - (mh^2*mt*q4^2*q7*q8*s34^3)/16 - (mh*q4^2*q7*q8*s12*s34^3)/16 - (mt*q4^2*q7*q8*s12*s34^3)/16 + (mh*q4^2*q7*q8*s34^4)/64 + (mt*q4^2*q7*q8*s34^4)/64 - (mh*q4*q5*q7*s45)/4 + (5*mt*q4*q5*q7*s45)/4 - (mh*q4*q8*s45)/2 + (3*mt*q4*q8*s45)/2 + (mh*q5*q8*s45)/16 + (3*mt*q5*q8*s45)/16 + (mh^3*q7*q8*s45)/16 - (3*mh^2*mt*q7*q8*s45)/16 + (mh*mt^2*q7*q8*s45)/16 - (7*mt^3*q7*q8*s45)/16 - mh*q4^2*q5*q7*s12*s45 + 5*mt*q4^2*q5*q7*s12*s45 + (mh*q4*q5*q8*s12*s45)/4 - (5*mt*q4*q5*q8*s12*s45)/4 - (3*mh*q7*q8*s12*s45)/16 + (25*mt*q7*q8*s12*s45)/16 + (mh^3*q4*q7*q8*s12*s45)/4 - (3*mh^2*mt*q4*q7*q8*s12*s45)/4 - mh*q5*q7*q8*s12^2*s45 - mt*q5*q7*q8*s12^2*s45 - (3*mh*q4^2*q5*q7*s34*s45)/4 + (7*mt*q4^2*q5*q7*s34*s45)/4 + (mh*q4^2*q8*s34*s45)/2 - (3*mt*q4^2*q8*s34*s45)/2 + (mh*q4*q5*q8*s34*s45)/4 - (mt*q4*q5*q8*s34*s45)/4 - (9*mh*q7*q8*s34*s45)/32 - (13*mt*q7*q8*s34*s45)/32 + (mh^3*q4*q7*q8*s34*s45)/4 - (mh^2*mt*q4*q7*q8*s34*s45)/4 + (mh*q4^2*q5*q8*s12*s34*s45)/4 - (5*mt*q4^2*q5*q8*s12*s34*s45)/4 - (7*mh*q4*q7*q8*s12*s34*s45)/4 - (mt*q4*q7*q8*s12*s34*s45)/4 + (mh^3*q4^2*q7*q8*s12*s34*s45)/4 - (3*mh^2*mt*q4^2*q7*q8*s12*s34*s45)/4 + (mh*q5*q7*q8*s12*s34*s45)/2 + (mt*q5*q7*q8*s12*s34*s45)/2 - (13*mh*q4^2*q5*q8*s34^2*s45)/16 + (25*mt*q4^2*q5*q8*s34^2*s45)/16 - (9*mh*q4*q7*q8*s34^2*s45)/64 - (21*mt*q4*q7*q8*s34^2*s45)/64 + (3*mh^3*q4^2*q7*q8*s34^2*s45)/16 - (mh^2*mt*q4^2*q7*q8*s34^2*s45)/16 - (mt*q5*q7*q8*s34^2*s45)/4 + (3*mh*q4^2*q7*q8*s12*s34^2*s45)/16 - (mt*q4^2*q7*q8*s12*s34^2*s45)/16 + (9*mh*q4^2*q7*q8*s34^3*s45)/64 + (21*mt*q4^2*q7*q8*s34^3*s45)/64 + mh*q4^2*q5*q7*s45^2 - 3*mt*q4^2*q5*q7*s45^2 - (mh*q4*q5*q8*s45^2)/4 - (mt*q4*q5*q8*s45^2)/4 - (mh*q7*q8*s45^2)/8 + (7*mt*q7*q8*s45^2)/8 - (mh^3*q4*q7*q8*s45^2)/4 + (mh^2*mt*q4*q7*q8*s45^2)/4 - (mh*q4*q7*q8*s12*s45^2)/4 + (9*mt*q4*q7*q8*s12*s45^2)/4 - (mh*q4^2*q5*q8*s34*s45^2)/4 + (7*mt*q4^2*q5*q8*s34*s45^2)/4 + (3*mh*q4*q7*q8*s34*s45^2)/8 + (13*mt*q4*q7*q8*s34*s45^2)/8 - (mh^3*q4^2*q7*q8*s34*s45^2)/4 + (mh^2*mt*q4^2*q7*q8*s34*s45^2)/4 - (mh*q4^2*q7*q8*s12*s34*s45^2)/4 + (mt*q4^2*q7*q8*s12*s34*s45^2)/4 - (3*mh*q4^2*q7*q8*s34^2*s45^2)/8 - (5*mt*q4^2*q7*q8*s34^2*s45^2)/8 + (mh*q4*q7*q8*s45^3)/4 - (7*mt*q4*q7*q8*s45^3)/4 + (mh*q4^2*q7*q8*s34*s45^3)/4 + (mt*q4^2*q7*q8*s34*s45^3)/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule66'==1
#write "calc module nr 66"
#do j=1,1
if (match(mh*mt^2*q6*q7*q8*s12^2));
id mh*mt^2*q6*q7*q8*s12^2 = -(mh*q6*q7)/8 - (mt*q6*q7)/8 + (mh*q8)/8 - (mt*q8)/8 + (mh*mt^2*q6*q8)/8 + (mt^3*q6*q8)/8 + (mh^3*mt^2*q7*q8)/8 - (mh^2*mt^3*q7*q8)/8 - (3*mh*q4*q6*q7*s12)/2 - (5*mt*q4*q6*q7*s12)/2 - (5*mh*q6*q8*s12)/8 - (3*mt*q6*q8*s12)/8 + (3*mh^3*q7*q8*s12)/8 - (mh^2*mt*q7*q8*s12)/8 - (mh*mt^2*q7*q8*s12)/8 + (3*mt^3*q7*q8*s12)/8 - (7*mh*q7*q8*s12^2)/8 + (3*mt*q7*q8*s12^2)/8 - mt^3*q6*q7*q8*s12^2 + mh*q6*q7*q8*s12^3 + mt*q6*q7*q8*s12^3 + (mh*q4*q6*q7*s34)/8 + (3*mt*q4*q6*q7*s34)/8 + (mh*q4*q8*s34)/4 + (mt*q4*q8*s34)/4 + (7*mh*q6*q8*s34)/32 + (5*mt*q6*q8*s34)/32 - (mh^3*q7*q8*s34)/32 - (mh^2*mt*q7*q8*s34)/32 - (3*mh*mt^2*q7*q8*s34)/32 - (3*mt^3*q7*q8*s34)/32 - mh*q4^2*q6*q7*s12*s34 - mt*q4^2*q6*q7*s12*s34 + (5*mh*q4*q6*q8*s12*s34)/8 + (7*mt*q4*q6*q8*s12*s34)/8 - (mh*q7*q8*s12*s34)/32 + (7*mt*q7*q8*s12*s34)/32 + (5*mh^3*q4*q7*q8*s12*s34)/8 - (3*mh^2*mt*q4*q7*q8*s12*s34)/8 + (mh*mt^2*q6*q7*q8*s12*s34)/2 + (mt^3*q6*q7*q8*s12*s34)/2 - (mh*q6*q7*q8*s12^2*s34)/2 - (mt*q6*q7*q8*s12^2*s34)/2 + (mh*q4^2*q6*q7*s34^2)/4 + (mt*q4^2*q6*q7*s34^2)/4 + (mh*q4^2*q8*s34^2)/2 - (mt*q4^2*q8*s34^2)/2 - (11*mh*q4*q6*q8*s34^2)/32 - (13*mt*q4*q6*q8*s34^2)/32 - (mh*q7*q8*s34^2)/128 + (3*mt*q7*q8*s34^2)/128 - (3*mh^3*q4*q7*q8*s34^2)/32 + (mh^2*mt*q4*q7*q8*s34^2)/32 + (mh*q4^2*q6*q8*s12*s34^2)/4 + (mt*q4^2*q6*q8*s12*s34^2)/4 - (3*mh*q4*q7*q8*s12*s34^2)/32 + (mt*q4*q7*q8*s12*s34^2)/32 + (mh^3*q4^2*q7*q8*s12*s34^2)/4 - (mh^2*mt*q4^2*q7*q8*s12*s34^2)/4 - (mh*q4^2*q6*q8*s34^3)/16 - (mt*q4^2*q6*q8*s34^3)/16 + (mh*q4*q7*q8*s34^3)/128 + (mt*q4*q7*q8*s34^3)/128 - (mh^3*q4^2*q7*q8*s34^3)/16 + (mh^2*mt*q4^2*q7*q8*s34^3)/16 - (mh*q4^2*q7*q8*s12*s34^3)/16 + (mt*q4^2*q7*q8*s12*s34^3)/16 + (mh*q4^2*q7*q8*s34^4)/64 - (mt*q4^2*q7*q8*s34^4)/64 - (mh*q4*q6*q7*s45)/4 - (5*mt*q4*q6*q7*s45)/4 - (mh*q4*q8*s45)/2 - (3*mt*q4*q8*s45)/2 + (mh*q6*q8*s45)/16 - (3*mt*q6*q8*s45)/16 + (mh^3*q7*q8*s45)/16 + (3*mh^2*mt*q7*q8*s45)/16 + (mh*mt^2*q7*q8*s45)/16 + (7*mt^3*q7*q8*s45)/16 - mh*q4^2*q6*q7*s12*s45 - 5*mt*q4^2*q6*q7*s12*s45 + (mh*q4*q6*q8*s12*s45)/4 + (5*mt*q4*q6*q8*s12*s45)/4 - (3*mh*q7*q8*s12*s45)/16 - (25*mt*q7*q8*s12*s45)/16 + (mh^3*q4*q7*q8*s12*s45)/4 + (3*mh^2*mt*q4*q7*q8*s12*s45)/4 - mh*q6*q7*q8*s12^2*s45 + mt*q6*q7*q8*s12^2*s45 - (3*mh*q4^2*q6*q7*s34*s45)/4 - (7*mt*q4^2*q6*q7*s34*s45)/4 + (mh*q4^2*q8*s34*s45)/2 + (3*mt*q4^2*q8*s34*s45)/2 + (mh*q4*q6*q8*s34*s45)/4 + (mt*q4*q6*q8*s34*s45)/4 - (9*mh*q7*q8*s34*s45)/32 + (13*mt*q7*q8*s34*s45)/32 + (mh^3*q4*q7*q8*s34*s45)/4 + (mh^2*mt*q4*q7*q8*s34*s45)/4 + (mh*q4^2*q6*q8*s12*s34*s45)/4 + (5*mt*q4^2*q6*q8*s12*s34*s45)/4 - (7*mh*q4*q7*q8*s12*s34*s45)/4 + (mt*q4*q7*q8*s12*s34*s45)/4 + (mh^3*q4^2*q7*q8*s12*s34*s45)/4 + (3*mh^2*mt*q4^2*q7*q8*s12*s34*s45)/4 + (mh*q6*q7*q8*s12*s34*s45)/2 - (mt*q6*q7*q8*s12*s34*s45)/2 - (13*mh*q4^2*q6*q8*s34^2*s45)/16 - (25*mt*q4^2*q6*q8*s34^2*s45)/16 - (9*mh*q4*q7*q8*s34^2*s45)/64 + (21*mt*q4*q7*q8*s34^2*s45)/64 + (3*mh^3*q4^2*q7*q8*s34^2*s45)/16 + (mh^2*mt*q4^2*q7*q8*s34^2*s45)/16 + (mt*q6*q7*q8*s34^2*s45)/4 + (3*mh*q4^2*q7*q8*s12*s34^2*s45)/16 + (mt*q4^2*q7*q8*s12*s34^2*s45)/16 + (9*mh*q4^2*q7*q8*s34^3*s45)/64 - (21*mt*q4^2*q7*q8*s34^3*s45)/64 + mh*q4^2*q6*q7*s45^2 + 3*mt*q4^2*q6*q7*s45^2 - (mh*q4*q6*q8*s45^2)/4 + (mt*q4*q6*q8*s45^2)/4 - (mh*q7*q8*s45^2)/8 - (7*mt*q7*q8*s45^2)/8 - (mh^3*q4*q7*q8*s45^2)/4 - (mh^2*mt*q4*q7*q8*s45^2)/4 - (mh*q4*q7*q8*s12*s45^2)/4 - (9*mt*q4*q7*q8*s12*s45^2)/4 - (mh*q4^2*q6*q8*s34*s45^2)/4 - (7*mt*q4^2*q6*q8*s34*s45^2)/4 + (3*mh*q4*q7*q8*s34*s45^2)/8 - (13*mt*q4*q7*q8*s34*s45^2)/8 - (mh^3*q4^2*q7*q8*s34*s45^2)/4 - (mh^2*mt*q4^2*q7*q8*s34*s45^2)/4 - (mh*q4^2*q7*q8*s12*s34*s45^2)/4 - (mt*q4^2*q7*q8*s12*s34*s45^2)/4 - (3*mh*q4^2*q7*q8*s34^2*s45^2)/8 + (5*mt*q4^2*q7*q8*s34^2*s45^2)/8 + (mh*q4*q7*q8*s45^3)/4 + (7*mt*q4*q7*q8*s45^3)/4 + (mh*q4^2*q7*q8*s34*s45^3)/4 - (mt*q4^2*q7*q8*s34*s45^3)/4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule67'==1
#write "calc module nr 67"
#do j=1,1
if (match(mh*mt^3*q6*q7*q8*s12));
id mh*mt^3*q6*q7*q8*s12 = -(q3^2*q4*q6)/8 + (mh*q3^3*q4*q6)/8 - (11*q4^2*q6)/16 - (mh*q3*q4^2*q6)/4 - (9*q6*q7)/32 - (3*mh*mt*q4*q6*q7)/4 + (97*q8)/256 - (mh*q3*q8)/8 + (27*mh^2*q4*q8)/64 - (41*mh*mt*q4*q8)/32 - (mh^3*q3*q4*q8)/8 + (mh^3*mt*q4^2*q8)/4 - (9*mh*mt*q6*q8)/16 - (97*mt^2*q6*q8)/256 + (3*mh^3*mt*q7*q8)/16 - (3*mh^2*mt^2*q7*q8)/32 + (mh*mt^3*q7*q8)/4 - (q3^2*q4^2*q6*s12)/16 - (9*q4*q6*q7*s12)/8 - 2*mh*mt*q4^2*q6*q7*s12 - (3*q3^2*q8*s12)/8 + (mh*q3^3*q8*s12)/8 + (45*q4*q8*s12)/64 - (mh*q3*q4*q8*s12)/2 + (mh^2*q4^2*q8*s12)/16 + (3*mh*mt*q4^2*q8*s12)/8 - (133*q6*q8*s12)/256 + (mh*q3*q6*q8*s12)/2 + (mh^2*q7*q8*s12)/32 - (17*mh*mt*q7*q8*s12)/16 + (23*mt^2*q7*q8*s12)/32 + (mh^3*mt*q4*q7*q8*s12)/2 - (q3^2*q4*q8*s12^2)/16 + (q4^2*q8*s12^2)/8 + (21*q4*q6*q8*s12^2)/64 - (5*q7*q8*s12^2)/32 + mh*mt*q6*q7*q8*s12^2 - mt^2*q6*q7*q8*s12^2 + (q4^2*q6*q8*s12^3)/16 + q6*q7*q8*s12^3 - (mh*mt*q4^2*q6*q7*s34)/4 + (7*q4*q8*s34)/128 + (3*mh^2*q4^2*q8*s34)/64 + (19*mh*mt*q4^2*q8*s34)/32 + (271*q6*q8*s34)/512 + (mh*mt*q4*q6*q8*s34)/4 - (mh^2*q7*q8*s34)/8 - (3*mt^2*q7*q8*s34)/16 + (mh^3*mt*q4*q7*q8*s34)/4 + (mh*mt^3*q6*q7*q8*s34)/2 - (7*q4^2*q6*q7*s12*s34)/8 + (5*q4^2*q8*s12*s34)/64 + (3*q4*q6*q8*s12*s34)/128 + (5*q7*q8*s12*s34)/16 - (mh*mt*q4*q7*q8*s12*s34)/2 + (mh^3*mt*q4^2*q7*q8*s12*s34)/2 - (mh*mt*q6*q7*q8*s12*s34)/2 + (mt^2*q6*q7*q8*s12*s34)/2 + (5*q4^2*q6*q8*s12^2*s34)/64 - (q6*q7*q8*s12^2*s34)/2 + (q4^2*q6*q7*s34^2)/32 - (11*q4^2*q8*s34^2)/256 - (35*q4*q6*q8*s34^2)/1024 - (3*mh*mt*q4^2*q6*q8*s34^2)/16 + (19*q7*q8*s34^2)/512 - (21*mh^2*q4*q7*q8*s34^2)/128 - (mh*mt*q4*q7*q8*s34^2)/16 + (mh^3*mt*q4^2*q7*q8*s34^2)/16 + (11*q4^2*q6*q8*s12*s34^2)/256 + (3*q4*q7*q8*s12*s34^2)/128 - (mh^2*q4^2*q7*q8*s12*s34^2)/32 + (mh*mt*q4^2*q7*q8*s12*s34^2)/16 - (65*q4^2*q6*q8*s34^3)/1024 + (15*q4*q7*q8*s34^3)/256 - (5*mh^2*q4^2*q7*q8*s34^3)/128 - (mh*mt*q4^2*q7*q8*s34^3)/16 - (5*q4^2*q7*q8*s12*s34^3)/128 + (11*q4^2*q7*q8*s34^4)/512 + (q3^2*q4^2*q6*s45)/16 + mh*mt*q4^2*q6*q7*s45 + (3*q3^2*q8*s45)/8 - (mh*q3^3*q8*s45)/8 - (5*q4*q8*s45)/4 + (5*mh*q3*q4*q8*s45)/8 - (mh^2*q4^2*q8*s45)/16 - (5*mh*mt*q4^2*q8*s45)/8 + (73*q6*q8*s45)/256 - (mh*q3*q6*q8*s45)/4 - (mh*mt*q4*q6*q8*s45)/2 + (mh^2*q7*q8*s45)/8 - (mh*mt*q7*q8*s45)/2 + (mt^2*q7*q8*s45)/32 - (mh^3*mt*q4*q7*q8*s45)/4 - (q4^2*q6*q7*s12*s45)/2 + (q3^2*q4*q8*s12*s45)/8 - (5*q4^2*q8*s12*s45)/16 - (3*q3^2*q6*q8*s12*s45)/16 + (q4*q6*q8*s12*s45)/32 - (5*q7*q8*s12*s45)/16 + (mh^2*q4*q7*q8*s12*s45)/8 - (5*mh*mt*q4*q7*q8*s12*s45)/4 - (mt^2*q6*q7*q8*s12*s45)/2 - (3*q4^2*q6*q8*s12^2*s45)/16 - (3*q6*q7*q8*s12^2*s45)/2 - (q4^2*q6*q7*s34*s45)/4 - (q3^2*q6*q8*s34*s45)/8 + (mh*q3^3*q6*q8*s34*s45)/8 + (25*q4*q6*q8*s34*s45)/128 - (3*q7*q8*s34*s45)/64 + (5*mh^2*q4*q7*q8*s34*s45)/16 - (3*mh*mt*q4*q7*q8*s34*s45)/4 - (mh^3*mt*q4^2*q7*q8*s34*s45)/4 + (mt^2*q6*q7*q8*s34*s45)/4 - (7*q4^2*q6*q8*s12*s34*s45)/32 - (7*q4*q7*q8*s12*s34*s45)/16 + (mh^2*q4^2*q7*q8*s12*s34*s45)/8 - (mh*mt*q4^2*q7*q8*s12*s34*s45)/4 + (3*q6*q7*q8*s12*s34*s45)/4 - (39*q4^2*q6*q8*s34^2*s45)/256 + (21*q4*q7*q8*s34^2*s45)/128 + (3*mh^2*q4^2*q7*q8*s34^2*s45)/16 + (mh*mt*q4^2*q7*q8*s34^2*s45)/4 + (q6*q7*q8*s34^2*s45)/4 + (3*q4^2*q7*q8*s12*s34^2*s45)/16 - (5*q4^2*q7*q8*s34^3*s45)/128 + (q4^2*q6*q7*s45^2)/2 - (q3^2*q4*q8*s45^2)/16 + (3*q4^2*q8*s45^2)/16 + (3*q3^2*q6*q8*s45^2)/16 - (23*q4*q6*q8*s45^2)/64 - (q7*q8*s45^2)/16 - (mh^2*q4*q7*q8*s45^2)/8 + mh*mt*q4*q7*q8*s45^2 + (3*q4^2*q6*q8*s12*s45^2)/16 - (q4*q7*q8*s12*s45^2)/8 + (q6*q7*q8*s12*s45^2)/2 + (9*q4^2*q6*q8*s34*s45^2)/64 - (q4*q7*q8*s34*s45^2)/8 - (mh^2*q4^2*q7*q8*s34*s45^2)/8 - (q6*q7*q8*s34*s45^2)/4 - (q4^2*q7*q8*s12*s34*s45^2)/8 - (7*q4^2*q7*q8*s34^2*s45^2)/32 - (q4^2*q6*q8*s45^3)/16 + (q4*q7*q8*s45^3)/8 + (q4^2*q7*q8*s34*s45^3)/8;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
#if `rule68'==1
#write "calc module nr 68"
#do j=1,1
if (match(mh*mt^3*q5*q7*q8*s12));
id mh*mt^3*q5*q7*q8*s12 = (q3^2*q4*q5)/8 + (mh*q3^3*q4*q5)/8 + (11*q4^2*q5)/16 - (mh*q3*q4^2*q5)/4 + (9*q5*q7)/32 - (3*mh*mt*q4*q5*q7)/4 - (97*q8)/256 - (mh*q3*q8)/8 - (27*mh^2*q4*q8)/64 - (41*mh*mt*q4*q8)/32 - (mh^3*q3*q4*q8)/8 + (mh^3*mt*q4^2*q8)/4 - (9*mh*mt*q5*q8)/16 + (97*mt^2*q5*q8)/256 + (3*mh^3*mt*q7*q8)/16 + (3*mh^2*mt^2*q7*q8)/32 + (mh*mt^3*q7*q8)/4 + (q3^2*q4^2*q5*s12)/16 + (9*q4*q5*q7*s12)/8 - 2*mh*mt*q4^2*q5*q7*s12 + (3*q3^2*q8*s12)/8 + (mh*q3^3*q8*s12)/8 - (45*q4*q8*s12)/64 - (mh*q3*q4*q8*s12)/2 - (mh^2*q4^2*q8*s12)/16 + (3*mh*mt*q4^2*q8*s12)/8 + (133*q5*q8*s12)/256 + (mh*q3*q5*q8*s12)/2 - (mh^2*q7*q8*s12)/32 - (17*mh*mt*q7*q8*s12)/16 - (23*mt^2*q7*q8*s12)/32 + (mh^3*mt*q4*q7*q8*s12)/2 + (q3^2*q4*q8*s12^2)/16 - (q4^2*q8*s12^2)/8 - (21*q4*q5*q8*s12^2)/64 + (5*q7*q8*s12^2)/32 + mh*mt*q5*q7*q8*s12^2 + mt^2*q5*q7*q8*s12^2 - (q4^2*q5*q8*s12^3)/16 - q5*q7*q8*s12^3 - (mh*mt*q4^2*q5*q7*s34)/4 - (7*q4*q8*s34)/128 - (3*mh^2*q4^2*q8*s34)/64 + (19*mh*mt*q4^2*q8*s34)/32 - (271*q5*q8*s34)/512 + (mh*mt*q4*q5*q8*s34)/4 + (mh^2*q7*q8*s34)/8 + (3*mt^2*q7*q8*s34)/16 + (mh^3*mt*q4*q7*q8*s34)/4 + (mh*mt^3*q5*q7*q8*s34)/2 + (7*q4^2*q5*q7*s12*s34)/8 - (5*q4^2*q8*s12*s34)/64 - (3*q4*q5*q8*s12*s34)/128 - (5*q7*q8*s12*s34)/16 - (mh*mt*q4*q7*q8*s12*s34)/2 + (mh^3*mt*q4^2*q7*q8*s12*s34)/2 - (mh*mt*q5*q7*q8*s12*s34)/2 - (mt^2*q5*q7*q8*s12*s34)/2 - (5*q4^2*q5*q8*s12^2*s34)/64 + (q5*q7*q8*s12^2*s34)/2 - (q4^2*q5*q7*s34^2)/32 + (11*q4^2*q8*s34^2)/256 + (35*q4*q5*q8*s34^2)/1024 - (3*mh*mt*q4^2*q5*q8*s34^2)/16 - (19*q7*q8*s34^2)/512 + (21*mh^2*q4*q7*q8*s34^2)/128 - (mh*mt*q4*q7*q8*s34^2)/16 + (mh^3*mt*q4^2*q7*q8*s34^2)/16 - (11*q4^2*q5*q8*s12*s34^2)/256 - (3*q4*q7*q8*s12*s34^2)/128 + (mh^2*q4^2*q7*q8*s12*s34^2)/32 + (mh*mt*q4^2*q7*q8*s12*s34^2)/16 + (65*q4^2*q5*q8*s34^3)/1024 - (15*q4*q7*q8*s34^3)/256 + (5*mh^2*q4^2*q7*q8*s34^3)/128 - (mh*mt*q4^2*q7*q8*s34^3)/16 + (5*q4^2*q7*q8*s12*s34^3)/128 - (11*q4^2*q7*q8*s34^4)/512 - (q3^2*q4^2*q5*s45)/16 + mh*mt*q4^2*q5*q7*s45 - (3*q3^2*q8*s45)/8 - (mh*q3^3*q8*s45)/8 + (5*q4*q8*s45)/4 + (5*mh*q3*q4*q8*s45)/8 + (mh^2*q4^2*q8*s45)/16 - (5*mh*mt*q4^2*q8*s45)/8 - (73*q5*q8*s45)/256 - (mh*q3*q5*q8*s45)/4 - (mh*mt*q4*q5*q8*s45)/2 - (mh^2*q7*q8*s45)/8 - (mh*mt*q7*q8*s45)/2 - (mt^2*q7*q8*s45)/32 - (mh^3*mt*q4*q7*q8*s45)/4 + (q4^2*q5*q7*s12*s45)/2 - (q3^2*q4*q8*s12*s45)/8 + (5*q4^2*q8*s12*s45)/16 + (3*q3^2*q5*q8*s12*s45)/16 - (q4*q5*q8*s12*s45)/32 + (5*q7*q8*s12*s45)/16 - (mh^2*q4*q7*q8*s12*s45)/8 - (5*mh*mt*q4*q7*q8*s12*s45)/4 + (mt^2*q5*q7*q8*s12*s45)/2 + (3*q4^2*q5*q8*s12^2*s45)/16 + (3*q5*q7*q8*s12^2*s45)/2 + (q4^2*q5*q7*s34*s45)/4 + (q3^2*q5*q8*s34*s45)/8 + (mh*q3^3*q5*q8*s34*s45)/8 - (25*q4*q5*q8*s34*s45)/128 + (3*q7*q8*s34*s45)/64 - (5*mh^2*q4*q7*q8*s34*s45)/16 - (3*mh*mt*q4*q7*q8*s34*s45)/4 - (mh^3*mt*q4^2*q7*q8*s34*s45)/4 - (mt^2*q5*q7*q8*s34*s45)/4 + (7*q4^2*q5*q8*s12*s34*s45)/32 + (7*q4*q7*q8*s12*s34*s45)/16 - (mh^2*q4^2*q7*q8*s12*s34*s45)/8 - (mh*mt*q4^2*q7*q8*s12*s34*s45)/4 - (3*q5*q7*q8*s12*s34*s45)/4 + (39*q4^2*q5*q8*s34^2*s45)/256 - (21*q4*q7*q8*s34^2*s45)/128 - (3*mh^2*q4^2*q7*q8*s34^2*s45)/16 + (mh*mt*q4^2*q7*q8*s34^2*s45)/4 - (q5*q7*q8*s34^2*s45)/4 - (3*q4^2*q7*q8*s12*s34^2*s45)/16 + (5*q4^2*q7*q8*s34^3*s45)/128 - (q4^2*q5*q7*s45^2)/2 + (q3^2*q4*q8*s45^2)/16 - (3*q4^2*q8*s45^2)/16 - (3*q3^2*q5*q8*s45^2)/16 + (23*q4*q5*q8*s45^2)/64 + (q7*q8*s45^2)/16 + (mh^2*q4*q7*q8*s45^2)/8 + mh*mt*q4*q7*q8*s45^2 - (3*q4^2*q5*q8*s12*s45^2)/16 + (q4*q7*q8*s12*s45^2)/8 - (q5*q7*q8*s12*s45^2)/2 - (9*q4^2*q5*q8*s34*s45^2)/64 + (q4*q7*q8*s34*s45^2)/8 + (mh^2*q4^2*q7*q8*s34*s45^2)/8 + (q5*q7*q8*s34*s45^2)/4 + (q4^2*q7*q8*s12*s34*s45^2)/8 + (7*q4^2*q7*q8*s34^2*s45^2)/32 + (q4^2*q5*q8*s45^3)/16 - (q4*q7*q8*s45^3)/8 - (q4^2*q7*q8*s34*s45^3)/8;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
