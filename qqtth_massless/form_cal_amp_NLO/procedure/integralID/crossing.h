#procedure crossing

*argument;
*id q=p1+p2-p3-p4;
*endargument;
*
*id q=p1+p2-p3-p4;

* check the file in reduze/myresults/???.match.info.inc to find crossing rules 

if (match(Sector(pentagon1x12x34,?a)));
   Multiply replace_(p1,p2,p2,p1,p3,p4,p4,p3);
*   Multiply replace_(p1,p2,p2,p1,p3,p4,p4,p3);
*   Transform prop replace(1,last)=(p1,p2,p2,p1,p3,p4,p4,p3);
*   argument;
*   Multiply replace_(p1,p2,p2,p1,p3,p4,p4,p3);
*   endargument;
   id Sector(pentagon1x12x34,?a)=Sector(pentagon1,?a)*cross1x12x34;
endif;

if (match(Sector(pentagon1x12x345,?a)));
   Multiply replace_(p1,p2,p2,p1,p3,q,p4,p3,q,p4);
*   Multiply replace_(p2,p1,p4,p2-p4+p1-p3,p1,p2,p3,p4);
*   argument;
*   Multiply replace_(p2,p1,p4,p2-p4+p1-p3,p1,p2,p3,p4);
*   endargument;
   id Sector(pentagon1x12x345,?a)=Sector(pentagon1,?a)*cross1x12x345;
endif;

if (match(Sector(pentagon1x12x354,?a)));
   Multiply replace_(p1,p2,p2,p1,p3,p4,q,p3,p4,q);
*   Multiply replace_(p2,p1,p4,p3,p1,p2,p3,p2-p4+p1-p3);
*   argument;
*   Multiply replace_(p2,p1,p4,p3,p1,p2,p3,p2-p4+p1-p3);
*   endargument;
   id Sector(pentagon1x12x354,?a)=Sector(pentagon1,?a)*cross1x12x354;
endif;

if (match(Sector(pentagon1x12,?a)));
   Multiply replace_(p1,p2,p2,p1);
*   Multiply replace_(p1,p2,p2,p1);
*   argument;
*   Multiply replace_(p1,p2,p2,p1);
*   endargument;
   id Sector(pentagon1x12,?a)=Sector(pentagon1,?a)*cross1x12;
endif;

if (match(Sector(pentagon1x12x45,?a)));
   Multiply replace_(p1,p2,p2,p1,p4,q,q,p4);
*   Multiply replace_(p2,p1,p4,p2-p4+p1-p3,p1,p2);
*   argument;
*   Multiply replace_(p2,p1,p4,p2-p4+p1-p3,p1,p2);
*   endargument;
   id Sector(pentagon1x12x45,?a)=Sector(pentagon1,?a)*cross1x12x45;
endif;

#endprocedure
