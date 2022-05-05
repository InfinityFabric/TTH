#if `rule1'==1
#write "calc module nr 1"
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
#if `rule2'==1
#write "calc module nr 2"
#do j=1,1
if (match(mh*mt*q2*q3));
id mh*mt*q2*q3 = q2/4 - q3/4;
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
id mh^2*q2 = 1 + 2*mh*mt*q2 - mt^2*q2 + q2*s53;
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
id mh^2*q3 = 1 - 2*mh*mt*q3 - mt^2*q3 + q3*s53;
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
if (match(mt^3*q2*q3));
id mt^3*q2*q3 = -(mh*q2)/4 + (mt*q2)/2 + (mh*q3)/4 + (mt*q3)/2 + mt*q2*q3*s53;
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
if (match(mh^2*mt^4*q4));
id mh^2*mt^4*q4 = -1 + 2*mt^6*q4 + mh^4*q4*s12 - 2*mh^2*mt^2*q4*s12 - mt^4*q4*s12 + mh^2*q4*s12^2 + mh^2*mt^2*q4*s45 - mt^4*q4*s45 - mh^2*q4*s12*s45 + mt^2*q4*s12*s45 + mh^2*mt^2*q4*s53 - mt^4*q4*s53 - mh^2*q4*s12*s53 + mt^2*q4*s12*s53 - mh^2*q4*s45*s53 - 2*mt^2*q4*s45*s53 - q4*s12*s45*s53 + q4*s45^2*s53 + q4*s45*s53^2;
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
if (match(mh*mt^5*q2*q4));
id mh*mt^5*q2*q4 = -q2/2 - (mt^4*q4)/2 + (3*mt^6*q2*q4)/2 + (mh^2*q4*s12)/2 + mh*mt*q4*s12 + (mt^2*q4*s12)/2 - mt^4*q2*q4*s12 + (q4*s12^2)/2 + mh*mt*q2*q4*s12^2 - (mt^2*q2*q4*s12^2)/2 + (mt^2*q4*s45)/2 + mh*mt^3*q2*q4*s45 - mt^4*q2*q4*s45 - (q4*s12*s45)/2 - mh*mt*q2*q4*s12*s45 + mt^2*q2*q4*s12*s45 + (mt^2*q4*s53)/2 + mh*mt^3*q2*q4*s53 - (3*mt^4*q2*q4*s53)/2 + mh*mt*q2*q4*s12*s53 + mt^2*q2*q4*s12*s53 + (q2*q4*s12^2*s53)/2 - (q4*s45*s53)/2 - mh*mt*q2*q4*s45*s53 - q2*q4*s12*s45*s53 + (q2*q4*s45^2*s53)/2 + (mt^2*q2*q4*s53^2)/2;
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
if (match(mh*mt^5*q3*q4));
id mh*mt^5*q3*q4 = q3/2 + (mt^4*q4)/2 - (3*mt^6*q3*q4)/2 - (mh^2*q4*s12)/2 + mh*mt*q4*s12 - (mt^2*q4*s12)/2 + mt^4*q3*q4*s12 - (q4*s12^2)/2 + mh*mt*q3*q4*s12^2 + (mt^2*q3*q4*s12^2)/2 - (mt^2*q4*s45)/2 + mh*mt^3*q3*q4*s45 + mt^4*q3*q4*s45 + (q4*s12*s45)/2 - mh*mt*q3*q4*s12*s45 - mt^2*q3*q4*s12*s45 - (mt^2*q4*s53)/2 + mh*mt^3*q3*q4*s53 + (3*mt^4*q3*q4*s53)/2 + mh*mt*q3*q4*s12*s53 - mt^2*q3*q4*s12*s53 - (q3*q4*s12^2*s53)/2 + (q4*s45*s53)/2 - mh*mt*q3*q4*s45*s53 + q3*q4*s12*s45*s53 - (q3*q4*s45^2*s53)/2 - (mt^2*q3*q4*s53^2)/2;
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
if (match(mt^2*q2*q3*q4*s12^2));
id mt^2*q2*q3*q4*s12^2 = -(q2*q3) - (3*mh*mt^3*q2*q4)/4 + mt^4*q2*q4 + (3*mh*mt^3*q3*q4)/4 + mt^4*q3*q4 + q4*s12 + (mh*mt*q2*q4*s12)/2 - mt^2*q2*q4*s12 - (mh*mt*q3*q4*s12)/2 - mt^2*q3*q4*s12 + (q2*q4*s12^2)/2 + (q3*q4*s12^2)/2 + (mh*mt*q2*q4*s45)/2 - (mt^2*q2*q4*s45)/2 - (mh*mt*q3*q4*s45)/2 - (mt^2*q3*q4*s45)/2 - (q2*q4*s12*s45)/2 - (q3*q4*s12*s45)/2 + 2*mt^2*q2*q3*q4*s12*s45 + (mt^2*q2*q4*s53)/2 + (mt^2*q3*q4*s53)/2 + (q2*q4*s12*s53)/2 + (q3*q4*s12*s53)/2 + q2*q3*q4*s12^2*s53 - (q2*q4*s45*s53)/2 - (q3*q4*s45*s53)/2 - 2*mt^2*q2*q3*q4*s45*s53 - 2*q2*q3*q4*s12*s45*s53 + q2*q3*q4*s45^2*s53 + mt^2*q2*q3*q4*s53^2;
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
if (match(mh*q2*q3*q4*s12^2*s53));
id mh*q2*q3*q4*s12^2*s53 = mh*q2*q3 + (mh*mt^4*q2*q4)/2 - (3*mt^5*q2*q4)/4 + (mh*mt^4*q3*q4)/2 + (3*mt^5*q3*q4)/4 - mh*q4*s12 + (mt^3*q2*q4*s12)/2 - (mt^3*q3*q4*s12)/2 - (mh*q2*q4*s12^2)/2 + (mt*q2*q4*s12^2)/4 - (mh*q3*q4*s12^2)/2 - (mt*q3*q4*s12^2)/4 - (mh*mt^2*q2*q4*s45)/2 + (mt^3*q2*q4*s45)/2 - (mh*mt^2*q3*q4*s45)/2 - (mt^3*q3*q4*s45)/2 + (mh*q2*q4*s12*s45)/2 - (mt*q2*q4*s12*s45)/2 + (mh*q3*q4*s12*s45)/2 + (mt*q3*q4*s12*s45)/2 - (mh*mt^2*q2*q4*s53)/2 + (3*mt^3*q2*q4*s53)/4 - (mh*mt^2*q3*q4*s53)/2 - (3*mt^3*q3*q4*s53)/4 - (mh*q2*q4*s12*s53)/2 - (mt*q2*q4*s12*s53)/2 - (mh*q3*q4*s12*s53)/2 + (mt*q3*q4*s12*s53)/2 + (mh*q2*q4*s45*s53)/2 + (mh*q3*q4*s45*s53)/2 + 2*mh*q2*q3*q4*s12*s45*s53 - mh*q2*q3*q4*s45^2*s53 - (mt*q2*q4*s53^2)/4 + (mt*q3*q4*s53^2)/4;
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
if (match(mt*q2*q3*q4*s45^2*s53));
id mt*q2*q3*q4*s45^2*s53 = mt*q2*q3 + (3*mh*mt^4*q2*q4)/4 - mt^5*q2*q4 - (3*mh*mt^4*q3*q4)/4 - mt^5*q3*q4 - mt*q4*s12 - (mh*mt^2*q2*q4*s12)/2 + mt^3*q2*q4*s12 + (mh*mt^2*q3*q4*s12)/2 + mt^3*q3*q4*s12 - (mh*q2*q4*s12^2)/4 + (mh*q3*q4*s12^2)/4 - (mh*mt^2*q2*q4*s45)/2 + (mt^3*q2*q4*s45)/2 + (mh*mt^2*q3*q4*s45)/2 + (mt^3*q3*q4*s45)/2 + (mh*q2*q4*s12*s45)/2 - (mt*q2*q4*s12*s45)/2 - (mh*q3*q4*s12*s45)/2 - (mt*q3*q4*s12*s45)/2 - (mt^3*q2*q4*s53)/2 - (mt^3*q3*q4*s53)/2 - (mt*q2*q4*s12*s53)/2 - (mt*q3*q4*s12*s53)/2 - (mh*q2*q4*s45*s53)/2 + (3*mt*q2*q4*s45*s53)/2 + (mh*q3*q4*s45*s53)/2 + (3*mt*q3*q4*s45*s53)/2 + (mh*q2*q4*s53^2)/4 - (mt*q2*q4*s53^2)/2 - (mh*q3*q4*s53^2)/4 - (mt*q3*q4*s53^2)/2 + 2*mt*q2*q3*q4*s45*s53^2 - mt*q2*q3*q4*s53^3;
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
if (match(mt^7*q2*q4));
id mt^7*q2*q4 = 2*mh*q2 - mt*q2 + 2*mh*mt^4*q4 + 3*mt^5*q4 - 2*mh^3*q4*s12 - 3*mh^2*mt*q4*s12 + mt^3*q4*s12 + 4*mh*mt^4*q2*q4*s12 - 2*mt^5*q2*q4*s12 - 2*mh*q4*s12^2 - 3*mt*q4*s12^2 - 4*mh*mt^2*q2*q4*s12^2 + 3*mt^3*q2*q4*s12^2 - 2*mh*mt^2*q4*s45 - 3*mt^3*q4*s45 - 2*mh*mt^4*q2*q4*s45 + 2*mt^5*q2*q4*s45 + 2*mh*q4*s12*s45 + 3*mt*q4*s12*s45 + 2*mh*mt^2*q2*q4*s12*s45 - 2*mt^3*q2*q4*s12*s45 - 2*mh*mt^2*q4*s53 - 3*mt^3*q4*s53 + 5*mt^5*q2*q4*s53 - 4*mt*q4*s12*s53 - 10*mh*mt^2*q2*q4*s12*s53 + 6*mt^3*q2*q4*s12*s53 - 2*mh*q2*q4*s12^2*s53 - 3*mt*q2*q4*s12^2*s53 + 2*mh*q4*s45*s53 + 3*mt*q4*s45*s53 + 6*mh*mt^2*q2*q4*s45*s53 - 8*mt^3*q2*q4*s45*s53 + 4*mh*q2*q4*s12*s45*s53 + 2*mt*q2*q4*s12*s45*s53 - 2*mh*q2*q4*s45^2*s53 + mt*q2*q4*s45^2*s53 - 2*mh*mt^2*q2*q4*s53^2 - 3*mt^3*q2*q4*s53^2 - 4*mt*q2*q4*s12*s53^2 + 4*mt*q2*q4*s45*s53^2;
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
if (match(mt^7*q3*q4));
id mt^7*q3*q4 = -2*mh*q3 - mt*q3 - 2*mh*mt^4*q4 + 3*mt^5*q4 + 2*mh^3*q4*s12 - 3*mh^2*mt*q4*s12 + mt^3*q4*s12 - 4*mh*mt^4*q3*q4*s12 - 2*mt^5*q3*q4*s12 + 2*mh*q4*s12^2 - 3*mt*q4*s12^2 + 4*mh*mt^2*q3*q4*s12^2 + 3*mt^3*q3*q4*s12^2 + 2*mh*mt^2*q4*s45 - 3*mt^3*q4*s45 + 2*mh*mt^4*q3*q4*s45 + 2*mt^5*q3*q4*s45 - 2*mh*q4*s12*s45 + 3*mt*q4*s12*s45 - 2*mh*mt^2*q3*q4*s12*s45 - 2*mt^3*q3*q4*s12*s45 + 2*mh*mt^2*q4*s53 - 3*mt^3*q4*s53 + 5*mt^5*q3*q4*s53 - 4*mt*q4*s12*s53 + 10*mh*mt^2*q3*q4*s12*s53 + 6*mt^3*q3*q4*s12*s53 + 2*mh*q3*q4*s12^2*s53 - 3*mt*q3*q4*s12^2*s53 - 2*mh*q4*s45*s53 + 3*mt*q4*s45*s53 - 6*mh*mt^2*q3*q4*s45*s53 - 8*mt^3*q3*q4*s45*s53 - 4*mh*q3*q4*s12*s45*s53 + 2*mt*q3*q4*s12*s45*s53 + 2*mh*q3*q4*s45^2*s53 + mt*q3*q4*s45^2*s53 + 2*mh*mt^2*q3*q4*s53^2 - 3*mt^3*q3*q4*s53^2 - 4*mt*q3*q4*s12*s53^2 + 4*mt*q3*q4*s45*s53^2;
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
if (match(q2*q3*q4*s12^2*s45^2*s53^2));
id q2*q3*q4*s12^2*s45^2*s53^2 = (-3*q2*s12^2)/8 - (3*q3*s12^2)/8 + mt^2*q2*q3*s12^2 - (3*mt^4*q4*s12^2)/4 + (mt^6*q2*q4*s12^2)/8 + (mt^6*q3*q4*s12^2)/8 + (3*mh^2*q4*s12^3)/4 - (mt^2*q4*s12^3)/4 - (mh*mt^3*q2*q4*s12^3)/2 + (mt^4*q2*q4*s12^3)/4 + (mh*mt^3*q3*q4*s12^3)/2 + (mt^4*q3*q4*s12^3)/4 + (3*q4*s12^4)/4 + (mh*mt*q2*q4*s12^4)/2 - (3*mt^2*q2*q4*s12^4)/8 - (mh*mt*q3*q4*s12^4)/2 - (3*mt^2*q3*q4*s12^4)/8 + (3*q2*s12*s45)/4 + (3*q3*s12*s45)/4 - 2*mt^2*q2*q3*s12*s45 + (3*mt^4*q4*s12*s45)/2 - (mt^6*q2*q4*s12*s45)/4 - (mt^6*q3*q4*s12*s45)/4 - (3*mh^2*q4*s12^2*s45)/2 + (5*mt^2*q4*s12^2*s45)/4 + (5*mh*mt^3*q2*q4*s12^2*s45)/4 - (3*mt^4*q2*q4*s12^2*s45)/4 - (5*mh*mt^3*q3*q4*s12^2*s45)/4 - (3*mt^4*q3*q4*s12^2*s45)/4 - (9*q4*s12^3*s45)/4 - (5*mh*mt*q2*q4*s12^3*s45)/4 + mt^2*q2*q4*s12^3*s45 + (5*mh*mt*q3*q4*s12^3*s45)/4 + mt^2*q3*q4*s12^3*s45 - (3*mt^2*q4*s12*s45^2)/2 - (mh*mt^3*q2*q4*s12*s45^2)/2 + (mt^4*q2*q4*s12*s45^2)/2 + (mh*mt^3*q3*q4*s12*s45^2)/2 + (mt^4*q3*q4*s12*s45^2)/2 + (3*q4*s12^2*s45^2)/2 + (mh*mt*q2*q4*s12^2*s45^2)/2 - (mt^2*q2*q4*s12^2*s45^2)/2 - (mh*mt*q3*q4*s12^2*s45^2)/2 - (mt^2*q3*q4*s12^2*s45^2)/2 + (3*mt^2*q4*s12^2*s53)/4 + (3*mh*mt^3*q2*q4*s12^2*s53)/4 - (13*mt^4*q2*q4*s12^2*s53)/8 - (3*mh*mt^3*q3*q4*s12^2*s53)/4 - (13*mt^4*q3*q4*s12^2*s53)/8 + (3*mh*mt*q2*q4*s12^3*s53)/4 + (mt^2*q2*q4*s12^3*s53)/4 - (3*mh*mt*q3*q4*s12^3*s53)/4 + (mt^2*q3*q4*s12^3*s53)/4 + (3*q2*q4*s12^4*s53)/8 + (3*q3*q4*s12^4*s53)/8 - (3*q2*s45*s53)/4 - (3*q3*s45*s53)/4 + 2*mt^2*q2*q3*s45*s53 - (3*mt^4*q4*s45*s53)/2 + (mt^6*q2*q4*s45*s53)/4 + (mt^6*q3*q4*s45*s53)/4 + (3*mh^2*q4*s12*s45*s53)/2 - 2*mt^2*q4*s12*s45*s53 - (5*mh*mt^3*q2*q4*s12*s45*s53)/2 + (15*mt^4*q2*q4*s12*s45*s53)/4 + (5*mh*mt^3*q3*q4*s12*s45*s53)/2 + (15*mt^4*q3*q4*s12*s45*s53)/4 + (3*q4*s12^2*s45*s53)/4 - (7*mh*mt*q2*q4*s12^2*s45*s53)/4 + (mt^2*q2*q4*s12^2*s45*s53)/4 + (7*mh*mt*q3*q4*s12^2*s45*s53)/4 + (mt^2*q3*q4*s12^2*s45*s53)/4 - (3*q2*q4*s12^3*s45*s53)/2 - (3*q3*q4*s12^3*s45*s53)/2 + q2*q3*s45^2*s53 + (3*mt^2*q4*s45^2*s53)/2 + (5*mh*mt^3*q2*q4*s45^2*s53)/4 - (3*mt^4*q2*q4*s45^2*s53)/2 - (5*mh*mt^3*q3*q4*s45^2*s53)/4 - (3*mt^4*q3*q4*s45^2*s53)/2 - q4*s12*s45^2*s53 + (3*mh*mt*q2*q4*s12*s45^2*s53)/2 - (3*mt^2*q2*q4*s12*s45^2*s53)/2 - (3*mh*mt*q3*q4*s12*s45^2*s53)/2 - (3*mt^2*q3*q4*s12*s45^2*s53)/2 + (11*q2*q4*s12^2*s45^2*s53)/8 + (11*q3*q4*s12^2*s45^2*s53)/8 - (mh*mt*q2*q4*s45^3*s53)/2 + (mt^2*q2*q4*s45^3*s53)/2 + (mh*mt*q3*q4*s45^3*s53)/2 + (mt^2*q3*q4*s45^3*s53)/2 - (q2*q4*s12*s45^3*s53)/4 - (q3*q4*s12*s45^3*s53)/4 + (3*q2*s53^2)/8 + (3*q3*s53^2)/8 - mt^2*q2*q3*s53^2 + (3*mt^4*q4*s53^2)/4 - (mt^6*q2*q4*s53^2)/8 - (mt^6*q3*q4*s53^2)/8 - (3*mh^2*q4*s12*s53^2)/4 + (mt^2*q4*s12*s53^2)/4 + (mh*mt^3*q2*q4*s12*s53^2)/2 - (mt^4*q2*q4*s12*s53^2)/4 - (mh*mt^3*q3*q4*s12*s53^2)/2 - (mt^4*q3*q4*s12*s53^2)/4 - (3*q4*s12^2*s53^2)/4 - (mh*mt*q2*q4*s12^2*s53^2)/4 + (mt^2*q2*q4*s12^2*s53^2)/4 + (mh*mt*q3*q4*s12^2*s53^2)/4 + (mt^2*q3*q4*s12^2*s53^2)/4 - 2*q2*q3*s45*s53^2 + (3*mt^2*q4*s45*s53^2)/4 - (mh*mt^3*q2*q4*s45*s53^2)/4 - mt^4*q2*q4*s45*s53^2 + (mh*mt^3*q3*q4*s45*s53^2)/4 - mt^4*q3*q4*s45*s53^2 + (11*q4*s12*s45*s53^2)/4 + (9*mh*mt*q2*q4*s12*s45*s53^2)/4 - (3*mt^2*q2*q4*s12*s45*s53^2)/2 - (9*mh*mt*q3*q4*s12*s45*s53^2)/4 - (3*mt^2*q3*q4*s12*s45*s53^2)/2 + (7*q2*q4*s12^2*s45*s53^2)/4 + (7*q3*q4*s12^2*s45*s53^2)/4 - (3*q4*s45^2*s53^2)/2 - (3*mh*mt*q2*q4*s45^2*s53^2)/2 + (3*mt^2*q2*q4*s45^2*s53^2)/2 + (3*mh*mt*q3*q4*s45^2*s53^2)/2 + (3*mt^2*q3*q4*s45^2*s53^2)/2 - 3*q2*q4*s12*s45^2*s53^2 - 3*q3*q4*s12*s45^2*s53^2 + (5*q2*q4*s45^3*s53^2)/4 + (5*q3*q4*s45^3*s53^2)/4 + 2*q2*q3*q4*s12*s45^3*s53^2 - q2*q3*q4*s45^4*s53^2 + q2*q3*s53^3 - (3*mt^2*q4*s53^3)/4 + (5*mt^4*q2*q4*s53^3)/8 + (5*mt^4*q3*q4*s53^3)/8 - q4*s12*s53^3 - (5*mh*mt*q2*q4*s12*s53^3)/4 + (3*mt^2*q2*q4*s12*s53^3)/4 + (5*mh*mt*q3*q4*s12*s53^3)/4 + (3*mt^2*q3*q4*s12*s53^3)/4 - (7*q2*q4*s12^2*s53^3)/8 - (7*q3*q4*s12^2*s53^3)/8 + (3*q4*s45*s53^3)/4 + (5*mh*mt*q2*q4*s45*s53^3)/4 - (mt^2*q2*q4*s45*s53^3)/4 - (5*mh*mt*q3*q4*s45*s53^3)/4 - (mt^2*q3*q4*s45*s53^3)/4 + (9*q2*q4*s12*s45*s53^3)/4 + (9*q3*q4*s12*s45*s53^3)/4 + 2*q2*q3*q4*s12^2*s45*s53^3 - (11*q2*q4*s45^2*s53^3)/8 - (11*q3*q4*s45^2*s53^3)/8 - 4*q2*q3*q4*s12*s45^2*s53^3 + 2*q2*q3*q4*s45^3*s53^3 - (mh*mt*q2*q4*s53^4)/4 - (3*mt^2*q2*q4*s53^4)/8 + (mh*mt*q3*q4*s53^4)/4 - (3*mt^2*q3*q4*s53^4)/8 - (q2*q4*s12*s53^4)/2 - (q3*q4*s12*s53^4)/2 - q2*q3*q4*s12^2*s53^4 + (q2*q4*s45*s53^4)/2 + (q3*q4*s45*s53^4)/2 + 2*q2*q3*q4*s12*s45*s53^4 - q2*q3*q4*s45^2*s53^4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
