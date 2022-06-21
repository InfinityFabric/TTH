#-
Symbol s12,s23,s34,s45,s51,mt,mu,mh,d;
Symbol x;
CFunction pentagon1,num,den;

off statistics;
#include kira_myintegrals.inc

#do i=1,120
    Local ex`i'=expr`i';
#enddo
.sort
#include kira_rule_1.inc


id s12=1;
id s23=25;
id s34=3;
id s45=4;
id s51=5;
id mh=6;
id mt=7;
id d=8;

argument;
id s12=1;
id s23=25;
id s34=3;
id s45=4;
id s51=5;
id mh=6;
id mt=7;
id d=8;
endargument;

id den(x?number_)=1/x;
id num(x?number_)=x;

.sort

#do i=1,120
Local dif`i'=ex`i'-expr`i';
Print dif`i';
.sort
#enddo

Print;
.end
