#procedure seperatecolorlorentzindex

* lorentz index

id g(i1?,i2?,i3?iset?lset)=g(i1,i2,i3);
id g(i1?,i2?,i3?ieset?leset)=g(i1,i2,i3);

id gg(i1?iset?lset,i2?)=gg(i1,i2);
id gg(i1?,i2?iset?lset)=gg(i1,i2);
id gg(i1?ieset?leset,i2?)=gg(i1,i2);
id gg(i1?,i2?ieset?leset)=gg(i1,i2);
id gg(i1?,i2?)=d_(i1,i2);

id gl(i1?iset?lset,i2?iset?lset)=gl(i1,i2);

id gv(i1?iset?lset,i2?)=gv(i1,i2);
id gv(i1?,i2?iset?lset)=gv(i1,i2);
id gv(i1?ieset?leset,i2?)=gv(i1,i2);
id gv(i1?,i2?ieset?leset)=gv(i1,i2);
id gv(i1?,i2?)=d_(i1,i2);

id mom(i1?iset?lset,p?)=mom(i1,p);

* color index

id f(i1?iset?cset,i2?,i3?)=f(i1,i2,i3);
id f(i1?ieset?ceset,i2?,i3?)=f(i1,i2,i3);
id f(i1?igset?cgset,i2?,i3?)=f(i1,i2,i3);
id f(i1?,i2?iset?cset,i3?)=f(i1,i2,i3);
id f(i1?,i2?ieset?ceset,i3?)=f(i1,i2,i3);
id f(i1?,i2?igset?cgset,i3?)=f(i1,i2,i3);
id f(i1?,i2?,i3?iset?cset)=f(i1,i2,i3);
id f(i1?,i2?,i3?ieset?ceset)=f(i1,i2,i3);
id f(i1?,i2?,i3?igset?cgset)=f(i1,i2,i3);

id gh(i1?iset?cset,i2?iset?cset)=d_(i1,i2);

id t(i1?iset?cset,i2?,i3?)=t(i1,i2,i3);
id t(i1?ieset?ceset,i2?,i3?)=t(i1,i2,i3);

id t(i1?,i2?iset?aset,i3?)=t(i1,i2,i3);
id t(i1?,i2?,i3?iset?aset)=t(i1,i2,i3);
id t(i1?,i2?ieset?aeset,i3?)=t(i1,i2,i3);
id t(i1?,i2?,i3?ieset?aeset)=t(i1,i2,i3);

id glprop(i1?iset?cset,i2?iset?cset)=d_(i1,i2);

id fprop(i1?iset?aset,i2?iset?aset)=d_(i1,i2);

id ch(i1?iset?aset,i2?)=ch(i1,i2);
id ch(i1?ieset?aeset,i2?)=ch(i1,i2);
id ch(i1?,i2?iset?aset)=ch(i1,i2);
id ch(i1?,i2?ieset?aeset)=ch(i1,i2);
id ch(i1?,i2?)=d_(i1,i2);

#endprocedure
