#procedure crossing

id q=p1+p2-p3-p4;

* check the file in reduze/myresults/???.match.info.inc to find crossing rules 

* pentagonbox

if (match(Sector(pentagonbox1x12,?a)));
   Multiply replace_(p1,p2,p2,p1);
   id Sector(pentagonbox1x12,?a)=Sector(pentagon1,?a)*cross1x12;
endif;

if (match(Sector(pentagonbox1x1234,?a)));
   Multiply replace_(p4,-p1,p1,p2,p3,p4,p2,-p3);
   id Sector(pentagonbox1x1234,?a)=Sector(pentagon1,?a)*cross1x1234;
endif;

if (match(Sector(pentagonbox1x12x34,?a)));
   Multiply replace_(p4,p3,p1,p2,p3,p4,p2,p1);
   id Sector(pentagonbox1x12x34,?a)=Sector(pentagon1,?a)*cross1x12x34;
endif;

if (match(Sector(pentagonbox1x12x345,?a)));
   Multiply replace_(p4,-p4+p1-p3+p2,p1,p2,p3,p4,p2,p1);
   id Sector(pentagonbox1x12x345,?a)=Sector(pentagon1,?a)*cross1x12x345;
endif;

if (match(Sector(pentagonbox1x12x354,?a)));
   Multiply replace_(p4,p3,p1,p2,p3,-p4+p1-p3+p2,p2,p1);
   id Sector(pentagonbox1x12x354,?a)=Sector(pentagon1,?a)*cross1x12x354;
endif;

if (match(Sector(pentagonbox1x12x45,?a)));
   Multiply replace_(p4,-p4+p1-p3+p2,p1,p2,p2,p1);
   id Sector(pentagonbox1x12x45,?a)=Sector(pentagon1,?a)*cross1x12x45;
endif;

* hexagonbox 

if (match(Sector(hexagonbox1x12,?a)));
   Multiply replace_(p1,p2,p2,p1);
   id Sector(hexagonbox1x12,?a)=Sector(hexgonbox1,?a)*cross1x12;
endif;

if (match(Sector(hexagonbox1x12345,?a)));
   Multiply replace_(p4,-p4+p1-p3+p2,p1,p2,p3,p4,p2,-p3);
   id Sector(hexagonbox1x12345,?a)=Sector(hexgonbox1,?a)*cross1x12345;
endif;

if (match(Sector(hexagonbox1x1235,?a)));
   Multiply replace_(p1,p2,p3,-p4+p1-p3+p2,p2,-p3);
   id Sector(hexagonbox1x1235,?a)=Sector(hexgonbox1,?a)*cross1x1235;
endif;

if (match(Sector(hexagonbox1x12354,?a)));
   Multiply replace_(p4,-p1,p1,p2,p3,-p4+p1-p3+p2,p2,-p3);
   id Sector(hexagonbox1x12354,?a)=Sector(hexgonbox1,?a)*cross1x12354;
endif;

if (match(Sector(hexagonbox1x12435,?a)));
   Multiply replace_(p4,p3,p1,p2,p3,-p4+p1-p3+p2,p2,-p4);
   id Sector(hexagonbox1x12x435,?a)=Sector(hexgonbox1,?a)*cross1x12x435;
endif;

if (match(Sector(hexagonbox1x1245,?a)));
   Multiply replace_(p4,-p4+p1-p3+p2,p1,p2,p2,-p4);
   id Sector(hexagonbox1x1245,?a)=Sector(hexgonbox1,?a)*cross1x1245;
endif;

if (match(Sector(hexagonbox1x124x35,?a)));
   Multiply replace_(p4,-p1,p1,p2,p3,-p4+p1-p3+p2,p2,-p4);
   id Sector(hexagonbox1x124x35,?a)=Sector(hexgonbox1,?a)*cross1x124x35;
endif;

if (match(Sector(hexagonbox1x125,?a)));
   Multiply replace_(p1,p2,p2,p4-p1+p3-p2);
   id Sector(hexagonbox1x125,?a)=Sector(hexgonbox1,?a)*cross1x125;
endif;

if (match(Sector(hexagonbox1x125x34,?a)));
   Multiply replace_(p4,p3,p1,p2,p3,p4,p2,p4-p1+p3-p2);
   id Sector(hexagonbox1x125x34,?a)=Sector(hexgonbox1,?a)*cross1x125x34;
endif;

if (match(Sector(hexagonbox1x12x34,?a)));
   Multiply replace_(p4,p3,p1,p2,p3,p4,p2,p1);
   id Sector(hexagonbox1x12x34,?a)=Sector(hexgonbox1,?a)*cross1x12x34;
endif;

if (match(Sector(hexagonbox1x12x354,?a)));
   Multiply replace_(p4,p3,p1,p2,p3,-p4+p1-p3+p2,p2,p1);
   id Sector(hexagonbox1x12x354,?a)=Sector(hexgonbox1,?a)*cross1x12x354;
endif;

if (match(Sector(hexagonbox1x132,?a)));
   Multiply replace_(p1,p2,p3,-p1,p2,-p3);
   id Sector(hexagonbox1x132,?a)=Sector(hexgonbox1,?a)*cross1x132;
endif;

if (match(Sector(hexagonbox1x1342,?a)));
   Multiply replace_(p4,-p2,p1,-p3,p3,p4,p2,p1);
   id Sector(hexagonbox1x1342,?a)=Sector(hexgonbox1,?a)*cross1x1342;
endif;

if (match(Sector(hexagonbox1x13425,?a)));
   Multiply replace_(p4,-p2,p1,-p3,p3,p4,p2,p4-p1+p3-p2);
   id Sector(hexagonbox1x13425,?a)=Sector(hexgonbox1,?a)*cross1x13425;
endif;

if (match(Sector(hexagonbox1x134x25,?a)));
   Multiply replace_(p4,-p1,p1,-p3,p3,p4,p2,p4-p1+p3-p2);
   id Sector(hexagonbox1x134x25,?a)=Sector(hexgonbox1,?a)*cross1x134x25;
endif;

if (match(Sector(hexagonbox1x13x24,?a)));
   Multiply replace_(p4,-p2,p1,-p3,p3,-p1,p2,-p4);
   id Sector(hexagonbox1x13x24,?a)=Sector(hexgonbox1,?a)*cross1x13x24;
endif;

if (match(Sector(hexagonbox1x13x25,?a)));
   Multiply replace_(p1,-p3,p3,-p1,p2,p4-p1+p3-p2);
   id Sector(hexagonbox1x13x25,?a)=Sector(hexgonbox1,?a)*cross1x13x25;
endif;

if (match(Sector(hexagonbox1x142,?a)));
   Multiply replace_(p4,-p2,p1,-p4,p2,p1);
   id Sector(hexagonbox1x142,?a)=Sector(hexgonbox1,?a)*cross1x142;
endif;

#endprocedure
