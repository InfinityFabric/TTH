#procedure squareamplitude(Amp0,Amp1,Mat)
.sort

Global `Mat'=`Amp0'*`Amp1';

id U(i1?,p?,m?,up?quarkset)*UB(i2?,p?,m?,up?quarkset)=g(i1,i2,up,p)+g(i1,i2,up)*m;
id V(i1?,p?,m?,up?quarkset)*VB(i2?,p?,m?,up?quarkset)=-g(i1,i2,up,p)+g(i1,i2,up)*m;

* connect spin line

repeat id g(i1?,i2?,up?quarkset,?a)*g(i2?,i3?,up?quarkset,?b)=g(i1,i3,up,?a,?b);

.sort

Skip;
NSkip `Mat';

#do i=1,10
    id once g(i1?,i1?,up?quarkset,?a)=g_(`i',?a);
#enddo

* connect lorentz index (metrix)

id gl(i1?,i2?)=d_(i1,i2);

#do i=1,10
Tracen,`i';
#enddo

id mom(i1?,p?)=p(i1);

#endprocedure
