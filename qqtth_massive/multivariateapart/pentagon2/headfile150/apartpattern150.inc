#define rule1 "0"
if (match(mt^2*q1*s24));
 redefine rule1 "1";
 $repeat = 1;
endif;
.sort
Skip;
NSkip `expr';
