#define rule1 "0"
#define rule2 "0"
#define rule3 "0"
#define rule4 "0"
if (match(d*q1));
 redefine rule1 "1";
 $repeat = 1;
endif;
if (match(mt^4*q2));
 redefine rule2 "1";
 $repeat = 1;
endif;
if (match(mh^2*mt^4*q3));
 redefine rule3 "1";
 $repeat = 1;
endif;
if (match(mh^4*q2*q3*s12));
 redefine rule4 "1";
 $repeat = 1;
endif;
.sort
Skip;
NSkip `expr';