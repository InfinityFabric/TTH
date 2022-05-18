#procedure complexconjugate

id i_=-i_;

Multiply replace_(<i1,ii1>,...,<i100,ii100>);
Multiply replace_(<ie1,iie1>,...,<ie100,iie100>);
Multiply replace_(<l1,ll1>,...,<l100,ll100>);
Multiply replace_(<le1,lle1>,...,<le100,lle100>);
Multiply replace_(<a1,aa1>,...,<a100,aa100>);
Multiply replace_(<c1,cc1>,...,<c100,cc100>);
Multiply replace_(<cg1,ccg1>,...,<cg100,ccg100>);
Multiply replace_(<basis1,Basis1>,...,<basis100,Basis100>);

id g(i1?,i2?,up?quarkset,?a)=g(i2,i1,up,?a);
id t(i1?,i2?,i3?)=t(i1,i3,i2);
id gl(i1?,i2?)=gl(i2,i1);

Multiply replace_(UB,U,U,UB,VB,V,V,VB);

#endprocedure
