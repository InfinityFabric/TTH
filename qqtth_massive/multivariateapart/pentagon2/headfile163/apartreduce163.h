S I;
S q1,q2,q3,q4,q5,q6;
S d,mt,s12,s24,s53;
set dens163: q1,q2,q3,q4,q5,q6;


#procedure apartreduce163(expr)
  .sort
  CF fac;
  S x;
  Skip;
  NSkip `expr';
  AntiBracket dens163;
  .sort
  Skip;
  NSkip `expr';

  Collect fac;
  factarg fac;
  id fac(x?number_,?a) = x*fac(?a);
*  repeat id fac(?a,x?,x?,?b) = fac(?a,x*x,?b);
  .sort
  Skip;
  NSkip `expr';
  $repeat = 0;
  #do i=1,1
   id once fac(x?,?a) = x*fac(?a);
   id fac = 1;
    #do k=1,1
     #include headfile163/apartpattern163.inc
     #write "%$",$repeat
     #include headfile163/apartrules163.inc

     if ($repeat == 1);
      redefine k "0";
      $repeat = 0;
     endif;
     .sort
     Skip;
     NSkip `expr';
    #enddo
  if (match(fac(?a)));
   redefine i "0";
  endif;
  .sort
  Skip;
  NSkip `expr';
  #enddo

#endprocedure
