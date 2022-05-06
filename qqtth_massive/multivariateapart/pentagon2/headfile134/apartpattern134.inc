#define rule1 "0"
if (match(mh^2*mt^4*q1));
 redefine rule1 "1";
 $repeat = 1;
endif;
.sort
Skip;
NSkip `expr';
