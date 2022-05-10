#define rule1 "0"
#define rule2 "0"
#define rule3 "0"
#define rule4 "0"
#define rule5 "0"
#define rule6 "0"
#define rule7 "0"
#define rule8 "0"
#define rule9 "0"
#define rule10 "0"
#define rule11 "0"
#define rule12 "0"
#define rule13 "0"
#define rule14 "0"
if (match(d*q1));
 redefine rule1 "1";
 $repeat = 1;
endif;
if (match(mh*mt*q2*q3));
 redefine rule2 "1";
 $repeat = 1;
endif;
if (match(mh^2*q2));
 redefine rule3 "1";
 $repeat = 1;
endif;
if (match(mh^2*q3));
 redefine rule4 "1";
 $repeat = 1;
endif;
if (match(mt^3*q2*q3));
 redefine rule5 "1";
 $repeat = 1;
endif;
if (match(mh^2*mt^4*q4));
 redefine rule6 "1";
 $repeat = 1;
endif;
if (match(mh*mt^5*q2*q4));
 redefine rule7 "1";
 $repeat = 1;
endif;
if (match(mh*mt^5*q3*q4));
 redefine rule8 "1";
 $repeat = 1;
endif;
if (match(mt^2*q2*q3*q4*s12^2));
 redefine rule9 "1";
 $repeat = 1;
endif;
if (match(mh*q2*q3*q4*s12^2*s53));
 redefine rule10 "1";
 $repeat = 1;
endif;
if (match(mt*q2*q3*q4*s45^2*s53));
 redefine rule11 "1";
 $repeat = 1;
endif;
if (match(mt^7*q2*q4));
 redefine rule12 "1";
 $repeat = 1;
endif;
if (match(mt^7*q3*q4));
 redefine rule13 "1";
 $repeat = 1;
endif;
if (match(q2*q3*q4*s12^2*s45^2*s53^2));
 redefine rule14 "1";
 $repeat = 1;
endif;
.sort
Skip;
NSkip `expr';
