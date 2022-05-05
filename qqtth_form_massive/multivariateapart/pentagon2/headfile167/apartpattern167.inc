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
#define rule15 "0"
#define rule16 "0"
if (match(q2*s12));
 redefine rule1 "1";
 $repeat = 1;
endif;
if (match(d*q1));
 redefine rule2 "1";
 $repeat = 1;
endif;
if (match(mt^2*q3));
 redefine rule3 "1";
 $repeat = 1;
endif;
if (match(q4*s31));
 redefine rule4 "1";
 $repeat = 1;
endif;
if (match(q4*q5*s45));
 redefine rule5 "1";
 $repeat = 1;
endif;
if (match(q3*q6*s12));
 redefine rule6 "1";
 $repeat = 1;
endif;
if (match(q2*q3*q6*s45));
 redefine rule7 "1";
 $repeat = 1;
endif;
if (match(mt^2*q5*s31));
 redefine rule8 "1";
 $repeat = 1;
endif;
if (match(q3*q5*s12*s31));
 redefine rule9 "1";
 $repeat = 1;
endif;
if (match(q2*q3*q5*s31^2));
 redefine rule10 "1";
 $repeat = 1;
endif;
if (match(mt^4*q6));
 redefine rule11 "1";
 $repeat = 1;
endif;
if (match(q3*q5*q6*s31^2));
 redefine rule12 "1";
 $repeat = 1;
endif;
if (match(q3*q4*q5*q6));
 redefine rule13 "1";
 $repeat = 1;
endif;
if (match(mt^2*q5*q6*s12*s45));
 redefine rule14 "1";
 $repeat = 1;
endif;
if (match(q2*q5*q6*s31^3));
 redefine rule15 "1";
 $repeat = 1;
endif;
if (match(q5*q6*s31^4));
 redefine rule16 "1";
 $repeat = 1;
endif;
.sort
Skip;
NSkip `expr';
