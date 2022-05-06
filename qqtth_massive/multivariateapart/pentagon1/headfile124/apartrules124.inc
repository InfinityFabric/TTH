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
if (match(mh^4*q2));
id mh^4*q2 = 1 + 2*mh^2*q2*s12 - q2*s12^2 + 2*mh^2*q2*s34 + 2*q2*s12*s34 - q2*s34^2;
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
if (match(mh^2*mt^2*q2*q3*s34));
id mh^2*mt^2*q2*q3*s34 = q2 - mt^2*q3 - mt^4*q2*q3*s34 - mh^2*q2*q3*s12*s34 - mt^2*q2*q3*s12*s34 + mt^2*q2*q3*s34^2 + mh^2*q2*q3*s34*s45 + 2*mt^2*q2*q3*s34*s45 + q2*q3*s12*s34*s45 - q2*q3*s34^2*s45 - q2*q3*s34*s45^2;
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
if (match(mh^4*mt^2*q3));
id mh^4*mt^2*q3 = 1 + 2*mh^2*mt^2*q3*s12 - mt^2*q3*s12^2 + mh^2*mt^2*q3*s34 - mt^4*q3*s34 - mh^2*q3*s12*s34 + mt^2*q3*s12*s34 + mh^2*q3*s34*s45 + 2*mt^2*q3*s34*s45 + q3*s12*s34*s45 - q3*s34^2*s45 - q3*s34*s45^2;
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
if (match(mt^6*q2*q3*s34));
id mt^6*q2*q3*s34 = -(mh^2*q2) + mt^2*q2 + mh^2*mt^2*q3 - mt^4*q3 + 2*q2*s12 - 2*mt^2*q3*s12 + q2*s34 + q3*s12*s34 - 3*mt^4*q2*q3*s12*s34 - 3*mt^2*q2*q3*s12^2*s34 - q2*q3*s12^3*s34 + mh^2*q2*q3*s12*s34^2 + 3*mt^2*q2*q3*s12*s34^2 + 2*q2*q3*s12^2*s34^2 - q2*q3*s12*s34^3 - q2*s45 + mt^2*q3*s45 - q3*s34*s45 + 3*mt^4*q2*q3*s34*s45 + 6*mt^2*q2*q3*s12*s34*s45 + 3*q2*q3*s12^2*s34*s45 - 3*q2*q3*s12*s34^2*s45 - 3*mt^2*q2*q3*s34*s45^2 - 3*q2*q3*s12*s34*s45^2 + q2*q3*s34*s45^3;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
