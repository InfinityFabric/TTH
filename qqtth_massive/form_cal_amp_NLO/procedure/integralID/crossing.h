#procedure crossing

* check the file in reduze/myresults/???.match.info.inc to find crossing rules 

if (match(Sector(pentagon1x12x34,?a)));
   Multiply replace_(p1,p2,p2,p1,p3,p4,p4,p3);
   id Sector(pentagon1x12x34,?a)=Sector(pentagon1,?a);
endif;

if (match(Sector(pentagon2x12,?a)));
   Multiply replace_(p1,p2,p2,p1);
   id Sector(pentagon2x12,?a)=Sector(pentagon2,?a);
endif;

#endprocedure
