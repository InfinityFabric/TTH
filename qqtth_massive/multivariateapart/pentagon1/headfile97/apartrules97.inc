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
if (match(q3*s45));
id q3*s45 = 1;
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
id d*q1 = 1 + 3*q1;
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
if (match(mt^4*q4));
id mt^4*q4 = 1 + 2*mt^2*q4*s12 - q4*s12^2 + 2*mt^2*q4*s45 + 2*q4*s12*s45 - q4*s45^2;
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
if (match(q2*q4*s12^2));
id q2*q4*s12^2 = q2 - mt^3*q4 + 2*mt*q4*s12 + 2*mt*q4*s45 + 2*q2*q4*s12*s45 - q2*q4*s45^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
