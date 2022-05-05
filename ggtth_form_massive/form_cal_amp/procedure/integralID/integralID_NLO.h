#procedure integralID

repeat id Sector(pentagon?,i1?,?a,i?!{0,1})=Sector(pentagon,i1,?a,mod_(i,2),integer_(div_(i,2)));

id Sector(pentagon?,i?,i1?)=Sector(pentagon,i,i1,0);
id Sector(pentagon?,i?,i1?,i2?)=Sector(pentagon,i,i1,i2,0);
id Sector(pentagon?,i?,i1?,i2?,i3?)=Sector(pentagon,i,i1,i2,i3,0);
id Sector(pentagon?,i?,i1?,i2?,i3?,i4?)=Sector(pentagon,i,i1,i2,i3,i4,0);
   
id Sector(pentagon?,i?,i1?,i2?,i3?,i4?,i5?)=
    Sector(pentagon)*
    prop1^(-i1)*
    prop2^(-i2)*
    prop3^(-i3)*
    prop4^(-i4)*
    prop5^(-i5);

#do i=1,4

    if(match(Sector(pentagon`i')));
   
    goto `i';
    endif;

#enddo

#include ../reduze/creat_integralfamiles/scalarset.h
   
#do i=1,120
    label 1000`i';
#enddo

id Sector(pentagon?)*prop1^a1?*prop2^a2?*prop3^a3?*prop4^a4?*prop5^a5?=pentagon(-a1,-a2,-a3,-a4,-a5);

#endprocedure
