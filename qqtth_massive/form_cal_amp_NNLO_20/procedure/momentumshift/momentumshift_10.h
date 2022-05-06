#procedure momentumshift

.sort

#do i=1,720
    #do j=1,2
       
        Skip;

        Global am10o`i'o`j'=Mat10o`i'o`j';

        Multiply left DiaMatch(`i');
        
        .sort

	Drop Mat10o`i'o`j';
	.sort
    #enddo
#enddo

#include ../reduze/myresults/qqtthoneloop.match.info.inc

id Shift(p1?,p2?,[])=replace_(p1,p2);
id prop(?a)=1;

#endprocedure
