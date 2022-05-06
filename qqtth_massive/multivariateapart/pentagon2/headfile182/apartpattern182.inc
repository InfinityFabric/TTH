#define rule1 "0"
#define rule2 "0"
#define rule3 "0"
#define rule4 "0"
#define rule5 "0"
#define rule6 "0"
#define rule7 "0"
#define rule8 "0"
if (match(mt^4*q1));
 redefine rule1 "1";
 $repeat = 1;
endif;
if (match(mt^4*q2));
 redefine rule2 "1";
 $repeat = 1;
endif;
if (match(mt^2*q1*q2*s45));
 redefine rule3 "1";
 $repeat = 1;
endif;
if (match(q1*q2*s12^2*s45));
 redefine rule4 "1";
 $repeat = 1;
endif;
if (match(mh^2*mt^4*q3));
 redefine rule5 "1";
 $repeat = 1;
endif;
if (match(mh^4*q1*q3*s12));
 redefine rule6 "1";
 $repeat = 1;
endif;
if (match(mh^4*q2*q3*s12));
 redefine rule7 "1";
 $repeat = 1;
endif;
if (match(mh^4*q1*q2*q3*s45^3));
 redefine rule8 "1";
 $repeat = 1;
endif;
.sort
Skip;
NSkip `expr';
