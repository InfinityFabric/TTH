#if `rule1'==1
#write "calc module nr 1"
#do j=1,1
if (match(mt^4*q1));
id mt^4*q1 = 1 + 2*mt^2*q1*s12 - q1*s12^2 + 2*mt^2*q1*s45 + 2*q1*s12*s45 - q1*s45^2;
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
if (match(mt^4*q2));
id mt^4*q2 = 1 + 2*mt^2*q2*s12 - q2*s12^2 + 2*mt^2*q2*s53 + 2*q2*s12*s53 - q2*s53^2;
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
if (match(mt^2*q1*q2*s45));
id mt^2*q1*q2*s45 = q1/2 - q2/2 - q1*q2*s12*s45 + (q1*q2*s45^2)/2 + mt^2*q1*q2*s53 + q1*q2*s12*s53 - (q1*q2*s53^2)/2;
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
if (match(q1*q2*s12^2*s45));
id q1*q2*s12^2*s45 = -(mt^2*q1)/8 + (mt^2*q2)/8 + (3*q1*s12)/8 - (3*q2*s12)/8 + (3*q1*s45)/16 + (q2*s45)/16 + (q1*q2*s12*s45^2)/2 - (q1*q2*s45^3)/16 - (q1*s53)/16 - (3*q2*s53)/16 + q1*q2*s12^2*s53 + (3*q1*q2*s45^2*s53)/16 - (q1*q2*s12*s53^2)/2 - (3*q1*q2*s45*s53^2)/16 + (q1*q2*s53^3)/16;
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
if (match(mh^2*mt^4*q3));
id mh^2*mt^4*q3 = -1 + 2*mt^6*q3 + mh^4*q3*s12 - 2*mh^2*mt^2*q3*s12 - mt^4*q3*s12 + mh^2*q3*s12^2 + mh^2*mt^2*q3*s45 - mt^4*q3*s45 - mh^2*q3*s12*s45 + mt^2*q3*s12*s45 + mh^2*mt^2*q3*s53 - mt^4*q3*s53 - mh^2*q3*s12*s53 + mt^2*q3*s12*s53 - mh^2*q3*s45*s53 - 2*mt^2*q3*s45*s53 - q3*s12*s45*s53 + q3*s45^2*s53 + q3*s45*s53^2;
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
if (match(mh^4*q1*q3*s12));
id mh^4*q1*q3*s12 = q1 + mh^2*q3 - 2*mt^2*q3 - 3*q3*s12 + 4*mh^2*mt^2*q1*q3*s12 - 2*mh^2*q1*q3*s12^2 - 4*mt^2*q1*q3*s12^2 + 3*q1*q3*s12^3 - 3*q3*s45 + mh^2*mt^2*q1*q3*s45 + 3*mh^2*q1*q3*s12*s45 - 17*mt^2*q1*q3*s12*s45 - 3*q1*q3*s12^2*s45 - mh^2*q1*q3*s45^2 - 4*mt^2*q1*q3*s45^2 - 3*q1*q3*s12*s45^2 + 3*q1*q3*s45^3 + q3*s53 - mh^2*mt^2*q1*q3*s53 + mh^2*q1*q3*s12*s53 + mt^2*q1*q3*s12*s53 - q1*q3*s12^2*s53 + mh^2*q1*q3*s45*s53 + 4*mt^2*q1*q3*s45*s53 + 3*q1*q3*s12*s45*s53 - 2*q1*q3*s45^2*s53 - q1*q3*s45*s53^2;
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
if (match(mh^4*q2*q3*s12));
id mh^4*q2*q3*s12 = q2 + mh^2*q3 - 2*mt^2*q3 - 3*q3*s12 + 4*mh^2*mt^2*q2*q3*s12 - 2*mh^2*q2*q3*s12^2 - 4*mt^2*q2*q3*s12^2 + 3*q2*q3*s12^3 + q3*s45 - mh^2*mt^2*q2*q3*s45 + mh^2*q2*q3*s12*s45 + mt^2*q2*q3*s12*s45 - q2*q3*s12^2*s45 - 3*q3*s53 + mh^2*mt^2*q2*q3*s53 + 3*mh^2*q2*q3*s12*s53 - 17*mt^2*q2*q3*s12*s53 - 3*q2*q3*s12^2*s53 + mh^2*q2*q3*s45*s53 + 4*mt^2*q2*q3*s45*s53 + 3*q2*q3*s12*s45*s53 - q2*q3*s45^2*s53 - mh^2*q2*q3*s53^2 - 4*mt^2*q2*q3*s53^2 - 3*q2*q3*s12*s53^2 - 2*q2*q3*s45*s53^2 + 3*q2*q3*s53^3;
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
if (match(mh^4*q1*q2*q3*s45^3));
id mh^4*q1*q2*q3*s45^3 = 6*q1 - 6*q2 - 2*mh^4*mt^2*q1*q3 + 2*mh^4*mt^2*q2*q3 + 12*mh^2*mt^2*q1*q3*s12 - 12*mh^2*mt^2*q2*q3*s12 - 8*mh^2*q1*q3*s12^2 - 10*mt^2*q1*q3*s12^2 + 8*mh^2*q2*q3*s12^2 + 10*mt^2*q2*q3*s12^2 + 8*q1*q3*s12^3 - 8*q2*q3*s12^3 - 24*q3*s45 + 3*mh^4*q1*q3*s45 + 14*mh^2*mt^2*q1*q3*s45 + mh^4*q2*q3*s45 - 2*mh^2*mt^2*q2*q3*s45 - 16*q1*q2*s12*s45 + 20*mh^2*q1*q3*s12*s45 - 78*mt^2*q1*q3*s12*s45 + 2*mt^2*q2*q3*s12*s45 + 9*q1*q3*s12^2*s45 - q2*q3*s12^2*s45 + 8*q1*q2*s45^2 - 14*mh^2*q1*q3*s45^2 - (319*mt^2*q1*q3*s45^2)/8 - (mt^2*q2*q3*s45^2)/8 - (339*q1*q3*s12*s45^2)/8 + (3*q2*q3*s12*s45^2)/8 + (413*q1*q3*s45^3)/16 - (q2*q3*s45^3)/16 + 2*mh^2*q1*q2*q3*s12*s45^3 - (q1*q2*q3*s12*s45^4)/2 + (q1*q2*q3*s45^5)/16 + 24*q3*s53 - mh^4*q1*q3*s53 + 2*mh^2*mt^2*q1*q3*s53 - 3*mh^4*q2*q3*s53 - 14*mh^2*mt^2*q2*q3*s53 + 16*q1*q2*s12*s53 - 2*mt^2*q1*q3*s12*s53 - 20*mh^2*q2*q3*s12*s53 + 78*mt^2*q2*q3*s12*s53 + q1*q3*s12^2*s53 - 9*q2*q3*s12^2*s53 - 2*mh^2*q1*q3*s45*s53 + (31*mt^2*q1*q3*s45*s53)/4 + 2*mh^2*q2*q3*s45*s53 - (31*mt^2*q2*q3*s45*s53)/4 - (21*q1*q3*s12*s45*s53)/4 + (21*q2*q3*s12*s45*s53)/4 + (71*q1*q3*s45^2*s53)/16 - (27*q2*q3*s45^2*s53)/16 + 3*mh^4*q1*q2*q3*s45^2*s53 - 6*mh^2*q1*q2*q3*s12*s45^2*s53 + q1*q2*q3*s12*s45^3*s53 - (5*q1*q2*q3*s45^4*s53)/16 - 8*q1*q2*s53^2 + (mt^2*q1*q3*s53^2)/8 + 14*mh^2*q2*q3*s53^2 + (319*mt^2*q2*q3*s53^2)/8 - (3*q1*q3*s12*s53^2)/8 + (339*q2*q3*s12*s53^2)/8 + (27*q1*q3*s45*s53^2)/16 - (71*q2*q3*s45*s53^2)/16 - 3*mh^4*q1*q2*q3*s45*s53^2 + 6*mh^2*q1*q2*q3*s12*s45*s53^2 + (5*q1*q2*q3*s45^3*s53^2)/8 + (q1*q3*s53^3)/16 - (413*q2*q3*s53^3)/16 + mh^4*q1*q2*q3*s53^3 - 2*mh^2*q1*q2*q3*s12*s53^3 - q1*q2*q3*s12*s45*s53^3 - (5*q1*q2*q3*s45^2*s53^3)/8 + (q1*q2*q3*s12*s53^4)/2 + (5*q1*q2*q3*s45*s53^4)/16 - (q1*q2*q3*s53^5)/16;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
