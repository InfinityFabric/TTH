#procedure numbertoindex

* external index

#do i=-9,0
    id vrtx(Uug?,?a,`i',?b)=vrtx(Uug,?a,ie{`i'*(-1)},?b);
    id U(`i',p?,m?,up?quarkset)=U(ie{`i'*(-1)},p,m,up);
    id UB(`i',p?,m?,up?quarkset)=UB(ie{`i'*(-1)},p,m,up);
    id V(`i',p?,m?,up?quarkset)=V(ie{`i'*(-1)},p,m,up);
    id VB(`i',p?,m?,up?quarkset)=VB(ie{`i'*(-1)},p,m,up);
#enddo

* internal index

#do i=1,20
    id vrtx(Uug?,?a,`i',?b)=vrtx(Uug,?a,i{`i'},?b);
#enddo

* propagators only have internal index , so only need to change internal index

#do i=1,20
    id glprop(?a,`i',?b,p?,m?)=glprop(?a,i{`i'},?b,p,m);
    id fpropu(?a,`i',?b,p?,m?)=fpropu(?a,i{`i'},?b,p,m);
    id fpropt(?a,`i',?b,p?,m?)=fpropt(?a,i{`i'},?b,p,m);
    id ghprop(?a,`i',?b,p?,m?)=ghprop(?a,i{`i'},?b,p,m);
#enddo

#endprocedure
