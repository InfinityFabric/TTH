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
#define rule17 "0"
#define rule18 "0"
#define rule19 "0"
#define rule20 "0"
#define rule21 "0"
#define rule22 "0"
#define rule23 "0"
#define rule24 "0"
#define rule25 "0"
#define rule26 "0"
#define rule27 "0"
#define rule28 "0"
#define rule29 "0"
#define rule30 "0"
#define rule31 "0"
#define rule32 "0"
#define rule33 "0"
#define rule34 "0"
#define rule35 "0"
if (match(mt*q3));
 redefine rule1 "1";
 $repeat = 1;
endif;
if (match(q4*s12));
 redefine rule2 "1";
 $repeat = 1;
endif;
if (match(d*q1));
 redefine rule3 "1";
 $repeat = 1;
endif;
if (match(d*q2));
 redefine rule4 "1";
 $repeat = 1;
endif;
if (match(q1*q2));
 redefine rule5 "1";
 $repeat = 1;
endif;
if (match(q6*q7));
 redefine rule6 "1";
 $repeat = 1;
endif;
if (match(mt^2*q5));
 redefine rule7 "1";
 $repeat = 1;
endif;
if (match(q3*q5*s31));
 redefine rule8 "1";
 $repeat = 1;
endif;
if (match(mt^2*q6));
 redefine rule9 "1";
 $repeat = 1;
endif;
if (match(q3*q6*s45));
 redefine rule10 "1";
 $repeat = 1;
endif;
if (match(q7*s31));
 redefine rule11 "1";
 $repeat = 1;
endif;
if (match(q5*q6*s31));
 redefine rule12 "1";
 $repeat = 1;
endif;
if (match(q3*q5*q7*s45));
 redefine rule13 "1";
 $repeat = 1;
endif;
if (match(q5*q8));
 redefine rule14 "1";
 $repeat = 1;
endif;
if (match(q7*q8*s45));
 redefine rule15 "1";
 $repeat = 1;
endif;
if (match(q4*q6*q9));
 redefine rule16 "1";
 $repeat = 1;
endif;
if (match(q6*q9*s12));
 redefine rule17 "1";
 $repeat = 1;
endif;
if (match(mt^2*q8*s31));
 redefine rule18 "1";
 $repeat = 1;
endif;
if (match(q3*q8*s12*s31));
 redefine rule19 "1";
 $repeat = 1;
endif;
if (match(q3*q4*q8*s31^2));
 redefine rule20 "1";
 $repeat = 1;
endif;
if (match(q6*q8*s12*s31));
 redefine rule21 "1";
 $repeat = 1;
endif;
if (match(q4*q6*q8*s31^2));
 redefine rule22 "1";
 $repeat = 1;
endif;
if (match(mt^4*q9));
 redefine rule23 "1";
 $repeat = 1;
endif;
if (match(q3*q9*s12^2));
 redefine rule24 "1";
 $repeat = 1;
endif;
if (match(q3*q4*q9*s45^2));
 redefine rule25 "1";
 $repeat = 1;
endif;
if (match(q4*q5*q7*q9));
 redefine rule26 "1";
 $repeat = 1;
endif;
if (match(q5*q7*q9*s12));
 redefine rule27 "1";
 $repeat = 1;
endif;
if (match(q3*q8*q9*s31^3));
 redefine rule28 "1";
 $repeat = 1;
endif;
if (match(q6*q8*q9*s31^2));
 redefine rule29 "1";
 $repeat = 1;
endif;
if (match(q5*q9*s12^2));
 redefine rule30 "1";
 $repeat = 1;
endif;
if (match(q4*q5*q9*s31^2));
 redefine rule31 "1";
 $repeat = 1;
endif;
if (match(q4*q7*q8*q9));
 redefine rule32 "1";
 $repeat = 1;
endif;
if (match(mt^2*q8*q9*s12*s45));
 redefine rule33 "1";
 $repeat = 1;
endif;
if (match(q4*q8*q9*s31^3));
 redefine rule34 "1";
 $repeat = 1;
endif;
if (match(q8*q9*s31^4));
 redefine rule35 "1";
 $repeat = 1;
endif;
.sort
Skip;
NSkip `expr';
