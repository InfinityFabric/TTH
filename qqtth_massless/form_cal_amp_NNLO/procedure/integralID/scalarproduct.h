#procedure scalarproduct

* integral family 1

if (match(Sector(pentagonbox1,?a)));

id p1.p1=0;
id p2.p2=0;
id p3.p3=0;
id p4.p4=0;

id p1.p2=s12/2;
id p1.p3=(s12+s23-s45)/2;
id p1.p4=(-0-s23+s45+s51)/2;
id p2.p3=-(s23-0)/2;
id p2.p4=(-0+s23+s34-s51)/2;
id p3.p4=(s34-2*0)/2;

id k1.k1=sc1;
id k1.p1=sc2;
id k1.p2=sc3;
id k1.p3=sc4;
id k1.p4=sc5;

endif;

* integral family 2

if (match(Sector(hexagonbox1,?a)));

id q=p1+p2-p3-p4;

id p1.p1=0;
id p2.p2=0;
id p3.p3=0;
id p4.p4=0;

id p1.p2=s12/2;
id p1.p3=(0-s31)/2;
id p1.p4=(s12+s24-s53)/2;
id p2.p3=(s12+s31-s45)/2;
id p2.p4=(0-s24)/2;
id p3.p4=(0+s12-s45-s53)/2;

id k1.k1=sc1;
id k1.p1=sc2;
id k1.p2=sc3;
id k1.p3=sc4;
id k1.p4=sc5;

endif;

#endprocedure
