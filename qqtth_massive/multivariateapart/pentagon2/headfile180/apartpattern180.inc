#define rule1 "0"
#define rule2 "0"
#define rule3 "0"
if (match(q2*s45));
 redefine rule1 "1";
 $repeat = 1;
endif;
if (match(d*q1));
 redefine rule2 "1";
 $repeat = 1;
endif;
if (match(mt^4*q3));
 redefine rule3 "1";
 $repeat = 1;
endif;
.sort
Skip;
NSkip `expr';
