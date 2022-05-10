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
if (match(mh*mt*q3*q4));
id mh*mt*q3*q4 = q3/4 - q4/4;
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
if (match(q2*q3*q4));
id q2*q3*q4 = -(q1*q2*q3) + q1*q2*q4 + q1*q3*q4;
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
if (match(q1*q3*s45));
id q1*q3*s45 = q1 - q3 + q1*q3*s53;
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
if (match(q2*q4*s45));
id q2*q4*s45 = q2 - q4 + q2*q4*s53;
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
if (match(mh^2*q1));
id mh^2*q1 = 1 + 2*mh*mt*q1 - mt^2*q1 + q1*s45;
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
if (match(mh^2*q2));
id mh^2*q2 = 1 - 2*mh*mt*q2 - mt^2*q2 + q2*s45;
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
if (match(mh^2*q3));
id mh^2*q3 = 1 + 2*mh*mt*q3 - mt^2*q3 + q3*s53;
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
if (match(mh*mt*q2*q3));
id mh*mt*q2*q3 = -q2/4 + q3/4 + (q2*q3*s45)/4 - (q2*q3*s53)/4;
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
if (match(mh^2*q4));
id mh^2*q4 = 1 - 2*mh*mt*q4 - mt^2*q4 + q4*s53;
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
if (match(mh*mt*q1*q4));
id mh*mt*q1*q4 = q1/4 - q4/4 - (q1*q4*s45)/4 + (q1*q4*s53)/4;
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
if (match(mt^3*q1*q2));
id mt^3*q1*q2 = -(mh*q1)/4 + (mt*q1)/2 + (mh*q2)/4 + (mt*q2)/2 + mt*q1*q2*s45;
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
if (match(mt^3*q3*q4));
id mt^3*q3*q4 = -(mh*q3)/4 + (mt*q3)/2 + (mh*q4)/4 + (mt*q4)/2 + mt*q3*q4*s53;
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
if (match(mt^3*q2*q3));
id mt^3*q2*q3 = (mh*q2)/4 + (mt*q2)/2 - (mh*q3)/4 + (mt*q3)/2 - (mh*q2*q3*s45)/4 + (mt*q2*q3*s45)/2 + (mh*q2*q3*s53)/4 + (mt*q2*q3*s53)/2;
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
if (match(mt^3*q1*q4));
id mt^3*q1*q4 = -(mh*q1)/4 + (mt*q1)/2 + (mh*q4)/4 + (mt*q4)/2 + (mh*q1*q4*s45)/4 + (mt*q1*q4*s45)/2 - (mh*q1*q4*s53)/4 + (mt*q1*q4*s53)/2;
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
if (match(mh^2*mt^4*q5));
id mh^2*mt^4*q5 = -1 + 2*mt^6*q5 + mh^4*q5*s12 - 2*mh^2*mt^2*q5*s12 - mt^4*q5*s12 + mh^2*q5*s12^2 + mh^2*mt^2*q5*s45 - mt^4*q5*s45 - mh^2*q5*s12*s45 + mt^2*q5*s12*s45 + mh^2*mt^2*q5*s53 - mt^4*q5*s53 - mh^2*q5*s12*s53 + mt^2*q5*s12*s53 - mh^2*q5*s45*s53 - 2*mt^2*q5*s45*s53 - q5*s12*s45*s53 + q5*s45^2*s53 + q5*s45*s53^2;
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
if (match(mh*mt^5*q3*q5));
id mh*mt^5*q3*q5 = -q3/2 - (mt^4*q5)/2 + (3*mt^6*q3*q5)/2 + (mh^2*q5*s12)/2 + mh*mt*q5*s12 + (mt^2*q5*s12)/2 - mt^4*q3*q5*s12 + (q5*s12^2)/2 + mh*mt*q3*q5*s12^2 - (mt^2*q3*q5*s12^2)/2 + (mt^2*q5*s45)/2 + mh*mt^3*q3*q5*s45 - mt^4*q3*q5*s45 - (q5*s12*s45)/2 - mh*mt*q3*q5*s12*s45 + mt^2*q3*q5*s12*s45 + (mt^2*q5*s53)/2 + mh*mt^3*q3*q5*s53 - (3*mt^4*q3*q5*s53)/2 + mh*mt*q3*q5*s12*s53 + mt^2*q3*q5*s12*s53 + (q3*q5*s12^2*s53)/2 - (q5*s45*s53)/2 - mh*mt*q3*q5*s45*s53 - q3*q5*s12*s45*s53 + (q3*q5*s45^2*s53)/2 + (mt^2*q3*q5*s53^2)/2;
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
if (match(mh*mt^5*q4*q5));
id mh*mt^5*q4*q5 = q4/2 + (mt^4*q5)/2 - (3*mt^6*q4*q5)/2 - (mh^2*q5*s12)/2 + mh*mt*q5*s12 - (mt^2*q5*s12)/2 + mt^4*q4*q5*s12 - (q5*s12^2)/2 + mh*mt*q4*q5*s12^2 + (mt^2*q4*q5*s12^2)/2 - (mt^2*q5*s45)/2 + mh*mt^3*q4*q5*s45 + mt^4*q4*q5*s45 + (q5*s12*s45)/2 - mh*mt*q4*q5*s12*s45 - mt^2*q4*q5*s12*s45 - (mt^2*q5*s53)/2 + mh*mt^3*q4*q5*s53 + (3*mt^4*q4*q5*s53)/2 + mh*mt*q4*q5*s12*s53 - mt^2*q4*q5*s12*s53 - (q4*q5*s12^2*s53)/2 + (q5*s45*s53)/2 - mh*mt*q4*q5*s45*s53 + q4*q5*s12*s45*s53 - (q4*q5*s45^2*s53)/2 - (mt^2*q4*q5*s53^2)/2;
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
if (match(mh*mt^5*q1*q5));
id mh*mt^5*q1*q5 = -q1/2 - (mt^4*q5)/2 + (3*mt^6*q1*q5)/2 + (mh^2*q5*s12)/2 + mh*mt*q5*s12 + (mt^2*q5*s12)/2 - mt^4*q1*q5*s12 + (q5*s12^2)/2 + mh*mt*q1*q5*s12^2 - (mt^2*q1*q5*s12^2)/2 + (mt^2*q5*s45)/2 + mh*mt^3*q1*q5*s45 - (3*mt^4*q1*q5*s45)/2 + mh*mt*q1*q5*s12*s45 + mt^2*q1*q5*s12*s45 + (q1*q5*s12^2*s45)/2 + (mt^2*q1*q5*s45^2)/2 + (mt^2*q5*s53)/2 + mh*mt^3*q1*q5*s53 - mt^4*q1*q5*s53 - (q5*s12*s53)/2 - mh*mt*q1*q5*s12*s53 + mt^2*q1*q5*s12*s53 - (q5*s45*s53)/2 - mh*mt*q1*q5*s45*s53 - q1*q5*s12*s45*s53 + (q1*q5*s45*s53^2)/2;
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
if (match(mh*mt^5*q2*q5));
id mh*mt^5*q2*q5 = q2/2 + (mt^4*q5)/2 - (3*mt^6*q2*q5)/2 - (mh^2*q5*s12)/2 + mh*mt*q5*s12 - (mt^2*q5*s12)/2 + mt^4*q2*q5*s12 - (q5*s12^2)/2 + mh*mt*q2*q5*s12^2 + (mt^2*q2*q5*s12^2)/2 - (mt^2*q5*s45)/2 + mh*mt^3*q2*q5*s45 + (3*mt^4*q2*q5*s45)/2 + mh*mt*q2*q5*s12*s45 - mt^2*q2*q5*s12*s45 - (q2*q5*s12^2*s45)/2 - (mt^2*q2*q5*s45^2)/2 - (mt^2*q5*s53)/2 + mh*mt^3*q2*q5*s53 + mt^4*q2*q5*s53 + (q5*s12*s53)/2 - mh*mt*q2*q5*s12*s53 - mt^2*q2*q5*s12*s53 + (q5*s45*s53)/2 - mh*mt*q2*q5*s45*s53 + q2*q5*s12*s45*s53 - (q2*q5*s45*s53^2)/2;
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
if (match(mt^2*q1*q2*q5*s12^2));
id mt^2*q1*q2*q5*s12^2 = -(q1*q2) - (3*mh*mt^3*q1*q5)/4 + mt^4*q1*q5 + (3*mh*mt^3*q2*q5)/4 + mt^4*q2*q5 + q5*s12 + (mh*mt*q1*q5*s12)/2 - mt^2*q1*q5*s12 - (mh*mt*q2*q5*s12)/2 - mt^2*q2*q5*s12 + (q1*q5*s12^2)/2 + (q2*q5*s12^2)/2 + (mt^2*q1*q5*s45)/2 + (mt^2*q2*q5*s45)/2 + (q1*q5*s12*s45)/2 + (q2*q5*s12*s45)/2 + q1*q2*q5*s12^2*s45 + mt^2*q1*q2*q5*s45^2 + (mh*mt*q1*q5*s53)/2 - (mt^2*q1*q5*s53)/2 - (mh*mt*q2*q5*s53)/2 - (mt^2*q2*q5*s53)/2 - (q1*q5*s12*s53)/2 - (q2*q5*s12*s53)/2 + 2*mt^2*q1*q2*q5*s12*s53 - (q1*q5*s45*s53)/2 - (q2*q5*s45*s53)/2 - 2*mt^2*q1*q2*q5*s45*s53 - 2*q1*q2*q5*s12*s45*s53 + q1*q2*q5*s45*s53^2;
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
if (match(mh*q3*q4*q5*s12^2*s53));
id mh*q3*q4*q5*s12^2*s53 = mh*q3*q4 + (mh*mt^4*q3*q5)/2 - (3*mt^5*q3*q5)/4 + (mh*mt^4*q4*q5)/2 + (3*mt^5*q4*q5)/4 - mh*q5*s12 + (mt^3*q3*q5*s12)/2 - (mt^3*q4*q5*s12)/2 - (mh*q3*q5*s12^2)/2 + (mt*q3*q5*s12^2)/4 - (mh*q4*q5*s12^2)/2 - (mt*q4*q5*s12^2)/4 - (mh*mt^2*q3*q5*s45)/2 + (mt^3*q3*q5*s45)/2 - (mh*mt^2*q4*q5*s45)/2 - (mt^3*q4*q5*s45)/2 + (mh*q3*q5*s12*s45)/2 - (mt*q3*q5*s12*s45)/2 + (mh*q4*q5*s12*s45)/2 + (mt*q4*q5*s12*s45)/2 - (mh*mt^2*q3*q5*s53)/2 + (3*mt^3*q3*q5*s53)/4 - (mh*mt^2*q4*q5*s53)/2 - (3*mt^3*q4*q5*s53)/4 - (mh*q3*q5*s12*s53)/2 - (mt*q3*q5*s12*s53)/2 - (mh*q4*q5*s12*s53)/2 + (mt*q4*q5*s12*s53)/2 + (mh*q3*q5*s45*s53)/2 + (mh*q4*q5*s45*s53)/2 + 2*mh*q3*q4*q5*s12*s45*s53 - mh*q3*q4*q5*s45^2*s53 - (mt*q3*q5*s53^2)/4 + (mt*q4*q5*s53^2)/4;
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
if (match(mh*q1*q2*q5*s12^2*s45));
id mh*q1*q2*q5*s12^2*s45 = mh*q1*q2 + (mh*mt^4*q1*q5)/2 - (3*mt^5*q1*q5)/4 + (mh*mt^4*q2*q5)/2 + (3*mt^5*q2*q5)/4 - mh*q5*s12 + (mt^3*q1*q5*s12)/2 - (mt^3*q2*q5*s12)/2 - (mh*q1*q5*s12^2)/2 + (mt*q1*q5*s12^2)/4 - (mh*q2*q5*s12^2)/2 - (mt*q2*q5*s12^2)/4 - (mh*mt^2*q1*q5*s45)/2 + (3*mt^3*q1*q5*s45)/4 - (mh*mt^2*q2*q5*s45)/2 - (3*mt^3*q2*q5*s45)/4 - (mh*q1*q5*s12*s45)/2 - (mt*q1*q5*s12*s45)/2 - (mh*q2*q5*s12*s45)/2 + (mt*q2*q5*s12*s45)/2 - (mt*q1*q5*s45^2)/4 + (mt*q2*q5*s45^2)/4 - (mh*mt^2*q1*q5*s53)/2 + (mt^3*q1*q5*s53)/2 - (mh*mt^2*q2*q5*s53)/2 - (mt^3*q2*q5*s53)/2 + (mh*q1*q5*s12*s53)/2 - (mt*q1*q5*s12*s53)/2 + (mh*q2*q5*s12*s53)/2 + (mt*q2*q5*s12*s53)/2 + (mh*q1*q5*s45*s53)/2 + (mh*q2*q5*s45*s53)/2 + 2*mh*q1*q2*q5*s12*s45*s53 - mh*q1*q2*q5*s45*s53^2;
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
if (match(mt*q1*q2*q5*s45^3));
id mt*q1*q2*q5*s45^3 = mt*q1*q2 + (3*mh*mt^4*q1*q5)/4 - mt^5*q1*q5 - (3*mh*mt^4*q2*q5)/4 - mt^5*q2*q5 - mt*q5*s12 - (mh*mt^2*q1*q5*s12)/2 + mt^3*q1*q5*s12 + (mh*mt^2*q2*q5*s12)/2 + mt^3*q2*q5*s12 - (mh*q1*q5*s12^2)/4 + (mh*q2*q5*s12^2)/4 - (mt^3*q1*q5*s45)/2 - (mt^3*q2*q5*s45)/2 - (mt*q1*q5*s12*s45)/2 - (mt*q2*q5*s12*s45)/2 + (mh*q1*q5*s45^2)/4 - (mt*q1*q5*s45^2)/2 - (mh*q2*q5*s45^2)/4 - (mt*q2*q5*s45^2)/2 - (mh*mt^2*q1*q5*s53)/2 + (mt^3*q1*q5*s53)/2 + (mh*mt^2*q2*q5*s53)/2 + (mt^3*q2*q5*s53)/2 + (mh*q1*q5*s12*s53)/2 - (mt*q1*q5*s12*s53)/2 - (mh*q2*q5*s12*s53)/2 - (mt*q2*q5*s12*s53)/2 - (mh*q1*q5*s45*s53)/2 + (3*mt*q1*q5*s45*s53)/2 + (mh*q2*q5*s45*s53)/2 + (3*mt*q2*q5*s45*s53)/2 + 2*mt*q1*q2*q5*s45^2*s53 - mt*q1*q2*q5*s45*s53^2;
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
if (match(mt^7*q1*q5));
id mt^7*q1*q5 = 2*mh*q1 - mt*q1 + 2*mh*mt^4*q5 + 3*mt^5*q5 - 2*mh^3*q5*s12 - 3*mh^2*mt*q5*s12 + mt^3*q5*s12 + 4*mh*mt^4*q1*q5*s12 - 2*mt^5*q1*q5*s12 - 2*mh*q5*s12^2 - 3*mt*q5*s12^2 - 4*mh*mt^2*q1*q5*s12^2 + 3*mt^3*q1*q5*s12^2 - 2*mh*mt^2*q5*s45 - 3*mt^3*q5*s45 + 5*mt^5*q1*q5*s45 - 4*mt*q5*s12*s45 - 10*mh*mt^2*q1*q5*s12*s45 + 6*mt^3*q1*q5*s12*s45 - 2*mh*q1*q5*s12^2*s45 - 3*mt*q1*q5*s12^2*s45 - 2*mh*mt^2*q1*q5*s45^2 - 3*mt^3*q1*q5*s45^2 - 4*mt*q1*q5*s12*s45^2 - 2*mh*mt^2*q5*s53 - 3*mt^3*q5*s53 - 2*mh*mt^4*q1*q5*s53 + 2*mt^5*q1*q5*s53 + 2*mh*q5*s12*s53 + 3*mt*q5*s12*s53 + 2*mh*mt^2*q1*q5*s12*s53 - 2*mt^3*q1*q5*s12*s53 + 2*mh*q5*s45*s53 + 3*mt*q5*s45*s53 + 6*mh*mt^2*q1*q5*s45*s53 - 8*mt^3*q1*q5*s45*s53 + 4*mh*q1*q5*s12*s45*s53 + 2*mt*q1*q5*s12*s45*s53 + 4*mt*q1*q5*s45^2*s53 - 2*mh*q1*q5*s45*s53^2 + mt*q1*q5*s45*s53^2;
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
if (match(mt^7*q2*q5));
id mt^7*q2*q5 = -2*mh*q2 - mt*q2 - 2*mh*mt^4*q5 + 3*mt^5*q5 + 2*mh^3*q5*s12 - 3*mh^2*mt*q5*s12 + mt^3*q5*s12 - 4*mh*mt^4*q2*q5*s12 - 2*mt^5*q2*q5*s12 + 2*mh*q5*s12^2 - 3*mt*q5*s12^2 + 4*mh*mt^2*q2*q5*s12^2 + 3*mt^3*q2*q5*s12^2 + 2*mh*mt^2*q5*s45 - 3*mt^3*q5*s45 + 5*mt^5*q2*q5*s45 - 4*mt*q5*s12*s45 + 10*mh*mt^2*q2*q5*s12*s45 + 6*mt^3*q2*q5*s12*s45 + 2*mh*q2*q5*s12^2*s45 - 3*mt*q2*q5*s12^2*s45 + 2*mh*mt^2*q2*q5*s45^2 - 3*mt^3*q2*q5*s45^2 - 4*mt*q2*q5*s12*s45^2 + 2*mh*mt^2*q5*s53 - 3*mt^3*q5*s53 + 2*mh*mt^4*q2*q5*s53 + 2*mt^5*q2*q5*s53 - 2*mh*q5*s12*s53 + 3*mt*q5*s12*s53 - 2*mh*mt^2*q2*q5*s12*s53 - 2*mt^3*q2*q5*s12*s53 - 2*mh*q5*s45*s53 + 3*mt*q5*s45*s53 - 6*mh*mt^2*q2*q5*s45*s53 - 8*mt^3*q2*q5*s45*s53 - 4*mh*q2*q5*s12*s45*s53 + 2*mt*q2*q5*s12*s45*s53 + 4*mt*q2*q5*s45^2*s53 + 2*mh*q2*q5*s45*s53^2 + mt*q2*q5*s45*s53^2;
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
if (match(mt^7*q3*q5));
id mt^7*q3*q5 = 2*mh*q3 - mt*q3 + 2*mh*mt^4*q5 + 3*mt^5*q5 - 2*mh^3*q5*s12 - 3*mh^2*mt*q5*s12 + mt^3*q5*s12 + 4*mh*mt^4*q3*q5*s12 - 2*mt^5*q3*q5*s12 - 2*mh*q5*s12^2 - 3*mt*q5*s12^2 - 4*mh*mt^2*q3*q5*s12^2 + 3*mt^3*q3*q5*s12^2 - 2*mh*mt^2*q5*s45 - 3*mt^3*q5*s45 - 2*mh*mt^4*q3*q5*s45 + 2*mt^5*q3*q5*s45 + 2*mh*q5*s12*s45 + 3*mt*q5*s12*s45 + 2*mh*mt^2*q3*q5*s12*s45 - 2*mt^3*q3*q5*s12*s45 - 2*mh*mt^2*q5*s53 - 3*mt^3*q5*s53 + 5*mt^5*q3*q5*s53 - 4*mt*q5*s12*s53 - 10*mh*mt^2*q3*q5*s12*s53 + 6*mt^3*q3*q5*s12*s53 - 2*mh*q3*q5*s12^2*s53 - 3*mt*q3*q5*s12^2*s53 + 2*mh*q5*s45*s53 + 3*mt*q5*s45*s53 + 6*mh*mt^2*q3*q5*s45*s53 - 8*mt^3*q3*q5*s45*s53 + 4*mh*q3*q5*s12*s45*s53 + 2*mt*q3*q5*s12*s45*s53 - 2*mh*q3*q5*s45^2*s53 + mt*q3*q5*s45^2*s53 - 2*mh*mt^2*q3*q5*s53^2 - 3*mt^3*q3*q5*s53^2 - 4*mt*q3*q5*s12*s53^2 + 4*mt*q3*q5*s45*s53^2;
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
if (match(mt^7*q4*q5));
id mt^7*q4*q5 = -2*mh*q4 - mt*q4 - 2*mh*mt^4*q5 + 3*mt^5*q5 + 2*mh^3*q5*s12 - 3*mh^2*mt*q5*s12 + mt^3*q5*s12 - 4*mh*mt^4*q4*q5*s12 - 2*mt^5*q4*q5*s12 + 2*mh*q5*s12^2 - 3*mt*q5*s12^2 + 4*mh*mt^2*q4*q5*s12^2 + 3*mt^3*q4*q5*s12^2 + 2*mh*mt^2*q5*s45 - 3*mt^3*q5*s45 + 2*mh*mt^4*q4*q5*s45 + 2*mt^5*q4*q5*s45 - 2*mh*q5*s12*s45 + 3*mt*q5*s12*s45 - 2*mh*mt^2*q4*q5*s12*s45 - 2*mt^3*q4*q5*s12*s45 + 2*mh*mt^2*q5*s53 - 3*mt^3*q5*s53 + 5*mt^5*q4*q5*s53 - 4*mt*q5*s12*s53 + 10*mh*mt^2*q4*q5*s12*s53 + 6*mt^3*q4*q5*s12*s53 + 2*mh*q4*q5*s12^2*s53 - 3*mt*q4*q5*s12^2*s53 - 2*mh*q5*s45*s53 + 3*mt*q5*s45*s53 - 6*mh*mt^2*q4*q5*s45*s53 - 8*mt^3*q4*q5*s45*s53 - 4*mh*q4*q5*s12*s45*s53 + 2*mt*q4*q5*s12*s45*s53 + 2*mh*q4*q5*s45^2*s53 + mt*q4*q5*s45^2*s53 + 2*mh*mt^2*q4*q5*s53^2 - 3*mt^3*q4*q5*s53^2 - 4*mt*q4*q5*s12*s53^2 + 4*mt*q4*q5*s45*s53^2;
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
if (match(mh*q2*q3*q5*s12^2));
id mh*q2*q3*q5*s12^2 = -4*mt*q1*q2*q3 + 2*mt^3*q1*q5 + mh*mt^2*q2*q5 + (5*mt^3*q2*q5)/4 - mh*mt^2*q3*q5 + (3*mt^3*q3*q5)/4 - 3*mh*mt^4*q1*q3*q5 + 4*mt^5*q1*q3*q5 + 2*mt*q1*q5*s12 - mh*q2*q5*s12 - (3*mt*q2*q5*s12)/2 + mh*q3*q5*s12 - (mt*q3*q5*s12)/2 + 2*mh*mt^2*q1*q3*q5*s12 - 4*mt^3*q1*q3*q5*s12 + mh*q1*q3*q5*s12^2 - mh*q1*q5*s45 + 2*mt*q1*q5*s45 + (19*mh*q2*q5*s45)/16 + (21*mt*q2*q5*s45)/8 - (3*mh*q3*q5*s45)/16 + (mt*q3*q5*s45)/8 + mh*q2*q3*q5*s12*s45 - (mt*q2*q3*q5*s12*s45)/2 + 4*mt*q1*q2*q5*s45^2 - (3*mh*q2*q3*q5*s45^2)/16 + (mt*q2*q3*q5*s45^2)/8 + mh*q1*q5*s53 - 4*mt*q1*q5*s53 - (3*mh*q2*q5*s53)/16 - (mt*q2*q5*s53)/8 - (13*mh*q3*q5*s53)/16 + (27*mt*q3*q5*s53)/8 + 2*mh*mt^2*q1*q3*q5*s53 - 2*mh*q1*q3*q5*s12*s53 + 4*mt*q1*q3*q5*s12*s53 + mh*q2*q3*q5*s12*s53 + (mt*q2*q3*q5*s12*s53)/2 - 4*mt*q1*q2*q5*s45*s53 - (5*mh*q2*q3*q5*s45*s53)/8 + mh*q1*q3*q5*s53^2 - 4*mt*q1*q3*q5*s53^2 - (3*mh*q2*q3*q5*s53^2)/16 - (mt*q2*q3*q5*s53^2)/8;
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
if (match(mh*mt^4*q2*q4*q5));
id mh*mt^4*q2*q4*q5 = (4*mt*q1*q2*q4)/3 + (mh*mt^2*q1*q5)/3 - (5*mt^3*q1*q5)/12 - (2*mt^3*q2*q5)/3 - (mh*mt^2*q4*q5)/3 - (mt^3*q4*q5)/4 - (4*mt^5*q2*q4*q5)/3 - (mh*q1*q5*s12)/3 + (mt*q1*q5*s12)/2 - (2*mt*q2*q5*s12)/3 + (mh*q4*q5*s12)/3 + (mt*q4*q5*s12)/6 + (2*mh*mt^2*q2*q4*q5*s12)/3 + (4*mt^3*q2*q4*q5*s12)/3 - (mh*q1*q4*q5*s12^2)/3 + (mh*q2*q4*q5*s12^2)/3 + (19*mh*q1*q5*s45)/48 - (7*mt*q1*q5*s45)/8 - (mh*q2*q5*s45)/3 - (2*mt*q2*q5*s45)/3 - (mh*q4*q5*s45)/16 - (mt*q4*q5*s45)/24 + (mh*q1*q4*q5*s12*s45)/3 + (mt*q1*q4*q5*s12*s45)/6 - (4*mt*q1*q2*q5*s45^2)/3 - (mh*q1*q4*q5*s45^2)/16 - (mt*q1*q4*q5*s45^2)/24 - (mh*q1*q5*s53)/16 + (mt*q1*q5*s53)/24 + (mh*q2*q5*s53)/3 + (4*mt*q2*q5*s53)/3 - (13*mh*q4*q5*s53)/48 - (9*mt*q4*q5*s53)/8 + (2*mh*mt^2*q2*q4*q5*s53)/3 + (mh*q1*q4*q5*s12*s53)/3 - (mt*q1*q4*q5*s12*s53)/6 - (2*mh*q2*q4*q5*s12*s53)/3 - (4*mt*q2*q4*q5*s12*s53)/3 + (4*mt*q1*q2*q5*s45*s53)/3 - (5*mh*q1*q4*q5*s45*s53)/24 - (mh*q1*q4*q5*s53^2)/16 + (mt*q1*q4*q5*s53^2)/24 + (mh*q2*q4*q5*s53^2)/3 + (4*mt*q2*q4*q5*s53^2)/3;
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
if (match(mh*q1*q2*q4*q5*s12^2));
id mh*q1*q2*q4*q5*s12^2 = -4*mt*q1^2*q2*q4 - (11*mh*q1*q5)/8 + (11*mt*q1*q5)/4 - mh*mt^2*q1^2*q5 + (5*mt^3*q1^2*q5)/4 + (3*mh*q2*q5)/2 + 3*mt*q2*q5 - (mh*q4*q5)/8 - (mt*q4*q5)/4 + mh*mt^2*q2*q4*q5 + (5*mt^3*q2*q4*q5)/4 + mh*q1^2*q5*s12 - (3*mt*q1^2*q5*s12)/2 - 2*mt*q1*q2*q5*s12 + mt*q1*q4*q5*s12 - mh*q2*q4*q5*s12 - (3*mt*q2*q4*q5*s12)/2 + mh*q1^2*q4*q5*s12^2 - (19*mh*q1^2*q5*s45)/16 + (21*mt*q1^2*q5*s45)/8 + mh*q1*q2*q5*s45 + 8*mt*q1*q2*q5*s45 + (mh*q1*q4*q5*s45)/16 - (mt*q1*q4*q5*s45)/8 - mh*q1^2*q4*q5*s12*s45 - (mt*q1^2*q4*q5*s12*s45)/2 + 4*mt*q1^2*q2*q5*s45^2 + (3*mh*q1^2*q4*q5*s45^2)/16 + (mt*q1^2*q4*q5*s45^2)/8 + (3*mh*q1^2*q5*s53)/16 - (mt*q1^2*q5*s53)/8 - mh*q1*q2*q5*s53 - (mh*q1*q4*q5*s53)/16 + (5*mt*q1*q4*q5*s53)/8 + mh*q2*q4*q5*s53 + (5*mt*q2*q4*q5*s53)/2 - mh*q1^2*q4*q5*s12*s53 + (mt*q1^2*q4*q5*s12*s53)/2 + 2*mh*q1*q2*q4*q5*s12*s53 - 4*mt*q1^2*q2*q5*s45*s53 + (5*mh*q1^2*q4*q5*s45*s53)/8 + (3*mh*q1^2*q4*q5*s53^2)/16 - (mt*q1^2*q4*q5*s53^2)/8 - mh*q1*q2*q4*q5*s53^2;
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
if (match(mt^2*q1*q4*q5*s12^2));
id mt^2*q1*q4*q5*s12^2 = -(q1*q4) - (3*mh*mt^3*q1*q5)/4 + mt^4*q1*q5 + (3*mh*mt^3*q4*q5)/4 + mt^4*q4*q5 + q5*s12 + (mh*mt*q1*q5*s12)/2 - mt^2*q1*q5*s12 - (mh*mt*q4*q5*s12)/2 - mt^2*q4*q5*s12 + (q1*q5*s12^2)/2 + (q4*q5*s12^2)/2 + (mh*mt*q1*q5*s45)/4 + (3*mt^2*q1*q5*s45)/16 - (mh*mt*q4*q5*s45)/4 - (3*mt^2*q4*q5*s45)/16 + (3*q1*q5*s12*s45)/8 - (3*q4*q5*s12*s45)/8 + mt^2*q1*q4*q5*s12*s45 + (q1*q4*q5*s12^2*s45)/2 - (q1*q5*s45^2)/16 + (q4*q5*s45^2)/16 - (3*mt^2*q1*q4*q5*s45^2)/16 - (3*q1*q4*q5*s12*s45^2)/8 + (q1*q4*q5*s45^3)/16 + (mh*mt*q1*q5*s53)/4 - (3*mt^2*q1*q5*s53)/16 - (mh*mt*q4*q5*s53)/4 + (3*mt^2*q4*q5*s53)/16 - (3*q1*q5*s12*s53)/8 + (3*q4*q5*s12*s53)/8 + mt^2*q1*q4*q5*s12*s53 + (q1*q4*q5*s12^2*s53)/2 - (q1*q5*s45*s53)/2 - (q4*q5*s45*s53)/2 - (5*mt^2*q1*q4*q5*s45*s53)/8 - (5*q1*q4*q5*s12*s45*s53)/4 + (7*q1*q4*q5*s45^2*s53)/16 + (q1*q5*s53^2)/16 - (q4*q5*s53^2)/16 - (3*mt^2*q1*q4*q5*s53^2)/16 - (3*q1*q4*q5*s12*s53^2)/8 + (7*q1*q4*q5*s45*s53^2)/16 + (q1*q4*q5*s53^3)/16;
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
if (match(mt*q3*q4*q5*s53));
id mt*q3*q4*q5*s53 = mt*q1^2*q3*q4 + (5*mh*q1*q5)/64 - (7*mt*q1*q5)/32 - (mh*mt^2*q1^2*q5)/4 - (3*mt^3*q1^2*q5)/16 + (mh*mt^2*q1*q3*q5)/2 - (mt^3*q1*q3*q5)/2 + (3*mh*mt^4*q1^2*q3*q5)/4 - mt^5*q1^2*q3*q5 - (5*mh*q4*q5)/64 - (3*mt*q4*q5)/32 + (mh*q1^2*q5*s12)/4 - (7*mt*q1^2*q5*s12)/8 - (mh*q1*q3*q5*s12)/2 + (mt*q1*q3*q5*s12)/2 - (mh*mt^2*q1^2*q3*q5*s12)/2 + mt^3*q1^2*q3*q5*s12 + (mh*q1*q4*q5*s12)/4 + (3*mt*q1*q4*q5*s12)/8 - (mh*q1^2*q3*q5*s12^2)/4 + (mh*q1^2*q4*q5*s12^2)/4 - (3*mh*q1^2*q5*s45)/64 + (5*mt*q1^2*q5*s45)/32 - (mh*q1*q4*q5*s45)/32 - (mt*q1*q4*q5*s45)/16 - (mh*q1^2*q4*q5*s12*s45)/4 - (mt*q1^2*q4*q5*s12*s45)/8 + (3*mh*q1^2*q4*q5*s45^2)/64 + (mt*q1^2*q4*q5*s45^2)/32 - (13*mh*q1^2*q5*s53)/64 + (31*mt*q1^2*q5*s53)/32 + (mh*q1*q3*q5*s53)/2 - (3*mt*q1*q3*q5*s53)/2 - (mh*mt^2*q1^2*q3*q5*s53)/2 - (7*mh*q1*q4*q5*s53)/32 + (mt*q1*q4*q5*s53)/8 + (mh*q1^2*q3*q5*s12*s53)/2 - mt*q1^2*q3*q5*s12*s53 - (mh*q1^2*q4*q5*s12*s53)/4 + (mt*q1^2*q4*q5*s12*s53)/8 + (5*mh*q1^2*q4*q5*s45*s53)/32 - (mh*q1^2*q3*q5*s53^2)/4 + mt*q1^2*q3*q5*s53^2 + (3*mh*q1^2*q4*q5*s53^2)/64 - (mt*q1^2*q4*q5*s53^2)/32;
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
if (match(mt^2*q2^2*q3*q5*s12));
id mt^2*q2^2*q3*q5*s12 = 8*mt^2*q1^2*q2^2*q3 - (q1*q5)/2 + 3*mh*mt*q1^2*q5 - 6*mt^2*q1^2*q5 + (17*q2*q5)/32 - 7*mt^2*q1*q2*q5 - (5*mh*mt*q2^2*q5)/8 - (3*mt^2*q2^2*q5)/4 - (q3*q5)/32 - (mh*mt*q1*q3*q5)/4 + (mt^2*q1*q3*q5)/2 + 2*mh*mt^3*q1^2*q3*q5 - (5*mt^4*q1^2*q3*q5)/2 - (mt^2*q2*q3*q5)/4 + 4*mt^2*q1^2*q2*q5*s12 - (q2^2*q5*s12)/2 + 4*mt^2*q1*q2^2*q5*s12 - 2*mh*mt*q1^2*q3*q5*s12 + 3*mt^2*q1^2*q3*q5*s12 + (q2*q3*q5*s12)/2 - 2*mt^2*q1*q2*q3*q5*s12 - (q1^2*q3*q5*s12^2)/2 + q1*q2*q3*q5*s12^2 - (q2^2*q3*q5*s12^2)/2 + (q1^2*q5*s45)/2 - q1*q2*q5*s45 - 16*mt^2*q1^2*q2*q5*s45 + (19*q2^2*q5*s45)/32 - 8*mt^2*q1*q2^2*q5*s45 - (q2*q3*q5*s45)/8 + (mt^2*q2^2*q3*q5*s45)/4 + (q2^2*q3*q5*s12*s45)/2 - 8*mt^2*q1^2*q2^2*q5*s45^2 - (3*q2^2*q3*q5*s45^2)/32 - (q1^2*q5*s53)/2 + q1*q2*q5*s53 - (3*q2^2*q5*s53)/32 + 2*mh*mt*q1^2*q3*q5*s53 - 5*mt^2*q1^2*q3*q5*s53 - (3*q2*q3*q5*s53)/8 - mt^2*q1*q2*q3*q5*s53 + (mt^2*q2^2*q3*q5*s53)/4 + q1^2*q3*q5*s12*s53 - 2*q1*q2*q3*q5*s12*s53 + (q2^2*q3*q5*s12*s53)/2 + 8*mt^2*q1^2*q2^2*q5*s45*s53 - (5*q2^2*q3*q5*s45*s53)/16 - (q1^2*q3*q5*s53^2)/2 + q1*q2*q3*q5*s53^2 - (3*q2^2*q3*q5*s53^2)/32;
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
if (match(mh*mt^3*q2^2*q4*q5));
id mh*mt^3*q2^2*q4*q5 = 4*mt^2*q1^2*q2^2*q4 + (17*q1*q5)/64 + (5*mh*mt*q1^2*q5)/16 - (3*mt^2*q1^2*q5)/8 - (q2*q5)/4 - (7*mt^2*q1*q2*q5)/2 - (3*mh*mt*q2^2*q5)/2 - 3*mt^2*q2^2*q5 - (q4*q5)/64 - (mt^2*q1*q4*q5)/8 + (mh*mt*q2*q4*q5)/8 + (mt^2*q2*q4*q5)/4 - (5*mt^4*q2^2*q4*q5)/4 - (q1^2*q5*s12)/4 + 2*mt^2*q1^2*q2*q5*s12 + 2*mt^2*q1*q2^2*q5*s12 + (q1*q4*q5*s12)/4 - (mt^2*q1^2*q4*q5*s12)/2 - mt^2*q1*q2*q4*q5*s12 + mh*mt*q2^2*q4*q5*s12 + (3*mt^2*q2^2*q4*q5*s12)/2 - (q1^2*q4*q5*s12^2)/4 + (q1*q2*q4*q5*s12^2)/2 - (q2^2*q4*q5*s12^2)/4 + (19*q1^2*q5*s45)/64 - (q1*q2*q5*s45)/2 - 4*mt^2*q1^2*q2*q5*s45 + (q2^2*q5*s45)/4 - 8*mt^2*q1*q2^2*q5*s45 - (q1*q4*q5*s45)/16 + (mt^2*q1^2*q4*q5*s45)/8 + (q1^2*q4*q5*s12*s45)/4 - 4*mt^2*q1^2*q2^2*q5*s45^2 - (3*q1^2*q4*q5*s45^2)/64 - (3*q1^2*q5*s53)/64 + (q1*q2*q5*s53)/2 - (q2^2*q5*s53)/4 - (3*q1*q4*q5*s53)/16 + (mt^2*q1^2*q4*q5*s53)/8 - (mt^2*q1*q2*q4*q5*s53)/2 - mh*mt*q2^2*q4*q5*s53 - (5*mt^2*q2^2*q4*q5*s53)/2 + (q1^2*q4*q5*s12*s53)/4 - q1*q2*q4*q5*s12*s53 + (q2^2*q4*q5*s12*s53)/2 + 4*mt^2*q1^2*q2^2*q5*s45*s53 - (5*q1^2*q4*q5*s45*s53)/32 - (3*q1^2*q4*q5*s53^2)/64 + (q1*q2*q4*q5*s53^2)/2 - (q2^2*q4*q5*s53^2)/4;
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
if (match(mt^2*q1*q2^2*q4*q5*s12));
id mt^2*q1*q2^2*q4*q5*s12 = (-8*mt^2*q1^3*q2^2*q4)/3 - (17*q1^2*q5)/96 - (5*mh*mt*q1^3*q5)/24 + (mt^2*q1^3*q5)/4 + (5*q1*q2*q5)/12 + (7*mt^2*q1^2*q2*q5)/3 - (q2^2*q5)/4 + (17*mt^2*q1*q2^2*q5)/6 - (q1*q4*q5)/16 + (mt^2*q1^2*q4*q5)/12 + (7*q2*q4*q5)/96 - (5*mt^2*q1*q2*q4*q5)/12 + (5*mh*mt*q2^2*q4*q5)/24 + (mt^2*q2^2*q4*q5)/4 + (q1^3*q5*s12)/6 - (4*mt^2*q1^3*q2*q5*s12)/3 - (4*mt^2*q1^2*q2^2*q5*s12)/3 - (q1^2*q4*q5*s12)/6 + (mt^2*q1^3*q4*q5*s12)/3 - (q1*q2*q4*q5*s12)/6 + (2*mt^2*q1^2*q2*q4*q5*s12)/3 + (q2^2*q4*q5*s12)/6 + (q1^3*q4*q5*s12^2)/6 - (q1^2*q2*q4*q5*s12^2)/3 + (q1*q2^2*q4*q5*s12^2)/6 - (19*q1^3*q5*s45)/96 + (q1^2*q2*q5*s45)/3 + (8*mt^2*q1^3*q2*q5*s45)/3 - (q1*q2^2*q5*s45)/6 + (16*mt^2*q1^2*q2^2*q5*s45)/3 + (q1^2*q4*q5*s45)/24 - (mt^2*q1^3*q4*q5*s45)/12 - (q1^3*q4*q5*s12*s45)/6 + (8*mt^2*q1^3*q2^2*q5*s45^2)/3 + (q1^3*q4*q5*s45^2)/32 + (q1^3*q5*s53)/32 - (q1^2*q2*q5*s53)/3 + (q1*q2^2*q5*s53)/6 + (q1^2*q4*q5*s53)/8 - (mt^2*q1^3*q4*q5*s53)/12 + (q1*q2*q4*q5*s53)/6 + (mt^2*q1^2*q2*q4*q5*s53)/3 - (q2^2*q4*q5*s53)/6 + (5*mt^2*q1*q2^2*q4*q5*s53)/2 - (q1^3*q4*q5*s12*s53)/6 + (2*q1^2*q2*q4*q5*s12*s53)/3 - (q1*q2^2*q4*q5*s12*s53)/3 - (8*mt^2*q1^3*q2^2*q5*s45*s53)/3 + (5*q1^3*q4*q5*s45*s53)/48 + (q1^3*q4*q5*s53^2)/32 - (q1^2*q2*q4*q5*s53^2)/3 + (q1*q2^2*q4*q5*s53^2)/6;
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
if (match(mh*q1*q4*q5*s12^2*s45));
id mh*q1*q4*q5*s12^2*s45 = -4*mt*q1*q4 - 3*mh*mt^4*q1*q5 + 4*mt^5*q1*q5 + 3*mh*mt^4*q4*q5 + 4*mt^5*q4*q5 + 4*mt*q5*s12 + 2*mh*mt^2*q1*q5*s12 - 4*mt^3*q1*q5*s12 - 2*mh*mt^2*q4*q5*s12 - 4*mt^3*q4*q5*s12 + mh*q1*q5*s12^2 - mh*q4*q5*s12^2 + mh*mt^2*q1*q5*s45 + (3*mt^3*q1*q5*s45)/4 - mh*mt^2*q4*q5*s45 - (3*mt^3*q4*q5*s45)/4 - mh*q1*q5*s12*s45 + (7*mt*q1*q5*s12*s45)/2 + mh*q4*q5*s12*s45 + (mt*q4*q5*s12*s45)/2 + (3*mh*q1*q5*s45^2)/16 - (5*mt*q1*q5*s45^2)/8 - (3*mh*q4*q5*s45^2)/16 - (mt*q4*q5*s45^2)/8 + mh*q1*q4*q5*s12*s45^2 + (mt*q1*q4*q5*s12*s45^2)/2 - (3*mh*q1*q4*q5*s45^3)/16 - (mt*q1*q4*q5*s45^3)/8 + mh*mt^2*q1*q5*s53 - (3*mt^3*q1*q5*s53)/4 - mh*mt^2*q4*q5*s53 + (3*mt^3*q4*q5*s53)/4 - mh*q1*q5*s12*s53 + (mt*q1*q5*s12*s53)/2 + mh*q4*q5*s12*s53 + (7*mt*q4*q5*s12*s53)/2 + mh*q1*q4*q5*s12^2*s53 + (5*mh*q1*q5*s45*s53)/8 - (13*mt*q1*q5*s45*s53)/4 - (5*mh*q4*q5*s45*s53)/8 - (13*mt*q4*q5*s45*s53)/4 - mt*q1*q4*q5*s12*s45*s53 - (7*mh*q1*q4*q5*s45^2*s53)/16 + (mt*q1*q4*q5*s45^2*s53)/8 + (3*mh*q1*q5*s53^2)/16 - (mt*q1*q5*s53^2)/8 - (3*mh*q4*q5*s53^2)/16 - (5*mt*q4*q5*s53^2)/8 - mh*q1*q4*q5*s12*s53^2 + (mt*q1*q4*q5*s12*s53^2)/2 + (7*mh*q1*q4*q5*s45*s53^2)/16 + (mt*q1*q4*q5*s45*s53^2)/8 + (3*mh*q1*q4*q5*s53^3)/16 - (mt*q1*q4*q5*s53^3)/8;
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
if (match(mt*q1*q4*q5*s12^2*s45));
id mt*q1*q4*q5*s12^2*s45 = 4*mh*q1*q4 + 8*mt*q1*q4 + 8*mh*mt^4*q1*q5 - 11*mt^5*q1*q5 - 4*mh*mt^4*q4*q5 - 5*mt^5*q4*q5 - 4*mh*q5*s12 - 8*mt*q5*s12 - 4*mh*mt^2*q1*q5*s12 + 10*mt^3*q1*q5*s12 + 4*mh*mt^2*q4*q5*s12 + 6*mt^3*q4*q5*s12 - 4*mh*q1*q5*s12^2 + mt*q1*q5*s12^2 - mt*q4*q5*s12^2 - (19*mh*mt^2*q1*q5*s45)/4 + (5*mt^3*q1*q5*s45)/2 + (3*mh*mt^2*q4*q5*s45)/4 + (mt^3*q4*q5*s45)/2 + (mh*q1*q5*s12*s45)/2 - 10*mt*q1*q5*s12*s45 - (mh*q4*q5*s12*s45)/2 - (mh*q1*q5*s45^2)/8 + (7*mt*q1*q5*s45^2)/16 + (mh*q4*q5*s45^2)/8 + (mt*q4*q5*s45^2)/16 - (mh*q1*q4*q5*s12*s45^2)/2 + (mh*q1*q4*q5*s45^3)/8 + (mt*q1*q4*q5*s45^3)/16 - (13*mh*mt^2*q1*q5*s53)/4 + (5*mt^3*q1*q5*s53)/2 - (3*mh*mt^2*q4*q5*s53)/4 - (11*mt^3*q4*q5*s53)/2 + (7*mh*q1*q5*s12*s53)/2 - 2*mt*q1*q5*s12*s53 - (7*mh*q4*q5*s12*s53)/2 - 4*mt*q4*q5*s12*s53 - 4*mh*q1*q4*q5*s12^2*s53 + mt*q1*q4*q5*s12^2*s53 + (3*mh*q1*q5*s45*s53)/4 + (49*mt*q1*q5*s45*s53)/8 + (13*mh*q4*q5*s45*s53)/4 + (55*mt*q4*q5*s45*s53)/8 + 5*mh*q1*q4*q5*s12*s45*s53 + 2*mt*q1*q4*q5*s12*s45*s53 - (7*mh*q1*q4*q5*s45^2*s53)/8 - (11*mt*q1*q4*q5*s45^2*s53)/16 - (5*mh*q1*q5*s53^2)/8 + (7*mt*q1*q5*s53^2)/16 + (5*mh*q4*q5*s53^2)/8 + (33*mt*q4*q5*s53^2)/16 + (7*mh*q1*q4*q5*s12*s53^2)/2 - 2*mt*q1*q4*q5*s12*s53^2 - (21*mh*q1*q4*q5*s45*s53^2)/8 + (3*mt*q1*q4*q5*s45*s53^2)/16 - (5*mh*q1*q4*q5*s53^3)/8 + (7*mt*q1*q4*q5*s53^3)/16;
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
if (match(mt^2*q1^2*q4*q5*s12*s45));
id mt^2*q1^2*q4*q5*s12*s45 = -8*mt^2*q1^2*q2*q4 - (11*mh*mt*q1*q5)/4 + (11*mt^2*q1*q5)/2 - 2*mh*mt^3*q1^2*q5 + (5*mt^4*q1^2*q5)/2 + 3*mh*mt*q2*q5 + 6*mt^2*q2*q5 - (mh*mt*q4*q5)/4 - (mt^2*q4*q5)/2 + 2*mh*mt^3*q2*q4*q5 + (5*mt^4*q2*q4*q5)/2 + 2*mh*mt*q1^2*q5*s12 - 3*mt^2*q1^2*q5*s12 - 4*mt^2*q1*q2*q5*s12 + 2*mt^2*q1*q4*q5*s12 - 2*mh*mt*q2*q4*q5*s12 - 3*mt^2*q2*q4*q5*s12 + (q1^2*q5*s12^2)/2 - q1*q4*q5*s12^2 + (q2*q4*q5*s12^2)/2 + (17*q1*q5*s45)/32 - (19*mh*mt*q1^2*q5*s45)/8 + (21*mt^2*q1^2*q5*s45)/4 - (q2*q5*s45)/2 + 16*mt^2*q1*q2*q5*s45 - (q4*q5*s45)/32 - (mt^2*q1*q4*q5*s45)/4 - (q1^2*q5*s12*s45)/2 + (q1*q4*q5*s12*s45)/2 - (q1^2*q4*q5*s12^2*s45)/2 + (3*q1^2*q5*s45^2)/32 + 8*mt^2*q1^2*q2*q5*s45^2 - (q1*q4*q5*s45^2)/8 + (mt^2*q1^2*q4*q5*s45^2)/4 + (q1^2*q4*q5*s12*s45^2)/2 - (3*q1^2*q4*q5*s45^3)/32 - (17*q1*q5*s53)/32 + (3*mh*mt*q1^2*q5*s53)/8 - (mt^2*q1^2*q5*s53)/4 + (q2*q5*s53)/2 + (q4*q5*s53)/32 + (5*mt^2*q1*q4*q5*s53)/4 + 2*mh*mt*q2*q4*q5*s53 + 5*mt^2*q2*q4*q5*s53 - (q1^2*q5*s12*s53)/2 + (3*q1*q4*q5*s12*s53)/2 + mt^2*q1^2*q4*q5*s12*s53 - q2*q4*q5*s12*s53 + (q1^2*q4*q5*s12^2*s53)/2 + (5*q1^2*q5*s45*s53)/16 - 8*mt^2*q1^2*q2*q5*s45*s53 - (q1*q4*q5*s45*s53)/4 - (7*q1^2*q4*q5*s45^2*s53)/32 + (3*q1^2*q5*s53^2)/32 - (5*q1*q4*q5*s53^2)/8 - (mt^2*q1^2*q4*q5*s53^2)/4 + (q2*q4*q5*s53^2)/2 - (q1^2*q4*q5*s12*s53^2)/2 + (7*q1^2*q4*q5*s45*s53^2)/32 + (3*q1^2*q4*q5*s53^3)/32;
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
if (match(mt^6*q1^2*q3*q5));
id mt^6*q1^2*q3*q5 = 3*q1^2*q3 - 8*mt^2*q1^2*q2*q3 - mh*mt*q1*q5 + 2*mt^2*q1*q5 - 6*mh*mt^3*q1^2*q5 + 13*mt^4*q1^2*q5 + (5*mh*mt*q2*q5)/8 + (3*mt^2*q2*q5)/4 + (3*mh*mt*q3*q5)/8 - (mt^2*q3*q5)/4 + 4*mh*mt^3*q1*q3*q5 - (9*mt^4*q1*q3*q5)/2 - 3*q1*q5*s12 - 6*mh*mt*q1^2*q5*s12 - 2*mt^2*q1^2*q5*s12 + (q2*q5*s12)/2 - 4*mt^2*q1*q2*q5*s12 - (q3*q5*s12)/2 - 4*mh*mt*q1*q3*q5*s12 + 5*mt^2*q1*q3*q5*s12 + 4*mh*mt^3*q1^2*q3*q5*s12 - 2*mt^4*q1^2*q3*q5*s12 + mt^2*q2*q3*q5*s12 - 3*q1^2*q5*s12^2 - (q1*q3*q5*s12^2)/2 - 4*mh*mt*q1^2*q3*q5*s12^2 + 3*mt^2*q1^2*q3*q5*s12^2 + (q2*q3*q5*s12^2)/2 + (q1*q5*s45)/2 - 2*mh*mt*q1^2*q5*s45 + mt^2*q1^2*q5*s45 - (19*q2*q5*s45)/32 + 8*mt^2*q1*q2*q5*s45 + (3*q3*q5*s45)/32 - (mt^2*q2*q3*q5*s45)/4 - (q2*q3*q5*s12*s45)/2 + 8*mt^2*q1^2*q2*q5*s45^2 + (3*q2*q3*q5*s45^2)/32 + (5*q1*q5*s53)/2 + 8*mh*mt*q1^2*q5*s53 - 11*mt^2*q1^2*q5*s53 + (3*q2*q5*s53)/32 - (83*q3*q5*s53)/32 - 8*mh*mt*q1*q3*q5*s53 + 7*mt^2*q1*q3*q5*s53 - 8*mh*mt^3*q1^2*q3*q5*s53 + 15*mt^4*q1^2*q3*q5*s53 - (mt^2*q2*q3*q5*s53)/4 + 6*q1^2*q5*s12*s53 - 5*q1*q3*q5*s12*s53 - 4*mh*mt*q1^2*q3*q5*s12*s53 - 4*mt^2*q1^2*q3*q5*s12*s53 - (q2*q3*q5*s12*s53)/2 - 3*q1^2*q3*q5*s12^2*s53 - 8*mt^2*q1^2*q2*q5*s45*s53 + (5*q2*q3*q5*s45*s53)/16 - 3*q1^2*q5*s53^2 + (11*q1*q3*q5*s53^2)/2 + 8*mh*mt*q1^2*q3*q5*s53^2 - 11*mt^2*q1^2*q3*q5*s53^2 + (3*q2*q3*q5*s53^2)/32 + 6*q1^2*q3*q5*s12*s53^2 - 3*q1^2*q3*q5*s53^3;
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
if (match(mh*mt^4*q1^2*q3*q5*s53));
id mh*mt^4*q1^2*q3*q5*s53 = -(mh*q1*q2*q3)/3 + (2*mt*q1*q2*q3)/3 + (mh*mt^2*q1*q5)/6 - (7*mt^3*q1*q5)/12 - (11*mh*mt^2*q2*q5)/48 - (7*mt^3*q2*q5)/24 + (mh*mt^2*q3*q5)/16 - (mt^3*q3*q5)/24 + (mh*mt^4*q1*q3*q5)/3 - (5*mt^5*q1*q3*q5)/12 + (mh*q1*q5*s12)/6 - (mt*q1*q5*s12)/6 + (5*mh*q2*q5*s12)/24 + (mt*q2*q5*s12)/3 - (mh*q3*q5*s12)/24 - (mh*mt^2*q1*q3*q5*s12)/3 + (mt^3*q1*q3*q5*s12)/2 + (mh*q1*q2*q5*s12^2)/3 - (mt*q1*q3*q5*s12^2)/12 + (mt*q2*q3*q5*s12^2)/12 + (mh*q1*q5*s45)/6 - (mt*q1*q5*s45)/4 - (17*mh*q2*q5*s45)/96 - (29*mt*q2*q5*s45)/64 + (mh*q3*q5*s45)/96 - (mt*q3*q5*s45)/192 - (mh*q2*q3*q5*s12*s45)/24 - (2*mt*q1*q2*q5*s45^2)/3 + (mh*q2*q3*q5*s45^2)/96 - (mt*q2*q3*q5*s45^2)/192 - (4*mt*q1^2*q2*q3*s53)/3 - (mh*q1*q5*s53)/2 + (13*mt*q1*q5*s53)/12 + (2*mt^3*q1^2*q5*s53)/3 + (5*mh*q2*q5*s53)/32 + (31*mt*q2*q5*s53)/192 + (11*mh*q3*q5*s53)/32 - (119*mt*q3*q5*s53)/192 - (mh*mt^2*q1*q3*q5*s53)/3 - (mt^3*q1*q3*q5*s53)/6 + (4*mt^5*q1^2*q3*q5*s53)/3 + (2*mt*q1^2*q5*s12*s53)/3 - (2*mh*q1*q2*q5*s12*s53)/3 - (2*mt*q1*q2*q5*s12*s53)/3 + (2*mh*q1*q3*q5*s12*s53)/3 - (mt*q1*q3*q5*s12*s53)/2 + (2*mh*mt^2*q1^2*q3*q5*s12*s53)/3 - (4*mt^3*q1^2*q3*q5*s12*s53)/3 + (mh*q2*q3*q5*s12*s53)/24 + (mh*q1^2*q3*q5*s12^2*s53)/3 - (mh*q1^2*q5*s45*s53)/3 + (2*mt*q1^2*q5*s45*s53)/3 + (mh*q1*q2*q5*s45*s53)/3 + 2*mt*q1*q2*q5*s45*s53 + (mt*q2*q3*q5*s45*s53)/96 + (4*mt*q1^2*q2*q5*s45^2*s53)/3 + (mh*q1^2*q5*s53^2)/3 - (4*mt*q1^2*q5*s53^2)/3 - (2*mh*q1*q3*q5*s53^2)/3 + (23*mt*q1*q3*q5*s53^2)/12 + (2*mh*mt^2*q1^2*q3*q5*s53^2)/3 - (mh*q2*q3*q5*s53^2)/96 - (mt*q2*q3*q5*s53^2)/192 - (2*mh*q1^2*q3*q5*s12*s53^2)/3 + (4*mt*q1^2*q3*q5*s12*s53^2)/3 - (4*mt*q1^2*q2*q5*s45*s53^2)/3 + (mh*q1^2*q3*q5*s53^3)/3 - (4*mt*q1^2*q3*q5*s53^3)/3;
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
if (match(mt^2*q2*q3*q5*s12*s45));
id mt^2*q2*q3*q5*s12*s45 = 3*q1*q3 - 8*mt^2*q1*q2*q3 - 6*mh*mt^3*q1*q5 + 13*mt^4*q1*q5 + 2*mh*mt^3*q2*q5 + (5*mt^4*q2*q5)/2 + 4*mh*mt^3*q3*q5 - (9*mt^4*q3*q5)/2 - mt^6*q1*q3*q5 - 3*q5*s12 - 6*mh*mt*q1*q5*s12 - 2*mt^2*q1*q5*s12 - 2*mh*mt*q2*q5*s12 - 3*mt^2*q2*q5*s12 - 4*mh*mt*q3*q5*s12 + 5*mt^2*q3*q5*s12 + 4*mh*mt^3*q1*q3*q5*s12 - 2*mt^4*q1*q3*q5*s12 - 3*q1*q5*s12^2 + (q2*q5*s12^2)/2 - (q3*q5*s12^2)/2 - 4*mh*mt*q1*q3*q5*s12^2 + 3*mt^2*q1*q3*q5*s12^2 - 2*mh*mt*q1*q5*s45 + mt^2*q1*q5*s45 + (19*mh*mt*q2*q5*s45)/8 + (21*mt^2*q2*q5*s45)/4 - (3*mh*mt*q3*q5*s45)/8 + (mt^2*q3*q5*s45)/4 - (q2*q5*s12*s45)/2 + (q3*q5*s12*s45)/2 - (q2*q3*q5*s12^2*s45)/2 + (3*q2*q5*s45^2)/32 + 8*mt^2*q1*q2*q5*s45^2 - (3*q3*q5*s45^2)/32 + (mt^2*q2*q3*q5*s45^2)/4 + (q2*q3*q5*s12*s45^2)/2 - (3*q2*q3*q5*s45^3)/32 + 8*mh*mt*q1*q5*s53 - 11*mt^2*q1*q5*s53 - (3*mh*mt*q2*q5*s53)/8 - (mt^2*q2*q5*s53)/4 - (61*mh*mt*q3*q5*s53)/8 + (27*mt^2*q3*q5*s53)/4 - 8*mh*mt^3*q1*q3*q5*s53 + 15*mt^4*q1*q3*q5*s53 + 6*q1*q5*s12*s53 - (q2*q5*s12*s53)/2 - (11*q3*q5*s12*s53)/2 - 4*mh*mt*q1*q3*q5*s12*s53 - 4*mt^2*q1*q3*q5*s12*s53 + mt^2*q2*q3*q5*s12*s53 - 3*q1*q3*q5*s12^2*s53 + (q2*q3*q5*s12^2*s53)/2 + (5*q2*q5*s45*s53)/16 - 8*mt^2*q1*q2*q5*s45*s53 + (43*q3*q5*s45*s53)/16 - (7*q2*q3*q5*s45^2*s53)/32 - 3*q1*q5*s53^2 + (3*q2*q5*s53^2)/32 + (93*q3*q5*s53^2)/32 + 8*mh*mt*q1*q3*q5*s53^2 - 11*mt^2*q1*q3*q5*s53^2 - (mt^2*q2*q3*q5*s53^2)/4 + 6*q1*q3*q5*s12*s53^2 - (q2*q3*q5*s12*s53^2)/2 + (7*q2*q3*q5*s45*s53^2)/32 - 3*q1*q3*q5*s53^3 + (3*q2*q3*q5*s53^3)/32;
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
if (match(mt^6*q2*q4*q5));
id mt^6*q2*q4*q5 = 3*q2*q4 - 8*mt^2*q1*q2*q4 - 2*mh*mt^3*q1*q5 + (5*mt^4*q1*q5)/2 + 6*mh*mt^3*q2*q5 + 13*mt^4*q2*q5 - 4*mh*mt^3*q4*q5 - (9*mt^4*q4*q5)/2 - 3*q5*s12 + 2*mh*mt*q1*q5*s12 - 3*mt^2*q1*q5*s12 + 6*mh*mt*q2*q5*s12 - 2*mt^2*q2*q5*s12 + 4*mh*mt*q4*q5*s12 + 5*mt^2*q4*q5*s12 - 4*mh*mt^3*q2*q4*q5*s12 - 2*mt^4*q2*q4*q5*s12 + (q1*q5*s12^2)/2 - 3*q2*q5*s12^2 - (q4*q5*s12^2)/2 + 4*mh*mt*q2*q4*q5*s12^2 + 3*mt^2*q2*q4*q5*s12^2 - (19*mh*mt*q1*q5*s45)/8 + (21*mt^2*q1*q5*s45)/4 + 2*mh*mt*q2*q5*s45 + mt^2*q2*q5*s45 + (3*mh*mt*q4*q5*s45)/8 + (mt^2*q4*q5*s45)/4 - (q1*q5*s12*s45)/2 + (q4*q5*s12*s45)/2 - mt^2*q1*q4*q5*s12*s45 - (q1*q4*q5*s12^2*s45)/2 + (3*q1*q5*s45^2)/32 + 8*mt^2*q1*q2*q5*s45^2 - (3*q4*q5*s45^2)/32 + (mt^2*q1*q4*q5*s45^2)/4 + (q1*q4*q5*s12*s45^2)/2 - (3*q1*q4*q5*s45^3)/32 + (3*mh*mt*q1*q5*s53)/8 - (mt^2*q1*q5*s53)/4 - 8*mh*mt*q2*q5*s53 - 11*mt^2*q2*q5*s53 + (61*mh*mt*q4*q5*s53)/8 + (27*mt^2*q4*q5*s53)/4 + 8*mh*mt^3*q2*q4*q5*s53 + 15*mt^4*q2*q4*q5*s53 - (q1*q5*s12*s53)/2 + 6*q2*q5*s12*s53 - (11*q4*q5*s12*s53)/2 + mt^2*q1*q4*q5*s12*s53 + 4*mh*mt*q2*q4*q5*s12*s53 - 4*mt^2*q2*q4*q5*s12*s53 + (q1*q4*q5*s12^2*s53)/2 - 3*q2*q4*q5*s12^2*s53 + (5*q1*q5*s45*s53)/16 - 8*mt^2*q1*q2*q5*s45*s53 + (43*q4*q5*s45*s53)/16 - (7*q1*q4*q5*s45^2*s53)/32 + (3*q1*q5*s53^2)/32 - 3*q2*q5*s53^2 + (93*q4*q5*s53^2)/32 - (mt^2*q1*q4*q5*s53^2)/4 - 8*mh*mt*q2*q4*q5*s53^2 - 11*mt^2*q2*q4*q5*s53^2 - (q1*q4*q5*s12*s53^2)/2 + 6*q2*q4*q5*s12*s53^2 + (7*q1*q4*q5*s45*s53^2)/32 + (3*q1*q4*q5*s53^3)/32 - 3*q2*q4*q5*s53^3;
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
if (match(mt^2*q2*q3*q5*s12^2));
id mt^2*q2*q3*q5*s12^2 = 3*q1*q3 - q2*q3 - 8*mt^2*q1*q2*q3 - 6*mh*mt^3*q1*q5 + 13*mt^4*q1*q5 + (11*mh*mt^3*q2*q5)/4 + (7*mt^4*q2*q5)/2 + (13*mh*mt^3*q3*q5)/4 - (7*mt^4*q3*q5)/2 - mt^6*q1*q3*q5 - 2*q5*s12 - 6*mh*mt*q1*q5*s12 - 2*mt^2*q1*q5*s12 - (5*mh*mt*q2*q5*s12)/2 - 4*mt^2*q2*q5*s12 - (7*mh*mt*q3*q5*s12)/2 + 4*mt^2*q3*q5*s12 + 4*mh*mt^3*q1*q3*q5*s12 - 2*mt^4*q1*q3*q5*s12 - 3*q1*q5*s12^2 + q2*q5*s12^2 - 4*mh*mt*q1*q3*q5*s12^2 + 3*mt^2*q1*q3*q5*s12^2 - 2*mh*mt*q1*q5*s45 + mt^2*q1*q5*s45 + (17*mh*mt*q2*q5*s45)/8 + (87*mt^2*q2*q5*s45)/16 - (mh*mt*q3*q5*s45)/8 + (mt^2*q3*q5*s45)/16 - (q2*q5*s12*s45)/8 + (q3*q5*s12*s45)/8 + (q2*q5*s45^2)/32 + 8*mt^2*q1*q2*q5*s45^2 - (q3*q5*s45^2)/32 + (mt^2*q2*q3*q5*s45^2)/16 + (q2*q3*q5*s12*s45^2)/8 - (q2*q3*q5*s45^3)/32 + 8*mh*mt*q1*q5*s53 - 11*mt^2*q1*q5*s53 - (5*mh*mt*q2*q5*s53)/8 - (7*mt^2*q2*q5*s53)/16 - (59*mh*mt*q3*q5*s53)/8 + (111*mt^2*q3*q5*s53)/16 - 8*mh*mt^3*q1*q3*q5*s53 + 15*mt^4*q1*q3*q5*s53 + 6*q1*q5*s12*s53 - (7*q2*q5*s12*s53)/8 - (41*q3*q5*s12*s53)/8 - 4*mh*mt*q1*q3*q5*s12*s53 - 4*mt^2*q1*q3*q5*s12*s53 + 2*mt^2*q2*q3*q5*s12*s53 - 3*q1*q3*q5*s12^2*s53 + q2*q3*q5*s12^2*s53 - (3*q2*q5*s45*s53)/16 - 8*mt^2*q1*q2*q5*s45*s53 + (35*q3*q5*s45*s53)/16 - (5*mt^2*q2*q3*q5*s45*s53)/8 - (5*q2*q3*q5*s12*s45*s53)/4 + (7*q2*q3*q5*s45^2*s53)/32 - 3*q1*q5*s53^2 + (5*q2*q5*s53^2)/32 + (91*q3*q5*s53^2)/32 + 8*mh*mt*q1*q3*q5*s53^2 - 11*mt^2*q1*q3*q5*s53^2 - (7*mt^2*q2*q3*q5*s53^2)/16 + 6*q1*q3*q5*s12*s53^2 - (7*q2*q3*q5*s12*s53^2)/8 + (21*q2*q3*q5*s45*s53^2)/32 - 3*q1*q3*q5*s53^3 + (5*q2*q3*q5*s53^3)/32;
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
if (match(mt*q2^2*q3*q5*s12^2));
id mt*q2^2*q3*q5*s12^2 = -4*mh*q1^2*q2*q3 + 8*mt*q1^2*q2*q3 + 4*mh*q1*q2^2*q3 - 8*mt*q1*q2^2*q3 - 2*mh*q1*q5 + 3*mt*q1*q5 + 2*mh*mt^2*q1^2*q5 - 7*mt^3*q1^2*q5 + (15*mh*q2*q5)/8 + (77*mt*q2*q5)/16 + (11*mh*mt^2*q2^2*q5)/4 + (7*mt^3*q2^2*q5)/2 + (mh*q3*q5)/8 - (5*mt*q3*q5)/16 - (mh*mt^2*q1*q3*q5)/2 + mt^3*q1*q3*q5 + 4*mh*mt^4*q1^2*q3*q5 - 5*mt^5*q1^2*q3*q5 + 2*mh*q1^2*q5*s12 - 2*mt*q1^2*q5*s12 - (5*mh*q2^2*q5*s12)/2 - 4*mt*q2^2*q5*s12 + mh*q1*q3*q5*s12 - 2*mt*q1*q3*q5*s12 - 4*mh*mt^2*q1^2*q3*q5*s12 + 6*mt^3*q1^2*q3*q5*s12 - (mh*q2*q3*q5*s12)/2 + 2*mt*q2*q3*q5*s12 + 4*mh*q1^2*q2*q5*s12^2 - 4*mh*q1*q2^2*q5*s12^2 - mt*q1^2*q3*q5*s12^2 + 2*mt*q1*q2*q3*q5*s12^2 + 2*mh*q1^2*q5*s45 - 3*mt*q1^2*q5*s45 - 4*mh*q1*q2*q5*s45 + 6*mt*q1*q2*q5*s45 + (17*mh*q2^2*q5*s45)/8 + (87*mt*q2^2*q5*s45)/16 - (mt*q2*q3*q5*s45)/4 + (mh*q2^2*q3*q5*s12*s45)/2 - 8*mt*q1^2*q2*q5*s45^2 + 8*mt*q1*q2^2*q5*s45^2 - (mh*q2^2*q3*q5*s45^2)/8 + (mt*q2^2*q3*q5*s45^2)/16 + 16*mt*q1^2*q2^2*q3*s53 + 2*mh*q1^2*q5*s53 - 3*mt*q1^2*q5*s53 - 12*mt*q1*q2*q5*s53 - (15*mh*q2^2*q5*s53)/8 - (31*mt*q2^2*q5*s53)/16 + (mh*q1*q3*q5*s53)/2 - mt*q1*q3*q5*s53 + 4*mh*mt^2*q1^2*q3*q5*s53 - 10*mt^3*q1^2*q3*q5*s53 - (3*mh*q2*q3*q5*s53)/4 + (mt*q2*q3*q5*s53)/4 - 8*mh*q1^2*q2*q5*s12*s53 + 8*mt*q1^2*q2*q5*s12*s53 + 8*mh*q1*q2^2*q5*s12*s53 + 8*mt*q1*q2^2*q5*s12*s53 + 2*mt*q1^2*q3*q5*s12*s53 - 8*mt*q1*q2*q3*q5*s12*s53 - (mh*q2^2*q3*q5*s12*s53)/2 + 4*mh*q1^2*q2*q5*s45*s53 - 24*mt*q1^2*q2*q5*s45*s53 - 4*mh*q1*q2^2*q5*s45*s53 - 24*mt*q1*q2^2*q5*s45*s53 - (mt*q2^2*q3*q5*s45*s53)/8 - 16*mt*q1^2*q2^2*q5*s45^2*s53 - mt*q1^2*q3*q5*s53^2 + (mh*q2^2*q3*q5*s53^2)/8 + (mt*q2^2*q3*q5*s53^2)/16 + 16*mt*q1^2*q2^2*q5*s45*s53^2;
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
if (match(mt*q1*q2^2*q4*q5*s12^2));
id mt*q1*q2^2*q4*q5*s12^2 = -4*mh*q1^3*q2*q4 - 8*mt*q1^3*q2*q4 + 4*mh*q1^2*q2^2*q4 + 8*mt*q1^2*q2^2*q4 - (15*mh*q1^2*q5)/8 + (77*mt*q1^2*q5)/16 - (11*mh*mt^2*q1^3*q5)/4 + (7*mt^3*q1^3*q5)/2 + 5*mh*q1*q2*q5 - mt*q1*q2*q5 - 3*mh*q2^2*q5 - (11*mt*q2^2*q5)/2 - (3*mh*q1*q4*q5)/4 - (9*mt*q1*q4*q5)/8 + (5*mh*q2*q4*q5)/8 + (13*mt*q2*q4*q5)/16 - (5*mh*mt^2*q2^2*q4*q5)/4 - (3*mt^3*q2^2*q4*q5)/2 + (5*mh*q1^3*q5*s12)/2 - 4*mt*q1^3*q5*s12 - 2*mh*q1*q2^2*q5*s12 + 4*mt*q1*q2^2*q5*s12 + (mh*q1^2*q4*q5*s12)/2 + 2*mt*q1^2*q4*q5*s12 - (5*mh*q1*q2*q4*q5*s12)/2 - 4*mt*q1*q2*q4*q5*s12 + (3*mh*q2^2*q4*q5*s12)/2 + 2*mt*q2^2*q4*q5*s12 + 4*mh*q1^3*q2*q5*s12^2 - 4*mh*q1^2*q2^2*q5*s12^2 - mt*q1^3*q4*q5*s12^2 + 2*mt*q1^2*q2*q4*q5*s12^2 - (17*mh*q1^3*q5*s45)/8 + (87*mt*q1^3*q5*s45)/16 + 4*mh*q1^2*q2*q5*s45 + 6*mt*q1^2*q2*q5*s45 - 2*mh*q1*q2^2*q5*s45 - 15*mt*q1*q2^2*q5*s45 - (mt*q1^2*q4*q5*s45)/4 - (mh*q1^3*q4*q5*s12*s45)/2 + 8*mt*q1^3*q2*q5*s45^2 - 8*mt*q1^2*q2^2*q5*s45^2 + (mh*q1^3*q4*q5*s45^2)/8 + (mt*q1^3*q4*q5*s45^2)/16 + 16*mt*q1^3*q2^2*q4*s53 + (15*mh*q1^3*q5*s53)/8 - (31*mt*q1^3*q5*s53)/16 - 12*mt*q1^2*q2*q5*s53 - 2*mh*q1*q2^2*q5*s53 - 18*mt*q1*q2^2*q5*s53 + (3*mh*q1^2*q4*q5*s53)/4 + (mt*q1^2*q4*q5*s53)/4 + (13*mh*q1*q2*q4*q5*s53)/4 + 8*mt*q1*q2*q4*q5*s53 - (15*mh*q2^2*q4*q5*s53)/4 - (13*mt*q2^2*q4*q5*s53)/2 - 8*mh*q1^3*q2*q5*s12*s53 + 8*mt*q1^3*q2*q5*s12*s53 + 8*mh*q1^2*q2^2*q5*s12*s53 + 8*mt*q1^2*q2^2*q5*s12*s53 + (mh*q1^3*q4*q5*s12*s53)/2 - 8*mt*q1^2*q2*q4*q5*s12*s53 + 8*mt*q1*q2^2*q4*q5*s12*s53 + 4*mh*q1^3*q2*q5*s45*s53 - 24*mt*q1^3*q2*q5*s45*s53 - 4*mh*q1^2*q2^2*q5*s45*s53 - 24*mt*q1^2*q2^2*q5*s45*s53 - (mt*q1^3*q4*q5*s45*s53)/8 - 16*mt*q1^3*q2^2*q5*s45^2*s53 - (mh*q1^3*q4*q5*s53^2)/8 + (mt*q1^3*q4*q5*s53^2)/16 - 16*mt*q1*q2^2*q4*q5*s53^2 + 16*mt*q1^3*q2^2*q5*s45*s53^2;
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
if (match(mt*q2*q3*q5*s12^2*s45));
id mt*q2*q3*q5*s12^2*s45 = -4*mh*q2*q3 + 8*mt*q2*q3 - 8*mh*mt^4*q2*q5 - 11*mt^5*q2*q5 + 4*mh*mt^4*q3*q5 - 5*mt^5*q3*q5 + 4*mh*q5*s12 - 8*mt*q5*s12 + 4*mh*mt^2*q2*q5*s12 + 10*mt^3*q2*q5*s12 - 4*mh*mt^2*q3*q5*s12 + 6*mt^3*q3*q5*s12 + 4*mh*q2*q5*s12^2 + mt*q2*q5*s12^2 - mt*q3*q5*s12^2 + (19*mh*mt^2*q2*q5*s45)/4 + (5*mt^3*q2*q5*s45)/2 - (3*mh*mt^2*q3*q5*s45)/4 + (mt^3*q3*q5*s45)/2 - (mh*q2*q5*s12*s45)/2 - 10*mt*q2*q5*s12*s45 + (mh*q3*q5*s12*s45)/2 + (mh*q2*q5*s45^2)/8 + (7*mt*q2*q5*s45^2)/16 - (mh*q3*q5*s45^2)/8 + (mt*q3*q5*s45^2)/16 + (mh*q2*q3*q5*s12*s45^2)/2 - (mh*q2*q3*q5*s45^3)/8 + (mt*q2*q3*q5*s45^3)/16 - 16*mt*q1*q2*q3*s53 + 8*mt^3*q1*q5*s53 + (29*mh*mt^2*q2*q5*s53)/4 + (15*mt^3*q2*q5*s53)/2 - (13*mh*mt^2*q3*q5*s53)/4 - (5*mt^3*q3*q5*s53)/2 - 12*mh*mt^4*q1*q3*q5*s53 + 16*mt^5*q1*q3*q5*s53 + 8*mt*q1*q5*s12*s53 - (15*mh*q2*q5*s12*s53)/2 - 8*mt*q2*q5*s12*s53 + (15*mh*q3*q5*s12*s53)/2 - 6*mt*q3*q5*s12*s53 + 8*mh*mt^2*q1*q3*q5*s12*s53 - 16*mt^3*q1*q3*q5*s12*s53 + 4*mh*q1*q3*q5*s12^2*s53 + mt*q2*q3*q5*s12^2*s53 - 4*mh*q1*q5*s45*s53 + 8*mt*q1*q5*s45*s53 + 4*mh*q2*q5*s45*s53 + (133*mt*q2*q5*s45*s53)/8 - 4*mh*q3*q5*s45*s53 + (59*mt*q3*q5*s45*s53)/8 - mh*q2*q3*q5*s12*s45*s53 + 16*mt*q1*q2*q5*s45^2*s53 + (mh*q2*q3*q5*s45^2*s53)/8 - (3*mt*q2*q3*q5*s45^2*s53)/16 + 4*mh*q1*q5*s53^2 - 16*mt*q1*q5*s53^2 - (mh*q2*q5*s53^2)/8 - (mt*q2*q5*s53^2)/16 - (31*mh*q3*q5*s53^2)/8 + (249*mt*q3*q5*s53^2)/16 + 8*mh*mt^2*q1*q3*q5*s53^2 - 8*mh*q1*q3*q5*s12*s53^2 + 16*mt*q1*q3*q5*s12*s53^2 + (mh*q2*q3*q5*s12*s53^2)/2 - 16*mt*q1*q2*q5*s45*s53^2 + (mh*q2*q3*q5*s45*s53^2)/8 + (3*mt*q2*q3*q5*s45*s53^2)/16 + 4*mh*q1*q3*q5*s53^3 - 16*mt*q1*q3*q5*s53^3 - (mh*q2*q3*q5*s53^3)/8 - (mt*q2*q3*q5*s53^3)/16;
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
if (match(mh*q1^2*q4*q5*s12^2*s53));
id mh*q1^2*q4*q5*s12^2*s53 = mh*q1*q2*q4 + (2*mt*q1*q2*q4)/3 + (17*mh*mt^2*q1*q5)/48 - (11*mt^3*q1*q5)/24 - (mh*mt^2*q2*q5)/2 - (13*mt^3*q2*q5)/12 + (7*mh*mt^2*q4*q5)/48 + (mt^3*q4*q5)/8 + (mt^5*q2*q4*q5)/12 - (7*mh*q1*q5*s12)/24 + (mt*q1*q5*s12)/2 - (mh*q2*q5*s12)/2 + (mt*q2*q5*s12)/6 - (5*mh*q4*q5*s12)/24 - (mt*q4*q5*s12)/6 + (mh*mt^2*q2*q4*q5*s12)/3 + (mt^3*q2*q4*q5*s12)/6 - mh*q1*q2*q5*s12^2 + (mh*q1*q4*q5*s12^2)/3 + (mt*q1*q4*q5*s12^2)/4 - (mh*q2*q4*q5*s12^2)/3 - (mt*q2*q4*q5*s12^2)/4 + (13*mh*q1*q5*s45)/96 - (31*mt*q1*q5*s45)/64 - (mh*q2*q5*s45)/6 - (mt*q2*q5*s45)/12 + (mh*q4*q5*s45)/32 + (5*mt*q4*q5*s45)/192 - (5*mh*q1*q4*q5*s12*s45)/24 - (mt*q1*q4*q5*s12*s45)/6 - (2*mt*q1*q2*q5*s45^2)/3 + (mh*q1*q4*q5*s45^2)/32 + (5*mt*q1*q4*q5*s45^2)/192 + 4*mt*q1^2*q2*q4*s53 + (41*mh*q1*q5*s53)/32 - (515*mt*q1*q5*s53)/192 + mh*mt^2*q1^2*q5*s53 - (5*mt^3*q1^2*q5*s53)/4 - (5*mh*q2*q5*s53)/6 - (25*mt*q2*q5*s53)/12 - (43*mh*q4*q5*s53)/96 - (23*mt*q4*q5*s53)/64 - (5*mh*mt^2*q2*q4*q5*s53)/3 - (5*mt^3*q2*q4*q5*s53)/2 - mh*q1^2*q5*s12*s53 + (3*mt*q1^2*q5*s12*s53)/2 + 2*mh*q1*q2*q5*s12*s53 + 2*mt*q1*q2*q5*s12*s53 - (35*mh*q1*q4*q5*s12*s53)/24 - (4*mt*q1*q4*q5*s12*s53)/3 + (2*mh*q2*q4*q5*s12*s53)/3 + (11*mt*q2*q4*q5*s12*s53)/6 + (19*mh*q1^2*q5*s45*s53)/16 - (21*mt*q1^2*q5*s45*s53)/8 - mh*q1*q2*q5*s45*s53 - (22*mt*q1*q2*q5*s45*s53)/3 + (mh*q1*q4*q5*s45*s53)/3 + (9*mt*q1*q4*q5*s45*s53)/32 + mh*q1^2*q4*q5*s12*s45*s53 + (mt*q1^2*q4*q5*s12*s45*s53)/2 - 4*mt*q1^2*q2*q5*s45^2*s53 - (3*mh*q1^2*q4*q5*s45^2*s53)/16 - (mt*q1^2*q4*q5*s45^2*s53)/8 - (3*mh*q1^2*q5*s53^2)/16 + (mt*q1^2*q5*s53^2)/8 + (31*mh*q1*q4*q5*s53^2)/32 - (107*mt*q1*q4*q5*s53^2)/192 - (mh*q2*q4*q5*s53^2)/3 - (19*mt*q2*q4*q5*s53^2)/12 + mh*q1^2*q4*q5*s12*s53^2 - (mt*q1^2*q4*q5*s12*s53^2)/2 + 4*mt*q1^2*q2*q5*s45*s53^2 - (5*mh*q1^2*q4*q5*s45*s53^2)/8 - (3*mh*q1^2*q4*q5*s53^3)/16 + (mt*q1^2*q4*q5*s53^3)/8;
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
if (match(mt^5*q2^2*q4*q5));
id mt^5*q2^2*q4*q5 = 12*mh*q1^2*q2*q4 + 40*mt*q1^2*q2*q4 - 12*mh*q1*q2^2*q4 - 8*mt*q1*q2^2*q4 + (99*mh*q1*q5)/8 - (431*mt*q1*q5)/16 + (49*mh*mt^2*q1^2*q5)/4 - (31*mt^3*q1^2*q5)/2 - 14*mh*q2*q5 - 25*mt*q2*q5 + 6*mh*mt^2*q2^2*q5 + 13*mt^3*q2^2*q5 + (13*mh*q4*q5)/8 + (39*mt*q4*q5)/16 - (19*mh*mt^2*q2*q4*q5)/2 - 11*mt^3*q2*q4*q5 - (23*mh*q1^2*q5*s12)/2 + 18*mt*q1^2*q5*s12 + 16*mt*q1*q2*q5*s12 + 6*mh*q2^2*q5*s12 - 2*mt*q2^2*q5*s12 - (11*mh*q1*q4*q5*s12)/2 - 12*mt*q1*q4*q5*s12 + 11*mh*q2*q4*q5*s12 + 14*mt*q2*q4*q5*s12 - 4*mh*mt^2*q2^2*q4*q5*s12 - 2*mt^3*q2^2*q4*q5*s12 - 12*mh*q1^2*q2*q5*s12^2 + 12*mh*q1*q2^2*q5*s12^2 - 4*mh*q1^2*q4*q5*s12^2 + 3*mt*q1^2*q4*q5*s12^2 - 6*mt*q1*q2*q4*q5*s12^2 + 4*mh*q2^2*q4*q5*s12^2 + 3*mt*q2^2*q4*q5*s12^2 + (89*mh*q1^2*q5*s45)/8 - (429*mt*q1^2*q5*s45)/16 - 12*mh*q1*q2*q5*s45 - 66*mt*q1*q2*q5*s45 + 2*mh*q2^2*q5*s45 + mt*q2^2*q5*s45 + (mh*q1*q4*q5*s45)/2 + (7*mt*q1*q4*q5*s45)/4 + (11*mh*q1^2*q4*q5*s12*s45)/2 + 2*mt*q1^2*q4*q5*s12*s45 - 40*mt*q1^2*q2*q5*s45^2 + 8*mt*q1*q2^2*q5*s45^2 - (9*mh*q1^2*q4*q5*s45^2)/8 - (11*mt*q1^2*q4*q5*s45^2)/16 - 48*mt*q1^2*q2^2*q4*s53 - (51*mh*q1^2*q5*s53)/8 + (101*mt*q1^2*q5*s53)/16 + 36*mt*q1*q2*q5*s53 + 10*mh*q2^2*q5*s53 + 25*mt*q2^2*q5*s53 + (5*mh*q1*q4*q5*s53)/4 - (11*mt*q1*q4*q5*s53)/4 - (13*mh*q2*q4*q5*s53)/2 - 21*mt*q2*q4*q5*s53 + 20*mh*mt^2*q2^2*q4*q5*s53 + 30*mt^3*q2^2*q4*q5*s53 + 24*mh*q1^2*q2*q5*s12*s53 - 24*mt*q1^2*q2*q5*s12*s53 - 24*mh*q1*q2^2*q5*s12*s53 - 24*mt*q1*q2^2*q5*s12*s53 + (5*mh*q1^2*q4*q5*s12*s53)/2 - 2*mt*q1^2*q4*q5*s12*s53 + 24*mt*q1*q2*q4*q5*s12*s53 - 8*mh*q2^2*q4*q5*s12*s53 - 22*mt*q2^2*q4*q5*s12*s53 - 12*mh*q1^2*q2*q5*s45*s53 + 88*mt*q1^2*q2*q5*s45*s53 + 12*mh*q1*q2^2*q5*s45*s53 + 88*mt*q1*q2^2*q5*s45*s53 - (5*mh*q1^2*q4*q5*s45*s53)/2 + (3*mt*q1^2*q4*q5*s45*s53)/8 + 48*mt*q1^2*q2^2*q5*s45^2*s53 - (3*mh*q1^2*q4*q5*s53^2)/8 + (5*mt*q1^2*q4*q5*s53^2)/16 + 4*mh*q2^2*q4*q5*s53^2 + 19*mt*q2^2*q4*q5*s53^2 - 48*mt*q1^2*q2^2*q5*s45*s53^2;
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
if (match(mt^2*q1*q4*q5*s12*s45^2));
id mt^2*q1*q4*q5*s12*s45^2 = -3*q1 - 3*q4 + 8*mt^2*q1*q4 - 6*mt^4*q5 + mt^6*q1*q5 + mt^6*q4*q5 + 6*mh^2*q5*s12 - 2*mt^2*q5*s12 - 4*mh*mt^3*q1*q5*s12 + 2*mt^4*q1*q5*s12 + 4*mh*mt^3*q4*q5*s12 + 2*mt^4*q4*q5*s12 + 6*q5*s12^2 + 4*mh*mt*q1*q5*s12^2 - 3*mt^2*q1*q5*s12^2 - 4*mh*mt*q4*q5*s12^2 - 3*mt^2*q4*q5*s12^2 + 6*mt^2*q5*s45 + 4*mh*mt^3*q1*q5*s45 - (21*mt^4*q1*q5*s45)/2 - 4*mh*mt^3*q4*q5*s45 - (9*mt^4*q4*q5*s45)/2 - 3*q5*s12*s45 + 8*mh*mt*q1*q5*s12*s45 - mt^2*q1*q5*s12*s45 + 4*mh*mt*q4*q5*s12*s45 + 5*mt^2*q4*q5*s12*s45 + (7*q1*q5*s12^2*s45)/2 - (q4*q5*s12^2*s45)/2 - (3*mh*mt*q1*q5*s45^2)/8 + (17*mt^2*q1*q5*s45^2)/4 + (3*mh*mt*q4*q5*s45^2)/8 + (mt^2*q4*q5*s45^2)/4 - (q1*q5*s12*s45^2)/2 + (q4*q5*s12*s45^2)/2 - (q1*q4*q5*s12^2*s45^2)/2 + (3*q1*q5*s45^3)/32 - (3*q4*q5*s45^3)/32 + (mt^2*q1*q4*q5*s45^3)/4 + (q1*q4*q5*s12*s45^3)/2 - (3*q1*q4*q5*s45^4)/32 + 6*mt^2*q5*s53 + 4*mh*mt^3*q1*q5*s53 - (9*mt^4*q1*q5*s53)/2 - 4*mh*mt^3*q4*q5*s53 - (21*mt^4*q4*q5*s53)/2 - 3*q5*s12*s53 - 4*mh*mt*q1*q5*s12*s53 + 5*mt^2*q1*q5*s12*s53 - 8*mh*mt*q4*q5*s12*s53 - mt^2*q4*q5*s12*s53 - (q1*q5*s12^2*s53)/2 + (7*q4*q5*s12^2*s53)/2 - 6*q5*s45*s53 - (29*mh*mt*q1*q5*s45*s53)/4 + (13*mt^2*q1*q5*s45*s53)/2 + (29*mh*mt*q4*q5*s45*s53)/4 + (13*mt^2*q4*q5*s45*s53)/2 - 6*q1*q5*s12*s45*s53 - 6*q4*q5*s12*s45*s53 + 2*mt^2*q1*q4*q5*s12*s45*s53 + q1*q4*q5*s12^2*s45*s53 + (7*q1*q5*s45^2*s53)/32 + (89*q4*q5*s45^2*s53)/32 - (mt^2*q1*q4*q5*s45^2*s53)/4 - (q1*q4*q5*s12*s45^2*s53)/2 - (q1*q4*q5*s45^3*s53)/8 - (3*mh*mt*q1*q5*s53^2)/8 + (mt^2*q1*q5*s53^2)/4 + (3*mh*mt*q4*q5*s53^2)/8 + (17*mt^2*q4*q5*s53^2)/4 + (q1*q5*s12*s53^2)/2 - (q4*q5*s12*s53^2)/2 - mt^2*q1*q4*q5*s12*s53^2 - (q1*q4*q5*s12^2*s53^2)/2 + (89*q1*q5*s45*s53^2)/32 + (7*q4*q5*s45*s53^2)/32 - (mt^2*q1*q4*q5*s45*s53^2)/4 - (q1*q4*q5*s12*s45*s53^2)/2 + (7*q1*q4*q5*s45^2*s53^2)/16 - (3*q1*q5*s53^3)/32 + (3*q4*q5*s53^3)/32 + (mt^2*q1*q4*q5*s53^3)/4 + (q1*q4*q5*s12*s53^3)/2 - (q1*q4*q5*s45*s53^3)/8 - (3*q1*q4*q5*s53^4)/32;
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
if (match(mt^2*q3*q4*q5*s12^2));
id mt^2*q3*q4*q5*s12^2 = (-3*q1*q3)/4 - q3*q4 + 2*mt^2*q1*q3*q4 + mh*mt^3*q1*q5 - (21*mt^4*q1*q5)/8 - (5*mh*mt^3*q3*q5)/4 + (3*mt^4*q3*q5)/2 + (mt^6*q1*q3*q5)/4 + (mh*mt^3*q4*q5)/4 + (3*mt^4*q4*q5)/8 + (7*q5*s12)/4 + 2*mh*mt*q1*q5*s12 - (mt^2*q1*q5*s12)/4 + mh*mt*q3*q5*s12 - (3*mt^2*q3*q5*s12)/2 - mh*mt^3*q1*q3*q5*s12 + (mt^4*q1*q3*q5*s12)/2 - (mt^2*q4*q5*s12)/4 + (7*q1*q5*s12^2)/8 + (q3*q5*s12^2)/2 + mh*mt*q1*q3*q5*s12^2 - (3*mt^2*q1*q3*q5*s12^2)/4 + (3*q4*q5*s12^2)/8 - (3*mh*mt*q1*q5*s45)/32 + (17*mt^2*q1*q5*s45)/16 + (mh*mt*q3*q5*s45)/2 - (mt^2*q3*q5*s45)/2 - (13*mh*mt*q4*q5*s45)/32 - (7*mt^2*q4*q5*s45)/16 - (q1*q5*s12*s45)/8 - (q3*q5*s12*s45)/2 - (3*q4*q5*s12*s45)/8 - (mt^2*q1*q4*q5*s12*s45)/4 + 2*mt^2*q3*q4*q5*s12*s45 - (q1*q4*q5*s12^2*s45)/8 + (3*q1*q5*s45^2)/128 - (3*q4*q5*s45^2)/128 + (mt^2*q1*q4*q5*s45^2)/16 + (q1*q4*q5*s12*s45^2)/8 - (3*q1*q4*q5*s45^3)/128 + mt^2*q1^2*q2*q3*s53 - mt^2*q1^2*q2*q4*s53 - mt^2*q1^2*q3*q4*s53 - (141*mh*mt*q1*q5*s53)/64 + (107*mt^2*q1*q5*s53)/32 + (19*mh*mt*q2*q5*s53)/64 + (21*mt^2*q2*q5*s53)/32 + (157*mh*mt*q3*q5*s53)/64 - (79*mt^2*q3*q5*s53)/32 + (7*mh*mt^3*q1*q3*q5*s53)/4 - (55*mt^4*q1*q3*q5*s53)/16 - (35*mh*mt*q4*q5*s53)/64 - (25*mt^2*q4*q5*s53)/32 + (mh*mt^3*q2*q4*q5*s53)/4 + (5*mt^4*q2*q4*q5*s53)/16 - (27*q1*q5*s12*s53)/16 - (q2*q5*s12*s53)/16 + (33*q3*q5*s12*s53)/16 + (5*mh*mt*q1*q3*q5*s12*s53)/4 + (5*mt^2*q1*q3*q5*s12*s53)/8 - (mt^2*q2*q3*q5*s12*s53)/8 + (11*q4*q5*s12*s53)/16 + (mt^2*q1*q4*q5*s12*s53)/8 - (mh*mt*q2*q4*q5*s12*s53)/4 - (3*mt^2*q2*q4*q5*s12*s53)/8 + (13*q1*q3*q5*s12^2*s53)/16 - (q2*q3*q5*s12^2*s53)/16 + (q1*q4*q5*s12^2*s53)/16 + (q2*q4*q5*s12^2*s53)/16 + q3*q4*q5*s12^2*s53 + (23*q1*q5*s45*s53)/256 + (3*q2*q5*s45*s53)/256 + mt^2*q1*q2*q5*s45*s53 - (323*q3*q5*s45*s53)/256 + (mt^2*q2*q3*q5*s45*s53)/32 - (151*q4*q5*s45*s53)/256 + (mt^2*q1*q4*q5*s45*s53)/32 + (q2*q3*q5*s12*s45*s53)/16 + (q1*q4*q5*s12*s45*s53)/16 - 2*q3*q4*q5*s12*s45*s53 - (3*q2*q3*q5*s45^2*s53)/256 - (17*q1*q4*q5*s45^2*s53)/256 + q3*q4*q5*s45^2*s53 + (211*q1*q5*s53^2)/256 + (13*q2*q5*s53^2)/256 - (205*q3*q5*s53^2)/256 - (9*mh*mt*q1*q3*q5*s53^2)/4 + (27*mt^2*q1*q3*q5*s53^2)/8 + (mt^2*q2*q3*q5*s53^2)/32 - (19*q4*q5*s53^2)/256 - (mt^2*q1*q4*q5*s53^2)/32 + (mh*mt*q2*q4*q5*s53^2)/4 + (5*mt^2*q2*q4*q5*s53^2)/8 - (13*q1*q3*q5*s12*s53^2)/8 + (q2*q3*q5*s12*s53^2)/16 - (q1*q4*q5*s12*s53^2)/16 - (q2*q4*q5*s12*s53^2)/8 - (5*q2*q3*q5*s45*s53^2)/128 + (q1*q4*q5*s45*s53^2)/64 + (13*q1*q3*q5*s53^3)/16 - (3*q2*q3*q5*s53^3)/256 + (3*q1*q4*q5*s53^3)/256 + (q2*q4*q5*s53^3)/16;
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
if (match(mt^2*q2^2*q3*q5*s45*s53));
id mt^2*q2^2*q3*q5*s45*s53 = 16*q1^2*q2 + 16*q1*q2^2 - 8*q1*q2*q3 - 4*q2^2*q3 - 24*mt^2*q1*q2^2*q3 - mh*mt*q1*q5 + 6*mt^2*q1*q5 + 12*mh*mt^3*q1^2*q5 - 16*mt^4*q1^2*q5 + (13*mh*mt*q2*q5)/4 + (23*mt^2*q2*q5)/4 - 3*mh*mt^3*q2^2*q5 - (9*mt^4*q2^2*q5)/2 - (9*mh*mt*q3*q5)/4 + (5*mt^2*q3*q5)/4 - 12*mh*mt^3*q1*q3*q5 + (31*mt^4*q1*q3*q5)/2 - 32*mt^2*q1^2*q2^2*q3*s12 - 10*q1*q5*s12 - 20*mh*mt*q1^2*q5*s12 + 40*mt^2*q1^2*q5*s12 - (109*q2*q5*s12)/8 + 48*mt^2*q1*q2*q5*s12 + (5*mh*mt*q2^2*q5*s12)/2 + 6*mt^2*q2^2*q5*s12 + (29*q3*q5*s12)/8 + 11*mh*mt*q1*q3*q5*s12 - 19*mt^2*q1*q3*q5*s12 - 8*mh*mt^3*q1^2*q3*q5*s12 + 10*mt^4*q1^2*q3*q5*s12 - 5*mt^2*q2*q3*q5*s12 - 8*q1^2*q5*s12^2 - 8*q1*q2*q5*s12^2 - (5*q2^2*q5*s12^2)/2 + (11*q1*q3*q5*s12^2)/2 + 8*mh*mt*q1^2*q3*q5*s12^2 - 12*mt^2*q1^2*q3*q5*s12^2 - 7*q2*q3*q5*s12^2 + 2*q1^2*q3*q5*s12^3 - 4*q1*q2*q3*q5*s12^3 + 2*q2^2*q3*q5*s12^3 - (3*q1*q5*s45)/2 - 8*mt^2*q1^2*q5*s45 + (67*q2*q5*s45)/32 + 8*mt^2*q1*q2*q5*s45 + (49*mh*mt*q2^2*q5*s45)/8 + (17*mt^2*q2^2*q5*s45)/2 - (19*q3*q5*s45)/32 + (5*mt^2*q2*q3*q5*s45)/4 - 10*q1^2*q5*s12*s45 - 12*q1*q2*q5*s12*s45 + 64*mt^2*q1^2*q2*q5*s12*s45 - (83*q2^2*q5*s12*s45)/8 + 32*mt^2*q1*q2^2*q5*s12*s45 + 4*q2*q3*q5*s12*s45 - 16*q1^2*q2*q5*s12^2*s45 - 16*q1*q2^2*q5*s12^2*s45 - (3*q2^2*q3*q5*s12^2*s45)/2 - 16*mt^2*q1^2*q2*q5*s45^2 + (q2^2*q5*s45^2)/32 + 8*mt^2*q1*q2^2*q5*s45^2 - (5*q2*q3*q5*s45^2)/8 + 32*mt^2*q1^2*q2^2*q5*s12*s45^2 + (3*q2^2*q3*q5*s12*s45^2)/8 - (q2^2*q3*q5*s45^3)/32 + 48*mt^2*q1^2*q2^2*q3*s53 - (11*q1*q5*s53)/2 + 10*mh*mt*q1^2*q5*s53 - 28*mt^2*q1^2*q5*s53 + (51*q2*q5*s53)/32 - 34*mt^2*q1*q2*q5*s53 + (17*mh*mt*q2^2*q5*s53)/8 + 2*mt^2*q2^2*q5*s53 + (125*q3*q5*s53)/32 - (7*mh*mt*q1*q3*q5*s53)/2 + 18*mt^2*q1*q3*q5*s53 + 12*mh*mt^3*q1^2*q3*q5*s53 - 15*mt^4*q1^2*q3*q5*s53 + (49*mt^2*q2*q3*q5*s53)/4 + 10*q1^2*q5*s12*s53 - 4*q1*q2*q5*s12*s53 - 8*mt^2*q1^2*q2*q5*s12*s53 + (19*q2^2*q5*s12*s53)/8 - 8*mt^2*q1*q2^2*q5*s12*s53 - 3*q1*q3*q5*s12*s53 - 20*mh*mt*q1^2*q3*q5*s12*s53 + 38*mt^2*q1^2*q3*q5*s12*s53 + 23*q2*q3*q5*s12*s53 + 8*mt^2*q1*q2*q3*q5*s12*s53 - 7*q1^2*q3*q5*s12^2*s53 + 22*q1*q2*q3*q5*s12^2*s53 - (3*q2^2*q3*q5*s12^2*s53)/2 + 11*q1^2*q5*s45*s53 + 10*q1*q2*q5*s45*s53 - 64*mt^2*q1^2*q2*q5*s45*s53 + (21*q2^2*q5*s45*s53)/2 - 40*mt^2*q1*q2^2*q5*s45*s53 - 7*q2*q3*q5*s45*s53 + 32*q1^2*q2*q5*s12*s45*s53 + 32*q1*q2^2*q5*s12*s45*s53 - 32*mt^2*q1^2*q2^2*q5*s12*s45*s53 - (3*q2^2*q3*q5*s12*s45*s53)/4 - 48*mt^2*q1^2*q2^2*q5*s45^2*s53 + (17*q2^2*q3*q5*s45^2*s53)/32 - 3*q1^2*q5*s53^2 + 14*q1*q2*q5*s53^2 - (q2^2*q5*s53^2)/32 - (5*q1*q3*q5*s53^2)/2 + 12*mh*mt*q1^2*q3*q5*s53^2 - 30*mt^2*q1^2*q3*q5*s53^2 - (99*q2*q3*q5*s53^2)/8 - 14*mt^2*q1*q2*q3*q5*s53^2 + 8*q1^2*q3*q5*s12*s53^2 - 32*q1*q2*q3*q5*s12*s53^2 + (3*q2^2*q3*q5*s12*s53^2)/8 - 16*q1^2*q2*q5*s45*s53^2 - 16*q1*q2^2*q5*s45*s53^2 + 48*mt^2*q1^2*q2^2*q5*s45*s53^2 + (17*q2^2*q3*q5*s45*s53^2)/32 - 3*q1^2*q3*q5*s53^3 + 14*q1*q2*q3*q5*s53^3 - (q2^2*q3*q5*s53^3)/32;
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
if (match(mt^2*q1*q2^2*q3*q5*s53^2));
id mt^2*q1*q2^2*q3*q5*s53^2 = 16*q1^3*q2 + 16*q1^2*q2^2 - 8*q1^2*q2*q3 - 4*q1*q2^2*q3 - 24*mt^2*q1^2*q2^2*q3 + (q1*q5)/2 - mh*mt*q1^2*q5 + 6*mt^2*q1^2*q5 + 12*mh*mt^3*q1^3*q5 - 16*mt^4*q1^3*q5 - (35*q2*q5)/32 + 4*mt^2*q1*q2*q5 - (9*mh*mt*q2^2*q5)/8 - (3*mt^2*q2^2*q5)/2 + (19*q3*q5)/32 - (9*mh*mt*q1*q3*q5)/4 + (5*mt^2*q1*q3*q5)/4 - 12*mh*mt^3*q1^2*q3*q5 + (31*mt^4*q1^2*q3*q5)/2 - (5*mt^2*q2*q3*q5)/4 - 32*mt^2*q1^3*q2^2*q3*s12 - 10*q1^2*q5*s12 - 20*mh*mt*q1^3*q5*s12 + 40*mt^2*q1^3*q5*s12 - 9*q1*q2*q5*s12 + 48*mt^2*q1^2*q2*q5*s12 - (5*q2^2*q5*s12)/8 + 6*mt^2*q1*q2^2*q5*s12 + (29*q1*q3*q5*s12)/8 + 11*mh*mt*q1^2*q3*q5*s12 - 19*mt^2*q1^2*q3*q5*s12 - 8*mh*mt^3*q1^3*q3*q5*s12 + 10*mt^4*q1^3*q3*q5*s12 - 4*q2*q3*q5*s12 - 5*mt^2*q1*q2*q3*q5*s12 - 8*q1^3*q5*s12^2 - 8*q1^2*q2*q5*s12^2 - 4*q1*q2^2*q5*s12^2 + (11*q1^2*q3*q5*s12^2)/2 + 8*mh*mt*q1^3*q3*q5*s12^2 - 12*mt^2*q1^3*q3*q5*s12^2 - 7*q1*q2*q3*q5*s12^2 + (3*q2^2*q3*q5*s12^2)/2 + 2*q1^3*q3*q5*s12^3 - 4*q1^2*q2*q3*q5*s12^3 + 2*q1*q2^2*q3*q5*s12^3 - (3*q1^2*q5*s45)/2 - 8*mt^2*q1^3*q5*s45 + 3*q1*q2*q5*s45 + 8*mt^2*q1^2*q2*q5*s45 - (49*q2^2*q5*s45)/32 + 4*mt^2*q1*q2^2*q5*s45 + (5*q2*q3*q5*s45)/8 - 10*q1^3*q5*s12*s45 - 12*q1^2*q2*q5*s12*s45 + 64*mt^2*q1^3*q2*q5*s12*s45 - 10*q1*q2^2*q5*s12*s45 + 32*mt^2*q1^2*q2^2*q5*s12*s45 - (3*q2^2*q3*q5*s12*s45)/8 - 16*q1^3*q2*q5*s12^2*s45 - 16*q1^2*q2^2*q5*s12^2*s45 - 16*mt^2*q1^3*q2*q5*s45^2 + 8*mt^2*q1^2*q2^2*q5*s45^2 + (q2^2*q3*q5*s45^2)/32 + 32*mt^2*q1^3*q2^2*q5*s12*s45^2 + 48*mt^2*q1^3*q2^2*q3*s53 - (11*q1^2*q5*s53)/2 + 10*mh*mt*q1^3*q5*s53 - 28*mt^2*q1^3*q5*s53 - (11*q1*q2*q5*s53)/2 - 34*mt^2*q1^2*q2*q5*s53 - (17*q2^2*q5*s53)/32 + mt^2*q1*q2^2*q5*s53 + (53*q1*q3*q5*s53)/16 - (7*mh*mt*q1^2*q3*q5*s53)/2 + 18*mt^2*q1^2*q3*q5*s53 + 12*mh*mt^3*q1^3*q3*q5*s53 - 15*mt^4*q1^3*q3*q5*s53 + (61*q2*q3*q5*s53)/8 + (27*mt^2*q1*q2*q3*q5*s53)/2 + mt^2*q2^2*q3*q5*s53 + 10*q1^3*q5*s12*s53 - 4*q1^2*q2*q5*s12*s53 - 8*mt^2*q1^3*q2*q5*s12*s53 + 2*q1*q2^2*q5*s12*s53 - 8*mt^2*q1^2*q2^2*q5*s12*s53 - 3*q1^2*q3*q5*s12*s53 - 20*mh*mt*q1^3*q3*q5*s12*s53 + 38*mt^2*q1^3*q3*q5*s12*s53 + 27*q1*q2*q3*q5*s12*s53 + 8*mt^2*q1^2*q2*q3*q5*s12*s53 + (3*q2^2*q3*q5*s12*s53)/8 - 7*q1^3*q3*q5*s12^2*s53 + 22*q1^2*q2*q3*q5*s12^2*s53 - 3*q1*q2^2*q3*q5*s12^2*s53 + 11*q1^3*q5*s45*s53 + 10*q1^2*q2*q5*s45*s53 - 64*mt^2*q1^3*q2*q5*s45*s53 + 11*q1*q2^2*q5*s45*s53 - 40*mt^2*q1^2*q2^2*q5*s45*s53 - (q2^2*q3*q5*s45*s53)/2 + 32*q1^3*q2*q5*s12*s45*s53 + 32*q1^2*q2^2*q5*s12*s45*s53 - 32*mt^2*q1^3*q2^2*q5*s12*s45*s53 - 48*mt^2*q1^3*q2^2*q5*s45^2*s53 - 3*q1^3*q5*s53^2 + 14*q1^2*q2*q5*s53^2 + q1*q2^2*q5*s53^2 - (5*q1^2*q3*q5*s53^2)/2 + 12*mh*mt*q1^3*q3*q5*s53^2 - 30*mt^2*q1^3*q3*q5*s53^2 - 20*q1*q2*q3*q5*s53^2 - 14*mt^2*q1^2*q2*q3*q5*s53^2 - (33*q2^2*q3*q5*s53^2)/32 + 8*q1^3*q3*q5*s12*s53^2 - 32*q1^2*q2*q3*q5*s12*s53^2 - 16*q1^3*q2*q5*s45*s53^2 - 16*q1^2*q2^2*q5*s45*s53^2 + 48*mt^2*q1^3*q2^2*q5*s45*s53^2 - 3*q1^3*q3*q5*s53^3 + 14*q1^2*q2*q3*q5*s53^3 + q1*q2^2*q3*q5*s53^3;
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
if (match(mt^2*q1*q2^2*q4*q5*s53^2));
id mt^2*q1*q2^2*q4*q5*s53^2 = (-16*q1^3*q2)/27 - (16*q1^2*q2^2)/27 + (4*q1^3*q4)/27 + (8*q1^2*q2*q4)/27 + (8*mt^2*q1^3*q2*q4)/9 - (4*q1*q2^2*q4)/9 + (4*mt^2*q1^2*q2^2*q4)/3 + (17*q1*q5)/576 + (97*mh*mt*q1^2*q5)/432 - (73*mt^2*q1^2*q5)/216 - (mh*mt^3*q1^3*q5)/9 + (mt^4*q1^3*q5)/6 - (q2*q5)/27 - (4*mt^2*q1*q2*q5)/3 - (19*mh*mt*q2^2*q5)/54 - (16*mt^2*q2^2*q5)/27 + (13*q4*q5)/1728 + (mt^2*q1*q4*q5)/216 + (mh*mt*q2*q4*q5)/108 - (mt^2*q2*q4*q5)/108 + (mt^4*q2^2*q4*q5)/36 + (32*mt^2*q1^3*q2^2*q4*s12)/27 + (91*q1^2*q5*s12)/216 + (5*mh*mt*q1^3*q5*s12)/54 - (2*mt^2*q1^3*q5*s12)/9 + (11*q1*q2*q5*s12)/27 - (10*mt^2*q1^2*q2*q5*s12)/9 + (11*q2^2*q5*s12)/27 - (32*mt^2*q1*q2^2*q5*s12)/27 - (5*q1*q4*q5*s12)/54 + (mt^2*q1^2*q4*q5*s12)/54 + (q2*q4*q5*s12)/24 + (mt^2*q1*q2*q4*q5*s12)/27 + (mh*mt*q2^2*q4*q5*s12)/54 - (mt^2*q2^2*q4*q5*s12)/18 + (5*q1^3*q5*s12^2)/54 + (8*q1^2*q2*q5*s12^2)/27 + (20*q1*q2^2*q5*s12^2)/27 + (19*q1^2*q4*q5*s12^2)/108 - (5*q1*q2*q4*q5*s12^2)/27 + (7*q2^2*q4*q5*s12^2)/108 - (2*q1^3*q4*q5*s12^3)/27 + (4*q1^2*q2*q4*q5*s12^3)/27 - (2*q1*q2^2*q4*q5*s12^3)/27 + (37*q1^2*q5*s45)/1728 + (49*mh*mt*q1^3*q5*s45)/216 - (17*mt^2*q1^3*q5*s45)/54 - (q1*q2*q5*s45)/9 - (44*mt^2*q1^2*q2*q5*s45)/27 + (q2^2*q5*s45)/12 - (4*mt^2*q1*q2^2*q5*s45)/3 + (q1*q4*q5*s45)/72 - (mt^2*q1^2*q4*q5*s45)/216 + (83*q1^3*q5*s12*s45)/216 + (4*q1^2*q2*q5*s12*s45)/9 - (32*mt^2*q1^3*q2*q5*s12*s45)/27 + (10*q1*q2^2*q5*s12*s45)/27 - (64*mt^2*q1^2*q2^2*q5*s12*s45)/27 - (7*q1^2*q4*q5*s12*s45)/108 + (16*q1^3*q2*q5*s12^2*s45)/27 + (16*q1^2*q2^2*q5*s12^2*s45)/27 + (q1^3*q4*q5*s12^2*s45)/18 - (q1^3*q5*s45^2)/864 - (8*mt^2*q1^3*q2*q5*s45^2)/27 - (20*mt^2*q1^2*q2^2*q5*s45^2)/27 + (13*q1^2*q4*q5*s45^2)/1728 - (32*mt^2*q1^3*q2^2*q5*s12*s45^2)/27 - (q1^3*q4*q5*s12*s45^2)/72 + (q1^3*q4*q5*s45^3)/864 + (16*mt^2*q1^3*q2^2*q4*s53)/27 + (143*q1^2*q5*s53)/1728 + (19*mh*mt*q1^3*q5*s53)/72 - (8*mt^2*q1^3*q5*s53)/27 - (7*q1*q2*q5*s53)/54 - (22*mt^2*q1^2*q2*q5*s53)/27 - (19*q2^2*q5*s53)/108 - (37*mt^2*q1*q2^2*q5*s53)/27 + (5*q1*q4*q5*s53)/108 - (35*mt^2*q1^2*q4*q5*s53)/72 + (73*q2*q4*q5*s53)/432 - (41*mt^2*q1*q2*q4*q5*s53)/54 - (65*mh*mt*q2^2*q4*q5*s53)/108 - (8*mt^2*q2^2*q4*q5*s53)/9 - (17*q1^3*q5*s12*s53)/72 + (4*q1^2*q2*q5*s12*s53)/27 + (40*mt^2*q1^3*q2*q5*s12*s53)/27 - (34*q1*q2^2*q5*s12*s53)/27 + (40*mt^2*q1^2*q2^2*q5*s12*s53)/27 - (67*q1^2*q4*q5*s12*s53)/108 - (8*mt^2*q1^3*q4*q5*s12*s53)/27 + (17*q1*q2*q4*q5*s12*s53)/27 - (8*mt^2*q1^2*q2*q4*q5*s12*s53)/9 + (11*q2^2*q4*q5*s12*s53)/54 - (5*q1^3*q4*q5*s12^2*s53)/54 - (14*q1^2*q2*q4*q5*s12^2*s53)/27 + (5*q1*q2^2*q4*q5*s12^2*s53)/9 - (23*q1^3*q5*s45*s53)/108 - (2*q1^2*q2*q5*s45*s53)/3 - (8*mt^2*q1^3*q2*q5*s45*s53)/9 - (7*q1*q2^2*q5*s45*s53)/27 - (28*mt^2*q1^2*q2^2*q5*s45*s53)/27 + (49*q1^2*q4*q5*s45*s53)/288 + (mt^2*q1^3*q4*q5*s45*s53)/9 - (32*q1^3*q2*q5*s12*s45*s53)/27 - (32*q1^2*q2^2*q5*s12*s45*s53)/27 + (32*mt^2*q1^3*q2^2*q5*s12*s45*s53)/27 + (19*q1^3*q4*q5*s12*s45*s53)/108 - (16*mt^2*q1^3*q2^2*q5*s45^2*s53)/27 - (41*q1^3*q4*q5*s45^2*s53)/864 - (23*q1^3*q5*s53^2)/864 - (2*q1^2*q2*q5*s53^2)/9 + (11*q1*q2^2*q5*s53^2)/27 + (191*q1^2*q4*q5*s53^2)/576 + (2*mt^2*q1^3*q4*q5*s53^2)/27 - (4*q1*q2*q4*q5*s53^2)/9 + (2*mt^2*q1^2*q2*q4*q5*s53^2)/9 - (29*q2^2*q4*q5*s53^2)/108 + (29*q1^3*q4*q5*s12*s53^2)/216 + (16*q1^2*q2*q4*q5*s12*s53^2)/27 - (8*q1*q2^2*q4*q5*s12*s53^2)/9 + (16*q1^3*q2*q5*s45*s53^2)/27 + (16*q1^2*q2^2*q5*s45*s53^2)/27 + (16*mt^2*q1^3*q2^2*q5*s45*s53^2)/27 - (97*q1^3*q4*q5*s45*s53^2)/864 - (23*q1^3*q4*q5*s53^3)/864 - (2*q1^2*q2*q4*q5*s53^3)/9 + (11*q1*q2^2*q4*q5*s53^3)/27;
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
if (match(mt^2*q2*q3*q5*s45^2*s53));
id mt^2*q2*q3*q5*s45^2*s53 = -9*q2 - 9*q3 + 24*mt^2*q2*q3 - 18*mt^4*q5 + 3*mt^6*q2*q5 + 3*mt^6*q3*q5 - 12*q1*q3*s12 + 32*mt^2*q1*q2*q3*s12 + 18*mh^2*q5*s12 - 6*mt^2*q5*s12 + 24*mh*mt^3*q1*q5*s12 - 52*mt^4*q1*q5*s12 + 4*mh*mt^3*q2*q5*s12 - 4*mt^4*q2*q5*s12 - 28*mh*mt^3*q3*q5*s12 + 24*mt^4*q3*q5*s12 + 4*mt^6*q1*q3*q5*s12 + 30*q5*s12^2 + 24*mh*mt*q1*q5*s12^2 + 8*mt^2*q1*q5*s12^2 - 4*mh*mt*q2*q5*s12^2 + 3*mt^2*q2*q5*s12^2 + 28*mh*mt*q3*q5*s12^2 - 29*mt^2*q3*q5*s12^2 - 16*mh*mt^3*q1*q3*q5*s12^2 + 8*mt^4*q1*q3*q5*s12^2 + 12*q1*q5*s12^3 - 2*q2*q5*s12^3 + 2*q3*q5*s12^3 + 16*mh*mt*q1*q3*q5*s12^3 - 12*mt^2*q1*q3*q5*s12^3 - 4*q2*q3*s45 + 18*mt^2*q5*s45 - 9*mh*mt^3*q2*q5*s45 - (55*mt^4*q2*q5*s45)/2 + 9*mh*mt^3*q3*q5*s45 - (19*mt^4*q3*q5*s45)/2 - 5*q5*s12*s45 + 8*mh*mt*q1*q5*s12*s45 - 4*mt^2*q1*q5*s12*s45 - (71*mh*mt*q2*q5*s12*s45)/2 - 28*mt^2*q2*q5*s12*s45 - (17*mh*mt*q3*q5*s12*s45)/2 + 10*mt^2*q3*q5*s12*s45 + (29*q2*q5*s12^2*s45)/2 - (3*q3*q5*s12^2*s45)/2 + 2*q2*q3*q5*s12^3*s45 + (mh*mt*q2*q5*s45^2)/8 + (27*mt^2*q2*q5*s45^2)/2 - (mh*mt*q3*q5*s45^2)/8 - (3*q2*q5*s12*s45^2)/8 - 32*mt^2*q1*q2*q5*s12*s45^2 + (3*q3*q5*s12*s45^2)/8 - (3*q2*q3*q5*s12^2*s45^2)/2 + (q2*q5*s45^3)/32 - (q3*q5*s45^3)/32 + (3*q2*q3*q5*s12*s45^3)/8 - (q2*q3*q5*s45^4)/32 + 18*q1*q3*s53 + 4*q2*q3*s53 - 48*mt^2*q1*q2*q3*s53 + 18*mt^2*q5*s53 - 36*mh*mt^3*q1*q5*s53 + 78*mt^4*q1*q5*s53 - 3*mh*mt^3*q2*q5*s53 - (5*mt^4*q2*q5*s53)/2 + 39*mh*mt^3*q3*q5*s53 - (125*mt^4*q3*q5*s53)/2 - 6*mt^6*q1*q3*q5*s53 - 31*q5*s12*s53 - 68*mh*mt*q1*q5*s12*s53 + 32*mt^2*q1*q5*s12*s53 + (7*mh*mt*q2*q5*s12*s53)/2 + 2*mt^2*q2*q5*s12*s53 + (57*mh*mt*q3*q5*s12*s53)/2 + 4*mt^2*q3*q5*s12*s53 + 56*mh*mt^3*q1*q3*q5*s12*s53 - 72*mt^4*q1*q3*q5*s12*s53 - 42*q1*q5*s12^2*s53 + (3*q2*q5*s12^2*s53)/2 + (55*q3*q5*s12^2*s53)/2 - 8*mh*mt*q1*q3*q5*s12^2*s53 + 34*mt^2*q1*q3*q5*s12^2*s53 + 12*q1*q3*q5*s12^3*s53 - 2*q2*q3*q5*s12^3*s53 - 18*q5*s45*s53 - 12*mh*mt*q1*q5*s45*s53 + 6*mt^2*q1*q5*s45*s53 + 36*mh*mt*q2*q5*s45*s53 + (99*mt^2*q2*q5*s45*s53)/2 - 24*mh*mt*q3*q5*s45*s53 + (45*mt^2*q3*q5*s45*s53)/2 - (101*q2*q5*s12*s45*s53)/4 + 32*mt^2*q1*q2*q5*s12*s45*s53 - (91*q3*q5*s12*s45*s53)/4 - (17*q2*q5*s45^2*s53)/32 + 48*mt^2*q1*q2*q5*s45^2*s53 + (177*q3*q5*s45^2*s53)/32 - (9*q2*q3*q5*s12*s45^2*s53)/8 + (9*q2*q3*q5*s45^3*s53)/16 + 48*mh*mt*q1*q5*s53^2 - 66*mt^2*q1*q5*s53^2 - (mh*mt*q2*q5*s53^2)/8 - (383*mh*mt*q3*q5*s53^2)/8 + (105*mt^2*q3*q5*s53^2)/2 - 48*mh*mt^3*q1*q3*q5*s53^2 + 90*mt^4*q1*q3*q5*s53^2 + 48*q1*q5*s12*s53^2 - (3*q2*q5*s12*s53^2)/8 - (381*q3*q5*s12*s53^2)/8 - 56*mh*mt*q1*q3*q5*s12*s53^2 + 20*mt^2*q1*q3*q5*s12*s53^2 - 42*q1*q3*q5*s12^2*s53^2 + (3*q2*q3*q5*s12^2*s53^2)/2 + (399*q2*q5*s45*s53^2)/32 - 48*mt^2*q1*q2*q5*s45*s53^2 + (593*q3*q5*s45*s53^2)/32 + mt^2*q2*q3*q5*s45*s53^2 + (9*q2*q3*q5*s12*s45*s53^2)/8 - 18*q1*q5*s53^3 + (q2*q5*s53^3)/32 + (575*q3*q5*s53^3)/32 + 48*mh*mt*q1*q3*q5*s53^3 - 66*mt^2*q1*q3*q5*s53^3 + 48*q1*q3*q5*s12*s53^3 - (3*q2*q3*q5*s12*s53^3)/8 - (9*q2*q3*q5*s45*s53^3)/16 - 18*q1*q3*q5*s53^4 + (q2*q3*q5*s53^4)/32;
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
if (match(mt^2*q1^2*q4*q5*s45^2*s53));
id mt^2*q1^2*q4*q5*s45^2*s53 = -9*q1^2 - 16*q1*q2 + 8*q1*q4 + 24*mt^2*q1^2*q4 - (35*mt^4*q1*q5)/2 + 3*mt^6*q1^2*q5 + 12*mh*mt^3*q2*q5 + 16*mt^4*q2*q5 - 12*mh*mt^3*q4*q5 - (31*mt^4*q4*q5)/2 + 32*mt^2*q1^2*q2*q4*s12 + 17*q5*s12 + 45*mh*mt*q1*q5*s12 - 39*mt^2*q1*q5*s12 - 4*mh*mt^3*q1^2*q5*s12 - 4*mt^4*q1^2*q5*s12 - 20*mh*mt*q2*q5*s12 - 40*mt^2*q2*q5*s12 + 11*mh*mt*q4*q5*s12 + 19*mt^2*q4*q5*s12 - 8*mh*mt^3*q2*q4*q5*s12 - 10*mt^4*q2*q4*q5*s12 + (29*q1*q5*s12^2)/2 + 4*mh*mt*q1^2*q5*s12^2 + 3*mt^2*q1^2*q5*s12^2 + 8*q2*q5*s12^2 - (11*q4*q5*s12^2)/2 + 8*mh*mt*q2*q4*q5*s12^2 + 12*mt^2*q2*q4*q5*s12^2 - 2*q1^2*q5*s12^3 + 4*q1*q4*q5*s12^3 - 2*q2*q4*q5*s12^3 - 4*q1^2*q4*s45 - (9*mh*mt*q1*q5*s45)/4 + (67*mt^2*q1*q5*s45)/4 + 9*mh*mt^3*q1^2*q5*s45 - (55*mt^4*q1^2*q5*s45)/2 + 8*mt^2*q2*q5*s45 + (9*mh*mt*q4*q5*s45)/4 + (5*mt^2*q4*q5*s45)/4 + (123*q1*q5*s12*s45)/8 + (71*mh*mt*q1^2*q5*s12*s45)/2 - 28*mt^2*q1^2*q5*s12*s45 + 10*q2*q5*s12*s45 - 64*mt^2*q1*q2*q5*s12*s45 + (29*q4*q5*s12*s45)/8 - 5*mt^2*q1*q4*q5*s12*s45 + (29*q1^2*q5*s12^2*s45)/2 + 16*q1*q2*q5*s12^2*s45 - 7*q1*q4*q5*s12^2*s45 + 2*q1^2*q4*q5*s12^3*s45 + (19*q1*q5*s45^2)/32 - (mh*mt*q1^2*q5*s45^2)/8 + (27*mt^2*q1^2*q5*s45^2)/2 + 16*mt^2*q1*q2*q5*s45^2 - (19*q4*q5*s45^2)/32 + (5*mt^2*q1*q4*q5*s45^2)/4 - (3*q1^2*q5*s12*s45^2)/8 - 32*mt^2*q1^2*q2*q5*s12*s45^2 + 4*q1*q4*q5*s12*s45^2 - (3*q1^2*q4*q5*s12^2*s45^2)/2 + (q1^2*q5*s45^3)/32 - (5*q1*q4*q5*s45^3)/8 + (3*q1^2*q4*q5*s12*s45^3)/8 - (q1^2*q4*q5*s45^4)/32 + 4*q1^2*q4*s53 - 48*mt^2*q1^2*q2*q4*s53 - (17*mh*mt*q1*q5*s53)/4 + (101*mt^2*q1*q5*s53)/4 + 3*mh*mt^3*q1^2*q5*s53 - (5*mt^4*q1^2*q5*s53)/2 + 10*mh*mt*q2*q5*s53 + 28*mt^2*q2*q5*s53 - (23*mh*mt*q4*q5*s53)/4 - (77*mt^2*q4*q5*s53)/4 + 12*mh*mt^3*q2*q4*q5*s53 + 15*mt^4*q2*q4*q5*s53 - (147*q1*q5*s12*s53)/8 - (7*mh*mt*q1^2*q5*s12*s53)/2 + 2*mt^2*q1^2*q5*s12*s53 - 10*q2*q5*s12*s53 + 8*mt^2*q1*q2*q5*s12*s53 - (5*q4*q5*s12*s53)/8 - 3*mt^2*q1*q4*q5*s12*s53 - 20*mh*mt*q2*q4*q5*s12*s53 - 38*mt^2*q2*q4*q5*s12*s53 + (3*q1^2*q5*s12^2*s53)/2 - 15*q1*q4*q5*s12^2*s53 + 7*q2*q4*q5*s12^2*s53 - 2*q1^2*q4*q5*s12^3*s53 - (21*q1*q5*s45*s53)/2 - 36*mh*mt*q1^2*q5*s45*s53 + (99*mt^2*q1^2*q5*s45*s53)/2 - 11*q2*q5*s45*s53 + 64*mt^2*q1*q2*q5*s45*s53 + (9*q4*q5*s45*s53)/2 + 11*mt^2*q1*q4*q5*s45*s53 - (101*q1^2*q5*s12*s45*s53)/4 - 32*q1*q2*q5*s12*s45*s53 + 32*mt^2*q1^2*q2*q5*s12*s45*s53 + 19*q1*q4*q5*s12*s45*s53 - (17*q1^2*q5*s45^2*s53)/32 + 48*mt^2*q1^2*q2*q5*s45^2*s53 - (51*q1*q4*q5*s45^2*s53)/8 - (9*q1^2*q4*q5*s12*s45^2*s53)/8 + (9*q1^2*q4*q5*s45^3*s53)/16 - (51*q1*q5*s53^2)/32 + (mh*mt*q1^2*q5*s53^2)/8 + 3*q2*q5*s53^2 - (45*q4*q5*s53^2)/32 + (7*mt^2*q1*q4*q5*s53^2)/4 + 12*mh*mt*q2*q4*q5*s53^2 + 30*mt^2*q2*q4*q5*s53^2 - (3*q1^2*q5*s12*s53^2)/8 + 9*q1*q4*q5*s12*s53^2 - 8*q2*q4*q5*s12*s53^2 + (3*q1^2*q4*q5*s12^2*s53^2)/2 + (399*q1^2*q5*s45*s53^2)/32 + 16*q1*q2*q5*s45*s53^2 - 48*mt^2*q1^2*q2*q5*s45*s53^2 - (43*q1*q4*q5*s45*s53^2)/8 + mt^2*q1^2*q4*q5*s45*s53^2 + (9*q1^2*q4*q5*s12*s45*s53^2)/8 + (q1^2*q5*s53^3)/32 - (13*q1*q4*q5*s53^3)/8 + 3*q2*q4*q5*s53^3 - (3*q1^2*q4*q5*s12*s53^3)/8 - (9*q1^2*q4*q5*s45*s53^3)/16 + (q1^2*q4*q5*s53^4)/32;
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
if (match(mt^2*q1*q4*q5*s45^3*s53));
id mt^2*q1*q4*q5*s45^3*s53 = 12*q1*s12 + 12*q4*s12 - 32*mt^2*q1*q4*s12 + 24*mt^4*q5*s12 - 4*mt^6*q1*q5*s12 - 4*mt^6*q4*q5*s12 - 24*mh^2*q5*s12^2 + 8*mt^2*q5*s12^2 + 16*mh*mt^3*q1*q5*s12^2 - 8*mt^4*q1*q5*s12^2 - 16*mh*mt^3*q4*q5*s12^2 - 8*mt^4*q4*q5*s12^2 - 24*q5*s12^3 - 16*mh*mt*q1*q5*s12^3 + 12*mt^2*q1*q5*s12^3 + 16*mh*mt*q4*q5*s12^3 + 12*mt^2*q4*q5*s12^3 - 9*q1*s45 - 9*q4*s45 + 24*mt^2*q1*q4*s45 - 18*mt^4*q5*s45 + 3*mt^6*q1*q5*s45 + 3*mt^6*q4*q5*s45 + 18*mh^2*q5*s12*s45 - 30*mt^2*q5*s12*s45 - 28*mh*mt^3*q1*q5*s12*s45 + 48*mt^4*q1*q5*s12*s45 + 28*mh*mt^3*q4*q5*s12*s45 + 24*mt^4*q4*q5*s12*s45 + 30*q5*s12^2*s45 - 20*mh*mt*q1*q5*s12^2*s45 - 5*mt^2*q1*q5*s12^2*s45 - 28*mh*mt*q4*q5*s12^2*s45 - 29*mt^2*q4*q5*s12^2*s45 - 14*q1*q5*s12^3*s45 + 2*q4*q5*s12^3*s45 - 4*q1*q4*s45^2 + 18*mt^2*q5*s45^2 + 9*mh*mt^3*q1*q5*s45^2 - (55*mt^4*q1*q5*s45^2)/2 - 9*mh*mt^3*q4*q5*s45^2 - (19*mt^4*q4*q5*s45^2)/2 - 5*q5*s12*s45^2 + (55*mh*mt*q1*q5*s12*s45^2)/2 - 24*mt^2*q1*q5*s12*s45^2 + (17*mh*mt*q4*q5*s12*s45^2)/2 + 10*mt^2*q4*q5*s12*s45^2 + (29*q1*q5*s12^2*s45^2)/2 - (3*q4*q5*s12^2*s45^2)/2 + 2*q1*q4*q5*s12^3*s45^2 - (mh*mt*q1*q5*s45^3)/8 + (27*mt^2*q1*q5*s45^3)/2 + (mh*mt*q4*q5*s45^3)/8 - (3*q1*q5*s12*s45^3)/8 + (3*q4*q5*s12*s45^3)/8 - (3*q1*q4*q5*s12^2*s45^3)/2 + (q1*q5*s45^4)/32 - (q4*q5*s45^4)/32 + (3*q1*q4*q5*s12*s45^4)/8 - (q1*q4*q5*s45^5)/32 - 9*q1*s53 - 9*q4*s53 + 24*mt^2*q1*q4*s53 - 18*mt^4*q5*s53 + 3*mt^6*q1*q5*s53 + 3*mt^6*q4*q5*s53 + 18*mh^2*q5*s12*s53 - 30*mt^2*q5*s12*s53 - 28*mh*mt^3*q1*q5*s12*s53 + 24*mt^4*q1*q5*s12*s53 + 28*mh*mt^3*q4*q5*s12*s53 + 48*mt^4*q4*q5*s12*s53 + 30*q5*s12^2*s53 + 28*mh*mt*q1*q5*s12^2*s53 - 29*mt^2*q1*q5*s12^2*s53 + 20*mh*mt*q4*q5*s12^2*s53 - 5*mt^2*q4*q5*s12^2*s53 + 2*q1*q5*s12^3*s53 - 14*q4*q5*s12^3*s53 + 8*q1*q4*s45*s53 + 36*mt^2*q5*s45*s53 + 30*mh*mt^3*q1*q5*s45*s53 - 53*mt^4*q1*q5*s45*s53 - 30*mh*mt^3*q4*q5*s45*s53 - 53*mt^4*q4*q5*s45*s53 - 2*q5*s12*s45*s53 + 37*mh*mt*q1*q5*s12*s45*s53 - 6*mt^2*q1*q5*s12*s45*s53 - 37*mh*mt*q4*q5*s12*s45*s53 - 6*mt^2*q4*q5*s12*s45*s53 + 29*q1*q5*s12^2*s45*s53 + 29*q4*q5*s12^2*s45*s53 - 4*q1*q4*q5*s12^3*s45*s53 - 18*q5*s45^2*s53 - (191*mh*mt*q1*q5*s45^2*s53)/8 + 30*mt^2*q1*q5*s45^2*s53 + (191*mh*mt*q4*q5*s45^2*s53)/8 + (45*mt^2*q4*q5*s45^2*s53)/2 - (199*q1*q5*s12*s45^2*s53)/8 - (185*q4*q5*s12*s45^2*s53)/8 + (3*q1*q4*q5*s12^2*s45^2*s53)/2 - (9*q1*q5*s45^3*s53)/16 + (89*q4*q5*s45^3*s53)/16 - (3*q1*q4*q5*s12*s45^3*s53)/2 + (19*q1*q4*q5*s45^4*s53)/32 - 4*q1*q4*s53^2 + 18*mt^2*q5*s53^2 + 9*mh*mt^3*q1*q5*s53^2 - (19*mt^4*q1*q5*s53^2)/2 - 9*mh*mt^3*q4*q5*s53^2 - (55*mt^4*q4*q5*s53^2)/2 - 5*q5*s12*s53^2 - (17*mh*mt*q1*q5*s12*s53^2)/2 + 10*mt^2*q1*q5*s12*s53^2 - (55*mh*mt*q4*q5*s12*s53^2)/2 - 24*mt^2*q4*q5*s12*s53^2 - (3*q1*q5*s12^2*s53^2)/2 + (29*q4*q5*s12^2*s53^2)/2 + 2*q1*q4*q5*s12^3*s53^2 - 18*q5*s45*s53^2 - (191*mh*mt*q1*q5*s45*s53^2)/8 + (45*mt^2*q1*q5*s45*s53^2)/2 + (191*mh*mt*q4*q5*s45*s53^2)/8 + 30*mt^2*q4*q5*s45*s53^2 - (185*q1*q5*s12*s45*s53^2)/8 - (199*q4*q5*s12*s45*s53^2)/8 + (3*q1*q4*q5*s12^2*s45*s53^2)/2 + 13*q1*q5*s45^2*s53^2 + 13*q4*q5*s45^2*s53^2 + 2*mt^2*q1*q4*q5*s45^2*s53^2 + (9*q1*q4*q5*s12*s45^2*s53^2)/4 - (9*q1*q4*q5*s45^3*s53^2)/16 - (mh*mt*q1*q5*s53^3)/8 + (mh*mt*q4*q5*s53^3)/8 + (27*mt^2*q4*q5*s53^3)/2 + (3*q1*q5*s12*s53^3)/8 - (3*q4*q5*s12*s53^3)/8 - (3*q1*q4*q5*s12^2*s53^3)/2 + (89*q1*q5*s45*s53^3)/16 - (9*q4*q5*s45*s53^3)/16 - mt^2*q1*q4*q5*s45*s53^3 - (3*q1*q4*q5*s12*s45*s53^3)/2 - (9*q1*q4*q5*s45^2*s53^3)/16 - (q1*q5*s53^4)/32 + (q4*q5*s53^4)/32 + (3*q1*q4*q5*s12*s53^4)/8 + (19*q1*q4*q5*s45*s53^4)/32 - (q1*q4*q5*s53^5)/32;
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
if (match(q1*q2*q5*s12^2*s45^4));
id q1*q2*q5*s12^2*s45^4 = (-3*q1*s12^2)/8 - (3*q2*s12^2)/8 + mt^2*q1*q2*s12^2 - (3*mt^4*q5*s12^2)/4 + (mt^6*q1*q5*s12^2)/8 + (mt^6*q2*q5*s12^2)/8 + (3*mh^2*q5*s12^3)/4 - (mt^2*q5*s12^3)/4 - (mh*mt^3*q1*q5*s12^3)/2 + (mt^4*q1*q5*s12^3)/4 + (mh*mt^3*q2*q5*s12^3)/2 + (mt^4*q2*q5*s12^3)/4 + (3*q5*s12^4)/4 + (mh*mt*q1*q5*s12^4)/2 - (3*mt^2*q1*q5*s12^4)/8 - (mh*mt*q2*q5*s12^4)/2 - (3*mt^2*q2*q5*s12^4)/8 + (3*mt^2*q5*s12^2*s45)/4 + (3*mh*mt^3*q1*q5*s12^2*s45)/4 - (13*mt^4*q1*q5*s12^2*s45)/8 - (3*mh*mt^3*q2*q5*s12^2*s45)/4 - (13*mt^4*q2*q5*s12^2*s45)/8 + (3*mh*mt*q1*q5*s12^3*s45)/4 + (mt^2*q1*q5*s12^3*s45)/4 - (3*mh*mt*q2*q5*s12^3*s45)/4 + (mt^2*q2*q5*s12^3*s45)/4 + (3*q1*q5*s12^4*s45)/8 + (3*q2*q5*s12^4*s45)/8 + (3*q1*s45^2)/8 + (3*q2*s45^2)/8 - mt^2*q1*q2*s45^2 + (3*mt^4*q5*s45^2)/4 - (mt^6*q1*q5*s45^2)/8 - (mt^6*q2*q5*s45^2)/8 - (3*mh^2*q5*s12*s45^2)/4 + (mt^2*q5*s12*s45^2)/4 + (mh*mt^3*q1*q5*s12*s45^2)/2 - (mt^4*q1*q5*s12*s45^2)/4 - (mh*mt^3*q2*q5*s12*s45^2)/2 - (mt^4*q2*q5*s12*s45^2)/4 - (3*q5*s12^2*s45^2)/4 - (mh*mt*q1*q5*s12^2*s45^2)/4 + (mt^2*q1*q5*s12^2*s45^2)/4 + (mh*mt*q2*q5*s12^2*s45^2)/4 + (mt^2*q2*q5*s12^2*s45^2)/4 + q1*q2*s45^3 - (3*mt^2*q5*s45^3)/4 + (5*mt^4*q1*q5*s45^3)/8 + (5*mt^4*q2*q5*s45^3)/8 - q5*s12*s45^3 - (5*mh*mt*q1*q5*s12*s45^3)/4 + (3*mt^2*q1*q5*s12*s45^3)/4 + (5*mh*mt*q2*q5*s12*s45^3)/4 + (3*mt^2*q2*q5*s12*s45^3)/4 - (7*q1*q5*s12^2*s45^3)/8 - (7*q2*q5*s12^2*s45^3)/8 - (mh*mt*q1*q5*s45^4)/4 - (3*mt^2*q1*q5*s45^4)/8 + (mh*mt*q2*q5*s45^4)/4 - (3*mt^2*q2*q5*s45^4)/8 - (q1*q5*s12*s45^4)/2 - (q2*q5*s12*s45^4)/2 + (3*q1*s12*s53)/4 + (3*q2*s12*s53)/4 - 2*mt^2*q1*q2*s12*s53 + (3*mt^4*q5*s12*s53)/2 - (mt^6*q1*q5*s12*s53)/4 - (mt^6*q2*q5*s12*s53)/4 - (3*mh^2*q5*s12^2*s53)/2 + (5*mt^2*q5*s12^2*s53)/4 + (5*mh*mt^3*q1*q5*s12^2*s53)/4 - (3*mt^4*q1*q5*s12^2*s53)/4 - (5*mh*mt^3*q2*q5*s12^2*s53)/4 - (3*mt^4*q2*q5*s12^2*s53)/4 - (9*q5*s12^3*s53)/4 - (5*mh*mt*q1*q5*s12^3*s53)/4 + mt^2*q1*q5*s12^3*s53 + (5*mh*mt*q2*q5*s12^3*s53)/4 + mt^2*q2*q5*s12^3*s53 - (3*q1*s45*s53)/4 - (3*q2*s45*s53)/4 + 2*mt^2*q1*q2*s45*s53 - (3*mt^4*q5*s45*s53)/2 + (mt^6*q1*q5*s45*s53)/4 + (mt^6*q2*q5*s45*s53)/4 + (3*mh^2*q5*s12*s45*s53)/2 - 2*mt^2*q5*s12*s45*s53 - (5*mh*mt^3*q1*q5*s12*s45*s53)/2 + (15*mt^4*q1*q5*s12*s45*s53)/4 + (5*mh*mt^3*q2*q5*s12*s45*s53)/2 + (15*mt^4*q2*q5*s12*s45*s53)/4 + (3*q5*s12^2*s45*s53)/4 - (7*mh*mt*q1*q5*s12^2*s45*s53)/4 + (mt^2*q1*q5*s12^2*s45*s53)/4 + (7*mh*mt*q2*q5*s12^2*s45*s53)/4 + (mt^2*q2*q5*s12^2*s45*s53)/4 - (3*q1*q5*s12^3*s45*s53)/2 - (3*q2*q5*s12^3*s45*s53)/2 - 2*q1*q2*s45^2*s53 + (3*mt^2*q5*s45^2*s53)/4 - (mh*mt^3*q1*q5*s45^2*s53)/4 - mt^4*q1*q5*s45^2*s53 + (mh*mt^3*q2*q5*s45^2*s53)/4 - mt^4*q2*q5*s45^2*s53 + (11*q5*s12*s45^2*s53)/4 + (9*mh*mt*q1*q5*s12*s45^2*s53)/4 - (3*mt^2*q1*q5*s12*s45^2*s53)/2 - (9*mh*mt*q2*q5*s12*s45^2*s53)/4 - (3*mt^2*q2*q5*s12*s45^2*s53)/2 + (7*q1*q5*s12^2*s45^2*s53)/4 + (7*q2*q5*s12^2*s45^2*s53)/4 + (3*q5*s45^3*s53)/4 + (5*mh*mt*q1*q5*s45^3*s53)/4 - (mt^2*q1*q5*s45^3*s53)/4 - (5*mh*mt*q2*q5*s45^3*s53)/4 - (mt^2*q2*q5*s45^3*s53)/4 + (9*q1*q5*s12*s45^3*s53)/4 + (9*q2*q5*s12*s45^3*s53)/4 + 2*q1*q2*q5*s12^2*s45^3*s53 + (q1*q5*s45^4*s53)/2 + (q2*q5*s45^4*s53)/2 + 2*q1*q2*q5*s12*s45^4*s53 - (3*mt^2*q5*s12*s53^2)/2 - (mh*mt^3*q1*q5*s12*s53^2)/2 + (mt^4*q1*q5*s12*s53^2)/2 + (mh*mt^3*q2*q5*s12*s53^2)/2 + (mt^4*q2*q5*s12*s53^2)/2 + (3*q5*s12^2*s53^2)/2 + (mh*mt*q1*q5*s12^2*s53^2)/2 - (mt^2*q1*q5*s12^2*s53^2)/2 - (mh*mt*q2*q5*s12^2*s53^2)/2 - (mt^2*q2*q5*s12^2*s53^2)/2 + q1*q2*s45*s53^2 + (3*mt^2*q5*s45*s53^2)/2 + (5*mh*mt^3*q1*q5*s45*s53^2)/4 - (3*mt^4*q1*q5*s45*s53^2)/2 - (5*mh*mt^3*q2*q5*s45*s53^2)/4 - (3*mt^4*q2*q5*s45*s53^2)/2 - q5*s12*s45*s53^2 + (3*mh*mt*q1*q5*s12*s45*s53^2)/2 - (3*mt^2*q1*q5*s12*s45*s53^2)/2 - (3*mh*mt*q2*q5*s12*s45*s53^2)/2 - (3*mt^2*q2*q5*s12*s45*s53^2)/2 + (11*q1*q5*s12^2*s45*s53^2)/8 + (11*q2*q5*s12^2*s45*s53^2)/8 - (3*q5*s45^2*s53^2)/2 - (3*mh*mt*q1*q5*s45^2*s53^2)/2 + (3*mt^2*q1*q5*s45^2*s53^2)/2 + (3*mh*mt*q2*q5*s45^2*s53^2)/2 + (3*mt^2*q2*q5*s45^2*s53^2)/2 - 3*q1*q5*s12*s45^2*s53^2 - 3*q2*q5*s12*s45^2*s53^2 - q1*q2*q5*s12^2*s45^2*s53^2 - (11*q1*q5*s45^3*s53^2)/8 - (11*q2*q5*s45^3*s53^2)/8 - 4*q1*q2*q5*s12*s45^3*s53^2 - q1*q2*q5*s45^4*s53^2 - (mh*mt*q1*q5*s45*s53^3)/2 + (mt^2*q1*q5*s45*s53^3)/2 + (mh*mt*q2*q5*s45*s53^3)/2 + (mt^2*q2*q5*s45*s53^3)/2 - (q1*q5*s12*s45*s53^3)/4 - (q2*q5*s12*s45*s53^3)/4 + (5*q1*q5*s45^2*s53^3)/4 + (5*q2*q5*s45^2*s53^3)/4 + 2*q1*q2*q5*s12*s45^2*s53^3 + 2*q1*q2*q5*s45^3*s53^3 - q1*q2*q5*s45^2*s53^4;
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
if (match(q2^2*q3*q5*s12^4));
id q2^2*q3*q5*s12^4 = 9*q1^2 + 22*q1*q2 - 24*mt^2*q1^2*q2 + (15*q2^2)/8 - 8*mt^2*q1*q2^2 + (15*q1*q3)/4 - (3*q2*q3)/2 - 10*mt^2*q1*q2*q3 + 3*mt^2*q2^2*q3 + mh*mt^3*q1*q5 + (89*mt^4*q1*q5)/4 - 3*mt^6*q1^2*q5 - (45*mh*mt^3*q2*q5)/8 - (73*mt^4*q2*q5)/16 - (5*mt^6*q2^2*q5)/8 + (37*mh*mt^3*q3*q5)/8 - (81*mt^4*q3*q5)/16 - (5*mt^6*q1*q3*q5)/4 - 8*q1^2*q2*s12 - 8*q1*q2^2*s12 + 4*q1*q2*q3*s12 + 2*q2^2*q3*s12 + 16*mt^2*q1*q2^2*q3*s12 - (281*q5*s12)/8 - (89*mh*mt*q1*q5*s12)/2 + (39*mt^2*q1*q5*s12)/2 + 6*mh*mt^3*q1^2*q5*s12 + 2*mt^4*q1^2*q5*s12 + 5*mh*mt*q2*q5*s12 + 4*mt^2*q2*q5*s12 - 2*mh*mt^3*q2^2*q5*s12 - (mt^4*q2^2*q5*s12)/4 - 4*mh*mt*q3*q5*s12 + (11*mt^2*q3*q5*s12)/2 + 12*mh*mt^3*q1*q3*q5*s12 - (23*mt^4*q1*q3*q5*s12)/2 + 16*mt^2*q1^2*q2^2*q3*s12^2 - (79*q1*q5*s12^2)/4 - 2*mh*mt*q1^2*q5*s12^2 - 11*mt^2*q1^2*q5*s12^2 - (7*q2*q5*s12^2)/2 + (9*mh*mt*q2^2*q5*s12^2)/4 + (3*mt^2*q2^2*q5*s12^2)/8 - (15*q3*q5*s12^2)/8 - (23*mh*mt*q1*q3*q5*s12^2)/2 + (59*mt^2*q1*q3*q5*s12^2)/4 + 4*mh*mt^3*q1^2*q3*q5*s12^2 - 5*mt^4*q1^2*q3*q5*s12^2 + 4*q1^2*q5*s12^3 + 4*q1*q2*q5*s12^3 + q2^2*q5*s12^3 - 3*q1*q3*q5*s12^3 - 4*mh*mt*q1^2*q3*q5*s12^3 + 6*mt^2*q1^2*q3*q5*s12^3 + 4*q2*q3*q5*s12^3 - q1^2*q3*q5*s12^4 + 2*q1*q2*q3*q5*s12^4 + 32*q1^2*q2*s45 + 16*q1*q2^2*s45 - 16*mt^2*q1^2*q2^2*s45 - (q2^2*q3*s45)/2 - 8*mh*mt*q1*q5*s45 - (43*mt^2*q1*q5*s45)/4 + 2*mh*mt^3*q1^2*q5*s45 + 12*mt^4*q1^2*q5*s45 + (65*mh*mt*q2*q5*s45)/8 + (65*mt^2*q2*q5*s45)/8 - (25*mh*mt^3*q2^2*q5*s45)/8 - (23*mt^4*q2^2*q5*s45)/16 - (mh*mt*q3*q5*s45)/8 - 49*q1*q5*s12*s45 - 30*mh*mt*q1^2*q5*s12*s45 + 24*mt^2*q1^2*q5*s12*s45 - (509*q2*q5*s12*s45)/16 + 16*mt^2*q1*q2*q5*s12*s45 + (5*mh*mt*q2^2*q5*s12*s45)/2 + (mt^2*q2^2*q5*s12*s45)/4 + (7*q3*q5*s12*s45)/16 - 19*q1^2*q5*s12^2*s45 - 42*q1*q2*q5*s12^2*s45 - 3*q2^2*q5*s12^2*s45 - (9*q2*q3*q5*s12^2*s45)/4 + 8*q1^2*q2*q5*s12^3*s45 + 8*q1*q2^2*q5*s12^3*s45 + q2^2*q3*q5*s12^3*s45 + 16*q1^2*q2^2*s45^2 + q1*q5*s45^2 - 8*mh*mt*q1^2*q5*s45^2 - 6*mt^2*q1^2*q5*s45^2 - (247*q2*q5*s45^2)/256 + 4*mt^2*q1*q2*q5*s45^2 + (257*mh*mt*q2^2*q5*s45^2)/64 + (27*mt^2*q2^2*q5*s45^2)/16 - (9*q3*q5*s45^2)/256 - 18*q1^2*q5*s12*s45^2 - 36*q1*q2*q5*s12*s45^2 + 16*mt^2*q1^2*q2*q5*s12*s45^2 - (161*q2^2*q5*s12*s45^2)/16 + (q2*q3*q5*s12*s45^2)/2 - 40*q1^2*q2*q5*s12^2*s45^2 - 24*q1*q2^2*q5*s12^2*s45^2 - (3*q2^2*q3*q5*s12^2*s45^2)/8 - q1^2*q5*s45^3 + 2*q1*q2*q5*s45^3 - (255*q2^2*q5*s45^3)/256 - (5*q2*q3*q5*s45^3)/128 - 8*q1^2*q2*q5*s12*s45^3 - 8*q1*q2^2*q5*s12*s45^3 + (q2^2*q3*q5*s12*s45^3)/16 - 16*q1^2*q2^2*q5*s12^2*s45^3 - (q2^2*q3*q5*s45^4)/256 + 16*mt^2*q1^2*q2^2*s53 + 2*q1*q2*q3*s53 - (q2^2*q3*s53)/2 - 16*mt^2*q1*q2^2*q3*s53 + (5*mh*mt*q1*q5*s53)/2 - (87*mt^2*q1*q5*s53)/4 - 2*mh*mt^3*q1^2*q5*s53 + mt^4*q1^2*q5*s53 + (41*mh*mt*q2*q5*s53)/8 + (21*mt^2*q2*q5*s53)/16 + (7*mh*mt^3*q2^2*q5*s53)/8 + (13*mt^4*q2^2*q5*s53)/16 - (61*mh*mt*q3*q5*s53)/8 + (93*mt^2*q3*q5*s53)/16 - (25*mh*mt^3*q1*q3*q5*s53)/2 + (87*mt^4*q1*q3*q5*s53)/4 - 32*mt^2*q1^2*q2^2*q3*s12*s53 + (63*q1*q5*s12*s53)/2 - 6*mh*mt*q1^2*q5*s12*s53 + 20*mt^2*q1^2*q5*s12*s53 + (135*q2*q5*s12*s53)/16 - 8*mt^2*q1*q2*q5*s12*s53 - mh*mt*q2^2*q5*s12*s53 - (3*mt^2*q2^2*q5*s12*s53)/4 - (137*q3*q5*s12*s53)/16 + mh*mt*q1*q3*q5*s12*s53 - 21*mt^2*q1*q3*q5*s12*s53 - 8*mh*mt^3*q1^2*q3*q5*s12*s53 + 10*mt^4*q1^2*q3*q5*s12*s53 + mt^2*q2*q3*q5*s12*s53 - 6*q1^2*q5*s12^2*s53 + 2*q1*q2*q5*s12^2*s53 - (3*q2^2*q5*s12^2*s53)/8 - (7*q1*q3*q5*s12^2*s53)/4 + 12*mh*mt*q1^2*q3*q5*s12^2*s53 - 22*mt^2*q1^2*q3*q5*s12^2*s53 - (47*q2*q3*q5*s12^2*s53)/4 + 4*q1^2*q3*q5*s12^3*s53 - 12*q1*q2*q3*q5*s12^3*s53 + q2^2*q3*q5*s12^3*s53 - 16*q1^2*q2^2*s45*s53 + 19*q1*q5*s45*s53 + 18*mh*mt*q1^2*q5*s45*s53 - 29*mt^2*q1^2*q5*s45*s53 + (1711*q2*q5*s45*s53)/128 - 12*mt^2*q1*q2*q5*s45*s53 + (39*mh*mt*q2^2*q5*s45*s53)/32 - (mt^2*q2^2*q5*s45*s53)/16 + (353*q3*q5*s45*s53)/128 - (3*mt^2*q2*q3*q5*s45*s53)/4 + 28*q1^2*q5*s12*s45*s53 + 80*q1*q2*q5*s12*s45*s53 - 16*mt^2*q1^2*q2*q5*s12*s45*s53 + (19*q2^2*q5*s12*s45*s53)/4 + (5*q2*q3*q5*s12*s45*s53)/2 - 8*q1^2*q2*q5*s12^2*s45*s53 - 8*q1*q2^2*q5*s12^2*s45*s53 - (q2^2*q3*q5*s12^2*s45*s53)/4 + 17*q1^2*q5*s45^2*s53 + 22*q1*q2*q5*s45^2*s53 - 16*mt^2*q1^2*q2*q5*s45^2*s53 + (2301*q2^2*q5*s45^2*s53)/256 + (7*q2*q3*q5*s45^2*s53)/128 + 80*q1^2*q2*q5*s12*s45^2*s53 + 48*q1*q2^2*q5*s12*s45^2*s53 - (q2^2*q3*q5*s12*s45^2*s53)/16 + 16*q1^2*q2^2*q5*s12^2*s45^2*s53 + 8*q1^2*q2*q5*s45^3*s53 + 8*q1*q2^2*q5*s45^3*s53 + (q2^2*q3*q5*s45^3*s53)/64 + 32*q1^2*q2^2*q5*s12*s45^3*s53 + 16*mt^2*q1^2*q2^2*q3*s53^2 - (11*q1*q5*s53^2)/4 + 4*mh*mt*q1^2*q5*s53^2 - 10*mt^2*q1^2*q5*s53^2 + (57*q2*q5*s53^2)/256 + (mh*mt*q2^2*q5*s53^2)/64 + (647*q3*q5*s53^2)/256 + (9*mh*mt*q1*q3*q5*s53^2)/2 - (11*mt^2*q1*q3*q5*s53^2)/4 + 4*mh*mt^3*q1^2*q3*q5*s53^2 - 5*mt^4*q1^2*q3*q5*s53^2 - (mt^2*q2*q3*q5*s53^2)/4 + 4*q1^2*q5*s12*s53^2 - 8*q1*q2*q5*s12*s53^2 + (q2^2*q5*s12*s53^2)/16 + (13*q1*q3*q5*s12*s53^2)/2 - 12*mh*mt*q1^2*q3*q5*s12*s53^2 + 26*mt^2*q1^2*q3*q5*s12*s53^2 + 6*q2*q3*q5*s12*s53^2 - 6*q1^2*q3*q5*s12^2*s53^2 + 18*q1*q2*q3*q5*s12^2*s53^2 - (3*q2^2*q3*q5*s12^2*s53^2)/8 - 8*q1^2*q5*s45*s53^2 - 24*q1*q2*q5*s45*s53^2 + 16*mt^2*q1^2*q2*q5*s45*s53^2 - (93*q2^2*q5*s45*s53^2)/256 + (97*q2*q3*q5*s45*s53^2)/128 - (q2^2*q3*q5*s12*s45*s53^2)/16 - 40*q1^2*q2*q5*s45^2*s53^2 - 24*q1*q2^2*q5*s45^2*s53^2 - (3*q2^2*q3*q5*s45^2*s53^2)/128 - 32*q1^2*q2^2*q5*s12*s45^2*s53^2 - 16*q1^2*q2^2*q5*s45^3*s53^2 - q1^2*q5*s53^3 - (q2^2*q5*s53^3)/256 - (7*q1*q3*q5*s53^3)/4 + 4*mh*mt*q1^2*q3*q5*s53^3 - 10*mt^2*q1^2*q3*q5*s53^3 + (29*q2*q3*q5*s53^3)/128 + 4*q1^2*q3*q5*s12*s53^3 - 8*q1*q2*q3*q5*s12*s53^3 + (q2^2*q3*q5*s12*s53^3)/16 + (q2^2*q3*q5*s45*s53^3)/64 + 16*q1^2*q2^2*q5*s45^2*s53^3 - q1^2*q3*q5*s53^4 - (q2^2*q3*q5*s53^4)/256;
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
if (match(q3*q4*q5*s12^2*s53^2));
id q3*q4*q5*s12^2*s53^2 = (93*q1)/128 + (57*q2)/128 - mt^2*q1*q2 + (9*q3)/128 - (3*mt^2*q2*q3)/16 + (45*q4)/128 - (15*mt^2*q1*q4)/16 + (51*mt^4*q5)/32 - (31*mt^6*q1*q5)/128 - (19*mt^6*q2*q5)/128 - (3*mt^6*q3*q5)/128 - (15*mt^6*q4*q5)/128 - (3*q1*q3*s12)/8 - (q2*q3*s12)/8 - mt^2*q1*q2*q3*s12 - (q1*q4*s12)/8 + 2*mt^2*q1*q3*q4*s12 - (51*mh^2*q5*s12)/32 + (17*mt^2*q5*s12)/32 + (9*mh*mt^3*q1*q5*s12)/8 - (87*mt^4*q1*q5*s12)/64 - (mh*mt^3*q2*q5*s12)/4 + (9*mt^4*q2*q5*s12)/64 + (mt^4*q3*q5*s12)/64 + (mt^6*q1*q3*q5*s12)/8 - (7*mh*mt^3*q4*q5*s12)/8 - (47*mt^4*q4*q5*s12)/64 - mt^2*q1^2*q2*q3*s12^2 + mt^2*q1^2*q2*q4*s12^2 + mt^2*q1^2*q3*q4*s12^2 - (31*q5*s12^2)/32 + (41*mh*mt*q1*q5*s12^2)/64 - (71*mt^2*q1*q5*s12^2)/128 - (mh*mt*q2*q5*s12^2)/64 - (91*mt^2*q2*q5*s12^2)/128 + (mh*mt*q3*q5*s12^2)/64 + (5*mt^2*q3*q5*s12^2)/128 - (mh*mt^3*q1*q3*q5*s12^2)/4 - (mt^4*q1*q3*q5*s12^2)/16 + (55*mh*mt*q4*q5*s12^2)/64 + (121*mt^2*q4*q5*s12^2)/128 - (mh*mt^3*q2*q4*q5*s12^2)/4 - (5*mt^4*q2*q4*q5*s12^2)/16 + (5*q1*q5*s12^3)/8 + (3*q2*q5*s12^3)/16 - (q3*q5*s12^3)/16 + (mh*mt*q1*q3*q5*s12^3)/4 - (q4*q5*s12^3)/8 + (mh*mt*q2*q4*q5*s12^3)/4 + (3*mt^2*q2*q4*q5*s12^3)/8 - (q1*q3*q5*s12^4)/16 + (q2*q3*q5*s12^4)/16 + (q1*q4*q5*s12^4)/16 - (q2*q4*q5*s12^4)/16 + q1*q2*s45 + (q2*q3*s45)/32 + (5*q1*q4*s45)/32 - (51*mt^2*q5*s45)/32 - (45*mh*mt^3*q1*q5*s45)/128 + (435*mt^4*q1*q5*s45)/256 + (9*mh*mt^3*q2*q5*s45)/128 + (215*mt^4*q2*q5*s45)/256 - (9*mh*mt^3*q3*q5*s45)/128 + (19*mt^4*q3*q5*s45)/256 + (45*mh*mt^3*q4*q5*s45)/128 + (95*mt^4*q4*q5*s45)/256 - (49*q5*s12*s45)/64 - (165*mh*mt*q1*q5*s12*s45)/64 + (143*mt^2*q1*q5*s12*s45)/64 + (55*mh*mt*q2*q5*s12*s45)/32 + (95*mt^2*q2*q5*s12*s45)/64 + (mh*mt*q3*q5*s12*s45)/16 - (5*mt^2*q3*q5*s12*s45)/64 - (21*mh*mt*q4*q5*s12*s45)/64 - (25*mt^2*q4*q5*s12*s45)/64 - (93*q1*q5*s12^2*s45)/64 - q2*q5*s12^2*s45 + (3*q3*q5*s12^2*s45)/128 + (9*q4*q5*s12^2*s45)/128 - (q2*q3*q5*s12^3*s45)/16 - (q1*q4*q5*s12^3*s45)/8 - (251*mh*mt*q1*q5*s45^2)/1024 - (231*mt^2*q1*q5*s45^2)/256 + (255*mh*mt*q2*q5*s45^2)/1024 - (123*mt^2*q2*q5*s45^2)/256 + (mh*mt*q3*q5*s45^2)/1024 - (5*mh*mt*q4*q5*s45^2)/1024 - (31*q1*q5*s12*s45^2)/64 - (127*q2*q5*s12*s45^2)/256 + mt^2*q1*q2*q5*s12*s45^2 - (q3*q5*s12*s45^2)/256 - (q4*q5*s12*s45^2)/64 - q1*q2*q5*s12^2*s45^2 + (3*q2*q3*q5*s12^2*s45^2)/128 + (9*q1*q4*q5*s12^2*s45^2)/128 - (5*q1*q5*s45^3)/4096 - (q2*q5*s45^3)/4096 + (q3*q5*s45^3)/4096 + (5*q4*q5*s45^3)/4096 - (q2*q3*q5*s12*s45^3)/256 - (q1*q4*q5*s12*s45^3)/64 + (q2*q3*q5*s45^4)/4096 + (5*q1*q4*q5*s45^4)/4096 + (3*q1*q3*s53)/8 + (q2*q3*s53)/32 + mt^2*q1*q2*q3*s53 - (3*q1*q4*s53)/32 + q3*q4*s53 - 2*mt^2*q1*q3*q4*s53 - (51*mt^2*q5*s53)/32 - (133*mh*mt^3*q1*q5*s53)/128 + (479*mt^4*q1*q5*s53)/256 + (9*mh*mt^3*q2*q5*s53)/128 + (3*mt^4*q2*q5*s53)/256 + (87*mh*mt^3*q3*q5*s53)/128 - (185*mt^4*q3*q5*s53)/256 - (mt^6*q1*q3*q5*s53)/8 + (37*mh*mt^3*q4*q5*s53)/128 + (243*mt^4*q4*q5*s53)/256 + 2*mt^2*q1^2*q2*q3*s12*s53 - 2*mt^2*q1^2*q2*q4*s12*s53 - 2*mt^2*q1^2*q3*q4*s12*s53 - (9*q5*s12*s53)/64 - (125*mh*mt*q1*q5*s12*s53)/64 + (139*mt^2*q1*q5*s12*s53)/64 + (7*mh*mt*q2*q5*s12*s53)/16 + (83*mt^2*q2*q5*s12*s53)/64 + (25*mh*mt*q3*q5*s12*s53)/32 - (73*mt^2*q3*q5*s12*s53)/64 + mh*mt^3*q1*q3*q5*s12*s53 - (3*mt^4*q1*q3*q5*s12*s53)/2 + (23*mh*mt*q4*q5*s12*s53)/64 - (61*mt^2*q4*q5*s12*s53)/64 + (mh*mt^3*q2*q4*q5*s12*s53)/2 + (5*mt^4*q2*q4*q5*s12*s53)/8 - (191*q1*q5*s12^2*s53)/128 - (45*q2*q5*s12^2*s53)/128 + (q3*q5*s12^2*s53)/2 + (3*mh*mt*q1*q3*q5*s12^2*s53)/4 - (mt^2*q1*q3*q5*s12^2*s53)/2 - (25*q4*q5*s12^2*s53)/64 - (3*mh*mt*q2*q4*q5*s12^2*s53)/4 - (11*mt^2*q2*q4*q5*s12^2*s53)/8 + (5*q1*q3*q5*s12^3*s53)/8 - (q2*q3*q5*s12^3*s53)/16 + (q2*q4*q5*s12^3*s53)/4 + (51*q5*s45*s53)/32 + (987*mh*mt*q1*q5*s45*s53)/512 - (743*mt^2*q1*q5*s45*s53)/256 - (615*mh*mt*q2*q5*s45*s53)/512 - (463*mt^2*q2*q5*s45*s53)/256 - (153*mh*mt*q3*q5*s45*s53)/512 + (81*mt^2*q3*q5*s45*s53)/256 - (219*mh*mt*q4*q5*s45*s53)/512 - (95*mt^2*q4*q5*s45*s53)/256 + (283*q1*q5*s12*s45*s53)/128 + (93*q2*q5*s12*s45*s53)/64 - mt^2*q1*q2*q5*s12*s45*s53 + (5*q3*q5*s12*s45*s53)/64 + (105*q4*q5*s12*s45*s53)/128 - (mt^2*q1*q4*q5*s12*s45*s53)/16 + (q2*q3*q5*s12^2*s45*s53)/64 - (q1*q4*q5*s12^2*s45*s53)/64 + (2143*q1*q5*s45^2*s53)/4096 + (2051*q2*q5*s45^2*s53)/4096 - mt^2*q1*q2*q5*s45^2*s53 - (163*q3*q5*s45^2*s53)/4096 - (895*q4*q5*s45^2*s53)/4096 + (3*mt^2*q1*q4*q5*s45^2*s53)/64 + 2*q1*q2*q5*s12*s45^2*s53 + (q2*q3*q5*s12*s45^2*s53)/256 + (9*q1*q4*q5*s12*s45^2*s53)/128 - (q2*q3*q5*s45^3*s53)/1024 - (25*q1*q4*q5*s45^3*s53)/1024 - mt^2*q1^2*q2*q3*s53^2 + mt^2*q1^2*q2*q4*s53^2 + mt^2*q1^2*q3*q4*s53^2 + (1301*mh*mt*q1*q5*s53^2)/1024 - (129*mt^2*q1*q5*s53^2)/64 - (257*mh*mt*q2*q5*s53^2)/1024 - (5*mt^2*q2*q5*s53^2)/8 - (1535*mh*mt*q3*q5*s53^2)/1024 + (389*mt^2*q3*q5*s53^2)/256 - (3*mh*mt^3*q1*q3*q5*s53^2)/4 + (25*mt^4*q1*q3*q5*s53^2)/16 + (491*mh*mt*q4*q5*s53^2)/1024 + (77*mt^2*q4*q5*s53^2)/256 - (mh*mt^3*q2*q4*q5*s53^2)/4 - (5*mt^4*q2*q4*q5*s53^2)/16 + (173*q1*q5*s12*s53^2)/128 + (63*q2*q5*s12*s53^2)/256 - (479*q3*q5*s12*s53^2)/256 - (9*mh*mt*q1*q3*q5*s12*s53^2)/4 + (5*mt^2*q1*q3*q5*s12*s53^2)/2 - (93*q4*q5*s12*s53^2)/128 + (mt^2*q1*q4*q5*s12*s53^2)/16 + (3*mh*mt*q2*q4*q5*s12*s53^2)/4 + (13*mt^2*q2*q4*q5*s12*s53^2)/8 - (3*q1*q3*q5*s12^2*s53^2)/2 + (3*q2*q3*q5*s12^2*s53^2)/128 + (q1*q4*q5*s12^2*s53^2)/128 - (3*q2*q4*q5*s12^2*s53^2)/8 - (3471*q1*q5*s45*s53^2)/4096 - (1955*q2*q5*s45*s53^2)/4096 + mt^2*q1*q2*q5*s45*s53^2 + (3843*q3*q5*s45*s53^2)/4096 + (2159*q4*q5*s45*s53^2)/4096 - (mt^2*q1*q4*q5*s45*s53^2)/32 + (q2*q3*q5*s12*s45*s53^2)/256 - (q1*q4*q5*s12*s45*s53^2)/32 + 2*q3*q4*q5*s12*s45*s53^2 - q1*q2*q5*s45^2*s53^2 + (3*q2*q3*q5*s45^2*s53^2)/2048 - (25*q1*q4*q5*s45^2*s53^2)/2048 - q3*q4*q5*s45^2*s53^2 - (1771*q1*q5*s53^3)/4096 - (255*q2*q5*s53^3)/4096 + (1791*q3*q5*s53^3)/4096 + (5*mh*mt*q1*q3*q5*s53^3)/4 - 2*mt^2*q1*q3*q5*s53^3 + (235*q4*q5*s53^3)/4096 - (mt^2*q1*q4*q5*s53^3)/64 - (mh*mt*q2*q4*q5*s53^3)/4 - (5*mt^2*q2*q4*q5*s53^3)/8 + (11*q1*q3*q5*s12*s53^3)/8 - (q2*q3*q5*s12*s53^3)/256 - (3*q1*q4*q5*s12*s53^3)/128 + (q2*q4*q5*s12*s53^3)/4 - (q2*q3*q5*s45*s53^3)/1024 + (31*q1*q4*q5*s45*s53^3)/1024 - (7*q1*q3*q5*s53^4)/16 + (q2*q3*q5*s53^4)/4096 + (21*q1*q4*q5*s53^4)/4096 - (q2*q4*q5*s53^4)/16;
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
if (match(q1*q2^2*q4*q5*s12^4));
id q1*q2^2*q4*q5*s12^4 = (15*q1^3)/8 + 13*q1^2*q2 - 8*mt^2*q1^3*q2 + 16*q1*q2^2 - 24*mt^2*q1^2*q2^2 + (3*q1^2*q4)/4 + 3*mt^2*q1^3*q4 - 2*q1*q2*q4 + (7*mt^2*q1^2*q2*q4)/2 - (mh*mt*q1*q5)/2 + (87*mt^2*q1*q5)/64 + (63*mh*mt^3*q1^2*q5)/16 - (65*mt^4*q1^2*q5)/32 - (5*mt^6*q1^3*q5)/8 + (5*mh*mt*q2*q5)/16 + (9*mt^2*q2*q5)/16 - 6*mh*mt^3*q2^2*q5 - (17*mt^4*q2^2*q5)/2 + (3*mh*mt*q4*q5)/16 + (5*mt^2*q4*q5)/64 + (5*mh*mt^3*q2*q4*q5)/8 + (29*mt^4*q2*q4*q5)/32 - 8*q1^3*q2*s12 - 8*q1^2*q2^2*s12 + 2*q1^3*q4*s12 + 4*q1^2*q2*q4*s12 + 16*mt^2*q1^3*q2*q4*s12 - 6*q1*q2^2*q4*s12 + 18*mt^2*q1^2*q2^2*q4*s12 - (2027*q1*q5*s12)/128 - (115*mh*mt*q1^2*q5*s12)/32 + (5*mt^2*q1^2*q5*s12)/8 + 2*mh*mt^3*q1^3*q5*s12 - (mt^4*q1^3*q5*s12)/4 - (57*q2*q5*s12)/4 - (mt^2*q1*q2*q5*s12)/2 - (11*mh*mt*q2^2*q5*s12)/4 - mt^2*q2^2*q5*s12 + (59*q4*q5*s12)/128 - (5*mt^2*q1*q4*q5*s12)/16 - (5*mh*mt*q2*q4*q5*s12)/16 - (19*mt^2*q2*q4*q5*s12)/16 + (3*mt^4*q2^2*q4*q5*s12)/8 + 16*mt^2*q1^3*q2^2*q4*s12^2 - (67*q1^2*q5*s12^2)/32 - (9*mh*mt*q1^3*q5*s12^2)/4 + (3*mt^2*q1^3*q5*s12^2)/8 - (19*q1*q2*q5*s12^2)/2 - q2^2*q5*s12^2 - (17*q1*q4*q5*s12^2)/8 + (35*q2*q4*q5*s12^2)/32 + (mh*mt*q2^2*q4*q5*s12^2)/4 - (3*mt^2*q2^2*q4*q5*s12^2)/4 + q1^3*q5*s12^3 + 4*q1^2*q2*q5*s12^3 + 10*q1*q2^2*q5*s12^3 + (23*q1^2*q4*q5*s12^3)/8 - (11*q1*q2*q4*q5*s12^3)/4 + (7*q2^2*q4*q5*s12^3)/8 - q1^3*q4*q5*s12^4 + 2*q1^2*q2*q4*q5*s12^4 + 16*q1^3*q2*s45 + 32*q1^2*q2^2*s45 - 16*mt^2*q1^3*q2^2*s45 - (q1^3*q4*s45)/2 + (335*q1*q5*s45)/512 - (599*mh*mt*q1^2*q5*s45)/128 + (107*mt^2*q1^2*q5*s45)/32 + (25*mh*mt^3*q1^3*q5*s45)/8 - (23*mt^4*q1^3*q5*s45)/16 - (19*q2*q5*s45)/32 - (11*mt^2*q1*q2*q5*s45)/2 + (9*mh*mt*q2^2*q5*s45)/4 + (3*mt^2*q2^2*q5*s45)/2 - (31*q4*q5*s45)/512 + (5*mt^2*q1*q4*q5*s45)/64 - (3325*q1^2*q5*s12*s45)/128 - (5*mh*mt*q1^3*q5*s12*s45)/2 + (mt^2*q1^3*q5*s12*s45)/4 - (171*q1*q2*q5*s12*s45)/4 - 2*mt^2*q1^2*q2*q5*s12*s45 - (79*q2^2*q5*s12*s45)/8 - 4*mt^2*q1*q2^2*q5*s12*s45 + (11*q1*q4*q5*s12*s45)/16 - 3*q1^3*q5*s12^2*s45 - 33*q1^2*q2*q5*s12^2*s45 - 26*q1*q2^2*q5*s12^2*s45 - (45*q1^2*q4*q5*s12^2*s45)/32 + 8*q1^3*q2*q5*s12^3*s45 + 8*q1^2*q2^2*q5*s12^3*s45 + q1^3*q4*q5*s12^3*s45 + 16*q1^3*q2^2*s45^2 - (503*q1^2*q5*s45^2)/512 - (257*mh*mt*q1^3*q5*s45^2)/64 + (27*mt^2*q1^3*q5*s45^2)/16 + 3*q1*q2*q5*s45^2 - (mt^2*q1^2*q2*q5*s45^2)/2 - 2*q2^2*q5*s45^2 - 4*mt^2*q1*q2^2*q5*s45^2 - (5*q1*q4*q5*s45^2)/64 - (161*q1^3*q5*s12*s45^2)/16 - 36*q1^2*q2*q5*s12*s45^2 - 18*q1*q2^2*q5*s12*s45^2 - 2*mt^2*q1^2*q2^2*q5*s12*s45^2 + (37*q1^2*q4*q5*s12*s45^2)/128 - 24*q1^3*q2*q5*s12^2*s45^2 - 40*q1^2*q2^2*q5*s12^2*s45^2 - (3*q1^3*q4*q5*s12^2*s45^2)/8 - (255*q1^3*q5*s45^3)/256 + 2*q1^2*q2*q5*s45^3 - q1*q2^2*q5*s45^3 - (11*q1^2*q4*q5*s45^3)/512 - 8*q1^3*q2*q5*s12*s45^3 - 8*q1^2*q2^2*q5*s12*s45^3 + (q1^3*q4*q5*s12*s45^3)/16 - 16*q1^3*q2^2*q5*s12^2*s45^3 - (q1^3*q4*q5*s45^4)/256 + 16*mt^2*q1^3*q2^2*s53 - (q1^3*q4*s53)/2 + 2*q1^2*q2*q4*s53 - 16*mt^2*q1^3*q2*q4*s53 + 15*q1*q2^2*q4*s53 - 45*mt^2*q1^2*q2^2*q4*s53 - (1177*q1*q5*s53)/512 - (683*mh*mt*q1^2*q5*s53)/128 + (15*mt^2*q1^2*q5*s53)/8 - (7*mh*mt^3*q1^3*q5*s53)/8 + (13*mt^4*q1^3*q5*s53)/16 + (57*q2*q5*s53)/32 + (199*mt^2*q1*q2*q5*s53)/8 + (165*mh*mt*q2^2*q5*s53)/8 + (119*mt^2*q2^2*q5*s53)/4 + (265*q4*q5*s53)/512 + (13*mt^2*q1*q4*q5*s53)/64 - (201*mh*mt*q2*q4*q5*s53)/32 - (111*mt^2*q2*q4*q5*s53)/16 - (15*mt^4*q2^2*q4*q5*s53)/16 - 32*mt^2*q1^3*q2^2*q4*s12*s53 + (1053*q1^2*q5*s12*s53)/128 + mh*mt*q1^3*q5*s12*s53 - (3*mt^2*q1^3*q5*s12*s53)/4 + (49*q1*q2*q5*s12*s53)/4 - (25*mt^2*q1^2*q2*q5*s12*s53)/2 - (77*q2^2*q5*s12*s53)/8 - (25*mt^2*q1*q2^2*q5*s12*s53)/2 + (31*q1*q4*q5*s12*s53)/8 + (13*mt^2*q1^2*q4*q5*s12*s53)/4 - (13*q2*q4*q5*s12*s53)/16 + 6*mt^2*q1*q2*q4*q5*s12*s53 - (35*mh*mt*q2^2*q4*q5*s12*s53)/4 - (81*mt^2*q2^2*q4*q5*s12*s53)/8 - (3*q1^3*q5*s12^2*s53)/8 + 2*q1^2*q2*q5*s12^2*s53 - 33*q1*q2^2*q5*s12^2*s53 - (313*q1^2*q4*q5*s12^2*s53)/32 + (83*q1*q2*q4*q5*s12^2*s53)/8 + (9*q2^2*q4*q5*s12^2*s53)/16 + q1^3*q4*q5*s12^3*s53 - 12*q1^2*q2*q4*q5*s12^3*s53 + 10*q1*q2^2*q4*q5*s12^3*s53 - 16*q1^3*q2^2*s45*s53 + (49*q1^2*q5*s45*s53)/8 - (39*mh*mt*q1^3*q5*s45*s53)/32 - (mt^2*q1^3*q5*s45*s53)/16 + (153*q1*q2*q5*s45*s53)/8 + (57*mt^2*q1^2*q2*q5*s45*s53)/2 + (83*q2^2*q5*s45*s53)/16 + 61*mt^2*q1*q2^2*q5*s45*s53 - (15*q1*q4*q5*s45*s53)/64 - (3*mt^2*q1^2*q4*q5*s45*s53)/4 + (19*q1^3*q5*s12*s45*s53)/4 + 62*q1^2*q2*q5*s12*s45*s53 + 42*q1*q2^2*q5*s12*s45*s53 + 2*mt^2*q1^2*q2^2*q5*s12*s45*s53 + (115*q1^2*q4*q5*s12*s45*s53)/64 - 8*q1^3*q2*q5*s12^2*s45*s53 - 8*q1^2*q2^2*q5*s12^2*s45*s53 - (q1^3*q4*q5*s12^2*s45*s53)/4 + (2301*q1^3*q5*s45^2*s53)/256 + 22*q1^2*q2*q5*s45^2*s53 + 17*q1*q2^2*q5*s45^2*s53 + 29*mt^2*q1^2*q2^2*q5*s45^2*s53 - (17*q1^2*q4*q5*s45^2*s53)/512 + 48*q1^3*q2*q5*s12*s45^2*s53 + 80*q1^2*q2^2*q5*s12*s45^2*s53 - (q1^3*q4*q5*s12*s45^2*s53)/16 + 16*q1^3*q2^2*q5*s12^2*s45^2*s53 + 8*q1^3*q2*q5*s45^3*s53 + 8*q1^2*q2^2*q5*s45^3*s53 + (q1^3*q4*q5*s45^3*s53)/64 + 32*q1^3*q2^2*q5*s12*s45^3*s53 + 16*mt^2*q1^3*q2^2*q4*s53^2 + (231*q1^2*q5*s53^2)/512 - (mh*mt*q1^3*q5*s53^2)/64 + (31*q1*q2*q5*s53^2)/8 + (181*q2^2*q5*s53^2)/16 - (61*q1*q4*q5*s53^2)/8 - (13*mt^2*q1^2*q4*q5*s53^2)/16 - (273*q2*q4*q5*s53^2)/32 + (33*mt^2*q1*q2*q4*q5*s53^2)/8 + (35*mh*mt*q2^2*q4*q5*s53^2)/2 + (213*mt^2*q2^2*q4*q5*s53^2)/8 + (q1^3*q5*s12*s53^2)/16 - 8*q1^2*q2*q5*s12*s53^2 + 40*q1*q2^2*q5*s12*s53^2 + (597*q1^2*q4*q5*s12*s53^2)/128 - (55*q1*q2*q4*q5*s12*s53^2)/2 - (51*q2^2*q4*q5*s12*s53^2)/4 - (3*q1^3*q4*q5*s12^2*s53^2)/8 + 18*q1^2*q2*q4*q5*s12^2*s53^2 - 33*q1*q2^2*q4*q5*s12^2*s53^2 - (93*q1^3*q5*s45*s53^2)/256 - 15*q1^2*q2*q5*s45*s53^2 - 15*q1*q2^2*q5*s45*s53^2 - 29*mt^2*q1^2*q2^2*q5*s45*s53^2 + (595*q1^2*q4*q5*s45*s53^2)/512 - (q1^3*q4*q5*s12*s45*s53^2)/16 - 24*q1^3*q2*q5*s45^2*s53^2 - 40*q1^2*q2^2*q5*s45^2*s53^2 - (3*q1^3*q4*q5*s45^2*s53^2)/128 - 32*q1^3*q2^2*q5*s12*s45^2*s53^2 - 16*q1^3*q2^2*q5*s45^3*s53^2 - (q1^3*q5*s53^3)/256 - 16*q1*q2^2*q5*s53^3 + (233*q1^2*q4*q5*s53^3)/512 + (159*q1*q2*q4*q5*s53^3)/8 + (181*q2^2*q4*q5*s53^3)/16 + (q1^3*q4*q5*s12*s53^3)/16 - 8*q1^2*q2*q4*q5*s12*s53^3 + 40*q1*q2^2*q4*q5*s12*s53^3 + (q1^3*q4*q5*s45*s53^3)/64 + 16*q1^3*q2^2*q5*s45^2*s53^3 - (q1^3*q4*q5*s53^4)/256 - 16*q1*q2^2*q4*q5*s53^4;
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
if (match(q1*q4*q5*s12^4*s45^2));
id q1*q4*q5*s12^4*s45^2 = -6*q1*s12^2 - 6*q4*s12^2 + 16*mt^2*q1*q4*s12^2 - 12*mt^4*q5*s12^2 + 2*mt^6*q1*q5*s12^2 + 2*mt^6*q4*q5*s12^2 + 12*mh^2*q5*s12^3 - 4*mt^2*q5*s12^3 - 8*mh*mt^3*q1*q5*s12^3 + 4*mt^4*q1*q5*s12^3 + 8*mh*mt^3*q4*q5*s12^3 + 4*mt^4*q4*q5*s12^3 + 12*q5*s12^4 + 8*mh*mt*q1*q5*s12^4 - 6*mt^2*q1*q5*s12^4 - 8*mh*mt*q4*q5*s12^4 - 6*mt^2*q4*q5*s12^4 + 6*q1*s12*s45 + 6*q4*s12*s45 - 16*mt^2*q1*q4*s12*s45 + 12*mt^4*q5*s12*s45 - 2*mt^6*q1*q5*s12*s45 - 2*mt^6*q4*q5*s12*s45 - 12*mh^2*q5*s12^2*s45 + 16*mt^2*q5*s12^2*s45 + 16*mh*mt^3*q1*q5*s12^2*s45 - 25*mt^4*q1*q5*s12^2*s45 - 16*mh*mt^3*q4*q5*s12^2*s45 - 13*mt^4*q4*q5*s12^2*s45 - 18*q5*s12^3*s45 + 8*mh*mt*q1*q5*s12^3*s45 + 4*mt^2*q1*q5*s12^3*s45 + 16*mh*mt*q4*q5*s12^3*s45 + 16*mt^2*q4*q5*s12^3*s45 + 7*q1*q5*s12^4*s45 - q4*q5*s12^4*s45 - (9*q1*s45^2)/8 - (9*q4*s45^2)/8 + 3*mt^2*q1*q4*s45^2 - (9*mt^4*q5*s45^2)/4 + (3*mt^6*q1*q5*s45^2)/8 + (3*mt^6*q4*q5*s45^2)/8 + 2*q1*q4*s12*s45^2 + (9*mh^2*q5*s12*s45^2)/4 - (51*mt^2*q5*s12*s45^2)/4 - 8*mh*mt^3*q1*q5*s12*s45^2 + (79*mt^4*q1*q5*s12*s45^2)/4 + 8*mh*mt^3*q4*q5*s12*s45^2 + (31*mt^4*q4*q5*s12*s45^2)/4 + (25*q5*s12^2*s45^2)/4 - (65*mh*mt*q1*q5*s12^2*s45^2)/4 + (91*mt^2*q1*q5*s12^2*s45^2)/8 - (31*mh*mt*q4*q5*s12^2*s45^2)/4 - (69*mt^2*q4*q5*s12^2*s45^2)/8 - 9*q1*q5*s12^3*s45^2 + q4*q5*s12^3*s45^2 - (q1*q4*s45^3)/2 + (9*mt^2*q5*s45^3)/4 + (9*mh*mt^3*q1*q5*s45^3)/8 - (55*mt^4*q1*q5*s45^3)/16 - (9*mh*mt^3*q4*q5*s45^3)/8 - (19*mt^4*q4*q5*s45^3)/16 - (5*q5*s12*s45^3)/8 + (7*mh*mt*q1*q5*s12*s45^3)/2 - (39*mt^2*q1*q5*s12*s45^3)/4 + mh*mt*q4*q5*s12*s45^3 + (5*mt^2*q4*q5*s12*s45^3)/4 + 2*q1*q5*s12^2*s45^3 - (3*q4*q5*s12^2*s45^3)/8 + q1*q4*q5*s12^3*s45^3 - (mh*mt*q1*q5*s45^4)/64 + (27*mt^2*q1*q5*s45^4)/16 + (mh*mt*q4*q5*s45^4)/64 - (q1*q5*s12*s45^4)/16 + (q4*q5*s12*s45^4)/16 - (3*q1*q4*q5*s12^2*s45^4)/8 + (q1*q5*s45^5)/256 - (q4*q5*s45^5)/256 + (q1*q4*q5*s12*s45^5)/16 - (q1*q4*q5*s45^6)/256 + 6*q1*s12*s53 + 6*q4*s12*s53 - 16*mt^2*q1*q4*s12*s53 + 12*mt^4*q5*s12*s53 - 2*mt^6*q1*q5*s12*s53 - 2*mt^6*q4*q5*s12*s53 - 12*mh^2*q5*s12^2*s53 + 16*mt^2*q5*s12^2*s53 + 16*mh*mt^3*q1*q5*s12^2*s53 - 13*mt^4*q1*q5*s12^2*s53 - 16*mh*mt^3*q4*q5*s12^2*s53 - 25*mt^4*q4*q5*s12^2*s53 - 18*q5*s12^3*s53 - 16*mh*mt*q1*q5*s12^3*s53 + 16*mt^2*q1*q5*s12^3*s53 - 8*mh*mt*q4*q5*s12^3*s53 + 4*mt^2*q4*q5*s12^3*s53 - q1*q5*s12^4*s53 + 7*q4*q5*s12^4*s53 - (15*q1*s45*s53)/4 - (15*q4*s45*s53)/4 + 10*mt^2*q1*q4*s45*s53 - (15*mt^4*q5*s45*s53)/2 + (5*mt^6*q1*q5*s45*s53)/4 + (5*mt^6*q4*q5*s45*s53)/4 - 4*q1*q4*s12*s45*s53 + (15*mh^2*q5*s12*s45*s53)/2 - (53*mt^2*q5*s12*s45*s53)/2 - 24*mh*mt^3*q1*q5*s12*s45*s53 + (73*mt^4*q1*q5*s12*s45*s53)/2 + 24*mh*mt^3*q4*q5*s12*s45*s53 + (73*mt^4*q4*q5*s12*s45*s53)/2 + (23*q5*s12^2*s45*s53)/2 - (31*mh*mt*q1*q5*s12^2*s45*s53)/2 - (11*mt^2*q1*q5*s12^2*s45*s53)/4 + (31*mh*mt*q4*q5*s12^2*s45*s53)/2 - (11*mt^2*q4*q5*s12^2*s45*s53)/4 - 16*q1*q5*s12^3*s45*s53 - 16*q4*q5*s12^3*s45*s53 + 2*q1*q4*q5*s12^4*s45*s53 + (q1*q4*s45^2*s53)/2 + (39*mt^2*q5*s45^2*s53)/4 + (55*mh*mt^3*q1*q5*s45^2*s53)/8 - (245*mt^4*q1*q5*s45^2*s53)/16 - (55*mh*mt^3*q4*q5*s45^2*s53)/8 - (161*mt^4*q4*q5*s45^2*s53)/16 + (53*q5*s12*s45^2*s53)/8 + 24*mh*mt*q1*q5*s12*s45^2*s53 - (77*mt^2*q1*q5*s12*s45^2*s53)/4 - (27*mh*mt*q4*q5*s12*s45^2*s53)/2 - (33*mt^2*q4*q5*s12*s45^2*s53)/4 + (157*q1*q5*s12^2*s45^2*s53)/8 + (59*q4*q5*s12^2*s45^2*s53)/4 - q1*q4*q5*s12^3*s45^2*s53 - (9*q5*s45^3*s53)/4 - (51*mh*mt*q1*q5*s45^3*s53)/16 + (121*mt^2*q1*q5*s45^3*s53)/16 + (51*mh*mt*q4*q5*s45^3*s53)/16 + (47*mt^2*q4*q5*s45^3*s53)/16 - (25*q1*q5*s12*s45^3*s53)/8 - (43*q4*q5*s12*s45^3*s53)/8 + (q1*q4*q5*s12^2*s45^3*s53)/2 - (5*q1*q5*s45^4*s53)/256 + (165*q4*q5*s45^4*s53)/256 - (3*q1*q4*q5*s12*s45^4*s53)/16 + (3*q1*q4*q5*s45^5*s53)/128 - (9*q1*s53^2)/8 - (9*q4*s53^2)/8 + 3*mt^2*q1*q4*s53^2 - (9*mt^4*q5*s53^2)/4 + (3*mt^6*q1*q5*s53^2)/8 + (3*mt^6*q4*q5*s53^2)/8 + 2*q1*q4*s12*s53^2 + (9*mh^2*q5*s12*s53^2)/4 - (51*mt^2*q5*s12*s53^2)/4 - 8*mh*mt^3*q1*q5*s12*s53^2 + (31*mt^4*q1*q5*s12*s53^2)/4 + 8*mh*mt^3*q4*q5*s12*s53^2 + (79*mt^4*q4*q5*s12*s53^2)/4 + (25*q5*s12^2*s53^2)/4 + (31*mh*mt*q1*q5*s12^2*s53^2)/4 - (69*mt^2*q1*q5*s12^2*s53^2)/8 + (65*mh*mt*q4*q5*s12^2*s53^2)/4 + (91*mt^2*q4*q5*s12^2*s53^2)/8 + q1*q5*s12^3*s53^2 - 9*q4*q5*s12^3*s53^2 - q1*q4*q5*s12^4*s53^2 + (q1*q4*s45*s53^2)/2 + (39*mt^2*q5*s45*s53^2)/4 + (55*mh*mt^3*q1*q5*s45*s53^2)/8 - (161*mt^4*q1*q5*s45*s53^2)/16 - (55*mh*mt^3*q4*q5*s45*s53^2)/8 - (245*mt^4*q4*q5*s45*s53^2)/16 + (53*q5*s12*s45*s53^2)/8 + (27*mh*mt*q1*q5*s12*s45*s53^2)/2 - (33*mt^2*q1*q5*s12*s45*s53^2)/4 - 24*mh*mt*q4*q5*s12*s45*s53^2 - (77*mt^2*q4*q5*s12*s45*s53^2)/4 + (59*q1*q5*s12^2*s45*s53^2)/4 + (157*q4*q5*s12^2*s45*s53^2)/8 - q1*q4*q5*s12^3*s45*s53^2 - (15*q5*s45^2*s53^2)/2 - (307*mh*mt*q1*q5*s45^2*s53^2)/32 + (157*mt^2*q1*q5*s45^2*s53^2)/16 + (307*mh*mt*q4*q5*s45^2*s53^2)/32 + (157*mt^2*q4*q5*s45^2*s53^2)/16 - (31*q1*q5*s12*s45^2*s53^2)/2 - (31*q4*q5*s12*s45^2*s53^2)/2 - (q1*q4*q5*s12^2*s45^2*s53^2)/4 + (213*q1*q5*s45^3*s53^2)/128 + (475*q4*q5*s45^3*s53^2)/128 + (q1*q4*q5*s12*s45^3*s53^2)/8 - (15*q1*q4*q5*s45^4*s53^2)/256 - (q1*q4*s53^3)/2 + (9*mt^2*q5*s53^3)/4 + (9*mh*mt^3*q1*q5*s53^3)/8 - (19*mt^4*q1*q5*s53^3)/16 - (9*mh*mt^3*q4*q5*s53^3)/8 - (55*mt^4*q4*q5*s53^3)/16 - (5*q5*s12*s53^3)/8 - mh*mt*q1*q5*s12*s53^3 + (5*mt^2*q1*q5*s12*s53^3)/4 - (7*mh*mt*q4*q5*s12*s53^3)/2 - (39*mt^2*q4*q5*s12*s53^3)/4 - (3*q1*q5*s12^2*s53^3)/8 + 2*q4*q5*s12^2*s53^3 + q1*q4*q5*s12^3*s53^3 - (9*q5*s45*s53^3)/4 - (51*mh*mt*q1*q5*s45*s53^3)/16 + (47*mt^2*q1*q5*s45*s53^3)/16 + (51*mh*mt*q4*q5*s45*s53^3)/16 + (121*mt^2*q4*q5*s45*s53^3)/16 - (43*q1*q5*s12*s45*s53^3)/8 - (25*q4*q5*s12*s45*s53^3)/8 + (q1*q4*q5*s12^2*s45*s53^3)/2 + (475*q1*q5*s45^2*s53^3)/128 + (213*q4*q5*s45^2*s53^3)/128 + (q1*q4*q5*s12*s45^2*s53^3)/8 + (5*q1*q4*q5*s45^3*s53^3)/64 - (mh*mt*q1*q5*s53^4)/64 + (mh*mt*q4*q5*s53^4)/64 + (27*mt^2*q4*q5*s53^4)/16 + (q1*q5*s12*s53^4)/16 - (q4*q5*s12*s53^4)/16 - (3*q1*q4*q5*s12^2*s53^4)/8 + (165*q1*q5*s45*s53^4)/256 - (5*q4*q5*s45*s53^4)/256 - (3*q1*q4*q5*s12*s45*s53^4)/16 - (15*q1*q4*q5*s45^2*s53^4)/256 - (q1*q5*s53^5)/256 + (q4*q5*s53^5)/256 + (q1*q4*q5*s12*s53^5)/16 + (3*q1*q4*q5*s45*s53^5)/128 - (q1*q4*q5*s53^6)/256;
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
if (match(q2*q3*q5*s12^4*s45));
id q2*q3*q5*s12^4*s45 = 6*q2*s12 + 6*q3*s12 - 16*mt^2*q2*q3*s12 + 12*mt^4*q5*s12 - 2*mt^6*q2*q5*s12 - 2*mt^6*q3*q5*s12 + 6*q1*q3*s12^2 - 16*mt^2*q1*q2*q3*s12^2 - 12*mh^2*q5*s12^2 + 4*mt^2*q5*s12^2 - 12*mh*mt^3*q1*q5*s12^2 + 26*mt^4*q1*q5*s12^2 - 4*mh*mt^3*q2*q5*s12^2 + mt^4*q2*q5*s12^2 + 16*mh*mt^3*q3*q5*s12^2 - 13*mt^4*q3*q5*s12^2 - 2*mt^6*q1*q3*q5*s12^2 - 18*q5*s12^3 - 12*mh*mt*q1*q5*s12^3 - 4*mt^2*q1*q5*s12^3 + 4*mh*mt*q2*q5*s12^3 - 16*mh*mt*q3*q5*s12^3 + 16*mt^2*q3*q5*s12^3 + 8*mh*mt^3*q1*q3*q5*s12^3 - 4*mt^4*q1*q3*q5*s12^3 - 6*q1*q5*s12^4 + q2*q5*s12^4 - q3*q5*s12^4 - 8*mh*mt*q1*q3*q5*s12^4 + 6*mt^2*q1*q3*q5*s12^4 - 6*q1*s45 - (57*q2*s45)/8 + 16*mt^2*q1*q2*s45 - (9*q3*s45)/8 + 3*mt^2*q2*q3*s45 - (57*mt^4*q5*s45)/4 + 2*mt^6*q1*q5*s45 + (19*mt^6*q2*q5*s45)/8 + (3*mt^6*q3*q5*s45)/8 + 2*q2*q3*s12*s45 + (57*mh^2*q5*s12*s45)/4 - (67*mt^2*q5*s12*s45)/4 - 8*mh*mt^3*q1*q5*s12*s45 + 4*mt^4*q1*q5*s12*s45 + 16*mh*mt^3*q2*q5*s12*s45 + (95*mt^4*q2*q5*s12*s45)/4 - 8*mh*mt^3*q3*q5*s12*s45 + (31*mt^4*q3*q5*s12*s45)/4 + (73*q5*s12^2*s45)/4 + 4*mh*mt*q1*q5*s12^2*s45 - 4*mt^2*q1*q5*s12^2*s45 + (49*mh*mt*q2*q5*s12^2*s45)/4 + (59*mt^2*q2*q5*s12^2*s45)/8 + (31*mh*mt*q3*q5*s12^2*s45)/4 - (69*mt^2*q3*q5*s12^2*s45)/8 - 9*q2*q5*s12^3*s45 + q3*q5*s12^3*s45 - 16*q1*q2*s45^2 - (q2*q3*s45^2)/2 + (57*mt^2*q5*s45^2)/4 - 10*mt^4*q1*q5*s45^2 - (9*mh*mt^3*q2*q5*s45^2)/8 - (215*mt^4*q2*q5*s45^2)/16 + (9*mh*mt^3*q3*q5*s45^2)/8 - (19*mt^4*q3*q5*s45^2)/16 + (123*q5*s12*s45^2)/8 + 20*mh*mt*q1*q5*s12*s45^2 - 12*mt^2*q1*q5*s12*s45^2 - (47*mh*mt*q2*q5*s12*s45^2)/2 - (87*mt^2*q2*q5*s12*s45^2)/4 - mh*mt*q3*q5*s12*s45^2 + (5*mt^2*q3*q5*s12*s45^2)/4 + 14*q1*q5*s12^2*s45^2 + 16*q2*q5*s12^2*s45^2 - (3*q3*q5*s12^2*s45^2)/8 + q2*q3*q5*s12^3*s45^2 + 4*mh*mt*q1*q5*s45^3 + 6*mt^2*q1*q5*s45^3 - (255*mh*mt*q2*q5*s45^3)/64 + (123*mt^2*q2*q5*s45^3)/16 - (mh*mt*q3*q5*s45^3)/64 + 8*q1*q5*s12*s45^3 + (127*q2*q5*s12*s45^3)/16 + (q3*q5*s12*s45^3)/16 + 16*q1*q2*q5*s12^2*s45^3 - (3*q2*q3*q5*s12^2*s45^3)/8 + (q2*q5*s45^4)/256 - (q3*q5*s45^4)/256 + (q2*q3*q5*s12*s45^4)/16 - (q2*q3*q5*s45^5)/256 + 6*q1*s53 + (9*q2*s53)/8 - 16*mt^2*q1*q2*s53 - (39*q3*s53)/8 + 13*mt^2*q2*q3*s53 + (9*mt^4*q5*s53)/4 - 2*mt^6*q1*q5*s53 - (3*mt^6*q2*q5*s53)/8 + (13*mt^6*q3*q5*s53)/8 - 12*q1*q3*s12*s53 - 2*q2*q3*s12*s53 + 32*mt^2*q1*q2*q3*s12*s53 - (9*mh^2*q5*s12*s53)/4 - (45*mt^2*q5*s12*s53)/4 + 32*mh*mt^3*q1*q5*s12*s53 - 56*mt^4*q1*q5*s12*s53 + (mt^4*q2*q5*s12*s53)/4 - 32*mh*mt^3*q3*q5*s12*s53 + (177*mt^4*q3*q5*s12*s53)/4 + 4*mt^6*q1*q3*q5*s12*s53 + (71*q5*s12^2*s53)/4 + 32*mh*mt*q1*q5*s12^2*s53 - 8*mt^2*q1*q5*s12^2*s53 - (mh*mt*q2*q5*s12^2*s53)/4 + (5*mt^2*q2*q5*s12^2*s53)/8 - (31*mh*mt*q3*q5*s12^2*s53)/4 - (91*mt^2*q3*q5*s12^2*s53)/8 - 32*mh*mt^3*q1*q3*q5*s12^2*s53 + 38*mt^4*q1*q3*q5*s12^2*s53 + 24*q1*q5*s12^3*s53 - q2*q5*s12^3*s53 - 15*q3*q5*s12^3*s53 + 8*mh*mt*q1*q3*q5*s12^3*s53 - 20*mt^2*q1*q3*q5*s12^3*s53 - 6*q1*q3*q5*s12^4*s53 + q2*q3*q5*s12^4*s53 + 16*q1*q2*s45*s53 + 12*mt^2*q5*s45*s53 + 4*mh*mt^3*q1*q5*s45*s53 + 6*mt^4*q1*q5*s45*s53 - 12*mh*mt^3*q2*q5*s45*s53 - (51*mt^4*q2*q5*s45*s53)/4 + 8*mh*mt^3*q3*q5*s45*s53 - (45*mt^4*q3*q5*s45*s53)/4 - 22*q5*s12*s45*s53 - 16*mh*mt*q1*q5*s12*s45*s53 + 12*mt^2*q1*q5*s12*s45*s53 - (23*mh*mt*q2*q5*s12*s45*s53)/2 - 17*mt^2*q2*q5*s12*s45*s53 + (25*mh*mt*q3*q5*s12*s45*s53)/2 - 7*mt^2*q3*q5*s12*s45*s53 - 14*q1*q5*s12^2*s45*s53 + (61*q2*q5*s12^2*s45*s53)/8 + (115*q3*q5*s12^2*s45*s53)/8 - (57*q5*s45^2*s53)/4 - 16*mh*mt*q1*q5*s45^2*s53 + 10*mt^2*q1*q5*s45^2*s53 + (1229*mh*mt*q2*q5*s45^2*s53)/64 + (77*mt^2*q2*q5*s45^2*s53)/4 - (205*mh*mt*q3*q5*s45^2*s53)/64 + (47*mt^2*q3*q5*s45^2*s53)/16 - 28*q1*q5*s12*s45^2*s53 - (499*q2*q5*s12*s45^2*s53)/16 - (85*q3*q5*s12*s45^2*s53)/16 - 16*q1*q2*q5*s12^2*s45^2*s53 + (q2*q3*q5*s12^2*s45^2*s53)/8 - 8*q1*q5*s45^3*s53 - (513*q2*q5*s45^3*s53)/64 + (41*q3*q5*s45^3*s53)/64 - 32*q1*q2*q5*s12*s45^3*s53 - (q2*q3*q5*s12*s45^3*s53)/8 + (5*q2*q3*q5*s45^4*s53)/256 + 6*q1*q3*s53^2 + (q2*q3*s53^2)/2 - 16*mt^2*q1*q2*q3*s53^2 - (9*mt^2*q5*s53^2)/4 - 16*mh*mt^3*q1*q5*s53^2 + 30*mt^4*q1*q5*s53^2 + (9*mh*mt^3*q2*q5*s53^2)/8 + (19*mt^4*q2*q5*s53^2)/16 + (119*mh*mt^3*q3*q5*s53^2)/8 - (425*mt^4*q3*q5*s53^2)/16 - 2*mt^6*q1*q3*q5*s53^2 + (5*q5*s12*s53^2)/8 - 40*mh*mt*q1*q5*s12*s53^2 + 36*mt^2*q1*q5*s12*s53^2 - mh*mt*q2*q5*s12*s53^2 - (5*mt^2*q2*q5*s12*s53^2)/4 + (73*mh*mt*q3*q5*s12*s53^2)/2 - (105*mt^2*q3*q5*s12*s53^2)/4 + 40*mh*mt^3*q1*q3*q5*s12*s53^2 - 64*mt^4*q1*q3*q5*s12*s53^2 - 36*q1*q5*s12^2*s53^2 + (3*q2*q5*s12^2*s53^2)/8 + 34*q3*q5*s12^2*s53^2 + 24*mh*mt*q1*q3*q5*s12^2*s53^2 + 24*q1*q3*q5*s12^3*s53^2 - q2*q3*q5*s12^3*s53^2 + (9*q5*s45*s53^2)/4 + 8*mh*mt*q1*q5*s45*s53^2 - 14*mt^2*q1*q5*s45*s53^2 + (307*mh*mt*q2*q5*s45*s53^2)/64 + (81*mt^2*q2*q5*s45*s53^2)/16 - (819*mh*mt*q3*q5*s45*s53^2)/64 + (51*mt^2*q3*q5*s45*s53^2)/4 + 20*q1*q5*s12*s45*s53^2 + (21*q2*q5*s12*s45*s53^2)/16 - (333*q3*q5*s12*s45*s53^2)/16 - (q2*q3*q5*s12^2*s45*s53^2)/8 + 14*q1*q5*s45^2*s53^2 + (2003*q2*q5*s45^2*s53^2)/128 + (557*q3*q5*s45^2*s53^2)/128 + 32*q1*q2*q5*s12*s45^2*s53^2 + 16*q1*q2*q5*s45^3*s53^2 - (5*q2*q3*q5*s45^3*s53^2)/128 + 16*mh*mt*q1*q5*s53^3 - 22*mt^2*q1*q5*s53^3 - (mh*mt*q2*q5*s53^3)/64 - (1023*mh*mt*q3*q5*s53^3)/64 + (325*mt^2*q3*q5*s53^3)/16 - 16*mh*mt^3*q1*q3*q5*s53^3 + 30*mt^4*q1*q3*q5*s53^3 + 24*q1*q5*s12*s53^3 - (q2*q5*s12*s53^3)/16 - (383*q3*q5*s12*s53^3)/16 - 40*mh*mt*q1*q3*q5*s12*s53^3 + 36*mt^2*q1*q3*q5*s12*s53^3 - 36*q1*q3*q5*s12^2*s53^3 + (3*q2*q3*q5*s12^2*s53^3)/8 - 6*q1*q5*s45*s53^3 - (41*q2*q5*s45*s53^3)/64 + (385*q3*q5*s45*s53^3)/64 + (q2*q3*q5*s12*s45*s53^3)/8 - 16*q1*q2*q5*s45^2*s53^3 + (5*q2*q3*q5*s45^2*s53^3)/128 - 6*q1*q5*s53^4 + (q2*q5*s53^4)/256 + (1535*q3*q5*s53^4)/256 + 16*mh*mt*q1*q3*q5*s53^4 - 22*mt^2*q1*q3*q5*s53^4 + 24*q1*q3*q5*s12*s53^4 - (q2*q3*q5*s12*s53^4)/16 - (5*q2*q3*q5*s45*s53^4)/256 - 6*q1*q3*q5*s53^5 + (q2*q3*q5*s53^5)/256;
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
if (match(q1^2*q4*q5*s12^4*s45));
id q1^2*q4*q5*s12^4*s45 = (-51*q1)/4 - 9*q2 + 24*mt^2*q1*q2 - (15*q4)/4 + 10*mt^2*q1*q4 - (51*mt^4*q5)/2 + (17*mt^6*q1*q5)/4 + 3*mt^6*q2*q5 + (5*mt^6*q4*q5)/4 + 6*q1^2*s12 + 8*q1*q2*s12 - 4*q1*q4*s12 - 16*mt^2*q1^2*q4*s12 + (51*mh^2*q5*s12)/2 - (17*mt^2*q5*s12)/2 - 18*mh*mt^3*q1*q5*s12 + (43*mt^4*q1*q5*s12)/2 - 2*mt^6*q1^2*q5*s12 + 6*mh*mt^3*q2*q5*s12 - 2*mt^4*q2*q5*s12 + 12*mh*mt^3*q4*q5*s12 + (23*mt^4*q4*q5*s12)/2 - 16*mt^2*q1^2*q2*q4*s12^2 + (31*q5*s12^2)/2 - (21*mh*mt*q1*q5*s12^2)/2 + (33*mt^2*q1*q5*s12^2)/4 + 4*mh*mt^3*q1^2*q5*s12^2 + mt^4*q1^2*q5*s12^2 - 2*mh*mt*q2*q5*s12^2 + 11*mt^2*q2*q5*s12^2 - (23*mh*mt*q4*q5*s12^2)/2 - (59*mt^2*q4*q5*s12^2)/4 + 4*mh*mt^3*q2*q4*q5*s12^2 + 5*mt^4*q2*q4*q5*s12^2 - 9*q1*q5*s12^3 - 4*mh*mt*q1^2*q5*s12^3 - 4*q2*q5*s12^3 + 3*q4*q5*s12^3 - 4*mh*mt*q2*q4*q5*s12^3 - 6*mt^2*q2*q4*q5*s12^3 + q1^2*q5*s12^4 - 2*q1*q4*q5*s12^4 + q2*q4*q5*s12^4 - (57*q1^2*s45)/8 - 32*q1*q2*s45 + 16*mt^2*q1^2*q2*s45 - (3*q1*q4*s45)/2 + 3*mt^2*q1^2*q4*s45 + (51*mt^2*q5*s45)/2 + (21*mh*mt^3*q1*q5*s45)/8 - (621*mt^4*q1*q5*s45)/16 + (19*mt^6*q1^2*q5*s45)/8 + 2*mh*mt^3*q2*q5*s45 - 12*mt^4*q2*q5*s45 - (37*mh*mt^3*q4*q5*s45)/8 - (81*mt^4*q4*q5*s45)/16 + 2*q1^2*q4*s12*s45 + (295*q5*s12*s45)/8 + (139*mh*mt*q1*q5*s12*s45)/2 - (91*mt^2*q1*q5*s12*s45)/2 - 16*mh*mt^3*q1^2*q5*s12*s45 + (95*mt^4*q1^2*q5*s12*s45)/4 - 30*mh*mt*q2*q5*s12*s45 - 24*mt^2*q2*q5*s12*s45 + 4*mh*mt*q4*q5*s12*s45 + (11*mt^2*q4*q5*s12*s45)/2 + (117*q1*q5*s12^2*s45)/4 - (49*mh*mt*q1^2*q5*s12^2*s45)/4 + (59*mt^2*q1^2*q5*s12^2*s45)/8 + 19*q2*q5*s12^2*s45 - (15*q4*q5*s12^2*s45)/8 - 9*q1^2*q5*s12^3*s45 - 8*q1*q2*q5*s12^3*s45 + 4*q1*q4*q5*s12^3*s45 - 16*q1^2*q2*s45^2 - (q1^2*q4*s45^2)/2 + (63*mh*mt*q1*q5*s45^2)/8 + (199*mt^2*q1*q5*s45^2)/8 + (9*mh*mt^3*q1^2*q5*s45^2)/8 - (215*mt^4*q1^2*q5*s45^2)/16 - 8*mh*mt*q2*q5*s45^2 + 6*mt^2*q2*q5*s45^2 + (mh*mt*q4*q5*s45^2)/8 + (595*q1*q5*s12*s45^2)/16 + (47*mh*mt*q1^2*q5*s12*s45^2)/2 - (87*mt^2*q1^2*q5*s12*s45^2)/4 + 18*q2*q5*s12*s45^2 - 16*mt^2*q1*q2*q5*s12*s45^2 + (7*q4*q5*s12*s45^2)/16 + 16*q1^2*q5*s12^2*s45^2 + 40*q1*q2*q5*s12^2*s45^2 - (9*q1*q4*q5*s12^2*s45^2)/4 + q1^2*q4*q5*s12^3*s45^2 - (247*q1*q5*s45^3)/256 + (255*mh*mt*q1^2*q5*s45^3)/64 + (123*mt^2*q1^2*q5*s45^3)/16 + q2*q5*s45^3 - (9*q4*q5*s45^3)/256 + (127*q1^2*q5*s12*s45^3)/16 + 8*q1*q2*q5*s12*s45^3 + (q1*q4*q5*s12*s45^3)/2 + 16*q1^2*q2*q5*s12^2*s45^3 - (3*q1^2*q4*q5*s12^2*s45^3)/8 + (q1^2*q5*s45^4)/256 - (5*q1*q4*q5*s45^4)/128 + (q1^2*q4*q5*s12*s45^4)/16 - (q1^2*q4*q5*s45^5)/256 + (9*q1^2*s53)/8 - 16*mt^2*q1^2*q2*s53 - (q1*q4*s53)/2 + 13*mt^2*q1^2*q4*s53 + (51*mt^2*q5*s53)/2 + (79*mh*mt^3*q1*q5*s53)/8 - (127*mt^4*q1*q5*s53)/16 - (3*mt^6*q1^2*q5*s53)/8 - 2*mh*mt^3*q2*q5*s53 - mt^4*q2*q5*s53 - (63*mh*mt^3*q4*q5*s53)/8 - (267*mt^4*q4*q5*s53)/16 - 2*q1^2*q4*s12*s53 + 32*mt^2*q1^2*q2*q4*s12*s53 - (179*q5*s12*s53)/8 - (21*mh*mt*q1*q5*s12*s53)/2 - (11*mt^2*q1*q5*s12*s53)/2 + (mt^4*q1^2*q5*s12*s53)/4 - 6*mh*mt*q2*q5*s12*s53 - 20*mt^2*q2*q5*s12*s53 - 3*mh*mt*q4*q5*s12*s53 + (31*mt^2*q4*q5*s12*s53)/2 - 8*mh*mt^3*q2*q4*q5*s12*s53 - 10*mt^4*q2*q4*q5*s12*s53 + (19*q1*q5*s12^2*s53)/2 + (mh*mt*q1^2*q5*s12^2*s53)/4 + (5*mt^2*q1^2*q5*s12^2*s53)/8 + 6*q2*q5*s12^2*s53 + (29*q4*q5*s12^2*s53)/8 + 12*mh*mt*q2*q4*q5*s12^2*s53 + 22*mt^2*q2*q4*q5*s12^2*s53 - q1^2*q5*s12^3*s53 + 8*q1*q4*q5*s12^3*s53 - 4*q2*q4*q5*s12^3*s53 + q1^2*q4*q5*s12^4*s53 + 16*q1^2*q2*s45*s53 - (51*q5*s45*s53)/2 - (51*mh*mt*q1*q5*s45*s53)/2 + (627*mt^2*q1*q5*s45*s53)/16 + 12*mh*mt^3*q1^2*q5*s45*s53 - (51*mt^4*q1^2*q5*s45*s53)/4 + 18*mh*mt*q2*q5*s45*s53 + 29*mt^2*q2*q5*s45*s53 + (15*mh*mt*q4*q5*s45*s53)/2 + (93*mt^2*q4*q5*s45*s53)/16 - (241*q1*q5*s12*s45*s53)/4 + (23*mh*mt*q1^2*q5*s12*s45*s53)/2 - 17*mt^2*q1^2*q5*s12*s45*s53 - 28*q2*q5*s12*s45*s53 + 16*mt^2*q1*q2*q5*s12*s45*s53 - 9*q4*q5*s12*s45*s53 + mt^2*q1*q4*q5*s12*s45*s53 + (61*q1^2*q5*s12^2*s45*s53)/8 + 8*q1*q2*q5*s12^2*s45*s53 - (19*q1*q4*q5*s12^2*s45*s53)/2 - (5803*q1*q5*s45^2*s53)/256 - (1229*mh*mt*q1^2*q5*s45^2*s53)/64 + (77*mt^2*q1^2*q5*s45^2*s53)/4 - 17*q2*q5*s45^2*s53 + 16*mt^2*q1*q2*q5*s45^2*s53 + (715*q4*q5*s45^2*s53)/256 - (3*mt^2*q1*q4*q5*s45^2*s53)/4 - (499*q1^2*q5*s12*s45^2*s53)/16 - 80*q1*q2*q5*s12*s45^2*s53 + 2*q1*q4*q5*s12*s45^2*s53 - 16*q1^2*q2*q5*s12^2*s45^2*s53 + (q1^2*q4*q5*s12^2*s45^2*s53)/8 - (513*q1^2*q5*s45^3*s53)/64 - 8*q1*q2*q5*s45^3*s53 + (3*q1*q4*q5*s45^3*s53)/32 - 32*q1^2*q2*q5*s12*s45^3*s53 - (q1^2*q4*q5*s12*s45^3*s53)/8 + (5*q1^2*q4*q5*s45^4*s53)/256 + (q1^2*q4*s53^2)/2 - 16*mt^2*q1^2*q2*q4*s53^2 - (7*mh*mt*q1*q5*s53^2)/8 - (5*mt^2*q1*q5*s53^2)/16 - (9*mh*mt^3*q1^2*q5*s53^2)/8 + (19*mt^4*q1^2*q5*s53^2)/16 + 4*mh*mt*q2*q5*s53^2 + 10*mt^2*q2*q5*s53^2 - (25*mh*mt*q4*q5*s53^2)/8 - (49*mt^2*q4*q5*s53^2)/16 + 4*mh*mt^3*q2*q4*q5*s53^2 + 5*mt^4*q2*q4*q5*s53^2 + (41*q1*q5*s12*s53^2)/16 + mh*mt*q1^2*q5*s12*s53^2 - (5*mt^2*q1^2*q5*s12*s53^2)/4 - 4*q2*q5*s12*s53^2 + (33*q4*q5*s12*s53^2)/16 - mt^2*q1*q4*q5*s12*s53^2 - 12*mh*mt*q2*q4*q5*s12*s53^2 - 26*mt^2*q2*q4*q5*s12*s53^2 + (3*q1^2*q5*s12^2*s53^2)/8 - (25*q1*q4*q5*s12^2*s53^2)/4 + 6*q2*q4*q5*s12^2*s53^2 - q1^2*q4*q5*s12^3*s53^2 + (3739*q1*q5*s45*s53^2)/256 - (307*mh*mt*q1^2*q5*s45*s53^2)/64 + (81*mt^2*q1^2*q5*s45*s53^2)/16 + 8*q2*q5*s45*s53^2 - 16*mt^2*q1*q2*q5*s45*s53^2 - (59*q4*q5*s45*s53^2)/256 + (mt^2*q1*q4*q5*s45*s53^2)/2 + (21*q1^2*q5*s12*s45*s53^2)/16 + (7*q1*q4*q5*s12*s45*s53^2)/2 - (q1^2*q4*q5*s12^2*s45*s53^2)/8 + (2003*q1^2*q5*s45^2*s53^2)/128 + 40*q1*q2*q5*s45^2*s53^2 + (45*q1*q4*q5*s45^2*s53^2)/64 + 32*q1^2*q2*q5*s12*s45^2*s53^2 + 16*q1^2*q2*q5*s45^3*s53^2 - (5*q1^2*q4*q5*s45^3*s53^2)/128 - (57*q1*q5*s53^3)/256 + (mh*mt*q1^2*q5*s53^3)/64 + q2*q5*s53^3 - (199*q4*q5*s53^3)/256 + (mt^2*q1*q4*q5*s53^3)/4 + 4*mh*mt*q2*q4*q5*s53^3 + 10*mt^2*q2*q4*q5*s53^3 - (q1^2*q5*s12*s53^3)/16 + 2*q1*q4*q5*s12*s53^3 - 4*q2*q4*q5*s12*s53^3 + (3*q1^2*q4*q5*s12^2*s53^3)/8 - (41*q1^2*q5*s45*s53^3)/64 - (17*q1*q4*q5*s45*s53^3)/32 + (q1^2*q4*q5*s12*s45*s53^3)/8 - 16*q1^2*q2*q5*s45^2*s53^3 + (5*q1^2*q4*q5*s45^2*s53^3)/128 + (q1^2*q5*s53^4)/256 - (29*q1*q4*q5*s53^4)/128 + q2*q4*q5*s53^4 - (q1^2*q4*q5*s12*s53^4)/16 - (5*q1^2*q4*q5*s45*s53^4)/256 + (q1^2*q4*q5*s53^5)/256;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
