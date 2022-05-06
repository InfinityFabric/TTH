#procedure scalarproduct

id q=p1+p2-p3-p4;

id p1.p1=mu^2;
id p2.p2=mu^2;
id p3.p3=mt^2;
id p4.p4=mt^2;

id p1.p2=s12/2;
id p1.p3=-s13/2;
id p1.p4=-s14/2;
id p2.p3=-s23/2;
id p2.p4=-s24/2;
id p3.p4=s34/2;

id k1.k1=sc1;
id k1.p1=sc2;
id k1.p2=sc3;
id k1.p3=sc4;
id k1.p4=sc5;

#endprocedure
