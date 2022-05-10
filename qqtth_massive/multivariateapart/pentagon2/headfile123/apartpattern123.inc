#define rule1 "0"
#define rule2 "0"
if (match(q2*s12));
 redefine rule1 "1";
 $repeat = 1;
endif;
if (match(d*q1));
 redefine rule2 "1";
 $repeat = 1;
endif;
.sort
Skip;
NSkip `expr';
