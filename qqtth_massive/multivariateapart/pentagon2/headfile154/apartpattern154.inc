#define rule1 "0"
#define rule2 "0"
if (match(q1*s12));
 redefine rule1 "1";
 $repeat = 1;
endif;
if (match(mt^2*q2*s31));
 redefine rule2 "1";
 $repeat = 1;
endif;
.sort
Skip;
NSkip `expr';
