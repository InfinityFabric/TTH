#if `rule1'==1
#write "calc module nr 1"
#do j=1,1
if (match(q1*s45));
id q1*s45 = 1;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
