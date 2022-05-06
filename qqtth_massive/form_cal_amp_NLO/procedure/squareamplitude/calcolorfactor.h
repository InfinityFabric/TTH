#procedure calcolorfactor

.sort

Autodeclare Index fc=Nc;
Autodeclare Index b=Nc;
CFunction d;

#do i=0,10
    id once f(i1?,i2?,i3?)=-2*i_*t(i1,fc{`i'*3},fc{`i'*3+1})*
            (t(i2,fc{`i'*3+1},fc{`i'*3+2})*t(i3,fc{`i'*3+2},fc{`i'*3})-
             t(i3,fc{`i'*3+1},fc{`i'*3+2})*t(i2,fc{`i'*3+2},fc{`i'*3}));
#enddo

repeat;
   id once t(i1?,i2?,i3?)*t(i1?,i4?,i5?)=1/2*(d_(i2,i5)*d_(i3,i4)-1/Nc*d_(i2,i3)*d_(i4,i5));
   id t(i1?,i2?,i2?)=0;
   id t(i1?,i2?,i3?)*t(i4?,i3?,i2?)=1/2*d_(i1,i4);
endrepeat;

#$in=0;
#do i=1,10
   id once t(i1?,i3?,i4?)*t(i2?,i4?,i5?)=1/2*(1/Nc*d_(i1,i2)*d_(i3,i5)+(d(i1,i2,b`$in')+i_*f(i1,i2,b`$in'))*t(b`$in',i3,i5));
   $in=$in+1;
#enddo

#endprocedure
