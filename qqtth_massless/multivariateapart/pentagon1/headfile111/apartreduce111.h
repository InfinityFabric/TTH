S I;
S q1,q2,q3,q4;
S d,s12,s34,s51;
set dens111: q1,q2,q3,q4;


#procedure apartreduce111(expr)
  .sort
  CF fac;
  S x;
  Skip;
  NSkip `expr';
  AntiBracket dens111;
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
     #include headfile111/apartpattern111.inc
     #write "%$",$repeat
     #include headfile111/apartrules111.inc

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