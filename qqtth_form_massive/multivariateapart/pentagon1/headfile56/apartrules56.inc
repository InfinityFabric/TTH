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
