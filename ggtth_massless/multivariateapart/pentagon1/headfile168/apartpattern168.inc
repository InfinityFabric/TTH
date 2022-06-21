#define rule1 "0"
#define rule2 "0"
#define rule3 "0"
#define rule4 "0"
if (match(q3*s34));
 redefine rule1 "1";
 $repeat = 1;
endif;
if (match(d*q1));
 redefine rule2 "1";
 $repeat = 1;
endif;
if (match(d*q2));
 redefine rule3 "1";
 $repeat = 1;
endif;
if (match(q1*q2));
 redefine rule4 "1";
 $repeat = 1;
endif;
.sort
Skip;
NSkip `expr';
