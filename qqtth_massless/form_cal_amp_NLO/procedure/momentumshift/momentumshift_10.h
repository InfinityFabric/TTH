#procedure momentumshift

.sort

#do i=1,31
    #do j=1,2
       
        Skip;

        Global am10o`i'o`j'=Mat10o`i'o`j';

        Multiply left DiaMatch(`i');
        
        .sort

	Drop Mat10o`i'o`j';
	.sort
    #enddo
#enddo

#include ../reduze_NLO/myresults/qqtthoneloop.match.info.inc

id Shift(p1?$i1,p2?$i2,[])=Shift(p1,p2,[]);

id Shift(p1?,p2?,[])=replace_(p1,p2);

Transform prop replace(1,last)=($i1,$i2);

.sort

Splitarg prop;
id prop(?a,p?kset,?b)=1;

repeat id prop(?a,p1?,p2?,a?)=prop(?a,p1+p2,a);
id prop(p1?,a?)=prop(p1.p1-a^2);

#include ./procedure/momentumshift/treeproprule.h

#endprocedure
