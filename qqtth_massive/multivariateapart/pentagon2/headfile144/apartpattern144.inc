#define rule1 "0"
if (match(mt^2*q1*s31));
 redefine rule1 "1";
 $repeat = 1;
endif;
.sort
Skip;
NSkip `expr';
