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
if (match(mh^4*mt^2*q3));
id mh^4*mt^2*q3 = 1 + 2*mh^2*mt^2*q3*s12 - mt^2*q3*s12^2 + mh^2*mt^2*q3*s34 - mt^4*q3*s34 - mh^2*q3*s12*s34 + mt^2*q3*s12*s34 + mh^2*q3*s34*s45 + 2*mt^2*q3*s34*s45 + q3*s12*s34*s45 - q3*s34^2*s45 - q3*s34*s45^2;
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
if (match(mh^4*q2*q3*s34));
id mh^4*q2*q3*s34 = 4*q2 - mh^4*q3 + 2*mh^2*q3*s12 - q3*s12^2 + mh^2*q3*s34 - mt^2*q3*s34 + q3*s12*s34 - 2*mh^2*q2*q3*s12*s34 - q2*q3*s12^2*s34 - (q3*s34^2)/4 + mh^2*q2*q3*s34^2 + q2*q3*s12*s34^2 - (q2*q3*s34^3)/4 + 2*q3*s34*s45 + 4*mh^2*q2*q3*s34*s45 + 4*q2*q3*s12*s34*s45 - 2*q2*q3*s34^2*s45 - 4*q2*q3*s34*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
