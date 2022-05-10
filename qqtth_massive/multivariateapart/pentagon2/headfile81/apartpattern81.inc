#define rule1 "0"
#define rule2 "0"
#define rule3 "0"
#define rule4 "0"
#define rule5 "0"
if (match(mt*q2));
 redefine rule1 "1";
 $repeat = 1;
endif;
if (match(q3*s45));
 redefine rule2 "1";
 $repeat = 1;
endif;
if (match(d*q1));
 redefine rule3 "1";
 $repeat = 1;
endif;
if (match(mt^4*q4));
 redefine rule4 "1";
 $repeat = 1;
endif;
if (match(q2*q4*s12^2));
 redefine rule5 "1";
 $repeat = 1;
endif;
.sort
Skip;
NSkip `expr';
