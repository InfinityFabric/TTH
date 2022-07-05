#procedure proprule

if (match(Sector(pentagon1,?a)));

argument;

id q=p1+p2-p3-p4;

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

endargument;
endif;

if (match(Sector(pentagon2,?a)));

argument;

id q=p1+p2-p3-p4;

id p1.p1=0;
id p2.p2=0;
id p3.p3=mt^2;
id p4.p4=mt^2;
id q.q=mh^2;

id p1.p2=s12/2;
id p1.p3=-1/2*s31+1/2*mt^2;
id p1.p4=1/2*s12+1/2*s24-1/2*s53;
id p2.p3=1/2*s12-1/2*s45+1/2*s31;
id p2.p4=-1/2*s24+1/2*mt^2;
id p3.p4=1/2*s12-1/2*s45+1/2*mh^2-1/2*s53;

endargument;
endif;

#endprocedure
