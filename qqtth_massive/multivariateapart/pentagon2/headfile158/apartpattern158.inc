#define rule1 "0"
#define rule2 "0"
#define rule3 "0"
#define rule4 "0"
#define rule5 "0"
#define rule6 "0"
#define rule7 "0"
if (match(q2*s12));
 redefine rule1 "1";
 $repeat = 1;
endif;
if (match(d*q1));
 redefine rule2 "1";
 $repeat = 1;
endif;
if (match(mt^2*q3*s24));
 redefine rule3 "1";
 $repeat = 1;
endif;
if (match(mt^4*q4));
 redefine rule4 "1";
 $repeat = 1;
endif;
if (match(mt^2*q3*q4*s12*s53));
 redefine rule5 "1";
 $repeat = 1;
endif;
if (match(q2*q3*q4*s24^3));
 redefine rule6 "1";
 $repeat = 1;
endif;
if (match(q3*q4*s24^4));
 redefine rule7 "1";
 $repeat = 1;
endif;
.sort
Skip;
NSkip `expr';