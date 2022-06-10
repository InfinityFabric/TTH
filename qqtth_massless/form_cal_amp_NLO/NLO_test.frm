Symbol D;
Dimension D;
Symbol CA,CF,Nc,Na;
Symbol s12,s13,s14,s23,s24,s34;
Autodeclare Index i,ie,ii,iie,ig,l,le,ll,lle,a=Nc,ae=Nc,aa=Nc,c=Na,ce=Na,cc=Na,cg=Na,ccg=Na;
Autodeclare Symbol m,mt,mu,mh;
Autodeclare Vector p,q,k;
CFunction UB,U,VB,V;
CFunction ghprop,glprop,fpropu,fpropt,fprop,vrtx,prop;
CFunction f,g,t,gl,gh,gv,gg,ch,mom,gl;
Symbol Uug,Ttg,Tth,gggg,ggg,Ghghg;
Symbol gs,Y,nf,up,top;
Autodeclare Symbol basis,Basis;

Set quarkset:up,top;

Local expr= 
        - g(ie1,ie1,up,p1,ll1,p2,l6,p2,l4, p1,l5)*g(ie2,ie2,top,p3,l3,p4,ll2,p3,p3)
        - g(ie1,ie1,up,p1,ll1,p2,l6,p2,l4, p1,l5)*g(ie2,ie2,top,p3,l3,p4,ll2,q,p3)
        - g(ie1,ie1,up,p1,ll1,p2,l6,p2,l4, p1,l5)*g(ie2,ie2,top,q,l3,p4,ll2,p3,p3)
        - g(ie1,ie1,up,p1,ll1,p2,l6,p2,l4, p1,l5)*g(ie2,ie2,top,q,l3,p4,ll2,q,p3)
        + g(ie1,ie1,up,p1,ll1,p2,l6,p2,l4, k1,l5)*g(ie2,ie2,top,p3,l3,p4,ll2,p3,p3)
        + g(ie1,ie1,up,p1,ll1,p2,l6,p2,l4, k1,l5)*g(ie2,ie2,top,p3,l3,p4,ll2,q,p3)
        + g(ie1,ie1,up,p1,ll1,p2,l6,p2,l4, k1,l5)*g(ie2,ie2,top,q,l3,p4,ll2,p3,p3)
        + g(ie1,ie1,up,p1,ll1,p2,l6,p2,l4, k1,l5)*g(ie2,ie2,top,q,l3,p4,ll2,q,p3)
        - g(ie1,ie1,up,p1,ll1,p2,l6,k1,l4, p1,l5)*g(ie2,ie2,top,p3,l3,p4,ll2,p3,p3)
        - g(ie1,ie1,up,p1,ll1,p2,l6,k1,l4, p1,l5)*g(ie2,ie2,top,p3,l3,p4,ll2,q,p3)
        - g(ie1,ie1,up,p1,ll1,p2,l6,k1,l4, p1,l5)*g(ie2,ie2,top,q,l3,p4,ll2,p3,p3)
        - g(ie1,ie1,up,p1,ll1,p2,l6,k1,l4, p1,l5)*g(ie2,ie2,top,q,l3,p4,ll2,q,p3)
        + g(ie1,ie1,up,p1,ll1,p2,l6,k1,l4, k1,l5)*g(ie2,ie2,top,p3,l3,p4,ll2,p3,p3)
        + g(ie1,ie1,up,p1,ll1,p2,l6,k1,l4, k1,l5)*g(ie2,ie2,top,p3,l3,p4,ll2,q,p3)
        + g(ie1,ie1,up,p1,ll1,p2,l6,k1,l4, k1,l5)*g(ie2,ie2,top,q,l3,p4,ll2,p3,p3)
        + g(ie1,ie1,up,p1,ll1,p2,l6,k1,l4, k1,l5)*g(ie2,ie2,top,q,l3,p4,ll2,q,p3)
          ;

Multiply gl(l4,l3)*gl(l6,l5)*gl(ll1,ll2);
id gl(i1?,i2?)=d_(i1,i2);
#do i=1,10
    id once g(i1?,i1?,up?quarkset,?a)=g_(`i',?a);
#enddo

* connect lorentz index (metrix)

#do i=1,10
Tracen,`i';
#enddo

.sort
#write <try.m> "(%E)",expr
.end
