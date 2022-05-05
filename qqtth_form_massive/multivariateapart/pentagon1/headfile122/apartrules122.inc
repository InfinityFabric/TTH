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
id mh^2*q2 = 1 + 2*mh*mt*q2 - mt^2*q2 + q2*s45;
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
id mh^2*q3 = 1 - 2*mh*mt*q3 - mt^2*q3 + q3*s45;
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
id mt^3*q2*q3 = -(mh*q2)/4 + (mt*q2)/2 + (mh*q3)/4 + (mt*q3)/2 + mt*q2*q3*s45;
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
if (match(mh^4*mt^2*q4));
id mh^4*mt^2*q4 = 1 + 2*mh^2*mt^2*q4*s12 - mt^2*q4*s12^2 + mh^2*mt^2*q4*s34 - mt^4*q4*s34 - mh^2*q4*s12*s34 + mt^2*q4*s12*s34 + mh^2*q4*s34*s45 + 2*mt^2*q4*s34*s45 + q4*s12*s34*s45 - q4*s34^2*s45 - q4*s34*s45^2;
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
if (match(mt^2*q2*q3*q4*s12^2));
id mt^2*q2*q3*q4*s12^2 = q2*q3 - mt^2*q4 - (3*mh*mt^3*q2*q4)/4 + (mt^4*q2*q4)/2 + (3*mh*mt^3*q3*q4)/4 + (mt^4*q3*q4)/2 + (mh*mt*q2*q4*s12)/2 - (mh*mt*q3*q4*s12)/2 + (mh*mt*q2*q4*s34)/2 - (mt^2*q2*q4*s34)/2 - (mh*mt*q3*q4*s34)/2 - (mt^2*q3*q4*s34)/2 - (q2*q4*s12*s34)/2 - (q3*q4*s12*s34)/2 + 2*mt^2*q2*q3*q4*s12*s34 - (mh*mt*q2*q4*s45)/4 - (mt^2*q2*q4*s45)/2 + (mh*mt*q3*q4*s45)/4 - (mt^2*q3*q4*s45)/2 + (q2*q4*s34*s45)/2 + (q3*q4*s34*s45)/2 - q2*q3*q4*s34^2*s45;
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
if (match(mh*mt^5*q2*q4));
id mh*mt^5*q2*q4 = q2/4 - (mh^2*mt^2*q4)/4 - (mh*mt^3*q4)/2 - (3*mt^4*q4)/4 + (3*mt^6*q2*q4)/4 + (mt^2*q4*s12)/2 + mh*mt^3*q2*q4*s12 - (mt^4*q2*q4*s12)/2 - (mt^2*q2*q4*s12^2)/4 + (mt^2*q4*s34)/4 + (mh*mt^3*q2*q4*s34)/2 - (mt^4*q2*q4*s34)/2 - (q4*s12*s34)/4 - (mh*mt*q2*q4*s12*s34)/2 + (mt^2*q2*q4*s12*s34)/2 - (mt^2*q4*s45)/4 - mh*mt^3*q2*q4*s45 - (mt^4*q2*q4*s45)/2 + (mt^2*q2*q4*s12*s45)/2 + (q4*s34*s45)/4 + (mh*mt*q2*q4*s34*s45)/2 + (mt^2*q2*q4*s34*s45)/2 - (q2*q4*s34^2*s45)/4 - (mt^2*q2*q4*s45^2)/4;
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
if (match(mh*mt^5*q3*q4));
id mh*mt^5*q3*q4 = -q3/4 + (mh^2*mt^2*q4)/4 - (mh*mt^3*q4)/2 + (3*mt^4*q4)/4 - (3*mt^6*q3*q4)/4 - (mt^2*q4*s12)/2 + mh*mt^3*q3*q4*s12 + (mt^4*q3*q4*s12)/2 + (mt^2*q3*q4*s12^2)/4 - (mt^2*q4*s34)/4 + (mh*mt^3*q3*q4*s34)/2 + (mt^4*q3*q4*s34)/2 + (q4*s12*s34)/4 - (mh*mt*q3*q4*s12*s34)/2 - (mt^2*q3*q4*s12*s34)/2 + (mt^2*q4*s45)/4 - mh*mt^3*q3*q4*s45 + (mt^4*q3*q4*s45)/2 - (mt^2*q3*q4*s12*s45)/2 - (q4*s34*s45)/4 + (mh*mt*q3*q4*s34*s45)/2 - (mt^2*q3*q4*s34*s45)/2 + (q3*q4*s34^2*s45)/4 + (mt^2*q3*q4*s45^2)/4;
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
if (match(mt*q2*q3*q4*s12^2*s45));
id mt*q2*q3*q4*s12^2*s45 = mt*q2*q3 - mt^3*q4 - (3*mh*mt^4*q2*q4)/4 + (mt^5*q2*q4)/2 + (3*mh*mt^4*q3*q4)/4 + (mt^5*q3*q4)/2 + (mh*mt^2*q2*q4*s12)/2 - (mh*mt^2*q3*q4*s12)/2 + (mh*q2*q4*s12^2)/4 - (mt*q2*q4*s12^2)/2 - (mh*q3*q4*s12^2)/4 - (mt*q3*q4*s12^2)/2 + (mh*mt^2*q2*q4*s34)/2 - (mt^3*q2*q4*s34)/2 - (mh*mt^2*q3*q4*s34)/2 - (mt^3*q3*q4*s34)/2 - (mh*q2*q4*s12*s34)/2 + (mt*q2*q4*s12*s34)/2 + (mh*q3*q4*s12*s34)/2 + (mt*q3*q4*s12*s34)/2 - (mh*mt^2*q2*q4*s45)/4 - (mt^3*q2*q4*s45)/2 + (mh*mt^2*q3*q4*s45)/4 - (mt^3*q3*q4*s45)/2 + (mt*q2*q4*s34*s45)/2 + (mt*q3*q4*s34*s45)/2 + 2*mt*q2*q3*q4*s12*s34*s45 - mt*q2*q3*q4*s34^2*s45;
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
if (match(mh*q2*q3*q4*s34^2*s45));
id mh*q2*q3*q4*s34^2*s45 = mh*q2*q3 - mh*mt^2*q4 - mh*mt^4*q2*q4 + (3*mt^5*q2*q4)/4 - mh*mt^4*q3*q4 - (3*mt^5*q3*q4)/4 + mh*mt^2*q2*q4*s12 - (mt^3*q2*q4*s12)/2 + mh*mt^2*q3*q4*s12 + (mt^3*q3*q4*s12)/2 - (mt*q2*q4*s12^2)/4 + (mt*q3*q4*s12^2)/4 + (mh*mt^2*q2*q4*s34)/2 - (mt^3*q2*q4*s34)/2 + (mh*mt^2*q3*q4*s34)/2 + (mt^3*q3*q4*s34)/2 - (mh*q2*q4*s12*s34)/2 + (mt*q2*q4*s12*s34)/2 - (mh*q3*q4*s12*s34)/2 - (mt*q3*q4*s12*s34)/2 - mh*mt^2*q2*q4*s45 - (mt^3*q2*q4*s45)/2 - mh*mt^2*q3*q4*s45 + (mt^3*q3*q4*s45)/2 + (mt*q2*q4*s12*s45)/2 - (mt*q3*q4*s12*s45)/2 + (mh*q2*q4*s34*s45)/2 + (mt*q2*q4*s34*s45)/2 + (mh*q3*q4*s34*s45)/2 - (mt*q3*q4*s34*s45)/2 - (mt*q2*q4*s45^2)/4 + (mt*q3*q4*s45^2)/4;
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
id mt^7*q2*q4 = -4*mh*q2 + 5*mt*q2 + 4*mh^3*mt^2*q4 + 3*mh^2*mt^3*q4 + 2*mh*mt^4*q4 + mt^5*q4 - 8*mh*mt^2*q4*s12 - 6*mt^3*q4*s12 - 4*mh*mt^4*q2*q4*s12 + 6*mt^5*q2*q4*s12 + 4*mh*mt^2*q2*q4*s12^2 - 5*mt^3*q2*q4*s12^2 - 4*mh*mt^2*q4*s34 - 3*mt^3*q4*s34 + 2*mh*mt^4*q2*q4*s34 - 2*mt^5*q2*q4*s34 + 4*mh*q4*s12*s34 + 3*mt*q4*s12*s34 - 2*mh*mt^2*q2*q4*s12*s34 + 2*mt^3*q2*q4*s12*s34 + 4*mh*mt^2*q4*s45 + 11*mt^3*q4*s45 + 20*mh*mt^4*q2*q4*s45 - 10*mt^5*q2*q4*s45 - 8*mh*mt^2*q2*q4*s12*s45 - 6*mt^3*q2*q4*s12*s45 - 4*mh*q4*s34*s45 - 3*mt*q4*s34*s45 - 14*mh*mt^2*q2*q4*s34*s45 + 10*mt^3*q2*q4*s34*s45 + 8*mt*q2*q4*s12*s34*s45 + 4*mh*q2*q4*s34^2*s45 - 5*mt*q2*q4*s34^2*s45 + 4*mh*mt^2*q2*q4*s45^2 + 11*mt^3*q2*q4*s45^2 - 8*mt*q2*q4*s34*s45^2;
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
id mt^7*q3*q4 = 4*mh*q3 + 5*mt*q3 - 4*mh^3*mt^2*q4 + 3*mh^2*mt^3*q4 - 2*mh*mt^4*q4 + mt^5*q4 + 8*mh*mt^2*q4*s12 - 6*mt^3*q4*s12 + 4*mh*mt^4*q3*q4*s12 + 6*mt^5*q3*q4*s12 - 4*mh*mt^2*q3*q4*s12^2 - 5*mt^3*q3*q4*s12^2 + 4*mh*mt^2*q4*s34 - 3*mt^3*q4*s34 - 2*mh*mt^4*q3*q4*s34 - 2*mt^5*q3*q4*s34 - 4*mh*q4*s12*s34 + 3*mt*q4*s12*s34 + 2*mh*mt^2*q3*q4*s12*s34 + 2*mt^3*q3*q4*s12*s34 - 4*mh*mt^2*q4*s45 + 11*mt^3*q4*s45 - 20*mh*mt^4*q3*q4*s45 - 10*mt^5*q3*q4*s45 + 8*mh*mt^2*q3*q4*s12*s45 - 6*mt^3*q3*q4*s12*s45 + 4*mh*q4*s34*s45 - 3*mt*q4*s34*s45 + 14*mh*mt^2*q3*q4*s34*s45 + 10*mt^3*q3*q4*s34*s45 + 8*mt*q3*q4*s12*s34*s45 - 4*mh*q3*q4*s34^2*s45 - 5*mt*q3*q4*s34^2*s45 - 4*mh*mt^2*q3*q4*s45^2 + 11*mt^3*q3*q4*s45^2 - 8*mt*q3*q4*s34*s45^2;
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
if (match(mt^2*q2*q3*q4*s34^2*s45));
id mt^2*q2*q3*q4*s34^2*s45 = (-3*q2)/16 - (3*q3)/16 + mt^2*q2*q3 + (3*mh^2*mt^2*q4)/8 + (mt^4*q4)/8 - (mt^6*q2*q4)/16 - (mt^6*q3*q4)/16 - (3*mt^2*q4*s12)/4 - (mh*mt^3*q2*q4*s12)/4 + (3*mt^4*q2*q4*s12)/8 + (mh*mt^3*q3*q4*s12)/4 + (3*mt^4*q3*q4*s12)/8 + (mh*mt*q2*q4*s12^2)/4 - (5*mt^2*q2*q4*s12^2)/16 - (mh*mt*q3*q4*s12^2)/4 - (5*mt^2*q3*q4*s12^2)/16 - (3*mt^2*q4*s34)/8 + (mh*mt^3*q2*q4*s34)/8 - (mt^4*q2*q4*s34)/8 - (mh*mt^3*q3*q4*s34)/8 - (mt^4*q3*q4*s34)/8 + (3*q4*s12*s34)/8 - (mh*mt*q2*q4*s12*s34)/8 + (mt^2*q2*q4*s12*s34)/8 + (mh*mt*q3*q4*s12*s34)/8 + (mt^2*q3*q4*s12*s34)/8 - q2*q3*s45 + (11*mt^2*q4*s45)/8 + (5*mh*mt^3*q2*q4*s45)/4 - (5*mt^4*q2*q4*s45)/8 - (5*mh*mt^3*q3*q4*s45)/4 - (5*mt^4*q3*q4*s45)/8 - (mh*mt*q2*q4*s12*s45)/2 - (3*mt^2*q2*q4*s12*s45)/8 + (mh*mt*q3*q4*s12*s45)/2 - (3*mt^2*q3*q4*s12*s45)/8 - (3*q4*s34*s45)/8 - (7*mh*mt*q2*q4*s34*s45)/8 + (5*mt^2*q2*q4*s34*s45)/8 + (7*mh*mt*q3*q4*s34*s45)/8 + (5*mt^2*q3*q4*s34*s45)/8 + (q2*q4*s12*s34*s45)/2 + (q3*q4*s12*s34*s45)/2 + (3*q2*q4*s34^2*s45)/16 + (3*q3*q4*s34^2*s45)/16 + (mh*mt*q2*q4*s45^2)/4 + (11*mt^2*q2*q4*s45^2)/16 - (mh*mt*q3*q4*s45^2)/4 + (11*mt^2*q3*q4*s45^2)/16 - (q2*q4*s34*s45^2)/2 - (q3*q4*s34*s45^2)/2 + q2*q3*q4*s34^2*s45^2;
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
if (match(q2*q3*q4*s12^2*s34^2*s45^2));
id q2*q3*q4*s12^2*s34^2*s45^2 = (3*q2*s12^2)/16 + (3*q3*s12^2)/16 - mt^2*q2*q3*s12^2 - (3*mh^2*mt^2*q4*s12^2)/8 - (mt^4*q4*s12^2)/8 + (mt^6*q2*q4*s12^2)/16 + (mt^6*q3*q4*s12^2)/16 + (3*mt^2*q4*s12^3)/4 + (mh*mt^3*q2*q4*s12^3)/4 - (3*mt^4*q2*q4*s12^3)/8 - (mh*mt^3*q3*q4*s12^3)/4 - (3*mt^4*q3*q4*s12^3)/8 - (mh*mt*q2*q4*s12^4)/4 + (5*mt^2*q2*q4*s12^4)/16 + (mh*mt*q3*q4*s12^4)/4 + (5*mt^2*q3*q4*s12^4)/16 - (3*q2*s12*s34)/8 - (3*q3*s12*s34)/8 + 2*mt^2*q2*q3*s12*s34 + (3*mh^2*mt^2*q4*s12*s34)/4 + (mt^4*q4*s12*s34)/4 - (mt^6*q2*q4*s12*s34)/8 - (mt^6*q3*q4*s12*s34)/8 - (9*mt^2*q4*s12^2*s34)/8 - (5*mh*mt^3*q2*q4*s12^2*s34)/8 + (7*mt^4*q2*q4*s12^2*s34)/8 + (5*mh*mt^3*q3*q4*s12^2*s34)/8 + (7*mt^4*q3*q4*s12^2*s34)/8 - (3*q4*s12^3*s34)/8 + (5*mh*mt*q2*q4*s12^3*s34)/8 - (3*mt^2*q2*q4*s12^3*s34)/4 - (5*mh*mt*q3*q4*s12^3*s34)/8 - (3*mt^2*q3*q4*s12^3*s34)/4 - (3*mt^2*q4*s12*s34^2)/4 + (mh*mt^3*q2*q4*s12*s34^2)/4 - (mt^4*q2*q4*s12*s34^2)/4 - (mh*mt^3*q3*q4*s12*s34^2)/4 - (mt^4*q3*q4*s12*s34^2)/4 + (3*q4*s12^2*s34^2)/4 - (mh*mt*q2*q4*s12^2*s34^2)/4 + (mt^2*q2*q4*s12^2*s34^2)/4 + (mh*mt*q3*q4*s12^2*s34^2)/4 + (mt^2*q3*q4*s12^2*s34^2)/4 + q2*q3*s12^2*s45 - (11*mt^2*q4*s12^2*s45)/8 - (5*mh*mt^3*q2*q4*s12^2*s45)/4 + (5*mt^4*q2*q4*s12^2*s45)/8 + (5*mh*mt^3*q3*q4*s12^2*s45)/4 + (5*mt^4*q3*q4*s12^2*s45)/8 + (mh*mt*q2*q4*s12^3*s45)/2 + (3*mt^2*q2*q4*s12^3*s45)/8 - (mh*mt*q3*q4*s12^3*s45)/2 + (3*mt^2*q3*q4*s12^3*s45)/8 - 2*q2*q3*s12*s34*s45 + (11*mt^2*q4*s12*s34*s45)/4 + (5*mh*mt^3*q2*q4*s12*s34*s45)/2 - (5*mt^4*q2*q4*s12*s34*s45)/4 - (5*mh*mt^3*q3*q4*s12*s34*s45)/2 - (5*mt^4*q3*q4*s12*s34*s45)/4 + (3*q4*s12^2*s34*s45)/8 - (mh*mt*q2*q4*s12^2*s34*s45)/8 - (11*mt^2*q2*q4*s12^2*s34*s45)/8 + (mh*mt*q3*q4*s12^2*s34*s45)/8 - (11*mt^2*q3*q4*s12^2*s34*s45)/8 - (q2*q4*s12^3*s34*s45)/2 - (q3*q4*s12^3*s34*s45)/2 + q2*q3*s34^2*s45 - mt^2*q4*s34^2*s45 - (3*mh*mt^3*q2*q4*s34^2*s45)/4 + (mt^4*q2*q4*s34^2*s45)/2 + (3*mh*mt^3*q3*q4*s34^2*s45)/4 + (mt^4*q3*q4*s34^2*s45)/2 - (3*q4*s12*s34^2*s45)/4 - (5*mh*mt*q2*q4*s12*s34^2*s45)/4 + (5*mt^2*q2*q4*s12*s34^2*s45)/4 + (5*mh*mt*q3*q4*s12*s34^2*s45)/4 + (5*mt^2*q3*q4*s12*s34^2*s45)/4 + (13*q2*q4*s12^2*s34^2*s45)/16 + (13*q3*q4*s12^2*s34^2*s45)/16 + (mh*mt*q2*q4*s34^3*s45)/2 - (mt^2*q2*q4*s34^3*s45)/2 - (mh*mt*q3*q4*s34^3*s45)/2 - (mt^2*q3*q4*s34^3*s45)/2 - (q2*q4*s12*s34^3*s45)/8 - (q3*q4*s12*s34^3*s45)/8 - (mh*mt*q2*q4*s12^2*s45^2)/4 - (11*mt^2*q2*q4*s12^2*s45^2)/16 + (mh*mt*q3*q4*s12^2*s45^2)/4 - (11*mt^2*q3*q4*s12^2*s45^2)/16 + (mh*mt*q2*q4*s12*s34*s45^2)/2 + (11*mt^2*q2*q4*s12*s34*s45^2)/8 - (mh*mt*q3*q4*s12*s34*s45^2)/2 + (11*mt^2*q3*q4*s12*s34*s45^2)/8 + (q2*q4*s12^2*s34*s45^2)/2 + (q3*q4*s12^2*s34*s45^2)/2 - (mh*mt*q2*q4*s34^2*s45^2)/4 - (mt^2*q2*q4*s34^2*s45^2)/2 + (mh*mt*q3*q4*s34^2*s45^2)/4 - (mt^2*q3*q4*s34^2*s45^2)/2 - q2*q4*s12*s34^2*s45^2 - q3*q4*s12*s34^2*s45^2 + (q2*q4*s34^3*s45^2)/2 + (q3*q4*s34^3*s45^2)/2 + 2*q2*q3*q4*s12*s34^3*s45^2 - q2*q3*q4*s34^4*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
