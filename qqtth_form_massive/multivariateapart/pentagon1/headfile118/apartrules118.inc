#if `rule1'==1
#write "calc module nr 1"
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
#if `rule2'==1
#write "calc module nr 2"
#do j=1,1
if (match(mt^2*q2));
id mt^2*q2 = 1/4 + (q2*s34)/4;
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
if (match(mh^4*q3));
id mh^4*q3 = 1 + 2*mh^2*q3*s12 - q3*s12^2 + 2*mh^2*q3*s34 + 2*q3*s12*s34 - q3*s34^2;
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
if (match(mh^2*mt^2*q3*q4*s34));
id mh^2*mt^2*q3*q4*s34 = q3 - mt^2*q4 - mt^4*q3*q4*s34 - mh^2*q3*q4*s12*s34 - mt^2*q3*q4*s12*s34 + mt^2*q3*q4*s34^2 + mh^2*q3*q4*s34*s45 + 2*mt^2*q3*q4*s34*s45 + q3*q4*s12*s34*s45 - q3*q4*s34^2*s45 - q3*q4*s34*s45^2;
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
if (match(mh^4*mt^2*q4));
id mh^4*mt^2*q4 = 1 + 2*mh^2*mt^2*q4*s12 - mt^2*q4*s12^2 + mh^2*mt^2*q4*s34 - mt^4*q4*s34 - mh^2*q4*s12*s34 + mt^2*q4*s12*s34 + mh^2*q4*s34*s45 + 2*mt^2*q4*s34*s45 + q4*s12*s34*s45 - q4*s34^2*s45 - q4*s34*s45^2;
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
if (match(mh^2*q2*q3*q4*s12*s34));
id mh^2*q2*q3*q4*s12*s34 = q2*q3 - q4/4 - (q2*q4*s34)/4 - (mh^2*q3*q4*s34)/4 - (mt^2*q3*q4*s34)/4 - (q3*q4*s12*s34)/4 + (3*q3*q4*s34^2)/16 - (mh^2*q2*q3*q4*s34^2)/4 - (q2*q3*q4*s12*s34^2)/4 + (3*q2*q3*q4*s34^3)/16 + (q3*q4*s34*s45)/2 + mh^2*q2*q3*q4*s34*s45 + q2*q3*q4*s12*s34*s45 - (q2*q3*q4*s34^2*s45)/2 - q2*q3*q4*s34*s45^2;
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
if (match(mh^4*q2*q4*s34));
id mh^4*q2*q4*s34 = 4*q2 - mh^4*q4 + 2*mh^2*q4*s12 - q4*s12^2 + mh^2*q4*s34 - mt^2*q4*s34 + q4*s12*s34 - 2*mh^2*q2*q4*s12*s34 - q2*q4*s12^2*s34 - (q4*s34^2)/4 + mh^2*q2*q4*s34^2 + q2*q4*s12*s34^2 - (q2*q4*s34^3)/4 + 2*q4*s34*s45 + 4*mh^2*q2*q4*s34*s45 + 4*q2*q4*s12*s34*s45 - 2*q2*q4*s34^2*s45 - 4*q2*q4*s34*s45^2;
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
if (match(mt^6*q3*q4*s34));
id mt^6*q3*q4*s34 = -(mh^2*q3) + mt^2*q3 + mh^2*mt^2*q4 - mt^4*q4 + 2*q3*s12 - 2*mt^2*q4*s12 + q3*s34 + q4*s12*s34 - 3*mt^4*q3*q4*s12*s34 - 3*mt^2*q3*q4*s12^2*s34 - q3*q4*s12^3*s34 + mh^2*q3*q4*s12*s34^2 + 3*mt^2*q3*q4*s12*s34^2 + 2*q3*q4*s12^2*s34^2 - q3*q4*s12*s34^3 - q3*s45 + mt^2*q4*s45 - q4*s34*s45 + 3*mt^4*q3*q4*s34*s45 + 6*mt^2*q3*q4*s12*s34*s45 + 3*q3*q4*s12^2*s34*s45 - 3*q3*q4*s12*s34^2*s45 - 3*mt^2*q3*q4*s34*s45^2 - 3*q3*q4*s12*s34*s45^2 + q3*q4*s34*s45^3;
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
if (match(mh^2*q2*q3*q4*s34^3));
id mh^2*q2*q3*q4*s34^3 = q3 - 4*mh^2*q2*q3 + mh^2*q4 - mt^2*q4 + 8*q2*q3*s12 - 2*q4*s12 + 9*q2*q3*s34 - (5*q4*s34)/4 + mh^2*q2*q4*s34 - mt^4*q3*q4*s34 + 2*q2*q4*s12*s34 - 3*mt^2*q3*q4*s12*s34 - 3*q3*q4*s12^2*s34 - 4*q2*q3*q4*s12^3*s34 - (5*q2*q4*s34^2)/4 - mh^2*q3*q4*s34^2 - (5*mt^2*q3*q4*s34^2)/4 + (5*q3*q4*s12*s34^2)/4 + 5*q2*q3*q4*s12^2*s34^2 + (11*q3*q4*s34^3)/16 - (11*q2*q3*q4*s12*s34^3)/4 + (11*q2*q3*q4*s34^4)/16 - 4*q2*q3*s45 + q4*s45 - 3*q2*q4*s34*s45 + 3*mt^2*q3*q4*s34*s45 + 6*q3*q4*s12*s34*s45 + 12*q2*q3*q4*s12^2*s34*s45 + (11*q3*q4*s34^2*s45)/4 + 4*mh^2*q2*q3*q4*s34^2*s45 - 2*q2*q3*q4*s12*s34^2*s45 - (5*q2*q3*q4*s34^3*s45)/4 - 3*q3*q4*s34*s45^2 - 12*q2*q3*q4*s12*s34*s45^2 - 7*q2*q3*q4*s34^2*s45^2 + 4*q2*q3*q4*s34*s45^3;
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
if (match(q2*q3*q4*s12^4*s34));
id q2*q3*q4*s12^4*s34 = (q3*s12)/4 - mh^2*q2*q3*s12 + (mh^2*q4*s12)/4 - (mt^2*q4*s12)/4 + 2*q2*q3*s12^2 - (q4*s12^2)/2 + (q3*s34)/16 - (mh^2*q2*q3*s34)/4 + (mh^2*q4*s34)/16 - (mt^2*q4*s34)/16 + (11*q2*q3*s12*s34)/4 - (7*q4*s12*s34)/16 + (mh^2*q2*q4*s12*s34)/4 - (mt^4*q3*q4*s12*s34)/4 + (q2*q4*s12^2*s34)/2 - (3*mt^2*q3*q4*s12^2*s34)/4 - (3*q3*q4*s12^3*s34)/4 + (5*q2*q3*s34^2)/16 - (q4*s34^2)/64 + (mh^2*q2*q4*s34^2)/16 - (mt^4*q3*q4*s34^2)/16 - (3*q2*q4*s12*s34^2)/16 - (mh^2*q3*q4*s12*s34^2)/4 - (mt^2*q3*q4*s12*s34^2)/2 + (q3*q4*s12^2*s34^2)/8 + q2*q3*q4*s12^3*s34^2 - (q2*q4*s34^3)/64 - (mt^2*q3*q4*s34^3)/64 + (5*q3*q4*s12*s34^3)/16 - (3*q2*q3*q4*s12^2*s34^3)/8 - (q3*q4*s34^4)/256 + (q2*q3*q4*s12*s34^4)/16 - (q2*q3*q4*s34^5)/256 - (q3*s45)/4 + mh^2*q2*q3*s45 - (mh^2*q4*s45)/4 + (mt^2*q4*s45)/4 - 3*q2*q3*s12*s45 + (3*q4*s12*s45)/4 - (3*q2*q3*s34*s45)/2 + (q4*s34*s45)/8 - (mh^2*q2*q4*s34*s45)/4 + (mt^4*q3*q4*s34*s45)/4 - (5*q2*q4*s12*s34*s45)/4 + (3*mt^2*q3*q4*s12*s34*s45)/2 + (9*q3*q4*s12^2*s34*s45)/4 + 4*q2*q3*q4*s12^3*s34*s45 - (q2*q4*s34^2*s45)/8 + (mt^2*q3*q4*s34^2*s45)/4 + (q3*q4*s12*s34^2*s45)/2 - q2*q3*q4*s12^2*s34^2*s45 + (q3*q4*s34^3*s45)/16 - (q2*q3*q4*s12*s34^3*s45)/4 + (q2*q3*q4*s34^4*s45)/16 + q2*q3*s45^2 - (q4*s45^2)/4 + (3*q2*q4*s34*s45^2)/4 - (3*mt^2*q3*q4*s34*s45^2)/4 - (9*q3*q4*s12*s34*s45^2)/4 - 6*q2*q3*q4*s12^2*s34*s45^2 - (3*q3*q4*s34^2*s45^2)/8 - q2*q3*q4*s12*s34^2*s45^2 - (3*q2*q3*q4*s34^3*s45^2)/8 + (3*q3*q4*s34*s45^3)/4 + 4*q2*q3*q4*s12*s34*s45^3 + q2*q3*q4*s34^2*s45^3 - q2*q3*q4*s34*s45^4;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
