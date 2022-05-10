#if `rule1'==1
#write "calc module nr 1"
#do j=1,1
if (match(q1*s12));
id q1*s12 = 1;
redefine j "0";
endif;
.sort
Skip;
NSkip `expr';
#enddo
#endif
