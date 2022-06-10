#procedure crossing

id q=p1+p2-p3-p4;

* check the file in reduze/myresults/???.match.info.inc to find crossing rules 

   id Sector(pentagon1x12x34,?a)=Sector(pentagon1,?a)*cross1x12x34;
   id Sector(pentagon1x12x345,?a)=Sector(pentagon1,?a)*cross1x12x345;
   id Sector(pentagon1x12x354,?a)=Sector(pentagon1,?a)*cross1x12x354;
   id Sector(pentagon1x12,?a)=Sector(pentagon1,?a)*cross1x12;
   id Sector(pentagon1x12x45,?a)=Sector(pentagon1,?a)*cross1x12x45;
#endprocedure
