#procedure integralID

id Sector(pentagon?,i1?,i2?)=Sector(pentagon,i1,i2,0,0,0,0);

Transform Sector decode(last,3):base=2;

id Sector(pentagon?,i1?,i2?,i3?,i4?,i5?,i6?,0,0,0,0)=Sector(pentagon,i1,i2,i3,i4,i5,i6);

id Sector(pentagon?,i?,i1?,i2?,i3?,i4?,i5?)*prop1^a1?*prop2^a2?*prop3^a3?*prop4^a4?*prop5^a5?=pentagon(i1-a1,i2-a2,i3-a3,i4-a4,i5-a5);

#endprocedure
