#if `rule1'==1
#write "calc module nr 1"
#do j=1,1
if (match(mt*q2));
id mt*q2 = 1;
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
id mt^2*q3 = 1/4 + (q3*s34)/4;
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
if (match(q2*q3*s34));
id q2*q3*s34 = -q2 + 4*mt*q3;
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
if (match(mh^2*q2*q4*s12*s34));
id mh^2*q2*q4*s12*s34 = q2 - mh^4*mt*q4 + 2*mh^2*mt*q4*s12 - mt*q4*s12^2 + mh^2*mt*q4*s34 - mt^3*q4*s34 + mt*q4*s12*s34 + 2*mt*q4*s34*s45 + mh^2*q2*q4*s34*s45 + q2*q4*s12*s34*s45 - q2*q4*s34^2*s45 - q2*q4*s34*s45^2;
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
if (match(mh^4*q3*q4));
id mh^4*q3*q4 = q2^2*q3 + mh^2*q2^2*q4*s12 - 2*mh^2*q3*q4*s12 - q3*q4*s12^2 - (q4*s34)/4 + mh^2*q3*q4*s34 + q3*q4*s12*s34 - (q3*q4*s34^2)/4 - mh^2*q2^2*q4*s45 + 4*mh^2*q3*q4*s45 - q2^2*q4*s12*s45 + 4*q3*q4*s12*s45 + q2^2*q4*s34*s45 - 2*q3*q4*s34*s45 + q2^2*q4*s45^2 - 4*q3*q4*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
