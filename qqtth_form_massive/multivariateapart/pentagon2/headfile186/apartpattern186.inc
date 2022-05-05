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
#define rule36 "0"
#define rule37 "0"
#define rule38 "0"
#define rule39 "0"
#define rule40 "0"
#define rule41 "0"
#define rule42 "0"
#define rule43 "0"
#define rule44 "0"
#define rule45 "0"
#define rule46 "0"
#define rule47 "0"
#define rule48 "0"
#define rule49 "0"
#define rule50 "0"
#define rule51 "0"
#define rule52 "0"
#define rule53 "0"
#define rule54 "0"
#define rule55 "0"
#define rule56 "0"
#define rule57 "0"
if (match(mh*mt*q1*q2));
 redefine rule1 "1";
 $repeat = 1;
endif;
if (match(mh^2*q1));
 redefine rule2 "1";
 $repeat = 1;
endif;
if (match(mh^2*q2));
 redefine rule3 "1";
 $repeat = 1;
endif;
if (match(mt^3*q1*q2));
 redefine rule4 "1";
 $repeat = 1;
endif;
if (match(mt^4*q3));
 redefine rule5 "1";
 $repeat = 1;
endif;
if (match(mt^2*q1*q2*q3*s12));
 redefine rule6 "1";
 $repeat = 1;
endif;
if (match(mh*q1*q2*q3*s12^2));
 redefine rule7 "1";
 $repeat = 1;
endif;
if (match(mt*q1*q2*q3*s12^2));
 redefine rule8 "1";
 $repeat = 1;
endif;
if (match(mh^2*mt^4*q4));
 redefine rule9 "1";
 $repeat = 1;
endif;
if (match(mt^2*q1*q2*q3*s45^2));
 redefine rule10 "1";
 $repeat = 1;
endif;
if (match(mh*mt^5*q1*q4));
 redefine rule11 "1";
 $repeat = 1;
endif;
if (match(mh*mt^5*q2*q4));
 redefine rule12 "1";
 $repeat = 1;
endif;
if (match(mh^4*q3*q4*s12));
 redefine rule13 "1";
 $repeat = 1;
endif;
if (match(mt^2*q1*q2*q4*s12^2));
 redefine rule14 "1";
 $repeat = 1;
endif;
if (match(q1*q2*q3*s12^4));
 redefine rule15 "1";
 $repeat = 1;
endif;
if (match(mh*q1*q2*q4*s12^2*s45));
 redefine rule16 "1";
 $repeat = 1;
endif;
if (match(mt*q1*q2*q4*s45^3));
 redefine rule17 "1";
 $repeat = 1;
endif;
if (match(mh*mt^3*q1*q3*q4*s12));
 redefine rule18 "1";
 $repeat = 1;
endif;
if (match(mh*mt^3*q2*q3*q4*s12));
 redefine rule19 "1";
 $repeat = 1;
endif;
if (match(mt^2*q1*q2*q3*q4*s45*s53));
 redefine rule20 "1";
 $repeat = 1;
endif;
if (match(mh*q1*q2*q3*q4*s12*s45^2));
 redefine rule21 "1";
 $repeat = 1;
endif;
if (match(mh*mt^2*q1*q3*q4*s12*s45));
 redefine rule22 "1";
 $repeat = 1;
endif;
if (match(mh*mt^2*q2*q3*q4*s12*s45));
 redefine rule23 "1";
 $repeat = 1;
endif;
if (match(mt^7*q1*q4));
 redefine rule24 "1";
 $repeat = 1;
endif;
if (match(mt^7*q2*q4));
 redefine rule25 "1";
 $repeat = 1;
endif;
if (match(mh*mt*q1*q3*q4*s45^3));
 redefine rule26 "1";
 $repeat = 1;
endif;
if (match(mh*mt*q2*q3*q4*s45^3));
 redefine rule27 "1";
 $repeat = 1;
endif;
if (match(mh*mt^2*q1*q3*q4*s12^2));
 redefine rule28 "1";
 $repeat = 1;
endif;
if (match(mh*mt^2*q2*q3*q4*s12^2));
 redefine rule29 "1";
 $repeat = 1;
endif;
if (match(q1*q2*q3*q4*s12*s45^3));
 redefine rule30 "1";
 $repeat = 1;
endif;
if (match(mh*mt^3*q1*q3*q4*s45^2));
 redefine rule31 "1";
 $repeat = 1;
endif;
if (match(mh*mt^3*q2*q3*q4*s45^2));
 redefine rule32 "1";
 $repeat = 1;
endif;
if (match(mt^3*q1*q3*q4*s45^3));
 redefine rule33 "1";
 $repeat = 1;
endif;
if (match(mt^3*q2*q3*q4*s45^3));
 redefine rule34 "1";
 $repeat = 1;
endif;
if (match(q1*q2*q3*q4*s12^2*s45^2));
 redefine rule35 "1";
 $repeat = 1;
endif;
if (match(q1*q2*q3*q4*s12^3*s45));
 redefine rule36 "1";
 $repeat = 1;
endif;
if (match(mh*q1*q2*q3*q4*s45^4));
 redefine rule37 "1";
 $repeat = 1;
endif;
if (match(mt^3*q1*q3*q4*s12^2*s45));
 redefine rule38 "1";
 $repeat = 1;
endif;
if (match(mt^3*q2*q3*q4*s12^2*s45));
 redefine rule39 "1";
 $repeat = 1;
endif;
if (match(mh*mt*q1*q3*q4*s12^3*s45));
 redefine rule40 "1";
 $repeat = 1;
endif;
if (match(mh*mt*q2*q3*q4*s12^3*s45));
 redefine rule41 "1";
 $repeat = 1;
endif;
if (match(q1*q2*q3*q4*s45^5));
 redefine rule42 "1";
 $repeat = 1;
endif;
if (match(mh*mt*q1*q3*q4*s12^2*s45^2));
 redefine rule43 "1";
 $repeat = 1;
endif;
if (match(mh*mt*q2*q3*q4*s12^2*s45^2));
 redefine rule44 "1";
 $repeat = 1;
endif;
if (match(mh*q1*q3*q4*s12^2*s45^3));
 redefine rule45 "1";
 $repeat = 1;
endif;
if (match(mh*q2*q3*q4*s12^2*s45^3));
 redefine rule46 "1";
 $repeat = 1;
endif;
if (match(mt^2*q1*q3*q4*s12*s45^4));
 redefine rule47 "1";
 $repeat = 1;
endif;
if (match(mt^2*q2*q3*q4*s12*s45^4));
 redefine rule48 "1";
 $repeat = 1;
endif;
if (match(q1*q2*q4*s12^2*s45^4));
 redefine rule49 "1";
 $repeat = 1;
endif;
if (match(mt*q1*q3*q4*s12^2*s45^4));
 redefine rule50 "1";
 $repeat = 1;
endif;
if (match(mt*q2*q3*q4*s12^2*s45^4));
 redefine rule51 "1";
 $repeat = 1;
endif;
if (match(mt^2*q1*q3*q4*s12^2*s45^3));
 redefine rule52 "1";
 $repeat = 1;
endif;
if (match(mt^2*q2*q3*q4*s12^2*s45^3));
 redefine rule53 "1";
 $repeat = 1;
endif;
if (match(mt^2*q1*q3*q4*s45^6));
 redefine rule54 "1";
 $repeat = 1;
endif;
if (match(mt^2*q2*q3*q4*s45^6));
 redefine rule55 "1";
 $repeat = 1;
endif;
if (match(q1*q3*q4*s12^4*s45^4));
 redefine rule56 "1";
 $repeat = 1;
endif;
if (match(q2*q3*q4*s12^4*s45^4));
 redefine rule57 "1";
 $repeat = 1;
endif;
.sort
Skip;
NSkip `expr';
