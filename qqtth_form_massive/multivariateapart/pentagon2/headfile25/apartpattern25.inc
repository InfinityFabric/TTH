#define rule1 "0"
#define rule2 "0"
if (match(mt*q2));
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
