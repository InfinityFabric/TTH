S I;
S q1,q2,q3,q4;
S d,s23,s34,s51;
set dens83: q1,q2,q3,q4;


#procedure apartreduce83(expr)
  .sort
  CF fac;
  S x;
  Skip;
  NSkip `expr';
  AntiBracket dens83;
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
     #include headfile83/apartpattern83.inc
     #write "%$",$repeat
     #include headfile83/apartrules83.inc

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
