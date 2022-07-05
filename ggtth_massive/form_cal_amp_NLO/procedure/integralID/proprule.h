#procedure proprule

if (match(Sector(pentagon1,?a)));
argument;

id q=p1+p2-p3-p4;

id p1.p1=0;
id p2.p2=0;
id p3.p3=mt^2;
id p4.p4=mt^2;

id p1.p2=s12/2;
id p1.p3=-1/2*s45+1/2*s12+1/2*s23;
id p1.p4=1/2*s45-1/2*mh^2+1/2*s51-1/2*s23;
id p2.p3=1/2*mt^2-1/2*s23;
id p2.p4=-1/2*mt^2+1/2*s34-1/2*s51+1/2*s23;
id p3.p4=-mt^2+1/2*s34;

endargument;
endif;

if (match(Sector(pentagon2,?a)));
argument;

id q=p1+p2-p3-p4;

id p1.p1=0;
id p2.p2=0;
id p3.p3=mt^2;
id p4.p4=mt^2;

id p1.p2=-1/2*s51+1/2*s34+1/2*mh^2-1/2*s25;
id p1.p3=-1/2*s13+1/2*mt^2;
id p1.p4=1/2*s34-1/2*s25+1/2*s13-1/2*mt^2;
id p2.p3=1/2*s24-1/2*s51+1/2*s34-1/2*mt^2;
id p2.p4=-1/2*s24+1/2*mt^2;
id p3.p4=1/2*s34-mt^2;

endargument;
endif;

if (match(Sector(pentagon3,?a)));
argument;

id q=p1+p2-p3-p4;

id p1.p1=0;
id p2.p2=0;
id p3.p3=mt^2;
id p4.p4=mt^2;

id p1.p2=-1/2*s23+1/2*s45+1/2*mt^2-1/2*s13;
id p1.p3=1/2*mt^2-1/2*s13;
id p1.p4=1/2*s51-1/2*s23-1/2*mh^2+1/2*s45;
id p2.p3=-1/2*s23+1/2*mt^2;
id p2.p4=-1/2*s24+1/2*mt^2;
id p3.p4=-1/2*s24+1/2*s51-1/2*s23;

endargument;
endif;

if (match(Sector(pentagon4,?a)));
argument;

id q=p1+p2-p3-p4;

id p1.p1=0;
id p2.p2=0;
id p3.p3=mt^2;
id p4.p4=mt^2;

id p1.p2=s12/2;
id p1.p3=1/2*s23-1/2*s45+1/2*s12;
id p1.p4=1/2*mt^2-1/2*s14;
id p2.p3=-1/2*s23+1/2*mt^2;
id p2.p4=1/2*s12-1/2*s35+1/2*s14;
id p3.p4=-1/2*s45+1/2*s12-1/2*s35+1/2*mh^2;

endargument;
endif;

#endprocedure
