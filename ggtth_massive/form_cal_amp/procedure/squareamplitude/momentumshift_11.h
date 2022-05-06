#procedure momentumshift

.sort
CFunction Sector,Shift,DiaMatch;
Autodeclare CFunction pentagon;
Symbol [];

#do i=1,134
       
        Skip;
	NSkip loop1diagram`i';

        Multiply left DiaMatch(`i');

	.sort

#enddo

#include ../reduze/myresults/ggtthoneloop.match.info.inc

id Shift(p1?,p2?,[],p3?,p4?,[])=Shift(p1,p2,[])*Shift(p3,p4,[]);
id Shift(p1?,p2?,[])=replace_(p1,p2);
id prop(?a)=1;

#endprocedure
