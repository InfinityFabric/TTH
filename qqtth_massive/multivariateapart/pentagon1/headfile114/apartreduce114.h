S I;
S q1,q2,q3,q4;
S d,mt,s12,s45;
set dens114: q1,q2,q3,q4;


#procedure apartreduce114(expr)
  .sort
  CF fac;
  S x;
  Skip;
  NSkip `expr';
  AntiBracket dens114;
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
     #include headfile114/apartpattern114.inc
     #write "%$",$repeat
     #include headfile114/apartrules114.inc

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
