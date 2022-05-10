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
if (match(mh^2*mt^4*q2));
id mh^2*mt^4*q2 = -1 + 2*mt^6*q2 + mh^4*q2*s12 - 2*mh^2*mt^2*q2*s12 - mt^4*q2*s12 + mh^2*q2*s12^2 + mh^2*mt^2*q2*s45 - mt^4*q2*s45 - mh^2*q2*s12*s45 + mt^2*q2*s12*s45 + mh^2*mt^2*q2*s53 - mt^4*q2*s53 - mh^2*q2*s12*s53 + mt^2*q2*s12*s53 - mh^2*q2*s45*s53 - 2*mt^2*q2*s45*s53 - q2*s12*s45*s53 + q2*s45^2*s53 + q2*s45*s53^2;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
