#if `rule1'==1
#write "calc module nr 1"
#do j=1,1
if (match(d*q1));
id d*q1 = 1 + q1;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
