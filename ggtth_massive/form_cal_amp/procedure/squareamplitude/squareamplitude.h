#procedure squareamplitude(Amp0,Amp1,Mat)
.sort

Global `Mat'=`Amp0'*`Amp1';

id U(i1?,p?,m?)*UB(i2?,p?,m?)=g(i1,i2,p)+g(i1,i2)*m;
id V(i1?,p?,m?)*VB(i2?,p?,m?)=-g(i1,i2,p)+g(i1,i2)*m;

id Epsilon(i1?ieset?leset,p1?,m1?)*EpsilonB(i2?iieset?lleset,p1?,m1?)=-gl(i1,i2);

* seperate momentum combination like f(...,p+q,...) into f(...,p,...)+f(...,q,...) form

id g(i1?,i2?,i3?)=g(i1,i2,i3);

* connect spin line

repeat id g(i1?,i2?,?a)*g(i2?,i3?,?b)=g(i1,i3,?a,?b);

.sort

Skip;
NSkip `Mat';

#do i=1,10
    id once g(i1?,i1?,?a)=g_(`i',?a);
#enddo

* connect lorentz index (metrix)

id gl(i1?,i2?)=d_(i1,i2);

#do i=1,10
Tracen,`i';
#enddo

id mom(i1?,p?)=p(i1);

#endprocedure
