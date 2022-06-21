#procedure crossing

* check the file in reduze/myresults/???.match.info.inc to find crossing rules 

if (match(Sector(pentagon1x12,?a)));
   Multiply replace_(p1,p2,p2,p1);
   id Sector(pentagon1x12,?a)=Sector(pentagon1,?a)*cross1x12;
endif;

if (match(Sector(pentagon1x123,?a)));
   Multiply replace_(p1,p3,p2,p1,p3,p2);
   id Sector(pentagon1x123,?a)=Sector(pentagon1,?a)*cross1x123;
endif;

if (match(Sector(pentagon1x1234,?a)));
   Multiply replace_(p1,p4,p2,p1,p3,p2,p4,p3);
   id Sector(pentagon1x1234,?a)=Sector(pentagon1,?a)*cross1x1234;
endif;

if (match(Sector(pentagon1x124,?a)));
   Multiply replace_(p1,p4,p2,p1,p4,p2);
   id Sector(pentagon1x124,?a)=Sector(pentagon1,?a)*cross1x124;
endif;

if (match(Sector(pentagon1x1243,?a)));
   Multiply replace_(p1,p3,p2,p1,p3,p4,p4,p2);
   id Sector(pentagon1x1243,?a)=Sector(pentagon1,?a)*cross1x1243;
endif;

if (match(Sector(pentagon1x12x34,?a)));
   Multiply replace_(p1,p2,p2,p1,p3,p4,p4,p3);
   id Sector(pentagon1x12x34,?a)=Sector(pentagon1,?a)*cross1x12x34;
endif;

if (match(Sector(pentagon1x13,?a)));
   Multiply replace_(p1,p3,p3,p1);
   id Sector(pentagon1x13,?a)=Sector(pentagon1,?a)*cross1x13;
endif;

if (match(Sector(pentagon1x132,?a)));
   Multiply replace_(p1,p2,p2,p3,p3);
   id Sector(pentagon1x132,?a)=Sector(pentagon1,?a)*cross1x132;
endif;

if (match(Sector(pentagon1x1324,?a)));
   Multiply replace_(p1,p2,p3,p1,p2,p3,p4,p2);
   id Sector(pentagon1x1324,?a)=Sector(pentagon1,?a)*cross1x1324;
endif;

if (match(Sector(pentagon1x134,?a)));
   Multiply replace_(p1,p4,p3,p1,p4,p3);
   id Sector(pentagon1x134,?a)=Sector(pentagon1,?a)*cross1x134;
endif;

if (match(Sector(pentagon1x14,?a)));
   Multiply replace_(p1,p4,p4,p1);
   id Sector(pentagon1x14,?a)=Sector(pentagon1,?a)*cross1x14;
endif;

#endprocedure
