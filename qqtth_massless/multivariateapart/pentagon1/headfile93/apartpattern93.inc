#define rule1 "0"
if (match(q1*s23));
 redefine rule1 "1";
 $repeat = 1;
endif;
.sort
Skip;
NSkip `expr';
