#-
#include p.h

Autodeclare Vector k,p,q;
Autodeclare Symbol i;
Symbol A,B,C,D;
#include test.h

Local f1=k1;
Local f2=k1+p1;
Local f3=k1+p1+p2;
Local f4=k1+p4+q;
Local f5=k1+q;

Local g1=k1;
Local g2=k1+p1;
Local g3=k1+p1+p2;
Local g4=k1-p4-q;
Local g5=k2;
Local g6=k2-p4-q;
Local g7=k2-q;
Local g8=k1-k2;
Local g9=k1-q;
Local g10=k2+p1;
Local g11=k2+p1+p2;

Local h1=k1;
Local h2=k1-p1;
Local h3=k1-p1-p2;
Local h4=k1+p4+q;
Local h5=k2;
Local h6=k2+q;
Local h7=k1-k2;
Local h8=k1-k2+p4;
Local h9=k2-p1;
Local h10=k2-p1-p2;
Local h11=k2+p4+q;

Local e1=k1;
Local e2=k1-p1;
Local e3=k1-p1-p2;
Local e4=k2;
Local e5=k2+p4+q;
Local e6=k2+q;
Local e7=k1-k2;
Local e8=k1-k2+p3;
Local e9=k1+q;
Local e10=k2-p1;
Local e11=k2-p1-p2;

id p3=-p3;
id p4=-p4;
id q=-q;
#call permutation

.end
