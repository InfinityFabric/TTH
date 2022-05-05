#define rule1 "0"
if (match(mh^4*mt^2*q1));
 redefine rule1 "1";
 $repeat = 1;
endif;
.sort
Skip;
NSkip `expr';
