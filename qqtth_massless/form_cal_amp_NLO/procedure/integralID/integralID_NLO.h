#procedure integralID

id Sector(pentagon?,i1?,i2?)=Sector(pentagon,i1,i2,0,0,0,0);

Transform Sector decode(last,3):base=2;

id Sector(pentagon?,i1?,i2?,i3?,i4?,i5?,i6?,0,0,0,0)=Sector(pentagon,i1,i2,i3,i4,i5,i6);

*repeat id Sector(pentagon?,i1?,?a,i?!{0,1})=Sector(pentagon,i1,?a,mod_(i,2),integer_(div_(i,2)));
*
*id Sector(pentagon?,i?,i1?)=Sector(pentagon,i,i1,0);
*id Sector(pentagon?,i?,i1?,i2?)=Sector(pentagon,i,i1,i2,0);
*id Sector(pentagon?,i?,i1?,i2?,i3?)=Sector(pentagon,i,i1,i2,i3,0);
*id Sector(pentagon?,i?,i1?,i2?,i3?,i4?)=Sector(pentagon,i,i1,i2,i3,i4,0);
   
*id Sector(pentagon?,i?,i1?,i2?,i3?,i4?,i5?)=
*    Sector(pentagon)*
*    prop1^(-i1)*
*    prop2^(-i2)*
*    prop3^(-i3)*
*    prop4^(-i4)*
*    prop5^(-i5);

*id sc1=prop1;
*id sc2=(prop2-prop1)/2;
*id sc3=(prop3-prop2-s12)/2;
*id sc4=-(prop4-prop3+s12-s45)/2;
*id sc5=-(prop5-prop4+s45)/2;

*id Sector(pentagon?)*prop1^a1?*prop2^a2?*prop3^a3?*prop4^a4?*prop5^a5?=pentagon(-a1,-a2,-a3,-a4,-a5);
id Sector(pentagon?,i?,i1?,i2?,i3?,i4?,i5?)*prop1^a1?*prop2^a2?*prop3^a3?*prop4^a4?*prop5^a5?=pentagon(i1-a1,i2-a2,i3-a3,i4-a4,i5-a5);

#endprocedure
