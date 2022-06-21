#procedure squareamplitude(Amp0,Amp1,Mat)

* put momentum into spin line

id gl(i1?,i2?)=d_(i1,i2);

id g(i1?,i2?,up?fermionset,?a,i3?lset,?b)*mom(i3?lset,p?)=g(i1,i2,up,?a,p,?b);
id g(i1?,i2?,up?fermionset,?a,i3?leset,?b)*mom(i3?leset,p?)=g(i1,i2,up,?a,p,?b);
id g(i1?,i2?,up?fermionset,?a,i3?llset,?b)*mom(i3?llset,p?)=g(i1,i2,up,?a,p,?b);
id g(i1?,i2?,up?fermionset,?a,i3?lleset,?b)*mom(i3?lleset,p?)=g(i1,i2,up,?a,p,?b);

*id mom(i1?,p?)=p(i1);

.sort

Global `Mat'=`Amp0'*`Amp1';

id E(i1?,p?,m?,up?particleset)*EB(i2?,p?,m?,up?particleset)=-d_(i1,i2);
id U(i1?,p?,m?,up?particleset)*UB(i2?,p?,m?,up?particleset)=g(i1,i2,up,p)+g(i1,i2,up)*m;
id V(i1?,p?,m?,up?particleset)*VB(i2?,p?,m?,up?particleset)=-g(i1,i2,up,p)+g(i1,i2,up)*m;

* connect spin line

repeat id g(i1?,i2?,up?fermionset,?a)*g(i2?,i3?,up?fermionset,?b)=g(i1,i3,up,?a,?b);

.sort

Skip;
NSkip `Mat';

#do i=1,10
    id once g(i1?,i1?,up?fermionset,?a)=g_(`i',?a);
#enddo

* connect lorentz index (metrix)

id gl(i1?,i2?)=d_(i1,i2);

id mom(i1?,p?)=p(i1);

#do i=1,10
Tracen,`i';
#enddo

#endprocedure
