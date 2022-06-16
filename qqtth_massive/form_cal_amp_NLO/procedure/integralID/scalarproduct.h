#procedure scalarproduct

id q=p1+p2-p3-p4;

* integral family 1

if (match(Sector(pentagon1,?a)));

id p1.p1=0;
id p2.p2=0;
id p3.p3=mt^2;
id p4.p4=mt^2;
id q.q=mh^2;

id p1.p2=s12/2;
id p1.p3=(s12+s23-s45)/2;
id p1.p4=(-s23+s45+s51-mh^2)/2;
id p2.p3=(-s23+mt^2)/2;
id p2.p4=(s23+s34-s51-mt^2)/2;
id p3.p4=(s34-mt^2)/2;

id k1.k1=prop1;
id k1.p1=(prop2-prop1)/2;
id k1.p2=(prop3-prop2-s12)/2;
id k1.p3=-(prop4-prop3+s12-s45-mt^2)/2;
id k1.p4=-(prop5-prop4+s45+mt^2-mh^2)/2;

endif;

* integral family 2

if (match(Sector(pentagon2,?a)));

id p1.p1=0;
id p2.p2=0;
id p3.p3=mt^2;
id p4.p4=mt^2;
id q.q=mh^2;

id p1.p2=s12/2;
id p1.p3=(s12+s23-s45)/2;
id p1.p4=(-s23+s45+s51-mh^2)/2;
id p2.p3=(-s23+mt^2)/2;
id p2.p4=(s23+s34-s51-mt^2)/2;
id p3.p4=(s34-mt^2)/2;

id k1.k1=prop1;
id k1.p1=(porp2-prop1)/2;
id k1.p2=(prop3-prop2-s12)/2;
id k1.p3=(prop5-prop1)/2;
id k1.p4=(prop3-prop4+mh^2-s45+mt^2-s34)/2;

endif;

#endprocedure
