#-
#include p.h

Autodeclare Vector k,p,q;
Autodeclare Symbol i;
Symbol A,B,C,D,mt,m;

#include test.h

Local g1=k1;
Local g2=k1+p1;
Local g3=k1+p1+p2;
Local g4=k1-p4-p5;
Local g5=k2;
Local g6=k2-p4-p5;
Local g7=k2-p5;
Local g8=k1-k2;
Local g9=k1-p5;
Local g10=k2+p1;
Local g11=k2+p1+p2;

Local h1=k1;
Local h2=k1-p1;
Local h3=k1-p1-p2;
Local h4=k1+p4+p5;
Local h5=k2;
Local h6=k2+p5;
Local h7=k1-k2;
Local h8=k1-k2+p4;
Local h9=k2-p1;
Local h10=k2-p1-p2;
Local h11=k2+p4+p5;

Local f1=k1;
Local f2=k1-p1;
Local f3=k1-p1-p2;
Local f4=k2;
Local f5=k2+p4+p5;
Local f6=k2+p5;
Local f7=k1-k2;
Local f8=k1-k2+p3;
Local f9=k1+p5;
Local f10=k2-p1;
Local f11=k2-p1-p2;

#call permutation

.end
