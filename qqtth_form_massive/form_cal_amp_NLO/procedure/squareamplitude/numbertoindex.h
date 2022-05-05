#procedure numbertoindex

* external index

#do i=-9,0
    id vrtx(Uug?,?a,`i',?b)=vrtx(Uug,?a,ie{`i'*(-1)},?b);
    id U(`i',p?,m?)=U(ie{`i'*(-1)},p,m);
    id UB(`i',p?,m?)=UB(ie{`i'*(-1)},p,m);
    id V(`i',p?,m?)=V(ie{`i'*(-1)},p,m);
    id VB(`i',p?,m?)=VB(ie{`i'*(-1)},p,m);
#enddo

* internal index

#do i=1,20
    id vrtx(Uug?,?a,`i',?b)=vrtx(Uug,?a,i{`i'},?b);
#enddo

* propagators only have internal index , so only need to change internal index

#do i=1,20
    id glprop(?a,`i',?b,p?,m?)=glprop(?a,i{`i'},?b,p,m);
    id fprop(?a,`i',?b,p?,m?)=fprop(?a,i{`i'},?b,p,m);
    id ghprop(?a,`i',?b,p?,m?)=ghprop(?a,i{`i'},?b,p,m);
#enddo

#endprocedure
