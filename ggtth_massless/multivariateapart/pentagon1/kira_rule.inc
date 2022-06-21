id pentagon1(0,0,0,0,0)=
 0;


id pentagon1(0,0,0,1,0)=
 0;


id pentagon1(0,0,0,1,1)=
 0;


id pentagon1(0,0,1,0,0)=
 0;


id pentagon1(0,0,1,0,-1)=
 0;


id pentagon1(0,0,1,-1,0)=
 0;


id pentagon1(0,0,1,1,0)=
 0;


id pentagon1(0,0,1,1,-1)=
 0;


id pentagon1(0,0,1,1,1)=
 0;


id pentagon1(0,1,0,0,0)=
 0;


id pentagon1(0,1,0,0,-1)=
 0;


id pentagon1(0,1,0,-1,0)=
 0;


id pentagon1(0,1,0,1,-1)=
 0;


id pentagon1(0,1,0,1,1)=
 0;


id pentagon1(0,-1,1,0,0)=
 0;


id pentagon1(0,1,-1,0,0)=
 0;


id pentagon1(0,1,1,0,0)=
 0;


id pentagon1(0,1,1,0,-1)=
 0;


id pentagon1(0,1,1,0,1)=
 0;


id pentagon1(0,1,1,0,-2)=
 0;


id pentagon1(0,-1,1,1,0)=
 0;


id pentagon1(0,1,-1,1,0)=
 0;


id pentagon1(0,1,1,-1,0)=
 0;


id pentagon1(0,1,1,1,0)=
 0;


id pentagon1(0,-1,1,1,1)=
 0;


id pentagon1(0,1,-1,1,1)=
 0;


id pentagon1(0,1,1,-1,-1)=
 0;


id pentagon1(0,1,1,-1,1)=
 0;


id pentagon1(0,1,1,1,-1)=
 0;


id pentagon1(0,1,1,1,-2)=
 0;


id pentagon1(0,1,1,-2,0)=
 0;


id pentagon1(1,0,0,0,0)=
 0;


id pentagon1(1,0,0,0,-1)=
 0;


id pentagon1(1,0,0,0,1)=
 0;


id pentagon1(1,0,0,-1,0)=
 0;


id pentagon1(-1,0,0,1,1)=
 0;


id pentagon1(1,0,0,1,-1)=
 0;


id pentagon1(1,0,0,1,1)=
 0;


id pentagon1(-1,0,1,0,0)=
 0;


id pentagon1(1,0,-1,0,0)=
 0;


id pentagon1(-1,0,1,0,1)=
 0;


id pentagon1(1,0,1,0,-1)=
 - 2*pentagon1(0,0,1,0,1)*den(s34) - 2*pentagon1(0,0,1,0,1)*den(s34)*den( - 4
       + d);


id pentagon1(1,0,1,0,1)=
1/2*pentagon1(0,1,0,1,0)*s51 - 1/2*pentagon1(0,1,0,1,0)*s23;


id pentagon1(1,0,1,0,-2)=
2*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s23) + 2*pentagon1(0,1,0,0,1
      )*den( - s51 + s23) - 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + 
      s23) - 2*pentagon1(0,1,0,1,0)*den( - s51 + s23);


id pentagon1(-1,0,1,1,0)=
 - 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34) - 2*pentagon1(0,0,1,
      0,1)*den( - s51 + s34) + 2*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51
       + s34) + 2*pentagon1(0,1,0,0,1)*den( - s51 + s34);


id pentagon1(1,0,-1,1,0)=
 - 1/2*pentagon1(0,1,0,1,0)*s23;


id pentagon1(1,0,1,-1,0)=
 - 2*pentagon1(0,1,0,1,0)*den(s23) - 2*pentagon1(0,1,0,1,0)*den(s23)*den( - 4
       + d);


id pentagon1(1,0,1,1,0)=
pentagon1(0,0,1,0,1) - pentagon1(0,0,1,0,1)*den(s34)*s51 - 2*pentagon1(0,0,1,0
      ,1)*den(s34)*den( - 4 + d)*s23;


id pentagon1(-1,0,1,1,1)=
2*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s23)*s34 + 2*pentagon1(0,1,0
      ,0,1)*den( - 4 + d)*den( - s51 + s23)^2*s34*s51 - pentagon1(0,1,0,0,1)*
      den( - s51 + s23)*s51 + pentagon1(0,1,0,0,1)*den( - s51 + s23)*s34 + 
      pentagon1(0,1,0,1,0) - 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51
       + s23)*s34 - 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s23)^2*
      s34*s51 + pentagon1(0,1,0,1,0)*den( - s51 + s23)*s51;


id pentagon1(1,0,-1,1,1)=
pentagon1(0,0,1,0,1) - 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34)*
      s23 - 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34)^2*s23*s51
       + pentagon1(0,0,1,0,1)*den( - s51 + s34)*s51 + 2*pentagon1(0,1,0,0,1)*
      den( - 4 + d)*den( - s51 + s34)*s23 + 2*pentagon1(0,1,0,0,1)*den( - 4 + 
      d)*den( - s51 + s34)^2*s23*s51 - pentagon1(0,1,0,0,1)*den( - s51 + s34)*
      s51 + pentagon1(0,1,0,0,1)*den( - s51 + s34)*s23;


id pentagon1(1,0,1,-1,-1)=
pentagon1(0,1,0,1,0) - pentagon1(0,1,0,1,0)*den(s23)*s51 - 2*pentagon1(0,1,0,1
      ,0)*den(s23)*den( - 4 + d)*s34;


id pentagon1(1,0,1,-1,1)=
pentagon1(0,1,0,1,0)*s51 - 1/2*pentagon1(0,1,0,1,0)*s23 + 2*pentagon1(0,1,0,1,
      0)*den( - 2 + d)*s34 - 1/2*pentagon1(0,1,0,1,0)*den(s23)*s51^2 - 2*
      pentagon1(0,1,0,1,0)*den(s23)*den( - 4 + d)*s34^2 - 2*pentagon1(0,1,0,1,
      0)*den(s23)*den( - 2 + d)*s34*s51 + 2*pentagon1(0,1,0,1,0)*den(s23)*den(
       - 2 + d)*s34^2;


id pentagon1(1,0,1,1,-1)=
 - 1/2*pentagon1(1,0,0,1,0)*s45;


id pentagon1(1,0,1,1,-2)=
 - 2*pentagon1(1,0,0,1,0)*den(s45) - 2*pentagon1(1,0,0,1,0)*den(s45)*den( - 4
       + d);


id pentagon1(1,0,1,-2,0)=
 - 1/2*pentagon1(0,0,1,0,1)*s34 + 1/2*pentagon1(0,0,1,0,1)*s12;


id pentagon1(-1,1,0,0,0)=
1/2*pentagon1(1,0,1,0,0)*s34 - 1/2*pentagon1(1,0,1,0,0)*s12;


id pentagon1(1,-1,0,0,0)=
2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s34 + s12) + 2*pentagon1(0,0,1,0,1
      )*den( - s34 + s12) - 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s34 + 
      s12) - 2*pentagon1(1,0,1,0,0)*den( - s34 + s12);


id pentagon1(1,1,0,0,0)=
1/4*pentagon1(1,0,1,0,0)*s34^2 - 1/2*pentagon1(1,0,1,0,0)*s12*s34 + 1/4*
      pentagon1(1,0,1,0,0)*s12^2 + 1/4*pentagon1(1,0,1,0,0)*den( - 1 + d)*
      s34^2 - 1/2*pentagon1(1,0,1,0,0)*den( - 1 + d)*s12*s34 + 1/4*pentagon1(1
      ,0,1,0,0)*den( - 1 + d)*s12^2;


id pentagon1(-1,1,0,0,1)=
 - 1/2*pentagon1(1,0,0,1,0)*s45 + 1/2*pentagon1(1,0,0,1,0)*s12;


id pentagon1(1,1,0,0,-1)=
1/2*pentagon1(1,0,1,0,0)*s45 - 1/2*pentagon1(1,0,1,0,0)*s12;


id pentagon1(1,1,0,0,1)=
2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s12) + 2*pentagon1(1,0,0,1,0
      )*den( - s45 + s12) - 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + 
      s12) - 2*pentagon1(1,0,1,0,0)*den( - s45 + s12);


id pentagon1(1,1,0,0,-2)=
pentagon1(0,0,1,0,1) - pentagon1(0,0,1,0,1)*den(s34)*s12 - 2*pentagon1(0,0,1,0
      ,1)*den(s34)*den( - 4 + d)*s45;


id pentagon1(-1,1,0,1,0)=
pentagon1(1,0,0,1,0) - pentagon1(1,0,0,1,0)*den(s45)*s12 - 2*pentagon1(1,0,0,1
      ,0)*den(s45)*den( - 4 + d)*s34;


id pentagon1(1,-1,0,1,0)=
1/4*pentagon1(1,0,1,0,0)*s34*s45 - 1/4*pentagon1(1,0,1,0,0)*s12*s45 - 1/4*
      pentagon1(1,0,1,0,0)*s12*s34 + 1/4*pentagon1(1,0,1,0,0)*s12^2 - 1/4*
      pentagon1(1,0,1,0,0)*den( - 1 + d)*s34*s45 - 1/4*pentagon1(1,0,1,0,0)*
      den( - 1 + d)*s12*s45 - 1/4*pentagon1(1,0,1,0,0)*den( - 1 + d)*s12*s34
       + 1/4*pentagon1(1,0,1,0,0)*den( - 1 + d)*s12^2;


id pentagon1(1,1,0,-1,0)=
 - 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s34 + s12)^2*s34*s45 - 
      pentagon1(0,0,1,0,1)*den( - s34 + s12)*s34 + pentagon1(1,0,1,0,0) + 2*
      pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s34 + s12)^2*s34*s45 - 
      pentagon1(1,0,1,0,0)*den( - s34 + s12)*s45 + pentagon1(1,0,1,0,0)*den(
       - s34 + s12)*s34;


id pentagon1(1,1,0,1,0)=
 - 2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s12)^2*s34*s45 - 
      pentagon1(1,0,0,1,0)*den( - s45 + s12)*s45 + pentagon1(1,0,1,0,0) + 2*
      pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s12)^2*s34*s45 + 
      pentagon1(1,0,1,0,0)*den( - s45 + s12)*s45 - pentagon1(1,0,1,0,0)*den(
       - s45 + s12)*s34;


id pentagon1(-1,1,0,1,1)=
2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s12)^3*s34^2*s45^2 + 2*
      pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s12)^2*s34*s45^2 - 2*
      pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s12)^3*s34^2*s45^2 + 1/2
      *pentagon1(1,0,0,1,0)*den( - s45 + s12)*s45^2 - 1/2*pentagon1(1,0,1,0,0)
      *s45 + pentagon1(1,0,1,0,0)*s34 - 1/2*pentagon1(1,0,1,0,0)*s12 - 2*
      pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s12)^3*s34^2*s45^2 - 2*
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s12)*s34*s45 - 2*
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s12)^2*s34*s45^2 + 2*
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s12)^2*s34^2*s45 + 2*
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s12)^3*s34^2*s45^2 - 1/2
      *pentagon1(1,0,1,0,0)*den( - s45 + s12)*s45^2 + pentagon1(1,0,1,0,0)*
      den( - s45 + s12)*s34*s45 - 1/2*pentagon1(1,0,1,0,0)*den( - s45 + s12)*
      s34^2;


id pentagon1(1,-1,0,1,1)=
1/4*pentagon1(1,0,1,0,0)*s45^2 - 1/2*pentagon1(1,0,1,0,0)*s12*s45 + 1/4*
      pentagon1(1,0,1,0,0)*s12^2 + 1/4*pentagon1(1,0,1,0,0)*den( - 1 + d)*
      s45^2 - 1/2*pentagon1(1,0,1,0,0)*den( - 1 + d)*s12*s45 + 1/4*pentagon1(1
      ,0,1,0,0)*den( - 1 + d)*s12^2;


id pentagon1(1,1,0,-1,-1)=
 - 1/2*pentagon1(0,1,0,0,1)*s51;


id pentagon1(1,1,0,-1,1)=
 - 2*pentagon1(0,1,0,0,1)*den(s51) - 2*pentagon1(0,1,0,0,1)*den(s51)*den( - 4
       + d);


id pentagon1(1,1,0,1,-1)=
1/2*pentagon1(0,1,0,1,0)*s45 - 1/2*pentagon1(0,1,0,1,0)*s23;


id pentagon1(1,1,0,1,-2)=
 - 1/2*pentagon1(1,0,0,1,0)*s45 + 1/2*pentagon1(1,0,0,1,0)*s23;


id pentagon1(-1,1,1,0,0)=
 - 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23) - 2*pentagon1(0,1,0,
      1,0)*den( - s45 + s23) + 2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45
       + s23) + 2*pentagon1(1,0,0,1,0)*den( - s45 + s23);


id pentagon1(1,-1,1,0,0)=
 - 2*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s23)^2*s45*s51 - 
      pentagon1(0,1,0,0,1)*den( - s51 + s23)*s51 + pentagon1(0,1,0,1,0) + 2*
      pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s23)^2*s45*s51 + 
      pentagon1(0,1,0,1,0)*den( - s51 + s23)*s51 - pentagon1(0,1,0,1,0)*den(
       - s51 + s23)*s45;


id pentagon1(1,1,-1,0,0)=
pentagon1(1,0,0,1,0) - pentagon1(1,0,0,1,0)*den(s45)*s23 - 2*pentagon1(1,0,0,1
      ,0)*den(s45)*den( - 4 + d)*s51;


id pentagon1(1,1,1,0,0)=
pentagon1(0,1,0,0,1) - pentagon1(0,1,0,0,1)*den(s51)*s23 - 2*pentagon1(0,1,0,0
      ,1)*den(s51)*den( - 4 + d)*s45;


id pentagon1(-1,1,1,0,-1)=
pentagon1(0,1,0,1,0) + 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23)^
      2*s45*s51 - pentagon1(0,1,0,1,0)*den( - s45 + s23)*s51 + pentagon1(0,1,0
      ,1,0)*den( - s45 + s23)*s45 - 2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den(
       - s45 + s23)^2*s45*s51 - pentagon1(1,0,0,1,0)*den( - s45 + s23)*s45;


id pentagon1(-1,1,1,0,1)=
pentagon1(0,1,0,1,0)*s51 - 1/2*pentagon1(0,1,0,1,0)*s45 - 1/2*pentagon1(0,1,0,
      1,0)*s23 - 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23)^3*
      s45^2*s51^2 - 2*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45 + s23)*s45
      *s51 + 2*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45 + s23)^2*s45*
      s51^2 - 2*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45 + s23)^2*s45^2*
      s51 + 2*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45 + s23)^3*s45^2*
      s51^2 - 1/2*pentagon1(0,1,0,1,0)*den( - s45 + s23)*s51^2 + pentagon1(0,1
      ,0,1,0)*den( - s45 + s23)*s45*s51 - 1/2*pentagon1(0,1,0,1,0)*den( - s45
       + s23)*s45^2 + 2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s23)^3
      *s45^2*s51^2 + 2*pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s23)^2*
      s45^2*s51 - 2*pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s23)^3*
      s45^2*s51^2 + 1/2*pentagon1(1,0,0,1,0)*den( - s45 + s23)*s45^2;


id pentagon1(1,-1,1,0,-1)=
 - 1/2*pentagon1(1,0,1,0,0)*s12;


id pentagon1(1,-1,1,0,1)=
 - 2*pentagon1(1,0,1,0,0)*den(s12) - 2*pentagon1(1,0,1,0,0)*den(s12)*den( - 4
       + d);


id pentagon1(1,1,-1,0,-1)=
pentagon1(0,0,1,0,1) + 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34)^
      2*s12*s51 + pentagon1(0,0,1,0,1)*den( - s51 + s34)*s51 - pentagon1(0,0,1
      ,0,1)*den( - s51 + s34)*s12 - 2*pentagon1(0,1,0,0,1)*den( - 4 + d)*den(
       - s51 + s34)^2*s12*s51 - pentagon1(0,1,0,0,1)*den( - s51 + s34)*s51;


id pentagon1(1,1,-1,0,1)=
 - 1/4*pentagon1(1,0,1,0,0)*s12*s34 + 1/4*pentagon1(1,0,1,0,0)*s12^2 + 1/2*
      pentagon1(1,0,1,0,0)*den( - 1 + d)*s12*s51 - 1/4*pentagon1(1,0,1,0,0)*
      den( - 1 + d)*s12*s34 + 1/4*pentagon1(1,0,1,0,0)*den( - 1 + d)*s12^2;


id pentagon1(1,1,1,0,-1)=
2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s34 + s12)*s51 + 2*pentagon1(0,0,1
      ,0,1)*den( - 4 + d)*den( - s34 + s12)^2*s34*s51 + pentagon1(0,0,1,0,1)*
      den( - s34 + s12)*s51 - pentagon1(0,0,1,0,1)*den( - s34 + s12)*s34 + 
      pentagon1(1,0,1,0,0) - 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s34
       + s12)*s51 - 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s34 + s12)^2*
      s34*s51 + pentagon1(1,0,1,0,0)*den( - s34 + s12)*s34;


id pentagon1(1,1,1,0,-2)=
pentagon1(0,1,0,0,1) - pentagon1(0,1,0,0,1)*den(s51)*s34 - 2*pentagon1(0,1,0,0
      ,1)*den(s51)*den( - 4 + d)*s12;


id pentagon1(1,1,1,0,-3)=
pentagon1(1,0,1,0,0) - pentagon1(1,0,1,0,0)*den(s12)*s34 - 2*pentagon1(1,0,1,0
      ,0)*den(s12)*den( - 4 + d)*s51;


id pentagon1(-1,1,1,-1,0)=
pentagon1(1,0,1,0,0)*s34 - 1/2*pentagon1(1,0,1,0,0)*s12 + 2*pentagon1(1,0,1,0,
      0)*den( - 2 + d)*s51 - 1/2*pentagon1(1,0,1,0,0)*den(s12)*s34^2 - 2*
      pentagon1(1,0,1,0,0)*den(s12)*den( - 4 + d)*s51^2 + 2*pentagon1(1,0,1,0,
      0)*den(s12)*den( - 2 + d)*s51^2 - 2*pentagon1(1,0,1,0,0)*den(s12)*den(
       - 2 + d)*s34*s51;


id pentagon1(-1,1,1,1,0)=
3/4*pentagon1(1,0,1,0,0)*s34^2 - 3/4*pentagon1(1,0,1,0,0)*s12*s34 + 1/4*
      pentagon1(1,0,1,0,0)*s12^2 + 6*pentagon1(1,0,1,0,0)*den( - 2 + d)*s51^2
       - 6*pentagon1(1,0,1,0,0)*den( - 1 + d)*s51^2 + 3*pentagon1(1,0,1,0,0)*
      den( - 1 + d)*s34*s51 + 3/4*pentagon1(1,0,1,0,0)*den( - 1 + d)*s34^2 - 3/
      2*pentagon1(1,0,1,0,0)*den( - 1 + d)*s12*s51 - 3/4*pentagon1(1,0,1,0,0)*
      den( - 1 + d)*s12*s34 + 1/4*pentagon1(1,0,1,0,0)*den( - 1 + d)*s12^2 - 1/
      4*pentagon1(1,0,1,0,0)*den(s12)*s34^3 - 2*pentagon1(1,0,1,0,0)*den(s12)*
      den( - 4 + d)*s51^3 + 6*pentagon1(1,0,1,0,0)*den(s12)*den( - 2 + d)*
      s51^3 - 6*pentagon1(1,0,1,0,0)*den(s12)*den( - 2 + d)*s34*s51^2 - 4*
      pentagon1(1,0,1,0,0)*den(s12)*den( - 1 + d)*s51^3 + 6*pentagon1(1,0,1,0,
      0)*den(s12)*den( - 1 + d)*s34*s51^2 - 3/2*pentagon1(1,0,1,0,0)*den(s12)*
      den( - 1 + d)*s34^2*s51 - 1/4*pentagon1(1,0,1,0,0)*den(s12)*den( - 1 + d
      )*s34^3;


id pentagon1(1,-1,1,-1,0)=
pentagon1(0,1,0,1,0) - pentagon1(0,1,0,1,0)*den(s23)*s45 - 2*pentagon1(0,1,0,1
      ,0)*den(s23)*den( - 4 + d)*s12;


id pentagon1(1,-1,1,1,0)=
 - 1/4*pentagon1(1,0,1,0,0)*s12*s45 + 1/4*pentagon1(1,0,1,0,0)*s12^2 - 1/4*
      pentagon1(1,0,1,0,0)*den( - 1 + d)*s12*s45 + 1/2*pentagon1(1,0,1,0,0)*
      den( - 1 + d)*s12*s23 + 1/4*pentagon1(1,0,1,0,0)*den( - 1 + d)*s12^2;


id pentagon1(1,1,-1,1,0)=
2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s12)*s23 + 2*pentagon1(1,0,0
      ,1,0)*den( - 4 + d)*den( - s45 + s12)^2*s23*s45 - pentagon1(1,0,0,1,0)*
      den( - s45 + s12)*s45 + pentagon1(1,0,0,1,0)*den( - s45 + s12)*s23 + 
      pentagon1(1,0,1,0,0) - 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45
       + s12)*s23 - 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s12)^2*
      s23*s45 + pentagon1(1,0,1,0,0)*den( - s45 + s12)*s45;


id pentagon1(1,1,1,-1,0)=
pentagon1(0,1,0,1,0) - 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23)*
      s12 - 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23)^2*s12*s45
       + pentagon1(0,1,0,1,0)*den( - s45 + s23)*s45 + 2*pentagon1(1,0,0,1,0)*
      den( - 4 + d)*den( - s45 + s23)*s12 + 2*pentagon1(1,0,0,1,0)*den( - 4 + 
      d)*den( - s45 + s23)^2*s12*s45 - pentagon1(1,0,0,1,0)*den( - s45 + s23)*
      s45 + pentagon1(1,0,0,1,0)*den( - s45 + s23)*s12;


id pentagon1(-1,1,-1,1,1)=
pentagon1(1,0,1,0,0) - pentagon1(1,0,1,0,0)*den(s12)*s45 - 2*pentagon1(1,0,1,0
      ,0)*den(s12)*den( - 4 + d)*s23;


id pentagon1(-1,1,1,-1,1)=
 - 2*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s23)^2*s34*s45*s51 - 2*
      pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s23)^3*s34*s45*s51^2 - 
      pentagon1(0,1,0,0,1)*den( - 2 + d)*den( - s51 + s23)*s34*s51 + 
      pentagon1(0,1,0,0,1)*den( - 2 + d)*den( - s51 + s23)*s12*s51 + 
      pentagon1(0,1,0,0,1)*den( - 2 + d)*den( - s51 + s23)^2*s45*s51^2 - 
      pentagon1(0,1,0,0,1)*den( - 2 + d)*den( - s51 + s23)^2*s34*s51^2 + 
      pentagon1(0,1,0,0,1)*den( - 2 + d)*den( - s51 + s23)^2*s34*s45*s51 + 2*
      pentagon1(0,1,0,0,1)*den( - 2 + d)*den( - s51 + s23)^3*s34*s45*s51^2 + 1/
      2*pentagon1(0,1,0,0,1)*den( - s51 + s23)*s51^2 - 1/2*pentagon1(0,1,0,0,1
      )*den( - s51 + s23)*s34*s51 - 1/2*pentagon1(0,1,0,1,0)*s51 + 1/2*
      pentagon1(0,1,0,1,0)*s45 - 1/2*pentagon1(0,1,0,1,0)*s23 + 2*pentagon1(0,
      1,0,1,0)*den( - 4 + d)*den( - s51 + s23)^2*s34*s45*s51 + 2*pentagon1(0,1
      ,0,1,0)*den( - 4 + d)*den( - s51 + s23)^3*s34*s45*s51^2 + pentagon1(0,1,
      0,1,0)*den( - 2 + d)*s34 - pentagon1(0,1,0,1,0)*den( - 2 + d)*s12 - 
      pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51 + s23)*s45*s51 + 2*
      pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51 + s23)*s34*s51 - 
      pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51 + s23)*s34*s45 - 
      pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51 + s23)*s12*s51 - 
      pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51 + s23)^2*s45*s51^2 + 
      pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51 + s23)^2*s34*s51^2 - 3*
      pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51 + s23)^2*s34*s45*s51 - 2*
      pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51 + s23)^3*s34*s45*s51^2 - 1/
      2*pentagon1(0,1,0,1,0)*den( - s51 + s23)*s51^2 + 1/2*pentagon1(0,1,0,1,0
      )*den( - s51 + s23)*s45*s51;


id pentagon1(-1,1,1,1,-1)=
 - 1/2*pentagon1(0,0,1,0,1)*s51 - 1/2*pentagon1(0,0,1,0,1)*s34 + 1/2*
      pentagon1(0,0,1,0,1)*s12 + 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - 
      s51 + s34)^2*s12*s23*s51 + 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - 
      s51 + s34)^3*s12*s23*s51^2 - pentagon1(0,0,1,0,1)*den( - 2 + d)*s45 + 
      pentagon1(0,0,1,0,1)*den( - 2 + d)*s23 - pentagon1(0,0,1,0,1)*den( - 2
       + d)*den( - s51 + s34)*s45*s51 + 2*pentagon1(0,0,1,0,1)*den( - 2 + d)*
      den( - s51 + s34)*s23*s51 - pentagon1(0,0,1,0,1)*den( - 2 + d)*den( - 
      s51 + s34)*s12*s51 - pentagon1(0,0,1,0,1)*den( - 2 + d)*den( - s51 + s34
      )*s12*s23 + pentagon1(0,0,1,0,1)*den( - 2 + d)*den( - s51 + s34)^2*s23*
      s51^2 - pentagon1(0,0,1,0,1)*den( - 2 + d)*den( - s51 + s34)^2*s12*s51^2
       - 3*pentagon1(0,0,1,0,1)*den( - 2 + d)*den( - s51 + s34)^2*s12*s23*s51
       - 2*pentagon1(0,0,1,0,1)*den( - 2 + d)*den( - s51 + s34)^3*s12*s23*
      s51^2 - 1/2*pentagon1(0,0,1,0,1)*den( - s51 + s34)*s51^2 + 1/2*
      pentagon1(0,0,1,0,1)*den( - s51 + s34)*s12*s51 - 2*pentagon1(0,1,0,0,1)*
      den( - 4 + d)*den( - s51 + s34)^2*s12*s23*s51 - 2*pentagon1(0,1,0,0,1)*
      den( - 4 + d)*den( - s51 + s34)^3*s12*s23*s51^2 + pentagon1(0,1,0,0,1)*
      den( - 2 + d)*den( - s51 + s34)*s45*s51 - pentagon1(0,1,0,0,1)*den( - 2
       + d)*den( - s51 + s34)*s23*s51 - pentagon1(0,1,0,0,1)*den( - 2 + d)*
      den( - s51 + s34)^2*s23*s51^2 + pentagon1(0,1,0,0,1)*den( - 2 + d)*den(
       - s51 + s34)^2*s12*s51^2 + pentagon1(0,1,0,0,1)*den( - 2 + d)*den( - 
      s51 + s34)^2*s12*s23*s51 + 2*pentagon1(0,1,0,0,1)*den( - 2 + d)*den( - 
      s51 + s34)^3*s12*s23*s51^2 + 1/2*pentagon1(0,1,0,0,1)*den( - s51 + s34)*
      s51^2 - 1/2*pentagon1(0,1,0,0,1)*den( - s51 + s34)*s23*s51;


id pentagon1(-1,1,1,1,1)=
1/2*pentagon1(0,1,0,1,0)*s51 + 1/2*pentagon1(0,1,0,1,0)*s45 - 1/2*pentagon1(0,
      1,0,1,0)*s23 + pentagon1(0,1,0,1,0)*den( - 2 + d)*s34 + pentagon1(0,1,0,
      1,0)*den( - 2 + d)*s12 - 1/2*pentagon1(0,1,0,1,0)*den(s23)*s45*s51 - 2*
      pentagon1(0,1,0,1,0)*den(s23)*den( - 4 + d)*s12*s34 + pentagon1(0,1,0,1,
      0)*den(s23)*den( - 2 + d)*s45*s51 - pentagon1(0,1,0,1,0)*den(s23)*den(
       - 2 + d)*s34*s45 - pentagon1(0,1,0,1,0)*den(s23)*den( - 2 + d)*s12*s51
       + 2*pentagon1(0,1,0,1,0)*den(s23)*den( - 2 + d)*s12*s34;


id pentagon1(1,-1,1,1,-1)=
2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34)*den( - s51 + s34 + s23)
      *s12 - 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34 + s23) + 2*
      pentagon1(0,0,1,0,1)*den( - s51 + s34)*den( - s51 + s34 + s23)*s12 - 2*
      pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23) - 2*pentagon1(0,0,1,0,1)*
      den(s34)*den( - 4 + d)*den( - s51 + s34 + s23)*s45 - 2*pentagon1(0,0,1,0
      ,1)*den(s34)*den( - s51 + s34 + s23)*s45 - 2*pentagon1(0,1,0,0,1)*den(
       - 4 + d)*den( - s51 + s34)*den( - s51 + s34 + s23)*s12 + 2*pentagon1(0,
      1,0,0,1)*den( - 4 + d)*den( - s51 + s34 + s23) - 2*pentagon1(0,1,0,0,1)*
      den( - 4 + d)*den( - s51 + s23)*den( - s51 + s34 + s23)*s45 - 2*
      pentagon1(0,1,0,0,1)*den( - s51 + s34)*den( - s51 + s34 + s23)*s12 + 2*
      pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23) - 2*pentagon1(0,1,0,0,1)*
      den( - s51 + s23)*den( - s51 + s34 + s23)*s45 - 2*pentagon1(0,1,0,1,0)*
      den( - 4 + d)*den( - s51 + s34 + s23) + 2*pentagon1(0,1,0,1,0)*den( - 4
       + d)*den( - s51 + s23)*den( - s51 + s34 + s23)*s45 - 2*pentagon1(0,1,0,
      1,0)*den( - s51 + s34 + s23) + 2*pentagon1(0,1,0,1,0)*den( - s51 + s23)*
      den( - s51 + s34 + s23)*s45 - 2*pentagon1(0,1,0,1,0)*den(s23)*den( - 4
       + d)*den( - s51 + s34 + s23)*s12 - 2*pentagon1(0,1,0,1,0)*den(s23)*den(
       - s51 + s34 + s23)*s12 - 1/2*pentagon1(0,1,1,1,1)*s34 + 1/2*pentagon1(0
      ,1,1,1,1)*s12 - 1/2*pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)*s45*s51
       - 1/2*pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)*s34*s51 + 1/2*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)*s34*s45 + 1/2*pentagon1(0,1
      ,1,1,1)*den( - s51 + s34 + s23)*s34^2 - 1/2*pentagon1(0,1,1,1,1)*den( - 
      s51 + s34 + s23)*s12*s34;


id pentagon1(1,-1,1,1,1)=
 - 2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s12)^2*s23*s34*s45 - 2*
      pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s12)^3*s23*s34*s45^2 + 
      pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s12)*s45*s51 - 
      pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s12)*s23*s45 + 
      pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s12)^2*s34*s45^2 - 
      pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s12)^2*s23*s45^2 + 
      pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s12)^2*s23*s34*s45 + 2*
      pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s12)^3*s23*s34*s45^2 + 1/
      2*pentagon1(1,0,0,1,0)*den( - s45 + s12)*s45^2 - 1/2*pentagon1(1,0,0,1,0
      )*den( - s45 + s12)*s23*s45 - 1/2*pentagon1(1,0,1,0,0)*s45 + 1/2*
      pentagon1(1,0,1,0,0)*s34 - 1/2*pentagon1(1,0,1,0,0)*s12 + 2*pentagon1(1,
      0,1,0,0)*den( - 4 + d)*den( - s45 + s12)^2*s23*s34*s45 + 2*pentagon1(1,0
      ,1,0,0)*den( - 4 + d)*den( - s45 + s12)^3*s23*s34*s45^2 - pentagon1(1,0,
      1,0,0)*den( - 2 + d)*s51 + pentagon1(1,0,1,0,0)*den( - 2 + d)*s23 - 
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s12)*s45*s51 - 
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s12)*s34*s45 + 2*
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s12)*s23*s45 - 
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s12)*s23*s34 - 
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s12)^2*s34*s45^2 + 
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s12)^2*s23*s45^2 - 3*
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s12)^2*s23*s34*s45 - 2*
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s12)^3*s23*s34*s45^2 - 1/
      2*pentagon1(1,0,1,0,0)*den( - s45 + s12)*s45^2 + 1/2*pentagon1(1,0,1,0,0
      )*den( - s45 + s12)*s34*s45;


id pentagon1(1,1,-1,1,-1)=
2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s45 - s34 + s12) + 2*pentagon1(0,0
      ,1,0,1)*den( - 4 + d)*den( - s34 + s12)*den( - s45 - s34 + s12)*s51 + 2*
      pentagon1(0,0,1,0,1)*den( - s45 - s34 + s12) + 2*pentagon1(0,0,1,0,1)*
      den( - s34 + s12)*den( - s45 - s34 + s12)*s51 + 2*pentagon1(0,0,1,0,1)*
      den(s34)*den( - 4 + d)*den( - s45 - s34 + s12)*s23 + 2*pentagon1(0,0,1,0
      ,1)*den(s34)*den( - s45 - s34 + s12)*s23 + 2*pentagon1(1,0,0,1,0)*den(
       - 4 + d)*den( - s45 - s34 + s12) + 2*pentagon1(1,0,0,1,0)*den( - 4 + d)
      *den( - s45 + s12)*den( - s45 - s34 + s12)*s23 + 2*pentagon1(1,0,0,1,0)*
      den( - s45 - s34 + s12) + 2*pentagon1(1,0,0,1,0)*den( - s45 + s12)*den(
       - s45 - s34 + s12)*s23 + 2*pentagon1(1,0,0,1,0)*den(s45)*den( - 4 + d)*
      den( - s45 - s34 + s12)*s51 + 2*pentagon1(1,0,0,1,0)*den(s45)*den( - s45
       - s34 + s12)*s51 - 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 - 
      s34 + s12) - 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s12)*den(
       - s45 - s34 + s12)*s23 - 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - 
      s34 + s12)*den( - s45 - s34 + s12)*s51 - 2*pentagon1(1,0,1,0,0)*den( - 
      s45 - s34 + s12) - 2*pentagon1(1,0,1,0,0)*den( - s45 + s12)*den( - s45
       - s34 + s12)*s23 - 2*pentagon1(1,0,1,0,0)*den( - s34 + s12)*den( - s45
       - s34 + s12)*s51 + 1/2*pentagon1(1,0,1,1,1)*s51 + 1/2*pentagon1(1,0,1,1
      ,1)*s23 + 1/2*pentagon1(1,0,1,1,1)*den( - s45 - s34 + s12)*s34*s51 + 1/2
      *pentagon1(1,0,1,1,1)*den( - s45 - s34 + s12)*s34*s45 + 1/2*pentagon1(1,
      0,1,1,1)*den( - s45 - s34 + s12)*s23*s45;


id pentagon1(1,1,-1,1,1)=
1/2*pentagon1(0,1,0,1,0)*s51 - 1/2*pentagon1(0,1,0,1,0)*s45 - 1/2*pentagon1(0,
      1,0,1,0)*s23 + 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23)^2*
      s12*s45*s51 + 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23)^3*
      s12*s45^2*s51 - pentagon1(0,1,0,1,0)*den( - 2 + d)*s34 + pentagon1(0,1,0
      ,1,0)*den( - 2 + d)*s12 - pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45
       + s23)*s45*s51 - pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45 + s23)*
      s34*s45 - pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45 + s23)*s12*s51
       + 2*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45 + s23)*s12*s45 - 
      pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45 + s23)^2*s45^2*s51 - 3*
      pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45 + s23)^2*s12*s45*s51 + 
      pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45 + s23)^2*s12*s45^2 - 2*
      pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45 + s23)^3*s12*s45^2*s51 + 1/
      2*pentagon1(0,1,0,1,0)*den( - s45 + s23)*s45*s51 - 1/2*pentagon1(0,1,0,1
      ,0)*den( - s45 + s23)*s45^2 - 2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den(
       - s45 + s23)^2*s12*s45*s51 - 2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den(
       - s45 + s23)^3*s12*s45^2*s51 + pentagon1(1,0,0,1,0)*den( - 2 + d)*den(
       - s45 + s23)*s34*s45 - pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + 
      s23)*s12*s45 + pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s23)^2*
      s45^2*s51 + pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s23)^2*s12*
      s45*s51 - pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s23)^2*s12*
      s45^2 + 2*pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s23)^3*s12*
      s45^2*s51 + 1/2*pentagon1(1,0,0,1,0)*den( - s45 + s23)*s45^2 - 1/2*
      pentagon1(1,0,0,1,0)*den( - s45 + s23)*s12*s45;


id pentagon1(1,1,1,-1,-1)=
2*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 - s45 + s23) + 2*pentagon1(0,1
      ,0,0,1)*den( - 4 + d)*den( - s51 + s23)*den( - s51 - s45 + s23)*s34 + 2*
      pentagon1(0,1,0,0,1)*den( - s51 - s45 + s23) + 2*pentagon1(0,1,0,0,1)*
      den( - s51 + s23)*den( - s51 - s45 + s23)*s34 + 2*pentagon1(0,1,0,0,1)*
      den(s51)*den( - 4 + d)*den( - s51 - s45 + s23)*s12 + 2*pentagon1(0,1,0,0
      ,1)*den(s51)*den( - s51 - s45 + s23)*s12 - 2*pentagon1(0,1,0,1,0)*den(
       - 4 + d)*den( - s51 - s45 + s23) - 2*pentagon1(0,1,0,1,0)*den( - 4 + d)
      *den( - s51 + s23)*den( - s51 - s45 + s23)*s34 - 2*pentagon1(0,1,0,1,0)*
      den( - 4 + d)*den( - s45 + s23)*den( - s51 - s45 + s23)*s12 - 2*
      pentagon1(0,1,0,1,0)*den( - s51 - s45 + s23) - 2*pentagon1(0,1,0,1,0)*
      den( - s51 + s23)*den( - s51 - s45 + s23)*s34 - 2*pentagon1(0,1,0,1,0)*
      den( - s45 + s23)*den( - s51 - s45 + s23)*s12 + 2*pentagon1(1,0,0,1,0)*
      den( - 4 + d)*den( - s51 - s45 + s23) + 2*pentagon1(1,0,0,1,0)*den( - 4
       + d)*den( - s45 + s23)*den( - s51 - s45 + s23)*s12 + 2*pentagon1(1,0,0,
      1,0)*den( - s51 - s45 + s23) + 2*pentagon1(1,0,0,1,0)*den( - s45 + s23)*
      den( - s51 - s45 + s23)*s12 + 2*pentagon1(1,0,0,1,0)*den(s45)*den( - 4
       + d)*den( - s51 - s45 + s23)*s34 + 2*pentagon1(1,0,0,1,0)*den(s45)*den(
       - s51 - s45 + s23)*s34 + 1/2*pentagon1(1,1,0,1,1)*s34 + 1/2*pentagon1(1
      ,1,0,1,1)*s12 + 1/2*pentagon1(1,1,0,1,1)*den( - s51 - s45 + s23)*s45*s51
       + 1/2*pentagon1(1,1,0,1,1)*den( - s51 - s45 + s23)*s34*s51 + 1/2*
      pentagon1(1,1,0,1,1)*den( - s51 - s45 + s23)*s12*s45;


id pentagon1(1,1,1,-1,1)=
1/2*pentagon1(1,0,1,0,0)*s45 + 1/2*pentagon1(1,0,1,0,0)*s34 - 1/2*pentagon1(1,
      0,1,0,0)*s12 + pentagon1(1,0,1,0,0)*den( - 2 + d)*s51 + pentagon1(1,0,1,
      0,0)*den( - 2 + d)*s23 - 1/2*pentagon1(1,0,1,0,0)*den(s12)*s34*s45 - 2*
      pentagon1(1,0,1,0,0)*den(s12)*den( - 4 + d)*s23*s51 - pentagon1(1,0,1,0,
      0)*den(s12)*den( - 2 + d)*s45*s51 + pentagon1(1,0,1,0,0)*den(s12)*den(
       - 2 + d)*s34*s45 + 2*pentagon1(1,0,1,0,0)*den(s12)*den( - 2 + d)*s23*
      s51 - pentagon1(1,0,1,0,0)*den(s12)*den( - 2 + d)*s23*s34;


id pentagon1(1,1,1,1,-1)=
2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34)*den(s51 - s34 + s12)*
      s23 + 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den(s51 - s34 + s12) - 2*
      pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s34 + s12)*den(s51 - s34 + s12
      )*s45 + 2*pentagon1(0,0,1,0,1)*den( - s51 + s34)*den(s51 - s34 + s12)*
      s23 + 2*pentagon1(0,0,1,0,1)*den(s51 - s34 + s12) - 2*pentagon1(0,0,1,0,
      1)*den( - s34 + s12)*den(s51 - s34 + s12)*s45 - 2*pentagon1(0,1,0,0,1)*
      den( - 4 + d)*den( - s51 + s34)*den(s51 - s34 + s12)*s23 - 2*pentagon1(0
      ,1,0,0,1)*den( - 4 + d)*den(s51 - s34 + s12) - 2*pentagon1(0,1,0,0,1)*
      den( - s51 + s34)*den(s51 - s34 + s12)*s23 - 2*pentagon1(0,1,0,0,1)*den(
      s51 - s34 + s12) - 2*pentagon1(0,1,0,0,1)*den(s51)*den( - 4 + d)*den(s51
       - s34 + s12)*s45 - 2*pentagon1(0,1,0,0,1)*den(s51)*den(s51 - s34 + s12)
      *s45 - 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den(s51 - s34 + s12) + 2*
      pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s34 + s12)*den(s51 - s34 + s12
      )*s45 - 2*pentagon1(1,0,1,0,0)*den(s51 - s34 + s12) + 2*pentagon1(1,0,1,
      0,0)*den( - s34 + s12)*den(s51 - s34 + s12)*s45 - 2*pentagon1(1,0,1,0,0)
      *den(s12)*den( - 4 + d)*den(s51 - s34 + s12)*s23 - 2*pentagon1(1,0,1,0,0
      )*den(s12)*den(s51 - s34 + s12)*s23 - 1/2*pentagon1(1,1,1,0,1)*s51 + 1/2
      *pentagon1(1,1,1,0,1)*s23 + 1/2*pentagon1(1,1,1,0,1)*den(s51 - s34 + s12
      )*s51^2 + 1/2*pentagon1(1,1,1,0,1)*den(s51 - s34 + s12)*s45*s51 - 1/2*
      pentagon1(1,1,1,0,1)*den(s51 - s34 + s12)*s34*s51 - 1/2*pentagon1(1,1,1,
      0,1)*den(s51 - s34 + s12)*s34*s45 - 1/2*pentagon1(1,1,1,0,1)*den(s51 - 
      s34 + s12)*s23*s51;


id pentagon1(1,1,1,-1,-2)=
2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23)*den( - s45 + s23 + s12)
      *s51 - 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12) + 2*
      pentagon1(0,1,0,1,0)*den( - s45 + s23)*den( - s45 + s23 + s12)*s51 - 2*
      pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12) - 2*pentagon1(0,1,0,1,0)*
      den(s23)*den( - 4 + d)*den( - s45 + s23 + s12)*s34 - 2*pentagon1(0,1,0,1
      ,0)*den(s23)*den( - s45 + s23 + s12)*s34 - 2*pentagon1(1,0,0,1,0)*den(
       - 4 + d)*den( - s45 + s23)*den( - s45 + s23 + s12)*s51 + 2*pentagon1(1,
      0,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12) - 2*pentagon1(1,0,0,1,0)*
      den( - 4 + d)*den( - s45 + s12)*den( - s45 + s23 + s12)*s34 - 2*
      pentagon1(1,0,0,1,0)*den( - s45 + s23)*den( - s45 + s23 + s12)*s51 + 2*
      pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12) - 2*pentagon1(1,0,0,1,0)*
      den( - s45 + s12)*den( - s45 + s23 + s12)*s34 - 2*pentagon1(1,0,1,0,0)*
      den( - 4 + d)*den( - s45 + s23 + s12) + 2*pentagon1(1,0,1,0,0)*den( - 4
       + d)*den( - s45 + s12)*den( - s45 + s23 + s12)*s34 - 2*pentagon1(1,0,1,
      0,0)*den( - s45 + s23 + s12) + 2*pentagon1(1,0,1,0,0)*den( - s45 + s12)*
      den( - s45 + s23 + s12)*s34 - 2*pentagon1(1,0,1,0,0)*den(s12)*den( - 4
       + d)*den( - s45 + s23 + s12)*s51 - 2*pentagon1(1,0,1,0,0)*den(s12)*den(
       - s45 + s23 + s12)*s51 + 1/2*pentagon1(1,1,1,1,0)*s51 - 1/2*pentagon1(1
      ,1,1,1,0)*s23 - 1/2*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)*s34*s45
       - 1/2*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)*s23*s51 - 1/2*
      pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)*s23*s45 + 1/2*pentagon1(1,1
      ,1,1,0)*den( - s45 + s23 + s12)*s23*s34 + 1/2*pentagon1(1,1,1,1,0)*den(
       - s45 + s23 + s12)*s23^2;


id pentagon1(1,1,1,1,-2)=
1/2*pentagon1(1,0,1,0,0)*s34*s45 + 1/4*pentagon1(1,0,1,0,0)*s34^2 - 1/4*
      pentagon1(1,0,1,0,0)*s12*s45 - 1/2*pentagon1(1,0,1,0,0)*s12*s34 + 1/4*
      pentagon1(1,0,1,0,0)*s12^2 + 2*pentagon1(1,0,1,0,0)*den( - 2 + d)*s51^2
       + 4*pentagon1(1,0,1,0,0)*den( - 2 + d)*s23*s51 - 2*pentagon1(1,0,1,0,0)
      *den( - 1 + d)*s51^2 + pentagon1(1,0,1,0,0)*den( - 1 + d)*s45*s51 + 
      pentagon1(1,0,1,0,0)*den( - 1 + d)*s34*s51 - 1/2*pentagon1(1,0,1,0,0)*
      den( - 1 + d)*s34*s45 + 1/4*pentagon1(1,0,1,0,0)*den( - 1 + d)*s34^2 - 4
      *pentagon1(1,0,1,0,0)*den( - 1 + d)*s23*s51 + pentagon1(1,0,1,0,0)*den(
       - 1 + d)*s23*s34 - pentagon1(1,0,1,0,0)*den( - 1 + d)*s12*s51 - 1/4*
      pentagon1(1,0,1,0,0)*den( - 1 + d)*s12*s45 - 1/2*pentagon1(1,0,1,0,0)*
      den( - 1 + d)*s12*s34 - 1/2*pentagon1(1,0,1,0,0)*den( - 1 + d)*s12*s23
       + 1/4*pentagon1(1,0,1,0,0)*den( - 1 + d)*s12^2 - 1/4*pentagon1(1,0,1,0,
      0)*den(s12)*s34^2*s45 - 2*pentagon1(1,0,1,0,0)*den(s12)*den( - 4 + d)*
      s23*s51^2 - 2*pentagon1(1,0,1,0,0)*den(s12)*den( - 2 + d)*s45*s51^2 + 2*
      pentagon1(1,0,1,0,0)*den(s12)*den( - 2 + d)*s34*s45*s51 + 6*pentagon1(1,
      0,1,0,0)*den(s12)*den( - 2 + d)*s23*s51^2 - 4*pentagon1(1,0,1,0,0)*den(
      s12)*den( - 2 + d)*s23*s34*s51 + 2*pentagon1(1,0,1,0,0)*den(s12)*den( - 
      1 + d)*s45*s51^2 - 3*pentagon1(1,0,1,0,0)*den(s12)*den( - 1 + d)*s34*s45
      *s51 + 3/4*pentagon1(1,0,1,0,0)*den(s12)*den( - 1 + d)*s34^2*s45 - 4*
      pentagon1(1,0,1,0,0)*den(s12)*den( - 1 + d)*s23*s51^2 + 4*pentagon1(1,0,
      1,0,0)*den(s12)*den( - 1 + d)*s23*s34*s51 - 1/2*pentagon1(1,0,1,0,0)*
      den(s12)*den( - 1 + d)*s23*s34^2;


id pentagon1(1,1,1,1,-3)=
 - 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23)^2*den( - s45 + s23
       + s12)*s45*s51^2 + 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + 
      s23)*den( - s45 + s23 + s12)*s51^2 - 2*pentagon1(0,1,0,1,0)*den( - 4 + d
      )*den( - s45 + s23)*den( - s45 + s23 + s12)^2*s45*s51^2 - 4*pentagon1(0,
      1,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)*s51 + 2*pentagon1(0,1,0,1
      ,0)*den( - 4 + d)*den( - s45 + s23 + s12)*s23 - 2*pentagon1(0,1,0,1,0)*
      den( - 4 + d)*den( - s45 + s23 + s12)^2*s51^2 + 4*pentagon1(0,1,0,1,0)*
      den( - 4 + d)*den( - s45 + s23 + s12)^2*s34*s51 + 4*pentagon1(0,1,0,1,0)
      *den( - 4 + d)*den( - s45 + s23 + s12)^2*s34*s45 - 2*pentagon1(0,1,0,1,0
      )*den( - 4 + d)*den( - s45 + s23 + s12)^2*s34^2 + 4*pentagon1(0,1,0,1,0)
      *den( - 4 + d)*den( - s45 + s23 + s12)^2*s23*s51 + 2*pentagon1(0,1,0,1,0
      )*den( - 4 + d)*den( - s45 + s23 + s12)^2*s23*s45 - 4*pentagon1(0,1,0,1,
      0)*den( - 4 + d)*den( - s45 + s23 + s12)^2*s23*s34 - 2*pentagon1(0,1,0,1
      ,0)*den( - 4 + d)*den( - s45 + s23 + s12)^2*s23^2 + 2*pentagon1(0,1,0,1,
      0)*den( - s45 + s23)*den( - s45 + s23 + s12)*s51^2 - 2*pentagon1(0,1,0,1
      ,0)*den( - s45 + s23)*den( - s45 + s23 + s12)*s45*s51 - pentagon1(0,1,0,
      1,0)*den( - s45 + s23)*den( - s45 + s23 + s12)^2*s45*s51^2 - 4*
      pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)*s51 + 2*pentagon1(0,1,0,1,0
      )*den( - s45 + s23 + s12)*s34 + 2*pentagon1(0,1,0,1,0)*den( - s45 + s23
       + s12)*s23 - pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^2*s51^2 + 2*
      pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^2*s34*s51 + 2*pentagon1(0,1
      ,0,1,0)*den( - s45 + s23 + s12)^2*s34*s45 - pentagon1(0,1,0,1,0)*den( - 
      s45 + s23 + s12)^2*s34^2 + 2*pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12
      )^2*s23*s51 + pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^2*s23*s45 - 2
      *pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^2*s23*s34 - pentagon1(0,1,
      0,1,0)*den( - s45 + s23 + s12)^2*s23^2 - 2*pentagon1(0,1,0,1,0)*den(s23)
      *den( - 4 + d)*den( - s45 + s23 + s12)*s34^2 + 2*pentagon1(0,1,0,1,0)*
      den(s23)*den( - 4 + d)*den( - s45 + s23 + s12)^2*s34^2*s45 - 2*
      pentagon1(0,1,0,1,0)*den(s23)*den( - s45 + s23 + s12)*s34*s51 + 
      pentagon1(0,1,0,1,0)*den(s23)*den( - s45 + s23 + s12)^2*s34^2*s45 + 2*
      pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s23)^2*den( - s45 + s23
       + s12)*s45*s51^2 - 2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + 
      s23)*den( - s45 + s23 + s12)*s51^2 + 2*pentagon1(1,0,0,1,0)*den( - 4 + d
      )*den( - s45 + s23)*den( - s45 + s23 + s12)^2*s45*s51^2 + 4*pentagon1(1,
      0,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)*s51 - 2*pentagon1(1,0,0,1
      ,0)*den( - 4 + d)*den( - s45 + s23 + s12)*s23 + 2*pentagon1(1,0,0,1,0)*
      den( - 4 + d)*den( - s45 + s23 + s12)^2*s51^2 - 4*pentagon1(1,0,0,1,0)*
      den( - 4 + d)*den( - s45 + s23 + s12)^2*s34*s51 - 4*pentagon1(1,0,0,1,0)
      *den( - 4 + d)*den( - s45 + s23 + s12)^2*s34*s45 + 2*pentagon1(1,0,0,1,0
      )*den( - 4 + d)*den( - s45 + s23 + s12)^2*s34^2 - 4*pentagon1(1,0,0,1,0)
      *den( - 4 + d)*den( - s45 + s23 + s12)^2*s23*s51 - 2*pentagon1(1,0,0,1,0
      )*den( - 4 + d)*den( - s45 + s23 + s12)^2*s23*s45 + 4*pentagon1(1,0,0,1,
      0)*den( - 4 + d)*den( - s45 + s23 + s12)^2*s23*s34 + 2*pentagon1(1,0,0,1
      ,0)*den( - 4 + d)*den( - s45 + s23 + s12)^2*s23^2 - 2*pentagon1(1,0,0,1,
      0)*den( - 4 + d)*den( - s45 + s12)*den( - s45 + s23 + s12)*s34^2 + 2*
      pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s12)*den( - s45 + s23 + 
      s12)^2*s34^2*s45 + 2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s12
      )^2*den( - s45 + s23 + s12)*s34^2*s45 - pentagon1(1,0,0,1,0)*den( - s45
       + s23)*den( - s45 + s23 + s12)*s51^2 + 2*pentagon1(1,0,0,1,0)*den( - 
      s45 + s23)*den( - s45 + s23 + s12)*s45*s51 + pentagon1(1,0,0,1,0)*den(
       - s45 + s23)*den( - s45 + s23 + s12)^2*s45*s51^2 + 2*pentagon1(1,0,0,1,
      0)*den( - s45 + s23 + s12)*s51 - pentagon1(1,0,0,1,0)*den( - s45 + s23
       + s12)*s45 - pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)*s23 + 
      pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)^2*s51^2 - 2*pentagon1(1,0,0
      ,1,0)*den( - s45 + s23 + s12)^2*s34*s51 - 2*pentagon1(1,0,0,1,0)*den( - 
      s45 + s23 + s12)^2*s34*s45 + pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12
      )^2*s34^2 - 2*pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)^2*s23*s51 - 
      pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)^2*s23*s45 + 2*pentagon1(1,0
      ,0,1,0)*den( - s45 + s23 + s12)^2*s23*s34 + pentagon1(1,0,0,1,0)*den( - 
      s45 + s23 + s12)^2*s23^2 + 2*pentagon1(1,0,0,1,0)*den( - s45 + s12)*den(
       - s45 + s23 + s12)*s34*s45 - pentagon1(1,0,0,1,0)*den( - s45 + s12)*
      den( - s45 + s23 + s12)*s34^2 + pentagon1(1,0,0,1,0)*den( - s45 + s12)*
      den( - s45 + s23 + s12)^2*s34^2*s45 + pentagon1(1,0,1,0,0) - 4*
      pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s23 + s12)*s51 + 2*
      pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s23 + s12)*s23 - 2*
      pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s23 + s12)^2*s51^2 + 4*
      pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s23 + s12)^2*s34*s51 + 4
      *pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s23 + s12)^2*s34*s45 - 
      2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s23 + s12)^2*s34^2 + 4
      *pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s23 + s12)^2*s23*s51 + 
      2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s23 + s12)^2*s23*s45
       - 4*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s23 + s12)^2*s23*
      s34 - 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s23 + s12)^2*
      s23^2 + 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s12)*den( - 
      s45 + s23 + s12)*s34^2 - 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45
       + s12)*den( - s45 + s23 + s12)^2*s34^2*s45 - 2*pentagon1(1,0,1,0,0)*
      den( - 4 + d)*den( - s45 + s12)^2*den( - s45 + s23 + s12)*s34^2*s45 + 
      pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)*s45 - 2*pentagon1(1,0,1,0,0
      )*den( - s45 + s23 + s12)*s34 - pentagon1(1,0,1,0,0)*den( - s45 + s23 + 
      s12)^2*s51^2 + 2*pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)^2*s34*s51
       + 2*pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)^2*s34*s45 - pentagon1(
      1,0,1,0,0)*den( - s45 + s23 + s12)^2*s34^2 + 2*pentagon1(1,0,1,0,0)*den(
       - s45 + s23 + s12)^2*s23*s51 + pentagon1(1,0,1,0,0)*den( - s45 + s23 + 
      s12)^2*s23*s45 - 2*pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)^2*s23*
      s34 - pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)^2*s23^2 - 2*
      pentagon1(1,0,1,0,0)*den( - s45 + s12)*den( - s45 + s23 + s12)*s34*s45
       + 2*pentagon1(1,0,1,0,0)*den( - s45 + s12)*den( - s45 + s23 + s12)*
      s34^2 - pentagon1(1,0,1,0,0)*den( - s45 + s12)*den( - s45 + s23 + s12)^2
      *s34^2*s45 - 2*pentagon1(1,0,1,0,0)*den(s12)*den( - 4 + d)*den( - s45 + 
      s23 + s12)*s51^2 + 2*pentagon1(1,0,1,0,0)*den(s12)*den( - 4 + d)*den( - 
      s45 + s23 + s12)^2*s45*s51^2 - 2*pentagon1(1,0,1,0,0)*den(s12)*den( - 
      s45 + s23 + s12)*s34*s51 + pentagon1(1,0,1,0,0)*den(s12)*den( - s45 + 
      s23 + s12)^2*s45*s51^2 + 1/4*pentagon1(1,1,1,1,0)*s51^2 - 1/2*pentagon1(
      1,1,1,1,0)*s23*s51 + 1/4*pentagon1(1,1,1,1,0)*s23^2 + 1/4*pentagon1(1,1,
      1,1,0)*den( - 3 + d)*s51^2 - 1/2*pentagon1(1,1,1,1,0)*den( - 3 + d)*s23*
      s51 + 1/4*pentagon1(1,1,1,1,0)*den( - 3 + d)*s23^2 + 1/2*pentagon1(1,1,1
      ,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)*s34*s45*s51 - 1/2*pentagon1(
      1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)*s23*s51^2 - 1/2*
      pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)*s23*s45*s51
       + 1/2*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)*s23*
      s34*s51 + 1/2*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)
      *s23*s34*s45 + pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12
      )*s23^2*s51 + 1/2*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + 
      s12)*s23^2*s45 - 1/2*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23
       + s12)*s23^2*s34 - 1/2*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + 
      s23 + s12)*s23^3 + 1/4*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + 
      s23 + s12)^2*s34^2*s45^2 + 1/2*pentagon1(1,1,1,1,0)*den( - 3 + d)*den(
       - s45 + s23 + s12)^2*s23*s34*s45*s51 + 1/2*pentagon1(1,1,1,1,0)*den( - 
      3 + d)*den( - s45 + s23 + s12)^2*s23*s34*s45^2 - 1/2*pentagon1(1,1,1,1,0
      )*den( - 3 + d)*den( - s45 + s23 + s12)^2*s23*s34^2*s45 + 1/4*pentagon1(
      1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)^2*s23^2*s51^2 + 1/2*
      pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)^2*s23^2*s45*
      s51 + 1/4*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)^2*
      s23^2*s45^2 - 1/2*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + 
      s12)^2*s23^2*s34*s51 - pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + 
      s23 + s12)^2*s23^2*s34*s45 + 1/4*pentagon1(1,1,1,1,0)*den( - 3 + d)*den(
       - s45 + s23 + s12)^2*s23^2*s34^2 - 1/2*pentagon1(1,1,1,1,0)*den( - 3 + 
      d)*den( - s45 + s23 + s12)^2*s23^3*s51 - 1/2*pentagon1(1,1,1,1,0)*den(
       - 3 + d)*den( - s45 + s23 + s12)^2*s23^3*s45 + 1/2*pentagon1(1,1,1,1,0)
      *den( - 3 + d)*den( - s45 + s23 + s12)^2*s23^3*s34 + 1/4*pentagon1(1,1,1
      ,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)^2*s23^4 - 1/2*pentagon1(1,1,
      1,1,0)*den( - s45 + s23 + s12)*s34*s45*s51 - 1/2*pentagon1(1,1,1,1,0)*
      den( - s45 + s23 + s12)*s23*s51^2 - 1/2*pentagon1(1,1,1,1,0)*den( - s45
       + s23 + s12)*s23*s45*s51 + 1/2*pentagon1(1,1,1,1,0)*den( - s45 + s23 + 
      s12)*s23*s34*s51 + 1/2*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)*s23*
      s34*s45 + pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)*s23^2*s51 + 1/2*
      pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)*s23^2*s45 - 1/2*pentagon1(1
      ,1,1,1,0)*den( - s45 + s23 + s12)*s23^2*s34 - 1/2*pentagon1(1,1,1,1,0)*
      den( - s45 + s23 + s12)*s23^3 + 1/4*pentagon1(1,1,1,1,0)*den( - s45 + 
      s23 + s12)^2*s34^2*s45^2 + 1/2*pentagon1(1,1,1,1,0)*den( - s45 + s23 + 
      s12)^2*s23*s34*s45*s51 + 1/2*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12
      )^2*s23*s34*s45^2 - 1/2*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^2*
      s23*s34^2*s45 + 1/4*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^2*s23^2
      *s51^2 + 1/2*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^2*s23^2*s45*
      s51 + 1/4*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^2*s23^2*s45^2 - 1/
      2*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^2*s23^2*s34*s51 - 
      pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^2*s23^2*s34*s45 + 1/4*
      pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^2*s23^2*s34^2 - 1/2*
      pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^2*s23^3*s51 - 1/2*
      pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^2*s23^3*s45 + 1/2*
      pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^2*s23^3*s34 + 1/4*
      pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^2*s23^4;


id pentagon1(1,1,1,-2,0)=
2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23)^3*den( - s45 + s23 + 
      s12)*s45^2*s51^3 - 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23
      )^2*den( - s45 + s23 + s12)*s45*s51^3 + 2*pentagon1(0,1,0,1,0)*den( - 4
       + d)*den( - s45 + s23)^2*den( - s45 + s23 + s12)^2*s45^2*s51^3 + 2*
      pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23)*den( - s45 + s23 + 
      s12)*s51^3 - 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23)*den(
       - s45 + s23 + s12)^2*s45*s51^3 + 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*
      den( - s45 + s23)*den( - s45 + s23 + s12)^3*s45^2*s51^3 - 6*pentagon1(0,
      1,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)*s51^2 + 6*pentagon1(0,1,0
      ,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)*s23*s51 - 2*pentagon1(0,1,0,
      1,0)*den( - 4 + d)*den( - s45 + s23 + s12)*s23^2 - 4*pentagon1(0,1,0,1,0
      )*den( - 4 + d)*den( - s45 + s23 + s12)^2*s51^3 + 6*pentagon1(0,1,0,1,0)
      *den( - 4 + d)*den( - s45 + s23 + s12)^2*s34*s51^2 + 6*pentagon1(0,1,0,1
      ,0)*den( - 4 + d)*den( - s45 + s23 + s12)^2*s34*s45*s51 - 2*pentagon1(0,
      1,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)^2*s34^3 + 12*pentagon1(0,
      1,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)^2*s23*s51^2 + 6*
      pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)^2*s23*s45*s51
       - 12*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)^2*s23*
      s34*s51 - 6*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)^2
      *s23*s34*s45 - 12*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23 + 
      s12)^2*s23^2*s51 - 4*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23
       + s12)^2*s23^2*s45 + 6*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + 
      s23 + s12)^2*s23^2*s34 + 4*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45
       + s23 + s12)^2*s23^3 + 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45
       + s23 + s12)^3*s45*s51^3 - 6*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - 
      s45 + s23 + s12)^3*s34^2*s45*s51 - 6*pentagon1(0,1,0,1,0)*den( - 4 + d)*
      den( - s45 + s23 + s12)^3*s34^2*s45^2 + 4*pentagon1(0,1,0,1,0)*den( - 4
       + d)*den( - s45 + s23 + s12)^3*s34^3*s45 + 2*pentagon1(0,1,0,1,0)*den(
       - 4 + d)*den( - s45 + s23 + s12)^3*s23*s51^3 - 6*pentagon1(0,1,0,1,0)*
      den( - 4 + d)*den( - s45 + s23 + s12)^3*s23*s34*s51^2 - 12*pentagon1(0,1
      ,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*s23*s34*s45*s51 - 6*
      pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*s23*s34*
      s45^2 + 6*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*
      s23*s34^2*s51 + 12*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23
       + s12)^3*s23*s34^2*s45 - 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - 
      s45 + s23 + s12)^3*s23*s34^3 - 6*pentagon1(0,1,0,1,0)*den( - 4 + d)*den(
       - s45 + s23 + s12)^3*s23^2*s51^2 - 6*pentagon1(0,1,0,1,0)*den( - 4 + d)
      *den( - s45 + s23 + s12)^3*s23^2*s45*s51 - 2*pentagon1(0,1,0,1,0)*den(
       - 4 + d)*den( - s45 + s23 + s12)^3*s23^2*s45^2 + 12*pentagon1(0,1,0,1,0
      )*den( - 4 + d)*den( - s45 + s23 + s12)^3*s23^2*s34*s51 + 12*pentagon1(0
      ,1,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*s23^2*s34*s45 - 6*
      pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*s23^2*s34^2
       + 6*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*s23^3*
      s51 + 4*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*
      s23^3*s45 - 6*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)
      ^3*s23^3*s34 - 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23 + 
      s12)^3*s23^4 - 2*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45 + s23)^3*
      den( - s45 + s23 + s12)*s45^2*s51^3 - pentagon1(0,1,0,1,0)*den( - 2 + d)
      *den( - s45 + s23)^2*den( - s45 + s23 + s12)*s45*s51^3 + 3*pentagon1(0,1
      ,0,1,0)*den( - 2 + d)*den( - s45 + s23)^2*den( - s45 + s23 + s12)*s45^2*
      s51^2 - pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45 + s23)^2*den( - 
      s45 + s23 + s12)^2*s45^2*s51^3 + pentagon1(0,1,0,1,0)*den( - 2 + d)*den(
       - s45 + s23)*den( - s45 + s23 + s12)*s51^3 - 2*pentagon1(0,1,0,1,0)*
      den( - 2 + d)*den( - s45 + s23)*den( - s45 + s23 + s12)^2*s45*s51^3 + 3*
      pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45 + s23)*den( - s45 + s23 + 
      s12)^2*s45^2*s51^2 + 3*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45 + 
      s23)*den( - s45 + s23 + s12)^2*s34*s45*s51^2 - 3*pentagon1(0,1,0,1,0)*
      den( - 2 + d)*den( - s45 + s23 + s12)*s51^2 + 3*pentagon1(0,1,0,1,0)*
      den( - 2 + d)*den( - s45 + s23 + s12)*s34^2 + 3*pentagon1(0,1,0,1,0)*
      den( - 2 + d)*den( - s45 + s23 + s12)*s23*s51 - pentagon1(0,1,0,1,0)*
      den( - 2 + d)*den( - s45 + s23 + s12)*s23^2 - pentagon1(0,1,0,1,0)*den(
       - 2 + d)*den( - s45 + s23 + s12)^2*s51^3 + 3*pentagon1(0,1,0,1,0)*den(
       - 2 + d)*den( - s45 + s23 + s12)^2*s45*s51^2 + 3*pentagon1(0,1,0,1,0)*
      den( - 2 + d)*den( - s45 + s23 + s12)^2*s34*s51^2 - 3*pentagon1(0,1,0,1,
      0)*den( - 2 + d)*den( - s45 + s23 + s12)^2*s34^2*s51 - 3*pentagon1(0,1,0
      ,1,0)*den( - 2 + d)*den( - s45 + s23 + s12)^2*s34^2*s45 + pentagon1(0,1,
      0,1,0)*den( - 2 + d)*den( - s45 + s23 + s12)^2*s34^3 + 3*pentagon1(0,1,0
      ,1,0)*den( - 2 + d)*den( - s45 + s23 + s12)^2*s23*s51^2 - 6*pentagon1(0,
      1,0,1,0)*den( - 2 + d)*den( - s45 + s23 + s12)^2*s23*s34*s51 - 3*
      pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45 + s23 + s12)^2*s23*s34*s45
       + 3*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45 + s23 + s12)^2*s23*
      s34^2 - 3*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45 + s23 + s12)^2*
      s23^2*s51 - pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45 + s23 + s12)^2
      *s23^2*s45 + 3*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45 + s23 + s12
      )^2*s23^2*s34 + pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45 + s23 + 
      s12)^2*s23^3 + 3/2*pentagon1(0,1,0,1,0)*den( - s45 + s23)*den( - s45 + 
      s23 + s12)*s51^3 - 3*pentagon1(0,1,0,1,0)*den( - s45 + s23)*den( - s45
       + s23 + s12)*s45*s51^2 + 3/2*pentagon1(0,1,0,1,0)*den( - s45 + s23)*
      den( - s45 + s23 + s12)*s45^2*s51 - 3/2*pentagon1(0,1,0,1,0)*den( - s45
       + s23)*den( - s45 + s23 + s12)^2*s45*s51^3 + 3/2*pentagon1(0,1,0,1,0)*
      den( - s45 + s23)*den( - s45 + s23 + s12)^2*s45^2*s51^2 + 1/2*pentagon1(
      0,1,0,1,0)*den( - s45 + s23)*den( - s45 + s23 + s12)^3*s45^2*s51^3 - 9/2
      *pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)*s51^2 + 3/2*pentagon1(0,1,
      0,1,0)*den( - s45 + s23 + s12)*s45*s51 + 3*pentagon1(0,1,0,1,0)*den( - 
      s45 + s23 + s12)*s34*s51 + 9/2*pentagon1(0,1,0,1,0)*den( - s45 + s23 + 
      s12)*s23*s51 - 3/2*pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)*s23*s34
       - 3/2*pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)*s23^2 - 3/2*
      pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^2*s51^3 + 3/2*pentagon1(0,1
      ,0,1,0)*den( - s45 + s23 + s12)^2*s45*s51^2 + 3*pentagon1(0,1,0,1,0)*
      den( - s45 + s23 + s12)^2*s34*s51^2 + 3*pentagon1(0,1,0,1,0)*den( - s45
       + s23 + s12)^2*s34*s45*s51 - 3/2*pentagon1(0,1,0,1,0)*den( - s45 + s23
       + s12)^2*s34^2*s51 - 3/2*pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^2
      *s34^2*s45 + 9/2*pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^2*s23*
      s51^2 + 3/2*pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^2*s23*s45*s51
       - 6*pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^2*s23*s34*s51 - 3*
      pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^2*s23*s34*s45 + 3/2*
      pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^2*s23*s34^2 - 9/2*
      pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^2*s23^2*s51 - 3/2*
      pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^2*s23^2*s45 + 3*pentagon1(0
      ,1,0,1,0)*den( - s45 + s23 + s12)^2*s23^2*s34 + 3/2*pentagon1(0,1,0,1,0)
      *den( - s45 + s23 + s12)^2*s23^3 + 1/2*pentagon1(0,1,0,1,0)*den( - s45
       + s23 + s12)^3*s45*s51^3 - 3/2*pentagon1(0,1,0,1,0)*den( - s45 + s23 + 
      s12)^3*s34^2*s45*s51 - 3/2*pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^
      3*s34^2*s45^2 + pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^3*s34^3*s45
       + 1/2*pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^3*s23*s51^3 - 3/2*
      pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^3*s23*s34*s51^2 - 3*
      pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^3*s23*s34*s45*s51 - 3/2*
      pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^3*s23*s34*s45^2 + 3/2*
      pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^3*s23*s34^2*s51 + 3*
      pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^3*s23*s34^2*s45 - 1/2*
      pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^3*s23*s34^3 - 3/2*
      pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^3*s23^2*s51^2 - 3/2*
      pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^3*s23^2*s45*s51 - 1/2*
      pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^3*s23^2*s45^2 + 3*
      pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^3*s23^2*s34*s51 + 3*
      pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^3*s23^2*s34*s45 - 3/2*
      pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^3*s23^2*s34^2 + 3/2*
      pentagon1(0,1,0,1,0)*den( - s45 + s23 + s12)^3*s23^3*s51 + pentagon1(0,1
      ,0,1,0)*den( - s45 + s23 + s12)^3*s23^3*s45 - 3/2*pentagon1(0,1,0,1,0)*
      den( - s45 + s23 + s12)^3*s23^3*s34 - 1/2*pentagon1(0,1,0,1,0)*den( - 
      s45 + s23 + s12)^3*s23^4 - 2*pentagon1(0,1,0,1,0)*den(s23)*den( - 4 + d)
      *den( - s45 + s23 + s12)*s34^3 + 2*pentagon1(0,1,0,1,0)*den(s23)*den( - 
      4 + d)*den( - s45 + s23 + s12)^2*s34^3*s45 - 2*pentagon1(0,1,0,1,0)*den(
      s23)*den( - 4 + d)*den( - s45 + s23 + s12)^3*s34^3*s45^2 - 3*pentagon1(0
      ,1,0,1,0)*den(s23)*den( - 2 + d)*den( - s45 + s23 + s12)*s34^2*s51 + 2*
      pentagon1(0,1,0,1,0)*den(s23)*den( - 2 + d)*den( - s45 + s23 + s12)*
      s34^3 - pentagon1(0,1,0,1,0)*den(s23)*den( - 2 + d)*den( - s45 + s23 + 
      s12)^2*s34^3*s45 - 3/2*pentagon1(0,1,0,1,0)*den(s23)*den( - s45 + s23 + 
      s12)*s34*s51^2 + 3/2*pentagon1(0,1,0,1,0)*den(s23)*den( - s45 + s23 + 
      s12)^2*s34^2*s45*s51 - 1/2*pentagon1(0,1,0,1,0)*den(s23)*den( - s45 + 
      s23 + s12)^3*s34^3*s45^2 - 2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - 
      s45 + s23)^3*den( - s45 + s23 + s12)*s45^2*s51^3 + 2*pentagon1(1,0,0,1,0
      )*den( - 4 + d)*den( - s45 + s23)^2*den( - s45 + s23 + s12)*s45*s51^3 - 
      2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s23)^2*den( - s45 + 
      s23 + s12)^2*s45^2*s51^3 - 2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - 
      s45 + s23)*den( - s45 + s23 + s12)*s51^3 + 2*pentagon1(1,0,0,1,0)*den(
       - 4 + d)*den( - s45 + s23)*den( - s45 + s23 + s12)^2*s45*s51^3 - 2*
      pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s23)*den( - s45 + s23 + 
      s12)^3*s45^2*s51^3 + 6*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + 
      s23 + s12)*s51^2 - 6*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s23
       + s12)*s23*s51 + 2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s23
       + s12)*s23^2 + 4*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s23 + 
      s12)^2*s51^3 - 6*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s23 + 
      s12)^2*s34*s51^2 - 6*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s23
       + s12)^2*s34*s45*s51 + 2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45
       + s23 + s12)^2*s34^3 - 12*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45
       + s23 + s12)^2*s23*s51^2 - 6*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - 
      s45 + s23 + s12)^2*s23*s45*s51 + 12*pentagon1(1,0,0,1,0)*den( - 4 + d)*
      den( - s45 + s23 + s12)^2*s23*s34*s51 + 6*pentagon1(1,0,0,1,0)*den( - 4
       + d)*den( - s45 + s23 + s12)^2*s23*s34*s45 + 12*pentagon1(1,0,0,1,0)*
      den( - 4 + d)*den( - s45 + s23 + s12)^2*s23^2*s51 + 4*pentagon1(1,0,0,1,
      0)*den( - 4 + d)*den( - s45 + s23 + s12)^2*s23^2*s45 - 6*pentagon1(1,0,0
      ,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)^2*s23^2*s34 - 4*pentagon1(1,
      0,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)^2*s23^3 - 2*pentagon1(1,0
      ,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*s45*s51^3 + 6*pentagon1(
      1,0,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*s34^2*s45*s51 + 6*
      pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*s34^2*s45^2
       - 4*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*s34^3*
      s45 - 2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*s23
      *s51^3 + 6*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*
      s23*s34*s51^2 + 12*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s23
       + s12)^3*s23*s34*s45*s51 + 6*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - 
      s45 + s23 + s12)^3*s23*s34*s45^2 - 6*pentagon1(1,0,0,1,0)*den( - 4 + d)*
      den( - s45 + s23 + s12)^3*s23*s34^2*s51 - 12*pentagon1(1,0,0,1,0)*den(
       - 4 + d)*den( - s45 + s23 + s12)^3*s23*s34^2*s45 + 2*pentagon1(1,0,0,1,
      0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*s23*s34^3 + 6*pentagon1(1,0,0
      ,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*s23^2*s51^2 + 6*pentagon1(
      1,0,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*s23^2*s45*s51 + 2*
      pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*s23^2*s45^2
       - 12*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*s23^2
      *s34*s51 - 12*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s23 + s12)
      ^3*s23^2*s34*s45 + 6*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s23
       + s12)^3*s23^2*s34^2 - 6*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45
       + s23 + s12)^3*s23^3*s51 - 4*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - 
      s45 + s23 + s12)^3*s23^3*s45 + 6*pentagon1(1,0,0,1,0)*den( - 4 + d)*den(
       - s45 + s23 + s12)^3*s23^3*s34 + 2*pentagon1(1,0,0,1,0)*den( - 4 + d)*
      den( - s45 + s23 + s12)^3*s23^4 - 2*pentagon1(1,0,0,1,0)*den( - 4 + d)*
      den( - s45 + s12)*den( - s45 + s23 + s12)*s34^3 + 2*pentagon1(1,0,0,1,0)
      *den( - 4 + d)*den( - s45 + s12)*den( - s45 + s23 + s12)^2*s34^3*s45 - 2
      *pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s12)*den( - s45 + s23
       + s12)^3*s34^3*s45^2 + 2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45
       + s12)^2*den( - s45 + s23 + s12)*s34^3*s45 - 2*pentagon1(1,0,0,1,0)*
      den( - 4 + d)*den( - s45 + s12)^2*den( - s45 + s23 + s12)^2*s34^3*s45^2
       - 2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s12)^3*den( - s45
       + s23 + s12)*s34^3*s45^2 + 2*pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - 
      s45 + s23)^3*den( - s45 + s23 + s12)*s45^2*s51^3 - pentagon1(1,0,0,1,0)*
      den( - 2 + d)*den( - s45 + s23)^2*den( - s45 + s23 + s12)*s45*s51^3 - 3*
      pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s23)^2*den( - s45 + s23
       + s12)*s45^2*s51^2 + pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + 
      s23)^2*den( - s45 + s23 + s12)^2*s45^2*s51^3 + 3*pentagon1(1,0,0,1,0)*
      den( - 2 + d)*den( - s45 + s23)*den( - s45 + s23 + s12)*s45*s51^2 + 
      pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s23)*den( - s45 + s23 + 
      s12)^2*s45*s51^3 - 3*pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s23
      )*den( - s45 + s23 + s12)^2*s45^2*s51^2 - 3*pentagon1(1,0,0,1,0)*den( - 
      2 + d)*den( - s45 + s23)*den( - s45 + s23 + s12)^2*s34*s45*s51^2 - 3*
      pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s23 + s12)*s45*s51 + 
      pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s23 + s12)*s23*s45 - 3*
      pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s23 + s12)^2*s45*s51^2
       + 6*pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s23 + s12)^2*s34*
      s45*s51 + 3*pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s23 + s12)^2
      *s34*s45^2 - 3*pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s23 + s12
      )^2*s34^2*s45 + 3*pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s23 + 
      s12)^2*s23*s45*s51 + pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s23
       + s12)^2*s23*s45^2 - 3*pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + 
      s23 + s12)^2*s23*s34*s45 - pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45
       + s23 + s12)^2*s23^2*s45 + 3*pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - 
      s45 + s12)*den( - s45 + s23 + s12)*s34^2*s45 - 3*pentagon1(1,0,0,1,0)*
      den( - 2 + d)*den( - s45 + s12)*den( - s45 + s23 + s12)^2*s34^2*s45*s51
       - 3*pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s12)*den( - s45 + 
      s23 + s12)^2*s34^2*s45^2 + pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45
       + s12)*den( - s45 + s23 + s12)^2*s34^3*s45 - 3*pentagon1(1,0,0,1,0)*
      den( - 2 + d)*den( - s45 + s12)^2*den( - s45 + s23 + s12)*s34^2*s45^2 - 
      pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s12)^2*den( - s45 + s23
       + s12)*s34^3*s45 + pentagon1(1,0,0,1,0)*den( - 2 + d)*den( - s45 + s12)
      ^2*den( - s45 + s23 + s12)^2*s34^3*s45^2 + 2*pentagon1(1,0,0,1,0)*den(
       - 2 + d)*den( - s45 + s12)^3*den( - s45 + s23 + s12)*s34^3*s45^2 - 1/2*
      pentagon1(1,0,0,1,0)*den( - s45 + s23)*den( - s45 + s23 + s12)*s51^3 + 3/
      2*pentagon1(1,0,0,1,0)*den( - s45 + s23)*den( - s45 + s23 + s12)*s45*
      s51^2 - 3/2*pentagon1(1,0,0,1,0)*den( - s45 + s23)*den( - s45 + s23 + 
      s12)*s45^2*s51 + pentagon1(1,0,0,1,0)*den( - s45 + s23)*den( - s45 + s23
       + s12)^2*s45*s51^3 - 3/2*pentagon1(1,0,0,1,0)*den( - s45 + s23)*den( - 
      s45 + s23 + s12)^2*s45^2*s51^2 - 1/2*pentagon1(1,0,0,1,0)*den( - s45 + 
      s23)*den( - s45 + s23 + s12)^3*s45^2*s51^3 + 3/2*pentagon1(1,0,0,1,0)*
      den( - s45 + s23 + s12)*s51^2 - 3/2*pentagon1(1,0,0,1,0)*den( - s45 + 
      s23 + s12)*s45*s51 + 1/2*pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)*
      s45^2 - 3/2*pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)*s23*s51 + 1/2*
      pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)*s23*s45 + 1/2*pentagon1(1,0
      ,0,1,0)*den( - s45 + s23 + s12)*s23^2 + pentagon1(1,0,0,1,0)*den( - s45
       + s23 + s12)^2*s51^3 - 3/2*pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)
      ^2*s45*s51^2 - 3/2*pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)^2*s34*
      s51^2 + 3/2*pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)^2*s34*s45^2 - 3/
      2*pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)^2*s34^2*s45 + 1/2*
      pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)^2*s34^3 - 3*pentagon1(1,0,0
      ,1,0)*den( - s45 + s23 + s12)^2*s23*s51^2 + 1/2*pentagon1(1,0,0,1,0)*
      den( - s45 + s23 + s12)^2*s23*s45^2 + 3*pentagon1(1,0,0,1,0)*den( - s45
       + s23 + s12)^2*s23*s34*s51 + 3*pentagon1(1,0,0,1,0)*den( - s45 + s23 + 
      s12)^2*s23^2*s51 + 1/2*pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)^2*
      s23^2*s45 - 3/2*pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)^2*s23^2*s34
       - pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)^2*s23^3 - 1/2*pentagon1(
      1,0,0,1,0)*den( - s45 + s23 + s12)^3*s45*s51^3 + 3/2*pentagon1(1,0,0,1,0
      )*den( - s45 + s23 + s12)^3*s34^2*s45*s51 + 3/2*pentagon1(1,0,0,1,0)*
      den( - s45 + s23 + s12)^3*s34^2*s45^2 - pentagon1(1,0,0,1,0)*den( - s45
       + s23 + s12)^3*s34^3*s45 - 1/2*pentagon1(1,0,0,1,0)*den( - s45 + s23 + 
      s12)^3*s23*s51^3 + 3/2*pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)^3*
      s23*s34*s51^2 + 3*pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)^3*s23*s34
      *s45*s51 + 3/2*pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)^3*s23*s34*
      s45^2 - 3/2*pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)^3*s23*s34^2*s51
       - 3*pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)^3*s23*s34^2*s45 + 1/2*
      pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)^3*s23*s34^3 + 3/2*
      pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)^3*s23^2*s51^2 + 3/2*
      pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)^3*s23^2*s45*s51 + 1/2*
      pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)^3*s23^2*s45^2 - 3*
      pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)^3*s23^2*s34*s51 - 3*
      pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)^3*s23^2*s34*s45 + 3/2*
      pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)^3*s23^2*s34^2 - 3/2*
      pentagon1(1,0,0,1,0)*den( - s45 + s23 + s12)^3*s23^3*s51 - pentagon1(1,0
      ,0,1,0)*den( - s45 + s23 + s12)^3*s23^3*s45 + 3/2*pentagon1(1,0,0,1,0)*
      den( - s45 + s23 + s12)^3*s23^3*s34 + 1/2*pentagon1(1,0,0,1,0)*den( - 
      s45 + s23 + s12)^3*s23^4 - 3/2*pentagon1(1,0,0,1,0)*den( - s45 + s12)*
      den( - s45 + s23 + s12)*s34*s45^2 + 3/2*pentagon1(1,0,0,1,0)*den( - s45
       + s12)*den( - s45 + s23 + s12)*s34^2*s45 - 1/2*pentagon1(1,0,0,1,0)*
      den( - s45 + s12)*den( - s45 + s23 + s12)*s34^3 - 3/2*pentagon1(1,0,0,1,
      0)*den( - s45 + s12)*den( - s45 + s23 + s12)^2*s34^2*s45^2 + pentagon1(1
      ,0,0,1,0)*den( - s45 + s12)*den( - s45 + s23 + s12)^2*s34^3*s45 - 1/2*
      pentagon1(1,0,0,1,0)*den( - s45 + s12)*den( - s45 + s23 + s12)^3*s34^3*
      s45^2 - 1/2*pentagon1(1,0,1,0,0)*s45 + 3/2*pentagon1(1,0,1,0,0)*s34 - 1/
      2*pentagon1(1,0,1,0,0)*s12 - 6*pentagon1(1,0,1,0,0)*den( - 4 + d)*den(
       - s45 + s23 + s12)*s51^2 + 6*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - 
      s45 + s23 + s12)*s23*s51 - 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - 
      s45 + s23 + s12)*s23^2 - 4*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45
       + s23 + s12)^2*s51^3 + 6*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45
       + s23 + s12)^2*s34*s51^2 + 6*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - 
      s45 + s23 + s12)^2*s34*s45*s51 - 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*
      den( - s45 + s23 + s12)^2*s34^3 + 12*pentagon1(1,0,1,0,0)*den( - 4 + d)*
      den( - s45 + s23 + s12)^2*s23*s51^2 + 6*pentagon1(1,0,1,0,0)*den( - 4 + 
      d)*den( - s45 + s23 + s12)^2*s23*s45*s51 - 12*pentagon1(1,0,1,0,0)*den(
       - 4 + d)*den( - s45 + s23 + s12)^2*s23*s34*s51 - 6*pentagon1(1,0,1,0,0)
      *den( - 4 + d)*den( - s45 + s23 + s12)^2*s23*s34*s45 - 12*pentagon1(1,0,
      1,0,0)*den( - 4 + d)*den( - s45 + s23 + s12)^2*s23^2*s51 - 4*pentagon1(1
      ,0,1,0,0)*den( - 4 + d)*den( - s45 + s23 + s12)^2*s23^2*s45 + 6*
      pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s23 + s12)^2*s23^2*s34
       + 4*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s23 + s12)^2*s23^3
       + 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*s45*
      s51^3 - 6*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*
      s34^2*s45*s51 - 6*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s23 + 
      s12)^3*s34^2*s45^2 + 4*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + 
      s23 + s12)^3*s34^3*s45 + 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45
       + s23 + s12)^3*s23*s51^3 - 6*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - 
      s45 + s23 + s12)^3*s23*s34*s51^2 - 12*pentagon1(1,0,1,0,0)*den( - 4 + d)
      *den( - s45 + s23 + s12)^3*s23*s34*s45*s51 - 6*pentagon1(1,0,1,0,0)*den(
       - 4 + d)*den( - s45 + s23 + s12)^3*s23*s34*s45^2 + 6*pentagon1(1,0,1,0,
      0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*s23*s34^2*s51 + 12*pentagon1(
      1,0,1,0,0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*s23*s34^2*s45 - 2*
      pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*s23*s34^3
       - 6*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*s23^2*
      s51^2 - 6*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*
      s23^2*s45*s51 - 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s23 + 
      s12)^3*s23^2*s45^2 + 12*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + 
      s23 + s12)^3*s23^2*s34*s51 + 12*pentagon1(1,0,1,0,0)*den( - 4 + d)*den(
       - s45 + s23 + s12)^3*s23^2*s34*s45 - 6*pentagon1(1,0,1,0,0)*den( - 4 + 
      d)*den( - s45 + s23 + s12)^3*s23^2*s34^2 + 6*pentagon1(1,0,1,0,0)*den(
       - 4 + d)*den( - s45 + s23 + s12)^3*s23^3*s51 + 4*pentagon1(1,0,1,0,0)*
      den( - 4 + d)*den( - s45 + s23 + s12)^3*s23^3*s45 - 6*pentagon1(1,0,1,0,
      0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*s23^3*s34 - 2*pentagon1(1,0,1
      ,0,0)*den( - 4 + d)*den( - s45 + s23 + s12)^3*s23^4 + 2*pentagon1(1,0,1,
      0,0)*den( - 4 + d)*den( - s45 + s12)*den( - s45 + s23 + s12)*s34^3 - 2*
      pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s12)*den( - s45 + s23 + 
      s12)^2*s34^3*s45 + 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s12
      )*den( - s45 + s23 + s12)^3*s34^3*s45^2 - 2*pentagon1(1,0,1,0,0)*den( - 
      4 + d)*den( - s45 + s12)^2*den( - s45 + s23 + s12)*s34^3*s45 + 2*
      pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s12)^2*den( - s45 + s23
       + s12)^2*s34^3*s45^2 + 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45
       + s12)^3*den( - s45 + s23 + s12)*s34^3*s45^2 + 3*pentagon1(1,0,1,0,0)*
      den( - 2 + d)*s51 - pentagon1(1,0,1,0,0)*den( - 2 + d)*s23 + 6*
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s23 + s12)*s51^2 + 3*
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s23 + s12)*s45*s51 - 6*
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s23 + s12)*s34*s51 - 3*
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s23 + s12)*s34*s45 - 6*
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s23 + s12)*s23*s51 - 2*
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s23 + s12)*s23*s45 + 3*
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s23 + s12)*s23*s34 + 2*
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s23 + s12)*s23^2 + 
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s23 + s12)^2*s51^3 - 3*
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s23 + s12)^2*s34*s51^2
       - 6*pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s23 + s12)^2*s34*
      s45*s51 - 3*pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s23 + s12)^2
      *s34*s45^2 + 3*pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s23 + s12
      )^2*s34^2*s51 + 6*pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s23 + 
      s12)^2*s34^2*s45 - pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s23
       + s12)^2*s34^3 - 3*pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s23
       + s12)^2*s23*s51^2 - 3*pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + 
      s23 + s12)^2*s23*s45*s51 - pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45
       + s23 + s12)^2*s23*s45^2 + 6*pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - 
      s45 + s23 + s12)^2*s23*s34*s51 + 6*pentagon1(1,0,1,0,0)*den( - 2 + d)*
      den( - s45 + s23 + s12)^2*s23*s34*s45 - 3*pentagon1(1,0,1,0,0)*den( - 2
       + d)*den( - s45 + s23 + s12)^2*s23*s34^2 + 3*pentagon1(1,0,1,0,0)*den(
       - 2 + d)*den( - s45 + s23 + s12)^2*s23^2*s51 + 2*pentagon1(1,0,1,0,0)*
      den( - 2 + d)*den( - s45 + s23 + s12)^2*s23^2*s45 - 3*pentagon1(1,0,1,0,
      0)*den( - 2 + d)*den( - s45 + s23 + s12)^2*s23^2*s34 - pentagon1(1,0,1,0
      ,0)*den( - 2 + d)*den( - s45 + s23 + s12)^2*s23^3 + pentagon1(1,0,1,0,0)
      *den( - 2 + d)*den( - s45 + s12)*den( - s45 + s23 + s12)*s34^3 + 3*
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s12)*den( - s45 + s23 + 
      s12)^2*s34^2*s45*s51 + 3*pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45
       + s12)*den( - s45 + s23 + s12)^2*s34^2*s45^2 - 2*pentagon1(1,0,1,0,0)*
      den( - 2 + d)*den( - s45 + s12)*den( - s45 + s23 + s12)^2*s34^3*s45 + 3*
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s12)^2*den( - s45 + s23
       + s12)*s34^2*s45^2 - pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + 
      s12)^2*den( - s45 + s23 + s12)*s34^3*s45 - pentagon1(1,0,1,0,0)*den( - 2
       + d)*den( - s45 + s12)^2*den( - s45 + s23 + s12)^2*s34^3*s45^2 - 2*
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s12)^3*den( - s45 + s23
       + s12)*s34^3*s45^2 - 1/2*pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)*
      s45^2 + 3/2*pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)*s34*s45 - 3/2*
      pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)*s34^2 - 1/2*pentagon1(1,0,1
      ,0,0)*den( - s45 + s23 + s12)^2*s51^3 - 3/2*pentagon1(1,0,1,0,0)*den( - 
      s45 + s23 + s12)^2*s34*s45^2 + 3/2*pentagon1(1,0,1,0,0)*den( - s45 + s23
       + s12)^2*s34^2*s51 + 3*pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)^2*
      s34^2*s45 - pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)^2*s34^3 + 3/2*
      pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)^2*s23*s51^2 - 1/2*
      pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)^2*s23*s45^2 + 3/2*
      pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)^2*s23*s34*s45 - 3/2*
      pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)^2*s23*s34^2 - 3/2*
      pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)^2*s23^2*s51 + 1/2*
      pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)^2*s23^3 + 1/2*pentagon1(1,0
      ,1,0,0)*den( - s45 + s23 + s12)^3*s45*s51^3 - 3/2*pentagon1(1,0,1,0,0)*
      den( - s45 + s23 + s12)^3*s34^2*s45*s51 - 3/2*pentagon1(1,0,1,0,0)*den(
       - s45 + s23 + s12)^3*s34^2*s45^2 + pentagon1(1,0,1,0,0)*den( - s45 + 
      s23 + s12)^3*s34^3*s45 + 1/2*pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12
      )^3*s23*s51^3 - 3/2*pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)^3*s23*
      s34*s51^2 - 3*pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)^3*s23*s34*s45
      *s51 - 3/2*pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)^3*s23*s34*s45^2
       + 3/2*pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)^3*s23*s34^2*s51 + 3*
      pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)^3*s23*s34^2*s45 - 1/2*
      pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)^3*s23*s34^3 - 3/2*
      pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)^3*s23^2*s51^2 - 3/2*
      pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)^3*s23^2*s45*s51 - 1/2*
      pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)^3*s23^2*s45^2 + 3*
      pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)^3*s23^2*s34*s51 + 3*
      pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)^3*s23^2*s34*s45 - 3/2*
      pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)^3*s23^2*s34^2 + 3/2*
      pentagon1(1,0,1,0,0)*den( - s45 + s23 + s12)^3*s23^3*s51 + pentagon1(1,0
      ,1,0,0)*den( - s45 + s23 + s12)^3*s23^3*s45 - 3/2*pentagon1(1,0,1,0,0)*
      den( - s45 + s23 + s12)^3*s23^3*s34 - 1/2*pentagon1(1,0,1,0,0)*den( - 
      s45 + s23 + s12)^3*s23^4 + 3/2*pentagon1(1,0,1,0,0)*den( - s45 + s12)*
      den( - s45 + s23 + s12)*s34*s45^2 - 3*pentagon1(1,0,1,0,0)*den( - s45 + 
      s12)*den( - s45 + s23 + s12)*s34^2*s45 + 3/2*pentagon1(1,0,1,0,0)*den(
       - s45 + s12)*den( - s45 + s23 + s12)*s34^3 + 3/2*pentagon1(1,0,1,0,0)*
      den( - s45 + s12)*den( - s45 + s23 + s12)^2*s34^2*s45^2 - 3/2*pentagon1(
      1,0,1,0,0)*den( - s45 + s12)*den( - s45 + s23 + s12)^2*s34^3*s45 + 1/2*
      pentagon1(1,0,1,0,0)*den( - s45 + s12)*den( - s45 + s23 + s12)^3*s34^3*
      s45^2 - 2*pentagon1(1,0,1,0,0)*den(s12)*den( - 4 + d)*den( - s45 + s23
       + s12)*s51^3 + 2*pentagon1(1,0,1,0,0)*den(s12)*den( - 4 + d)*den( - s45
       + s23 + s12)^2*s45*s51^3 - 2*pentagon1(1,0,1,0,0)*den(s12)*den( - 4 + d
      )*den( - s45 + s23 + s12)^3*s45^2*s51^3 + 2*pentagon1(1,0,1,0,0)*den(s12
      )*den( - 2 + d)*den( - s45 + s23 + s12)*s51^3 - 3*pentagon1(1,0,1,0,0)*
      den(s12)*den( - 2 + d)*den( - s45 + s23 + s12)*s34*s51^2 - pentagon1(1,0
      ,1,0,0)*den(s12)*den( - 2 + d)*den( - s45 + s23 + s12)^2*s45*s51^3 - 3/2
      *pentagon1(1,0,1,0,0)*den(s12)*den( - s45 + s23 + s12)*s34^2*s51 + 3/2*
      pentagon1(1,0,1,0,0)*den(s12)*den( - s45 + s23 + s12)^2*s34*s45*s51^2 - 
      1/2*pentagon1(1,0,1,0,0)*den(s12)*den( - s45 + s23 + s12)^3*s45^2*s51^3
       + 1/8*pentagon1(1,1,1,1,0)*s51^3 - 3/8*pentagon1(1,1,1,1,0)*s23*s51^2
       + 3/8*pentagon1(1,1,1,1,0)*s23^2*s51 - 1/8*pentagon1(1,1,1,1,0)*s23^3
       + 3/8*pentagon1(1,1,1,1,0)*den( - 3 + d)*s51^3 - 9/8*pentagon1(1,1,1,1,
      0)*den( - 3 + d)*s23*s51^2 + 9/8*pentagon1(1,1,1,1,0)*den( - 3 + d)*
      s23^2*s51 - 3/8*pentagon1(1,1,1,1,0)*den( - 3 + d)*s23^3 + 3/8*
      pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)*s34*s45*s51^2
       - 9/8*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)*s23*
      s51^3 - 9/8*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)*
      s23*s45*s51^2 + 9/8*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23
       + s12)*s23*s34*s51^2 + 3/4*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - 
      s45 + s23 + s12)*s23*s34*s45*s51 + 27/8*pentagon1(1,1,1,1,0)*den( - 3 + 
      d)*den( - s45 + s23 + s12)*s23^2*s51^2 + 9/4*pentagon1(1,1,1,1,0)*den(
       - 3 + d)*den( - s45 + s23 + s12)*s23^2*s45*s51 - 9/4*pentagon1(1,1,1,1,
      0)*den( - 3 + d)*den( - s45 + s23 + s12)*s23^2*s34*s51 - 9/8*pentagon1(1
      ,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)*s23^2*s34*s45 - 27/8*
      pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)*s23^3*s51 - 9/
      8*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)*s23^3*s45
       + 9/8*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)*s23^3*
      s34 + 9/8*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)*
      s23^4 - 3/8*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)^2
      *s34^2*s45^2*s51 + 3/4*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + 
      s23 + s12)^2*s23*s34*s45*s51^2 + 3/4*pentagon1(1,1,1,1,0)*den( - 3 + d)*
      den( - s45 + s23 + s12)^2*s23*s34*s45^2*s51 - 3/4*pentagon1(1,1,1,1,0)*
      den( - 3 + d)*den( - s45 + s23 + s12)^2*s23*s34^2*s45*s51 - 9/8*
      pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)^2*s23*s34^2*
      s45^2 + 9/8*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)^2
      *s23^2*s51^3 + 9/4*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23
       + s12)^2*s23^2*s45*s51^2 + 9/8*pentagon1(1,1,1,1,0)*den( - 3 + d)*den(
       - s45 + s23 + s12)^2*s23^2*s45^2*s51 - 9/4*pentagon1(1,1,1,1,0)*den( - 
      3 + d)*den( - s45 + s23 + s12)^2*s23^2*s34*s51^2 - 21/4*pentagon1(1,1,1,
      1,0)*den( - 3 + d)*den( - s45 + s23 + s12)^2*s23^2*s34*s45*s51 - 9/4*
      pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)^2*s23^2*s34*
      s45^2 + 9/8*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)^2
      *s23^2*s34^2*s51 + 9/4*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + 
      s23 + s12)^2*s23^2*s34^2*s45 - 27/8*pentagon1(1,1,1,1,0)*den( - 3 + d)*
      den( - s45 + s23 + s12)^2*s23^3*s51^2 - 9/2*pentagon1(1,1,1,1,0)*den( - 
      3 + d)*den( - s45 + s23 + s12)^2*s23^3*s45*s51 - 9/8*pentagon1(1,1,1,1,0
      )*den( - 3 + d)*den( - s45 + s23 + s12)^2*s23^3*s45^2 + 9/2*pentagon1(1,
      1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)^2*s23^3*s34*s51 + 9/2*
      pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)^2*s23^3*s34*
      s45 - 9/8*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)^2*
      s23^3*s34^2 + 27/8*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23
       + s12)^2*s23^4*s51 + 9/4*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45
       + s23 + s12)^2*s23^4*s45 - 9/4*pentagon1(1,1,1,1,0)*den( - 3 + d)*den(
       - s45 + s23 + s12)^2*s23^4*s34 - 9/8*pentagon1(1,1,1,1,0)*den( - 3 + d)
      *den( - s45 + s23 + s12)^2*s23^5 - 3/8*pentagon1(1,1,1,1,0)*den( - 3 + d
      )*den( - s45 + s23 + s12)^3*s34^3*s45^3 - 9/8*pentagon1(1,1,1,1,0)*den(
       - 3 + d)*den( - s45 + s23 + s12)^3*s23*s34^2*s45^2*s51 - 9/8*pentagon1(
      1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)^3*s23*s34^2*s45^3 + 9/8
      *pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)^3*s23*s34^3*
      s45^2 - 9/8*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)^3
      *s23^2*s34*s45*s51^2 - 9/4*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45
       + s23 + s12)^3*s23^2*s34*s45^2*s51 - 9/8*pentagon1(1,1,1,1,0)*den( - 3
       + d)*den( - s45 + s23 + s12)^3*s23^2*s34*s45^3 + 9/4*pentagon1(1,1,1,1,
      0)*den( - 3 + d)*den( - s45 + s23 + s12)^3*s23^2*s34^2*s45*s51 + 27/8*
      pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)^3*s23^2*s34^2
      *s45^2 - 9/8*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)^
      3*s23^2*s34^3*s45 - 3/8*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + 
      s23 + s12)^3*s23^3*s51^3 - 9/8*pentagon1(1,1,1,1,0)*den( - 3 + d)*den(
       - s45 + s23 + s12)^3*s23^3*s45*s51^2 - 9/8*pentagon1(1,1,1,1,0)*den( - 
      3 + d)*den( - s45 + s23 + s12)^3*s23^3*s45^2*s51 - 3/8*pentagon1(1,1,1,1
      ,0)*den( - 3 + d)*den( - s45 + s23 + s12)^3*s23^3*s45^3 + 9/8*pentagon1(
      1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)^3*s23^3*s34*s51^2 + 9/2
      *pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)^3*s23^3*s34*
      s45*s51 + 27/8*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12
      )^3*s23^3*s34*s45^2 - 9/8*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45
       + s23 + s12)^3*s23^3*s34^2*s51 - 27/8*pentagon1(1,1,1,1,0)*den( - 3 + d
      )*den( - s45 + s23 + s12)^3*s23^3*s34^2*s45 + 3/8*pentagon1(1,1,1,1,0)*
      den( - 3 + d)*den( - s45 + s23 + s12)^3*s23^3*s34^3 + 9/8*pentagon1(1,1,
      1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)^3*s23^4*s51^2 + 9/4*
      pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)^3*s23^4*s45*
      s51 + 9/8*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)^3*
      s23^4*s45^2 - 9/4*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + 
      s12)^3*s23^4*s34*s51 - 27/8*pentagon1(1,1,1,1,0)*den( - 3 + d)*den( - 
      s45 + s23 + s12)^3*s23^4*s34*s45 + 9/8*pentagon1(1,1,1,1,0)*den( - 3 + d
      )*den( - s45 + s23 + s12)^3*s23^4*s34^2 - 9/8*pentagon1(1,1,1,1,0)*den(
       - 3 + d)*den( - s45 + s23 + s12)^3*s23^5*s51 - 9/8*pentagon1(1,1,1,1,0)
      *den( - 3 + d)*den( - s45 + s23 + s12)^3*s23^5*s45 + 9/8*pentagon1(1,1,1
      ,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)^3*s23^5*s34 + 3/8*pentagon1(
      1,1,1,1,0)*den( - 3 + d)*den( - s45 + s23 + s12)^3*s23^6 - 3/8*
      pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)*s34*s45*s51^2 - 3/8*
      pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)*s23*s51^3 - 3/8*pentagon1(1
      ,1,1,1,0)*den( - s45 + s23 + s12)*s23*s45*s51^2 + 3/8*pentagon1(1,1,1,1,
      0)*den( - s45 + s23 + s12)*s23*s34*s51^2 + 3/4*pentagon1(1,1,1,1,0)*den(
       - s45 + s23 + s12)*s23*s34*s45*s51 + 9/8*pentagon1(1,1,1,1,0)*den( - 
      s45 + s23 + s12)*s23^2*s51^2 + 3/4*pentagon1(1,1,1,1,0)*den( - s45 + s23
       + s12)*s23^2*s45*s51 - 3/4*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)
      *s23^2*s34*s51 - 3/8*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)*s23^2*
      s34*s45 - 9/8*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)*s23^3*s51 - 3/
      8*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)*s23^3*s45 + 3/8*
      pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)*s23^3*s34 + 3/8*pentagon1(1
      ,1,1,1,0)*den( - s45 + s23 + s12)*s23^4 + 3/8*pentagon1(1,1,1,1,0)*den(
       - s45 + s23 + s12)^2*s34^2*s45^2*s51 + 3/4*pentagon1(1,1,1,1,0)*den( - 
      s45 + s23 + s12)^2*s23*s34*s45*s51^2 + 3/4*pentagon1(1,1,1,1,0)*den( - 
      s45 + s23 + s12)^2*s23*s34*s45^2*s51 - 3/4*pentagon1(1,1,1,1,0)*den( - 
      s45 + s23 + s12)^2*s23*s34^2*s45*s51 - 3/8*pentagon1(1,1,1,1,0)*den( - 
      s45 + s23 + s12)^2*s23*s34^2*s45^2 + 3/8*pentagon1(1,1,1,1,0)*den( - s45
       + s23 + s12)^2*s23^2*s51^3 + 3/4*pentagon1(1,1,1,1,0)*den( - s45 + s23
       + s12)^2*s23^2*s45*s51^2 + 3/8*pentagon1(1,1,1,1,0)*den( - s45 + s23 + 
      s12)^2*s23^2*s45^2*s51 - 3/4*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12
      )^2*s23^2*s34*s51^2 - 9/4*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^2
      *s23^2*s34*s45*s51 - 3/4*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^2*
      s23^2*s34*s45^2 + 3/8*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^2*
      s23^2*s34^2*s51 + 3/4*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^2*
      s23^2*s34^2*s45 - 9/8*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^2*
      s23^3*s51^2 - 3/2*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^2*s23^3*
      s45*s51 - 3/8*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^2*s23^3*s45^2
       + 3/2*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^2*s23^3*s34*s51 + 3/
      2*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^2*s23^3*s34*s45 - 3/8*
      pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^2*s23^3*s34^2 + 9/8*
      pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^2*s23^4*s51 + 3/4*
      pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^2*s23^4*s45 - 3/4*
      pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^2*s23^4*s34 - 3/8*
      pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^2*s23^5 - 1/8*pentagon1(1,1
      ,1,1,0)*den( - s45 + s23 + s12)^3*s34^3*s45^3 - 3/8*pentagon1(1,1,1,1,0)
      *den( - s45 + s23 + s12)^3*s23*s34^2*s45^2*s51 - 3/8*pentagon1(1,1,1,1,0
      )*den( - s45 + s23 + s12)^3*s23*s34^2*s45^3 + 3/8*pentagon1(1,1,1,1,0)*
      den( - s45 + s23 + s12)^3*s23*s34^3*s45^2 - 3/8*pentagon1(1,1,1,1,0)*
      den( - s45 + s23 + s12)^3*s23^2*s34*s45*s51^2 - 3/4*pentagon1(1,1,1,1,0)
      *den( - s45 + s23 + s12)^3*s23^2*s34*s45^2*s51 - 3/8*pentagon1(1,1,1,1,0
      )*den( - s45 + s23 + s12)^3*s23^2*s34*s45^3 + 3/4*pentagon1(1,1,1,1,0)*
      den( - s45 + s23 + s12)^3*s23^2*s34^2*s45*s51 + 9/8*pentagon1(1,1,1,1,0)
      *den( - s45 + s23 + s12)^3*s23^2*s34^2*s45^2 - 3/8*pentagon1(1,1,1,1,0)*
      den( - s45 + s23 + s12)^3*s23^2*s34^3*s45 - 1/8*pentagon1(1,1,1,1,0)*
      den( - s45 + s23 + s12)^3*s23^3*s51^3 - 3/8*pentagon1(1,1,1,1,0)*den( - 
      s45 + s23 + s12)^3*s23^3*s45*s51^2 - 3/8*pentagon1(1,1,1,1,0)*den( - s45
       + s23 + s12)^3*s23^3*s45^2*s51 - 1/8*pentagon1(1,1,1,1,0)*den( - s45 + 
      s23 + s12)^3*s23^3*s45^3 + 3/8*pentagon1(1,1,1,1,0)*den( - s45 + s23 + 
      s12)^3*s23^3*s34*s51^2 + 3/2*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12
      )^3*s23^3*s34*s45*s51 + 9/8*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)
      ^3*s23^3*s34*s45^2 - 3/8*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^3*
      s23^3*s34^2*s51 - 9/8*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^3*
      s23^3*s34^2*s45 + 1/8*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^3*
      s23^3*s34^3 + 3/8*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^3*s23^4*
      s51^2 + 3/4*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^3*s23^4*s45*s51
       + 3/8*pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^3*s23^4*s45^2 - 3/4*
      pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^3*s23^4*s34*s51 - 9/8*
      pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^3*s23^4*s34*s45 + 3/8*
      pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^3*s23^4*s34^2 - 3/8*
      pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^3*s23^5*s51 - 3/8*
      pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^3*s23^5*s45 + 3/8*
      pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^3*s23^5*s34 + 1/8*
      pentagon1(1,1,1,1,0)*den( - s45 + s23 + s12)^3*s23^6;


id pentagon1(1,1,1,-2,-1)=
pentagon1(1,0,1,0,0)*s45 - 1/2*pentagon1(1,0,1,0,0)*s12 + 2*pentagon1(1,0,1,0,
      0)*den( - 2 + d)*s23 - 1/2*pentagon1(1,0,1,0,0)*den(s12)*s45^2 - 2*
      pentagon1(1,0,1,0,0)*den(s12)*den( - 4 + d)*s23^2 - 2*pentagon1(1,0,1,0,
      0)*den(s12)*den( - 2 + d)*s23*s45 + 2*pentagon1(1,0,1,0,0)*den(s12)*den(
       - 2 + d)*s23^2;


id pentagon1(1,1,1,-2,1)=
1/4*pentagon1(1,0,1,0,0)*s45^2 + 1/2*pentagon1(1,0,1,0,0)*s34*s45 - 1/2*
      pentagon1(1,0,1,0,0)*s12*s45 - 1/4*pentagon1(1,0,1,0,0)*s12*s34 + 1/4*
      pentagon1(1,0,1,0,0)*s12^2 + 4*pentagon1(1,0,1,0,0)*den( - 2 + d)*s23*
      s51 + 2*pentagon1(1,0,1,0,0)*den( - 2 + d)*s23^2 + pentagon1(1,0,1,0,0)*
      den( - 1 + d)*s45*s51 + 1/4*pentagon1(1,0,1,0,0)*den( - 1 + d)*s45^2 - 1/
      2*pentagon1(1,0,1,0,0)*den( - 1 + d)*s34*s45 - 4*pentagon1(1,0,1,0,0)*
      den( - 1 + d)*s23*s51 + pentagon1(1,0,1,0,0)*den( - 1 + d)*s23*s45 + 
      pentagon1(1,0,1,0,0)*den( - 1 + d)*s23*s34 - 2*pentagon1(1,0,1,0,0)*den(
       - 1 + d)*s23^2 - 1/2*pentagon1(1,0,1,0,0)*den( - 1 + d)*s12*s51 - 1/2*
      pentagon1(1,0,1,0,0)*den( - 1 + d)*s12*s45 - 1/4*pentagon1(1,0,1,0,0)*
      den( - 1 + d)*s12*s34 - pentagon1(1,0,1,0,0)*den( - 1 + d)*s12*s23 + 1/4
      *pentagon1(1,0,1,0,0)*den( - 1 + d)*s12^2 - 1/4*pentagon1(1,0,1,0,0)*
      den(s12)*s34*s45^2 - 2*pentagon1(1,0,1,0,0)*den(s12)*den( - 4 + d)*s23^2
      *s51 - 4*pentagon1(1,0,1,0,0)*den(s12)*den( - 2 + d)*s23*s45*s51 + 2*
      pentagon1(1,0,1,0,0)*den(s12)*den( - 2 + d)*s23*s34*s45 + 6*pentagon1(1,
      0,1,0,0)*den(s12)*den( - 2 + d)*s23^2*s51 - 2*pentagon1(1,0,1,0,0)*den(
      s12)*den( - 2 + d)*s23^2*s34 - 1/2*pentagon1(1,0,1,0,0)*den(s12)*den( - 
      1 + d)*s45^2*s51 + 3/4*pentagon1(1,0,1,0,0)*den(s12)*den( - 1 + d)*s34*
      s45^2 + 4*pentagon1(1,0,1,0,0)*den(s12)*den( - 1 + d)*s23*s45*s51 - 3*
      pentagon1(1,0,1,0,0)*den(s12)*den( - 1 + d)*s23*s34*s45 - 4*pentagon1(1,
      0,1,0,0)*den(s12)*den( - 1 + d)*s23^2*s51 + 2*pentagon1(1,0,1,0,0)*den(
      s12)*den( - 1 + d)*s23^2*s34;


id pentagon1(1,1,-2,1,0)=
2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34)^2*den(s51 - s34 + s12)*
      s23^2*s51 + 4*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34)*den(
      s51 - s34 + s12)*s23^2 - 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51
       + s34)*den(s51 - s34 + s12)^2*s23^2*s51 - 2*pentagon1(0,0,1,0,1)*den(
       - 4 + d)*den(s51 - s34 + s12)*s51 + 4*pentagon1(0,0,1,0,1)*den( - 4 + d
      )*den(s51 - s34 + s12)*s23 + 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den(
      s51 - s34 + s12)^2*s51^2 + 4*pentagon1(0,0,1,0,1)*den( - 4 + d)*den(s51
       - s34 + s12)^2*s45*s51 + 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den(s51
       - s34 + s12)^2*s45^2 - 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den(s51 - 
      s34 + s12)^2*s34*s51 - 4*pentagon1(0,0,1,0,1)*den( - 4 + d)*den(s51 - 
      s34 + s12)^2*s34*s45 - 4*pentagon1(0,0,1,0,1)*den( - 4 + d)*den(s51 - 
      s34 + s12)^2*s23*s51 - 4*pentagon1(0,0,1,0,1)*den( - 4 + d)*den(s51 - 
      s34 + s12)^2*s23*s45 - 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s34
       + s12)*den(s51 - s34 + s12)*s45^2 + 2*pentagon1(0,0,1,0,1)*den( - 4 + d
      )*den( - s34 + s12)*den(s51 - s34 + s12)^2*s34*s45^2 + 2*pentagon1(0,0,1
      ,0,1)*den( - 4 + d)*den( - s34 + s12)^2*den(s51 - s34 + s12)*s34*s45^2
       - 2*pentagon1(0,0,1,0,1)*den( - s51 + s34)*den(s51 - s34 + s12)*s23*s51
       + pentagon1(0,0,1,0,1)*den( - s51 + s34)*den(s51 - s34 + s12)*s23^2 - 
      pentagon1(0,0,1,0,1)*den( - s51 + s34)*den(s51 - s34 + s12)^2*s23^2*s51
       - pentagon1(0,0,1,0,1)*den(s51 - s34 + s12)*s51 - pentagon1(0,0,1,0,1)*
      den(s51 - s34 + s12)*s34 + pentagon1(0,0,1,0,1)*den(s51 - s34 + s12)^2*
      s51^2 + 2*pentagon1(0,0,1,0,1)*den(s51 - s34 + s12)^2*s45*s51 + 
      pentagon1(0,0,1,0,1)*den(s51 - s34 + s12)^2*s45^2 - pentagon1(0,0,1,0,1)
      *den(s51 - s34 + s12)^2*s34*s51 - 2*pentagon1(0,0,1,0,1)*den(s51 - s34
       + s12)^2*s34*s45 - 2*pentagon1(0,0,1,0,1)*den(s51 - s34 + s12)^2*s23*
      s51 - 2*pentagon1(0,0,1,0,1)*den(s51 - s34 + s12)^2*s23*s45 - pentagon1(
      0,0,1,0,1)*den( - s34 + s12)*den(s51 - s34 + s12)*s45^2 + 2*pentagon1(0,
      0,1,0,1)*den( - s34 + s12)*den(s51 - s34 + s12)*s34*s45 + pentagon1(0,0,
      1,0,1)*den( - s34 + s12)*den(s51 - s34 + s12)^2*s34*s45^2 - 2*pentagon1(
      0,1,0,0,1)*den( - 4 + d)*den( - s51 + s34)^2*den(s51 - s34 + s12)*s23^2*
      s51 - 4*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s34)*den(s51 - 
      s34 + s12)*s23^2 + 2*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s34
      )*den(s51 - s34 + s12)^2*s23^2*s51 + 2*pentagon1(0,1,0,0,1)*den( - 4 + d
      )*den(s51 - s34 + s12)*s51 - 4*pentagon1(0,1,0,0,1)*den( - 4 + d)*den(
      s51 - s34 + s12)*s23 - 2*pentagon1(0,1,0,0,1)*den( - 4 + d)*den(s51 - 
      s34 + s12)^2*s51^2 - 4*pentagon1(0,1,0,0,1)*den( - 4 + d)*den(s51 - s34
       + s12)^2*s45*s51 - 2*pentagon1(0,1,0,0,1)*den( - 4 + d)*den(s51 - s34
       + s12)^2*s45^2 + 2*pentagon1(0,1,0,0,1)*den( - 4 + d)*den(s51 - s34 + 
      s12)^2*s34*s51 + 4*pentagon1(0,1,0,0,1)*den( - 4 + d)*den(s51 - s34 + 
      s12)^2*s34*s45 + 4*pentagon1(0,1,0,0,1)*den( - 4 + d)*den(s51 - s34 + 
      s12)^2*s23*s51 + 4*pentagon1(0,1,0,0,1)*den( - 4 + d)*den(s51 - s34 + 
      s12)^2*s23*s45 + 2*pentagon1(0,1,0,0,1)*den( - s51 + s34)*den(s51 - s34
       + s12)*s23*s51 - 2*pentagon1(0,1,0,0,1)*den( - s51 + s34)*den(s51 - s34
       + s12)*s23^2 + pentagon1(0,1,0,0,1)*den( - s51 + s34)*den(s51 - s34 + 
      s12)^2*s23^2*s51 + 2*pentagon1(0,1,0,0,1)*den(s51 - s34 + s12)*s51 + 2*
      pentagon1(0,1,0,0,1)*den(s51 - s34 + s12)*s45 - 2*pentagon1(0,1,0,0,1)*
      den(s51 - s34 + s12)*s23 - pentagon1(0,1,0,0,1)*den(s51 - s34 + s12)^2*
      s51^2 - 2*pentagon1(0,1,0,0,1)*den(s51 - s34 + s12)^2*s45*s51 - 
      pentagon1(0,1,0,0,1)*den(s51 - s34 + s12)^2*s45^2 + pentagon1(0,1,0,0,1)
      *den(s51 - s34 + s12)^2*s34*s51 + 2*pentagon1(0,1,0,0,1)*den(s51 - s34
       + s12)^2*s34*s45 + 2*pentagon1(0,1,0,0,1)*den(s51 - s34 + s12)^2*s23*
      s51 + 2*pentagon1(0,1,0,0,1)*den(s51 - s34 + s12)^2*s23*s45 - 2*
      pentagon1(0,1,0,0,1)*den(s51)*den( - 4 + d)*den(s51 - s34 + s12)*s45^2
       + 2*pentagon1(0,1,0,0,1)*den(s51)*den( - 4 + d)*den(s51 - s34 + s12)^2*
      s34*s45^2 - 2*pentagon1(0,1,0,0,1)*den(s51)*den(s51 - s34 + s12)*s23*s45
       + pentagon1(0,1,0,0,1)*den(s51)*den(s51 - s34 + s12)^2*s34*s45^2 + 
      pentagon1(1,0,1,0,0) + 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den(s51 - 
      s34 + s12)*s51 - 4*pentagon1(1,0,1,0,0)*den( - 4 + d)*den(s51 - s34 + 
      s12)*s23 - 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den(s51 - s34 + s12)^2*
      s51^2 - 4*pentagon1(1,0,1,0,0)*den( - 4 + d)*den(s51 - s34 + s12)^2*s45*
      s51 - 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den(s51 - s34 + s12)^2*s45^2
       + 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den(s51 - s34 + s12)^2*s34*s51
       + 4*pentagon1(1,0,1,0,0)*den( - 4 + d)*den(s51 - s34 + s12)^2*s34*s45
       + 4*pentagon1(1,0,1,0,0)*den( - 4 + d)*den(s51 - s34 + s12)^2*s23*s51
       + 4*pentagon1(1,0,1,0,0)*den( - 4 + d)*den(s51 - s34 + s12)^2*s23*s45
       + 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s34 + s12)*den(s51 - s34
       + s12)*s45^2 - 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s34 + s12)*
      den(s51 - s34 + s12)^2*s34*s45^2 - 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*
      den( - s34 + s12)^2*den(s51 - s34 + s12)*s34*s45^2 - 2*pentagon1(1,0,1,0
      ,0)*den(s51 - s34 + s12)*s45 + pentagon1(1,0,1,0,0)*den(s51 - s34 + s12)
      *s34 - pentagon1(1,0,1,0,0)*den(s51 - s34 + s12)^2*s51^2 - 2*pentagon1(1
      ,0,1,0,0)*den(s51 - s34 + s12)^2*s45*s51 - pentagon1(1,0,1,0,0)*den(s51
       - s34 + s12)^2*s45^2 + pentagon1(1,0,1,0,0)*den(s51 - s34 + s12)^2*s34*
      s51 + 2*pentagon1(1,0,1,0,0)*den(s51 - s34 + s12)^2*s34*s45 + 2*
      pentagon1(1,0,1,0,0)*den(s51 - s34 + s12)^2*s23*s51 + 2*pentagon1(1,0,1,
      0,0)*den(s51 - s34 + s12)^2*s23*s45 + 2*pentagon1(1,0,1,0,0)*den( - s34
       + s12)*den(s51 - s34 + s12)*s45^2 - 2*pentagon1(1,0,1,0,0)*den( - s34
       + s12)*den(s51 - s34 + s12)*s34*s45 - pentagon1(1,0,1,0,0)*den( - s34
       + s12)*den(s51 - s34 + s12)^2*s34*s45^2 - 4*pentagon1(1,0,1,0,0)*den(
      s12)*den( - 4 + d)*den(s51 - s34 + s12)*s23^2 + 2*pentagon1(1,0,1,0,0)*
      den(s12)*den( - 4 + d)*den(s51 - s34 + s12)^2*s23^2*s51 - 2*pentagon1(1,
      0,1,0,0)*den(s12)*den(s51 - s34 + s12)*s23*s45 - pentagon1(1,0,1,0,0)*
      den(s12)*den(s51 - s34 + s12)*s23^2 + pentagon1(1,0,1,0,0)*den(s12)*den(
      s51 - s34 + s12)^2*s23^2*s51 + 1/4*pentagon1(1,1,1,0,1)*s51^2 - 1/2*
      pentagon1(1,1,1,0,1)*s23*s51 + 1/4*pentagon1(1,1,1,0,1)*s23^2 + 1/4*
      pentagon1(1,1,1,0,1)*den( - 3 + d)*s51^2 - 1/2*pentagon1(1,1,1,0,1)*den(
       - 3 + d)*s23*s51 + 1/4*pentagon1(1,1,1,0,1)*den( - 3 + d)*s23^2 - 1/2*
      pentagon1(1,1,1,0,1)*den( - 3 + d)*den(s51 - s34 + s12)*s51^3 - 1/2*
      pentagon1(1,1,1,0,1)*den( - 3 + d)*den(s51 - s34 + s12)*s45*s51^2 + 1/2*
      pentagon1(1,1,1,0,1)*den( - 3 + d)*den(s51 - s34 + s12)*s34*s51^2 + 1/2*
      pentagon1(1,1,1,0,1)*den( - 3 + d)*den(s51 - s34 + s12)*s34*s45*s51 + 
      pentagon1(1,1,1,0,1)*den( - 3 + d)*den(s51 - s34 + s12)*s23*s51^2 + 1/2*
      pentagon1(1,1,1,0,1)*den( - 3 + d)*den(s51 - s34 + s12)*s23*s45*s51 - 1/
      2*pentagon1(1,1,1,0,1)*den( - 3 + d)*den(s51 - s34 + s12)*s23*s34*s51 + 
      1/2*pentagon1(1,1,1,0,1)*den( - 3 + d)*den(s51 - s34 + s12)*s23*s34*s45
       - 1/2*pentagon1(1,1,1,0,1)*den( - 3 + d)*den(s51 - s34 + s12)*s23^2*s51
       + 1/4*pentagon1(1,1,1,0,1)*den( - 3 + d)*den(s51 - s34 + s12)^2*s51^4
       + 1/2*pentagon1(1,1,1,0,1)*den( - 3 + d)*den(s51 - s34 + s12)^2*s45*
      s51^3 + 1/4*pentagon1(1,1,1,0,1)*den( - 3 + d)*den(s51 - s34 + s12)^2*
      s45^2*s51^2 - 1/2*pentagon1(1,1,1,0,1)*den( - 3 + d)*den(s51 - s34 + s12
      )^2*s34*s51^3 - pentagon1(1,1,1,0,1)*den( - 3 + d)*den(s51 - s34 + s12)^
      2*s34*s45*s51^2 - 1/2*pentagon1(1,1,1,0,1)*den( - 3 + d)*den(s51 - s34
       + s12)^2*s34*s45^2*s51 + 1/4*pentagon1(1,1,1,0,1)*den( - 3 + d)*den(s51
       - s34 + s12)^2*s34^2*s51^2 + 1/2*pentagon1(1,1,1,0,1)*den( - 3 + d)*
      den(s51 - s34 + s12)^2*s34^2*s45*s51 + 1/4*pentagon1(1,1,1,0,1)*den( - 3
       + d)*den(s51 - s34 + s12)^2*s34^2*s45^2 - 1/2*pentagon1(1,1,1,0,1)*den(
       - 3 + d)*den(s51 - s34 + s12)^2*s23*s51^3 - 1/2*pentagon1(1,1,1,0,1)*
      den( - 3 + d)*den(s51 - s34 + s12)^2*s23*s45*s51^2 + 1/2*pentagon1(1,1,1
      ,0,1)*den( - 3 + d)*den(s51 - s34 + s12)^2*s23*s34*s51^2 + 1/2*
      pentagon1(1,1,1,0,1)*den( - 3 + d)*den(s51 - s34 + s12)^2*s23*s34*s45*
      s51 + 1/4*pentagon1(1,1,1,0,1)*den( - 3 + d)*den(s51 - s34 + s12)^2*
      s23^2*s51^2 - 1/2*pentagon1(1,1,1,0,1)*den(s51 - s34 + s12)*s51^3 - 1/2*
      pentagon1(1,1,1,0,1)*den(s51 - s34 + s12)*s45*s51^2 + 1/2*pentagon1(1,1,
      1,0,1)*den(s51 - s34 + s12)*s34*s51^2 + 1/2*pentagon1(1,1,1,0,1)*den(s51
       - s34 + s12)*s34*s45*s51 + pentagon1(1,1,1,0,1)*den(s51 - s34 + s12)*
      s23*s51^2 + 1/2*pentagon1(1,1,1,0,1)*den(s51 - s34 + s12)*s23*s45*s51 - 
      1/2*pentagon1(1,1,1,0,1)*den(s51 - s34 + s12)*s23*s34*s51 - 1/2*
      pentagon1(1,1,1,0,1)*den(s51 - s34 + s12)*s23*s34*s45 - 1/2*pentagon1(1,
      1,1,0,1)*den(s51 - s34 + s12)*s23^2*s51 + 1/4*pentagon1(1,1,1,0,1)*den(
      s51 - s34 + s12)^2*s51^4 + 1/2*pentagon1(1,1,1,0,1)*den(s51 - s34 + s12)
      ^2*s45*s51^3 + 1/4*pentagon1(1,1,1,0,1)*den(s51 - s34 + s12)^2*s45^2*
      s51^2 - 1/2*pentagon1(1,1,1,0,1)*den(s51 - s34 + s12)^2*s34*s51^3 - 
      pentagon1(1,1,1,0,1)*den(s51 - s34 + s12)^2*s34*s45*s51^2 - 1/2*
      pentagon1(1,1,1,0,1)*den(s51 - s34 + s12)^2*s34*s45^2*s51 + 1/4*
      pentagon1(1,1,1,0,1)*den(s51 - s34 + s12)^2*s34^2*s51^2 + 1/2*pentagon1(
      1,1,1,0,1)*den(s51 - s34 + s12)^2*s34^2*s45*s51 + 1/4*pentagon1(1,1,1,0,
      1)*den(s51 - s34 + s12)^2*s34^2*s45^2 - 1/2*pentagon1(1,1,1,0,1)*den(s51
       - s34 + s12)^2*s23*s51^3 - 1/2*pentagon1(1,1,1,0,1)*den(s51 - s34 + s12
      )^2*s23*s45*s51^2 + 1/2*pentagon1(1,1,1,0,1)*den(s51 - s34 + s12)^2*s23*
      s34*s51^2 + 1/2*pentagon1(1,1,1,0,1)*den(s51 - s34 + s12)^2*s23*s34*s45*
      s51 + 1/4*pentagon1(1,1,1,0,1)*den(s51 - s34 + s12)^2*s23^2*s51^2;


id pentagon1(1,1,-2,1,1)=
 - 1/2*pentagon1(0,1,0,1,0)*s45 - 1/2*pentagon1(0,1,0,1,0)*s23 - 2*pentagon1(0
      ,1,0,1,0)*den( - 4 + d)*den( - s45 + s23)*s12^2 - 4*pentagon1(0,1,0,1,0)
      *den( - 4 + d)*den( - s45 + s23)^2*s12^2*s45 - 2*pentagon1(0,1,0,1,0)*
      den( - 4 + d)*den( - s45 + s23)^3*s12^2*s45^2 + 2*pentagon1(0,1,0,1,0)*
      den( - 2 + d)*s12 + 4*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45 + 
      s23)*s12*s45 + 2*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45 + s23)*
      s12^2 + 2*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45 + s23)^2*s12*
      s45^2 + 4*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45 + s23)^2*s12^2*
      s45 + 2*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s45 + s23)^3*s12^2*
      s45^2 - 1/2*pentagon1(0,1,0,1,0)*den( - s45 + s23)*s45^2 + 2*pentagon1(1
      ,0,0,1,0)*den( - 4 + d)*den( - s45 + s23)*s12^2 + 4*pentagon1(1,0,0,1,0)
      *den( - 4 + d)*den( - s45 + s23)^2*s12^2*s45 + 2*pentagon1(1,0,0,1,0)*
      den( - 4 + d)*den( - s45 + s23)^3*s12^2*s45^2 - 2*pentagon1(1,0,0,1,0)*
      den( - 2 + d)*den( - s45 + s23)*s12*s45 - 2*pentagon1(1,0,0,1,0)*den( - 
      2 + d)*den( - s45 + s23)^2*s12*s45^2 - 2*pentagon1(1,0,0,1,0)*den( - 2
       + d)*den( - s45 + s23)^2*s12^2*s45 - 2*pentagon1(1,0,0,1,0)*den( - 2 + 
      d)*den( - s45 + s23)^3*s12^2*s45^2 + 1/2*pentagon1(1,0,0,1,0)*den( - s45
       + s23)*s45^2 - pentagon1(1,0,0,1,0)*den( - s45 + s23)*s12*s45 + 1/2*
      pentagon1(1,0,0,1,0)*den( - s45 + s23)*s12^2;


id pentagon1(1,-2,1,0,0)=
4*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 - s45 + s23)*s34 + 4*
      pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 - s45 + s23)*s12 + 2*
      pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 - s45 + s23)^2*s45*s51 + 4
      *pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 - s45 + s23)^2*s34*s51 + 
      4*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 - s45 + s23)^2*s12*s45
       + 4*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 - s45 + s23)^2*s12*
      s34 + 4*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s23)*den( - s51
       - s45 + s23)*s34^2 + 2*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + 
      s23)*den( - s51 - s45 + s23)^2*s34^2*s51 + 2*pentagon1(0,1,0,0,1)*den(
       - 4 + d)*den( - s51 + s23)^2*den( - s51 - s45 + s23)*s34^2*s51 - 
      pentagon1(0,1,0,0,1)*den( - s51 - s45 + s23)*s51 + 2*pentagon1(0,1,0,0,1
      )*den( - s51 - s45 + s23)*s34 + pentagon1(0,1,0,0,1)*den( - s51 - s45 + 
      s23)^2*s45*s51 + 2*pentagon1(0,1,0,0,1)*den( - s51 - s45 + s23)^2*s34*
      s51 + 2*pentagon1(0,1,0,0,1)*den( - s51 - s45 + s23)^2*s12*s45 + 2*
      pentagon1(0,1,0,0,1)*den( - s51 - s45 + s23)^2*s12*s34 - 2*pentagon1(0,1
      ,0,0,1)*den( - s51 + s23)*den( - s51 - s45 + s23)*s34*s51 + 2*pentagon1(
      0,1,0,0,1)*den( - s51 + s23)*den( - s51 - s45 + s23)*s34^2 + pentagon1(0
      ,1,0,0,1)*den( - s51 + s23)*den( - s51 - s45 + s23)^2*s34^2*s51 + 4*
      pentagon1(0,1,0,0,1)*den(s51)*den( - 4 + d)*den( - s51 - s45 + s23)*
      s12^2 + 2*pentagon1(0,1,0,0,1)*den(s51)*den( - 4 + d)*den( - s51 - s45
       + s23)^2*s12^2*s45 + 2*pentagon1(0,1,0,0,1)*den(s51)*den( - s51 - s45
       + s23)*s12*s34 + pentagon1(0,1,0,0,1)*den(s51)*den( - s51 - s45 + s23)*
      s12^2 + pentagon1(0,1,0,0,1)*den(s51)*den( - s51 - s45 + s23)^2*s12^2*
      s45 + pentagon1(0,1,0,1,0) - 4*pentagon1(0,1,0,1,0)*den( - 4 + d)*den(
       - s51 - s45 + s23)*s34 - 4*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - 
      s51 - s45 + s23)*s12 - 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51
       - s45 + s23)^2*s45*s51 - 4*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - 
      s51 - s45 + s23)^2*s34*s51 - 4*pentagon1(0,1,0,1,0)*den( - 4 + d)*den(
       - s51 - s45 + s23)^2*s12*s45 - 4*pentagon1(0,1,0,1,0)*den( - 4 + d)*
      den( - s51 - s45 + s23)^2*s12*s34 - 4*pentagon1(0,1,0,1,0)*den( - 4 + d)
      *den( - s51 + s23)*den( - s51 - s45 + s23)*s34^2 - 2*pentagon1(0,1,0,1,0
      )*den( - 4 + d)*den( - s51 + s23)*den( - s51 - s45 + s23)^2*s34^2*s51 - 
      2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s23)^2*den( - s51 - 
      s45 + s23)*s34^2*s51 - 4*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45
       + s23)*den( - s51 - s45 + s23)*s12^2 - 2*pentagon1(0,1,0,1,0)*den( - 4
       + d)*den( - s45 + s23)*den( - s51 - s45 + s23)^2*s12^2*s45 - 2*
      pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23)^2*den( - s51 - s45
       + s23)*s12^2*s45 + pentagon1(0,1,0,1,0)*den( - s51 - s45 + s23)*s51 + 
      pentagon1(0,1,0,1,0)*den( - s51 - s45 + s23)*s45 - pentagon1(0,1,0,1,0)*
      den( - s51 - s45 + s23)^2*s45*s51 - 2*pentagon1(0,1,0,1,0)*den( - s51 - 
      s45 + s23)^2*s34*s51 - 2*pentagon1(0,1,0,1,0)*den( - s51 - s45 + s23)^2*
      s12*s45 - 2*pentagon1(0,1,0,1,0)*den( - s51 - s45 + s23)^2*s12*s34 + 2*
      pentagon1(0,1,0,1,0)*den( - s51 + s23)*den( - s51 - s45 + s23)*s34*s51
       - pentagon1(0,1,0,1,0)*den( - s51 + s23)*den( - s51 - s45 + s23)*s34^2
       - pentagon1(0,1,0,1,0)*den( - s51 + s23)*den( - s51 - s45 + s23)^2*
      s34^2*s51 + 2*pentagon1(0,1,0,1,0)*den( - s45 + s23)*den( - s51 - s45 + 
      s23)*s12*s45 - pentagon1(0,1,0,1,0)*den( - s45 + s23)*den( - s51 - s45
       + s23)*s12^2 - pentagon1(0,1,0,1,0)*den( - s45 + s23)*den( - s51 - s45
       + s23)^2*s12^2*s45 + 4*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s51 - 
      s45 + s23)*s34 + 4*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s51 - s45
       + s23)*s12 + 2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s51 - s45 + 
      s23)^2*s45*s51 + 4*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s51 - s45
       + s23)^2*s34*s51 + 4*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s51 - 
      s45 + s23)^2*s12*s45 + 4*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s51
       - s45 + s23)^2*s12*s34 + 4*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - 
      s45 + s23)*den( - s51 - s45 + s23)*s12^2 + 2*pentagon1(1,0,0,1,0)*den(
       - 4 + d)*den( - s45 + s23)*den( - s51 - s45 + s23)^2*s12^2*s45 + 2*
      pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s23)^2*den( - s51 - s45
       + s23)*s12^2*s45 - pentagon1(1,0,0,1,0)*den( - s51 - s45 + s23)*s45 + 2
      *pentagon1(1,0,0,1,0)*den( - s51 - s45 + s23)*s12 + pentagon1(1,0,0,1,0)
      *den( - s51 - s45 + s23)^2*s45*s51 + 2*pentagon1(1,0,0,1,0)*den( - s51
       - s45 + s23)^2*s34*s51 + 2*pentagon1(1,0,0,1,0)*den( - s51 - s45 + s23)
      ^2*s12*s45 + 2*pentagon1(1,0,0,1,0)*den( - s51 - s45 + s23)^2*s12*s34 - 
      2*pentagon1(1,0,0,1,0)*den( - s45 + s23)*den( - s51 - s45 + s23)*s12*s45
       + 2*pentagon1(1,0,0,1,0)*den( - s45 + s23)*den( - s51 - s45 + s23)*
      s12^2 + pentagon1(1,0,0,1,0)*den( - s45 + s23)*den( - s51 - s45 + s23)^2
      *s12^2*s45 + 4*pentagon1(1,0,0,1,0)*den(s45)*den( - 4 + d)*den( - s51 - 
      s45 + s23)*s34^2 + 2*pentagon1(1,0,0,1,0)*den(s45)*den( - 4 + d)*den( - 
      s51 - s45 + s23)^2*s34^2*s51 + pentagon1(1,0,0,1,0)*den(s45)*den( - s51
       - s45 + s23)*s34^2 + 2*pentagon1(1,0,0,1,0)*den(s45)*den( - s51 - s45
       + s23)*s12*s34 + pentagon1(1,0,0,1,0)*den(s45)*den( - s51 - s45 + s23)^
      2*s34^2*s51 + 1/4*pentagon1(1,1,0,1,1)*s34^2 + 1/2*pentagon1(1,1,0,1,1)*
      s12*s34 + 1/4*pentagon1(1,1,0,1,1)*s12^2 + 1/4*pentagon1(1,1,0,1,1)*den(
       - 3 + d)*s34^2 - 1/2*pentagon1(1,1,0,1,1)*den( - 3 + d)*s12*s34 + 1/4*
      pentagon1(1,1,0,1,1)*den( - 3 + d)*s12^2 + 1/2*pentagon1(1,1,0,1,1)*den(
       - 3 + d)*den( - s51 - s45 + s23)*s34*s45*s51 + 1/2*pentagon1(1,1,0,1,1)
      *den( - 3 + d)*den( - s51 - s45 + s23)*s34^2*s51 + 1/2*pentagon1(1,1,0,1
      ,1)*den( - 3 + d)*den( - s51 - s45 + s23)*s12*s45*s51 - 1/2*pentagon1(1,
      1,0,1,1)*den( - 3 + d)*den( - s51 - s45 + s23)*s12*s34*s51 - 1/2*
      pentagon1(1,1,0,1,1)*den( - 3 + d)*den( - s51 - s45 + s23)*s12*s34*s45
       + 1/2*pentagon1(1,1,0,1,1)*den( - 3 + d)*den( - s51 - s45 + s23)*s12^2*
      s45 + 1/4*pentagon1(1,1,0,1,1)*den( - 3 + d)*den( - s51 - s45 + s23)^2*
      s45^2*s51^2 + 1/2*pentagon1(1,1,0,1,1)*den( - 3 + d)*den( - s51 - s45 + 
      s23)^2*s34*s45*s51^2 + 1/4*pentagon1(1,1,0,1,1)*den( - 3 + d)*den( - s51
       - s45 + s23)^2*s34^2*s51^2 + 1/2*pentagon1(1,1,0,1,1)*den( - 3 + d)*
      den( - s51 - s45 + s23)^2*s12*s45^2*s51 + 1/2*pentagon1(1,1,0,1,1)*den(
       - 3 + d)*den( - s51 - s45 + s23)^2*s12*s34*s45*s51 + 1/4*pentagon1(1,1,
      0,1,1)*den( - 3 + d)*den( - s51 - s45 + s23)^2*s12^2*s45^2 + 1/2*
      pentagon1(1,1,0,1,1)*den( - s51 - s45 + s23)*s34*s45*s51 + 1/2*
      pentagon1(1,1,0,1,1)*den( - s51 - s45 + s23)*s34^2*s51 + 1/2*pentagon1(1
      ,1,0,1,1)*den( - s51 - s45 + s23)*s12*s45*s51 + 1/2*pentagon1(1,1,0,1,1)
      *den( - s51 - s45 + s23)*s12*s34*s51 + 1/2*pentagon1(1,1,0,1,1)*den( - 
      s51 - s45 + s23)*s12*s34*s45 + 1/2*pentagon1(1,1,0,1,1)*den( - s51 - s45
       + s23)*s12^2*s45 + 1/4*pentagon1(1,1,0,1,1)*den( - s51 - s45 + s23)^2*
      s45^2*s51^2 + 1/2*pentagon1(1,1,0,1,1)*den( - s51 - s45 + s23)^2*s34*s45
      *s51^2 + 1/4*pentagon1(1,1,0,1,1)*den( - s51 - s45 + s23)^2*s34^2*s51^2
       + 1/2*pentagon1(1,1,0,1,1)*den( - s51 - s45 + s23)^2*s12*s45^2*s51 + 1/
      2*pentagon1(1,1,0,1,1)*den( - s51 - s45 + s23)^2*s12*s34*s45*s51 + 1/4*
      pentagon1(1,1,0,1,1)*den( - s51 - s45 + s23)^2*s12^2*s45^2;


id pentagon1(1,-2,1,1,0)=
1/4*pentagon1(1,0,1,0,0)*s12^2 + 1/4*pentagon1(1,0,1,0,0)*den( - 1 + d)*s12^2;


id pentagon1(1,-2,1,1,1)=
2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s12)*s23^2 + 4*pentagon1(1,0
      ,0,1,0)*den( - 4 + d)*den( - s45 + s12)^2*s23^2*s45 + 2*pentagon1(1,0,0,
      1,0)*den( - 4 + d)*den( - s45 + s12)^3*s23^2*s45^2 - 2*pentagon1(1,0,0,1
      ,0)*den( - 2 + d)*den( - s45 + s12)*s23*s45 - 2*pentagon1(1,0,0,1,0)*
      den( - 2 + d)*den( - s45 + s12)^2*s23*s45^2 - 2*pentagon1(1,0,0,1,0)*
      den( - 2 + d)*den( - s45 + s12)^2*s23^2*s45 - 2*pentagon1(1,0,0,1,0)*
      den( - 2 + d)*den( - s45 + s12)^3*s23^2*s45^2 + 1/2*pentagon1(1,0,0,1,0)
      *den( - s45 + s12)*s45^2 - pentagon1(1,0,0,1,0)*den( - s45 + s12)*s23*
      s45 + 1/2*pentagon1(1,0,0,1,0)*den( - s45 + s12)*s23^2 - 1/2*pentagon1(1
      ,0,1,0,0)*s45 - 1/2*pentagon1(1,0,1,0,0)*s12 - 2*pentagon1(1,0,1,0,0)*
      den( - 4 + d)*den( - s45 + s12)*s23^2 - 4*pentagon1(1,0,1,0,0)*den( - 4
       + d)*den( - s45 + s12)^2*s23^2*s45 - 2*pentagon1(1,0,1,0,0)*den( - 4 + 
      d)*den( - s45 + s12)^3*s23^2*s45^2 + 2*pentagon1(1,0,1,0,0)*den( - 2 + d
      )*s23 + 4*pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s12)*s23*s45
       + 2*pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s12)*s23^2 + 2*
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s12)^2*s23*s45^2 + 4*
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s12)^2*s23^2*s45 + 2*
      pentagon1(1,0,1,0,0)*den( - 2 + d)*den( - s45 + s12)^3*s23^2*s45^2 - 1/2
      *pentagon1(1,0,1,0,0)*den( - s45 + s12)*s45^2;


id pentagon1(-2,0,1,1,1)=
4*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s45 - s34 + s12)*s51 + 4*
      pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s45 - s34 + s12)*s23 + 4*
      pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s45 - s34 + s12)^2*s34*s51 + 2
      *pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s45 - s34 + s12)^2*s34*s45 + 
      4*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s45 - s34 + s12)^2*s23*s51
       + 4*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s45 - s34 + s12)^2*s23*
      s45 + 4*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s34 + s12)*den( - s45
       - s34 + s12)*s51^2 + 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s34 + 
      s12)*den( - s45 - s34 + s12)^2*s34*s51^2 + 2*pentagon1(0,0,1,0,1)*den(
       - 4 + d)*den( - s34 + s12)^2*den( - s45 - s34 + s12)*s34*s51^2 + 2*
      pentagon1(0,0,1,0,1)*den( - s45 - s34 + s12)*s51 - pentagon1(0,0,1,0,1)*
      den( - s45 - s34 + s12)*s34 + 2*pentagon1(0,0,1,0,1)*den( - s45 - s34 + 
      s12)^2*s34*s51 + pentagon1(0,0,1,0,1)*den( - s45 - s34 + s12)^2*s34*s45
       + 2*pentagon1(0,0,1,0,1)*den( - s45 - s34 + s12)^2*s23*s51 + 2*
      pentagon1(0,0,1,0,1)*den( - s45 - s34 + s12)^2*s23*s45 + 2*pentagon1(0,0
      ,1,0,1)*den( - s34 + s12)*den( - s45 - s34 + s12)*s51^2 - 2*pentagon1(0,
      0,1,0,1)*den( - s34 + s12)*den( - s45 - s34 + s12)*s34*s51 + pentagon1(0
      ,0,1,0,1)*den( - s34 + s12)*den( - s45 - s34 + s12)^2*s34*s51^2 + 4*
      pentagon1(0,0,1,0,1)*den(s34)*den( - 4 + d)*den( - s45 - s34 + s12)*
      s23^2 + 2*pentagon1(0,0,1,0,1)*den(s34)*den( - 4 + d)*den( - s45 - s34
       + s12)^2*s23^2*s45 + 2*pentagon1(0,0,1,0,1)*den(s34)*den( - s45 - s34
       + s12)*s23*s51 + pentagon1(0,0,1,0,1)*den(s34)*den( - s45 - s34 + s12)*
      s23^2 + pentagon1(0,0,1,0,1)*den(s34)*den( - s45 - s34 + s12)^2*s23^2*
      s45 + 4*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 - s34 + s12)*s51
       + 4*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 - s34 + s12)*s23 + 4*
      pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 - s34 + s12)^2*s34*s51 + 2
      *pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 - s34 + s12)^2*s34*s45 + 
      4*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 - s34 + s12)^2*s23*s51
       + 4*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 - s34 + s12)^2*s23*
      s45 + 4*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s12)*den( - s45
       - s34 + s12)*s23^2 + 2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + 
      s12)*den( - s45 - s34 + s12)^2*s23^2*s45 + 2*pentagon1(1,0,0,1,0)*den(
       - 4 + d)*den( - s45 + s12)^2*den( - s45 - s34 + s12)*s23^2*s45 - 
      pentagon1(1,0,0,1,0)*den( - s45 - s34 + s12)*s45 + 2*pentagon1(1,0,0,1,0
      )*den( - s45 - s34 + s12)*s23 + 2*pentagon1(1,0,0,1,0)*den( - s45 - s34
       + s12)^2*s34*s51 + pentagon1(1,0,0,1,0)*den( - s45 - s34 + s12)^2*s34*
      s45 + 2*pentagon1(1,0,0,1,0)*den( - s45 - s34 + s12)^2*s23*s51 + 2*
      pentagon1(1,0,0,1,0)*den( - s45 - s34 + s12)^2*s23*s45 - 2*pentagon1(1,0
      ,0,1,0)*den( - s45 + s12)*den( - s45 - s34 + s12)*s23*s45 + 2*pentagon1(
      1,0,0,1,0)*den( - s45 + s12)*den( - s45 - s34 + s12)*s23^2 + pentagon1(1
      ,0,0,1,0)*den( - s45 + s12)*den( - s45 - s34 + s12)^2*s23^2*s45 + 4*
      pentagon1(1,0,0,1,0)*den(s45)*den( - 4 + d)*den( - s45 - s34 + s12)*
      s51^2 + 2*pentagon1(1,0,0,1,0)*den(s45)*den( - 4 + d)*den( - s45 - s34
       + s12)^2*s34*s51^2 + pentagon1(1,0,0,1,0)*den(s45)*den( - s45 - s34 + 
      s12)*s51^2 + 2*pentagon1(1,0,0,1,0)*den(s45)*den( - s45 - s34 + s12)*s23
      *s51 + pentagon1(1,0,0,1,0)*den(s45)*den( - s45 - s34 + s12)^2*s34*s51^2
       + pentagon1(1,0,1,0,0) - 4*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - 
      s45 - s34 + s12)*s51 - 4*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45
       - s34 + s12)*s23 - 4*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 - 
      s34 + s12)^2*s34*s51 - 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45
       - s34 + s12)^2*s34*s45 - 4*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - 
      s45 - s34 + s12)^2*s23*s51 - 4*pentagon1(1,0,1,0,0)*den( - 4 + d)*den(
       - s45 - s34 + s12)^2*s23*s45 - 4*pentagon1(1,0,1,0,0)*den( - 4 + d)*
      den( - s45 + s12)*den( - s45 - s34 + s12)*s23^2 - 2*pentagon1(1,0,1,0,0)
      *den( - 4 + d)*den( - s45 + s12)*den( - s45 - s34 + s12)^2*s23^2*s45 - 2
      *pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s12)^2*den( - s45 - s34
       + s12)*s23^2*s45 - 4*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s34 + 
      s12)*den( - s45 - s34 + s12)*s51^2 - 2*pentagon1(1,0,1,0,0)*den( - 4 + d
      )*den( - s34 + s12)*den( - s45 - s34 + s12)^2*s34*s51^2 - 2*pentagon1(1,
      0,1,0,0)*den( - 4 + d)*den( - s34 + s12)^2*den( - s45 - s34 + s12)*s34*
      s51^2 + pentagon1(1,0,1,0,0)*den( - s45 - s34 + s12)*s45 + pentagon1(1,0
      ,1,0,0)*den( - s45 - s34 + s12)*s34 - 2*pentagon1(1,0,1,0,0)*den( - s45
       - s34 + s12)^2*s34*s51 - pentagon1(1,0,1,0,0)*den( - s45 - s34 + s12)^2
      *s34*s45 - 2*pentagon1(1,0,1,0,0)*den( - s45 - s34 + s12)^2*s23*s51 - 2*
      pentagon1(1,0,1,0,0)*den( - s45 - s34 + s12)^2*s23*s45 + 2*pentagon1(1,0
      ,1,0,0)*den( - s45 + s12)*den( - s45 - s34 + s12)*s23*s45 - pentagon1(1,
      0,1,0,0)*den( - s45 + s12)*den( - s45 - s34 + s12)*s23^2 - pentagon1(1,0
      ,1,0,0)*den( - s45 + s12)*den( - s45 - s34 + s12)^2*s23^2*s45 - 
      pentagon1(1,0,1,0,0)*den( - s34 + s12)*den( - s45 - s34 + s12)*s51^2 + 2
      *pentagon1(1,0,1,0,0)*den( - s34 + s12)*den( - s45 - s34 + s12)*s34*s51
       - pentagon1(1,0,1,0,0)*den( - s34 + s12)*den( - s45 - s34 + s12)^2*s34*
      s51^2 + 1/4*pentagon1(1,0,1,1,1)*s51^2 + 1/2*pentagon1(1,0,1,1,1)*s23*
      s51 + 1/4*pentagon1(1,0,1,1,1)*s23^2 + 1/4*pentagon1(1,0,1,1,1)*den( - 3
       + d)*s51^2 - 1/2*pentagon1(1,0,1,1,1)*den( - 3 + d)*s23*s51 + 1/4*
      pentagon1(1,0,1,1,1)*den( - 3 + d)*s23^2 + 1/2*pentagon1(1,0,1,1,1)*den(
       - 3 + d)*den( - s45 - s34 + s12)*s34*s51^2 + 1/2*pentagon1(1,0,1,1,1)*
      den( - 3 + d)*den( - s45 - s34 + s12)*s34*s45*s51 - 1/2*pentagon1(1,0,1,
      1,1)*den( - 3 + d)*den( - s45 - s34 + s12)*s23*s45*s51 - 1/2*pentagon1(1
      ,0,1,1,1)*den( - 3 + d)*den( - s45 - s34 + s12)*s23*s34*s51 + 1/2*
      pentagon1(1,0,1,1,1)*den( - 3 + d)*den( - s45 - s34 + s12)*s23*s34*s45
       + 1/2*pentagon1(1,0,1,1,1)*den( - 3 + d)*den( - s45 - s34 + s12)*s23^2*
      s45 + 1/4*pentagon1(1,0,1,1,1)*den( - 3 + d)*den( - s45 - s34 + s12)^2*
      s34^2*s51^2 + 1/2*pentagon1(1,0,1,1,1)*den( - 3 + d)*den( - s45 - s34 + 
      s12)^2*s34^2*s45*s51 + 1/4*pentagon1(1,0,1,1,1)*den( - 3 + d)*den( - s45
       - s34 + s12)^2*s34^2*s45^2 + 1/2*pentagon1(1,0,1,1,1)*den( - 3 + d)*
      den( - s45 - s34 + s12)^2*s23*s34*s45*s51 + 1/2*pentagon1(1,0,1,1,1)*
      den( - 3 + d)*den( - s45 - s34 + s12)^2*s23*s34*s45^2 + 1/4*pentagon1(1,
      0,1,1,1)*den( - 3 + d)*den( - s45 - s34 + s12)^2*s23^2*s45^2 + 1/2*
      pentagon1(1,0,1,1,1)*den( - s45 - s34 + s12)*s34*s51^2 + 1/2*pentagon1(1
      ,0,1,1,1)*den( - s45 - s34 + s12)*s34*s45*s51 + 1/2*pentagon1(1,0,1,1,1)
      *den( - s45 - s34 + s12)*s23*s45*s51 + 1/2*pentagon1(1,0,1,1,1)*den( - 
      s45 - s34 + s12)*s23*s34*s51 + 1/2*pentagon1(1,0,1,1,1)*den( - s45 - s34
       + s12)*s23*s34*s45 + 1/2*pentagon1(1,0,1,1,1)*den( - s45 - s34 + s12)*
      s23^2*s45 + 1/4*pentagon1(1,0,1,1,1)*den( - s45 - s34 + s12)^2*s34^2*
      s51^2 + 1/2*pentagon1(1,0,1,1,1)*den( - s45 - s34 + s12)^2*s34^2*s45*s51
       + 1/4*pentagon1(1,0,1,1,1)*den( - s45 - s34 + s12)^2*s34^2*s45^2 + 1/2*
      pentagon1(1,0,1,1,1)*den( - s45 - s34 + s12)^2*s23*s34*s45*s51 + 1/2*
      pentagon1(1,0,1,1,1)*den( - s45 - s34 + s12)^2*s23*s34*s45^2 + 1/4*
      pentagon1(1,0,1,1,1)*den( - s45 - s34 + s12)^2*s23^2*s45^2;


id pentagon1(-2,1,0,1,1)=
 - 1/2*pentagon1(0,0,1,0,1)*s34 + pentagon1(0,0,1,0,1)*s12 + 2*pentagon1(0,0,1
      ,0,1)*den( - 2 + d)*s45 - 1/2*pentagon1(0,0,1,0,1)*den(s34)*s12^2 - 2*
      pentagon1(0,0,1,0,1)*den(s34)*den( - 4 + d)*s45^2 + 2*pentagon1(0,0,1,0,
      1)*den(s34)*den( - 2 + d)*s45^2 - 2*pentagon1(0,0,1,0,1)*den(s34)*den(
       - 2 + d)*s12*s45;


id pentagon1(-2,1,1,0,0)=
2*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s23)^3*s45^2*s51^2 + 2*
      pentagon1(0,1,0,0,1)*den( - 2 + d)*den( - s51 + s23)^2*s45*s51^2 - 2*
      pentagon1(0,1,0,0,1)*den( - 2 + d)*den( - s51 + s23)^3*s45^2*s51^2 + 1/2
      *pentagon1(0,1,0,0,1)*den( - s51 + s23)*s51^2 - 1/2*pentagon1(0,1,0,1,0)
      *s51 + pentagon1(0,1,0,1,0)*s45 - 1/2*pentagon1(0,1,0,1,0)*s23 - 2*
      pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s23)^3*s45^2*s51^2 - 2*
      pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51 + s23)*s45*s51 - 2*
      pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51 + s23)^2*s45*s51^2 + 2*
      pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51 + s23)^2*s45^2*s51 + 2*
      pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51 + s23)^3*s45^2*s51^2 - 1/2
      *pentagon1(0,1,0,1,0)*den( - s51 + s23)*s51^2 + pentagon1(0,1,0,1,0)*
      den( - s51 + s23)*s45*s51 - 1/2*pentagon1(0,1,0,1,0)*den( - s51 + s23)*
      s45^2;


id pentagon1(-2,1,1,0,1)=
 - 1/2*pentagon1(0,0,1,0,1)*s51 - 1/2*pentagon1(0,0,1,0,1)*s34 + pentagon1(0,0
      ,1,0,1)*s12 - 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34)^3*
      s12^2*s51^2 - 2*pentagon1(0,0,1,0,1)*den( - 2 + d)*den( - s51 + s34)*s12
      *s51 - 2*pentagon1(0,0,1,0,1)*den( - 2 + d)*den( - s51 + s34)^2*s12*
      s51^2 + 2*pentagon1(0,0,1,0,1)*den( - 2 + d)*den( - s51 + s34)^2*s12^2*
      s51 + 2*pentagon1(0,0,1,0,1)*den( - 2 + d)*den( - s51 + s34)^3*s12^2*
      s51^2 - 1/2*pentagon1(0,0,1,0,1)*den( - s51 + s34)*s51^2 + pentagon1(0,0
      ,1,0,1)*den( - s51 + s34)*s12*s51 - 1/2*pentagon1(0,0,1,0,1)*den( - s51
       + s34)*s12^2 + 2*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s34)^3
      *s12^2*s51^2 + 2*pentagon1(0,1,0,0,1)*den( - 2 + d)*den( - s51 + s34)^2*
      s12*s51^2 - 2*pentagon1(0,1,0,0,1)*den( - 2 + d)*den( - s51 + s34)^3*
      s12^2*s51^2 + 1/2*pentagon1(0,1,0,0,1)*den( - s51 + s34)*s51^2;


id pentagon1(-2,1,1,1,0)=
pentagon1(0,1,0,1,0)*s45 - 1/2*pentagon1(0,1,0,1,0)*s23 + 2*pentagon1(0,1,0,1,
      0)*den( - 2 + d)*s12 - 1/2*pentagon1(0,1,0,1,0)*den(s23)*s45^2 - 2*
      pentagon1(0,1,0,1,0)*den(s23)*den( - 4 + d)*s12^2 - 2*pentagon1(0,1,0,1,
      0)*den(s23)*den( - 2 + d)*s12*s45 + 2*pentagon1(0,1,0,1,0)*den(s23)*den(
       - 2 + d)*s12^2;


id pentagon1(-2,1,1,1,1)=
 - 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34)^2*den( - s51 + s34
       + s23)*s12^2*s51 + 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + 
      s34)*den( - s51 + s34 + s23)*s12^2 - 2*pentagon1(0,0,1,0,1)*den( - 4 + d
      )*den( - s51 + s34)*den( - s51 + s34 + s23)^2*s12^2*s51 + 2*pentagon1(0,
      0,1,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)*s34 - 4*pentagon1(0,0,1,0
      ,1)*den( - 4 + d)*den( - s51 + s34 + s23)*s12 + 4*pentagon1(0,0,1,0,1)*
      den( - 4 + d)*den( - s51 + s34 + s23)^2*s45*s51 - 2*pentagon1(0,0,1,0,1)
      *den( - 4 + d)*den( - s51 + s34 + s23)^2*s45^2 + 2*pentagon1(0,0,1,0,1)*
      den( - 4 + d)*den( - s51 + s34 + s23)^2*s34*s51 - 4*pentagon1(0,0,1,0,1)
      *den( - 4 + d)*den( - s51 + s34 + s23)^2*s34*s45 - 2*pentagon1(0,0,1,0,1
      )*den( - 4 + d)*den( - s51 + s34 + s23)^2*s34^2 + 4*pentagon1(0,0,1,0,1)
      *den( - 4 + d)*den( - s51 + s34 + s23)^2*s12*s45 + 4*pentagon1(0,0,1,0,1
      )*den( - 4 + d)*den( - s51 + s34 + s23)^2*s12*s34 - 2*pentagon1(0,0,1,0,
      1)*den( - 4 + d)*den( - s51 + s34 + s23)^2*s12^2 - 2*pentagon1(0,0,1,0,1
      )*den( - s51 + s34)*den( - s51 + s34 + s23)*s12*s51 + 2*pentagon1(0,0,1,
      0,1)*den( - s51 + s34)*den( - s51 + s34 + s23)*s12^2 - pentagon1(0,0,1,0
      ,1)*den( - s51 + s34)*den( - s51 + s34 + s23)^2*s12^2*s51 + 2*pentagon1(
      0,0,1,0,1)*den( - s51 + s34 + s23)*s45 + 2*pentagon1(0,0,1,0,1)*den( - 
      s51 + s34 + s23)*s34 - 4*pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)*
      s12 + 2*pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^2*s45*s51 - 
      pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^2*s45^2 + pentagon1(0,0,1,0
      ,1)*den( - s51 + s34 + s23)^2*s34*s51 - 2*pentagon1(0,0,1,0,1)*den( - 
      s51 + s34 + s23)^2*s34*s45 - pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23
      )^2*s34^2 + 2*pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^2*s12*s45 + 2
      *pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^2*s12*s34 - pentagon1(0,0,
      1,0,1)*den( - s51 + s34 + s23)^2*s12^2 - 2*pentagon1(0,0,1,0,1)*den(s34)
      *den( - 4 + d)*den( - s51 + s34 + s23)*s45^2 + 2*pentagon1(0,0,1,0,1)*
      den(s34)*den( - 4 + d)*den( - s51 + s34 + s23)^2*s45^2*s51 - 2*
      pentagon1(0,0,1,0,1)*den(s34)*den( - s51 + s34 + s23)*s12*s45 + 
      pentagon1(0,0,1,0,1)*den(s34)*den( - s51 + s34 + s23)^2*s45^2*s51 + 2*
      pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s34)^2*den( - s51 + s34
       + s23)*s12^2*s51 - 2*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + 
      s34)*den( - s51 + s34 + s23)*s12^2 + 2*pentagon1(0,1,0,0,1)*den( - 4 + d
      )*den( - s51 + s34)*den( - s51 + s34 + s23)^2*s12^2*s51 - 2*pentagon1(0,
      1,0,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)*s34 + 4*pentagon1(0,1,0,0
      ,1)*den( - 4 + d)*den( - s51 + s34 + s23)*s12 - 4*pentagon1(0,1,0,0,1)*
      den( - 4 + d)*den( - s51 + s34 + s23)^2*s45*s51 + 2*pentagon1(0,1,0,0,1)
      *den( - 4 + d)*den( - s51 + s34 + s23)^2*s45^2 - 2*pentagon1(0,1,0,0,1)*
      den( - 4 + d)*den( - s51 + s34 + s23)^2*s34*s51 + 4*pentagon1(0,1,0,0,1)
      *den( - 4 + d)*den( - s51 + s34 + s23)^2*s34*s45 + 2*pentagon1(0,1,0,0,1
      )*den( - 4 + d)*den( - s51 + s34 + s23)^2*s34^2 - 4*pentagon1(0,1,0,0,1)
      *den( - 4 + d)*den( - s51 + s34 + s23)^2*s12*s45 - 4*pentagon1(0,1,0,0,1
      )*den( - 4 + d)*den( - s51 + s34 + s23)^2*s12*s34 + 2*pentagon1(0,1,0,0,
      1)*den( - 4 + d)*den( - s51 + s34 + s23)^2*s12^2 - 2*pentagon1(0,1,0,0,1
      )*den( - 4 + d)*den( - s51 + s23)*den( - s51 + s34 + s23)*s45^2 + 2*
      pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s23)*den( - s51 + s34 + 
      s23)^2*s45^2*s51 + 2*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s23
      )^2*den( - s51 + s34 + s23)*s45^2*s51 + 2*pentagon1(0,1,0,0,1)*den( - 
      s51 + s34)*den( - s51 + s34 + s23)*s12*s51 - pentagon1(0,1,0,0,1)*den(
       - s51 + s34)*den( - s51 + s34 + s23)*s12^2 + pentagon1(0,1,0,0,1)*den(
       - s51 + s34)*den( - s51 + s34 + s23)^2*s12^2*s51 - pentagon1(0,1,0,0,1)
      *den( - s51 + s34 + s23)*s51 - pentagon1(0,1,0,0,1)*den( - s51 + s34 + 
      s23)*s34 + 2*pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23)*s12 - 2*
      pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23)^2*s45*s51 + pentagon1(0,1,0
      ,0,1)*den( - s51 + s34 + s23)^2*s45^2 - pentagon1(0,1,0,0,1)*den( - s51
       + s34 + s23)^2*s34*s51 + 2*pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23)
      ^2*s34*s45 + pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23)^2*s34^2 - 2*
      pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23)^2*s12*s45 - 2*pentagon1(0,1
      ,0,0,1)*den( - s51 + s34 + s23)^2*s12*s34 + pentagon1(0,1,0,0,1)*den( - 
      s51 + s34 + s23)^2*s12^2 + 2*pentagon1(0,1,0,0,1)*den( - s51 + s23)*den(
       - s51 + s34 + s23)*s45*s51 - pentagon1(0,1,0,0,1)*den( - s51 + s23)*
      den( - s51 + s34 + s23)*s45^2 + pentagon1(0,1,0,0,1)*den( - s51 + s23)*
      den( - s51 + s34 + s23)^2*s45^2*s51 + pentagon1(0,1,0,1,0) + 2*
      pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)*s34 - 4*
      pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)*s12 + 4*
      pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)^2*s45*s51 - 2
      *pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)^2*s45^2 + 2*
      pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)^2*s34*s51 - 4
      *pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)^2*s34*s45 - 
      2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)^2*s34^2 + 4
      *pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)^2*s12*s45 + 
      4*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)^2*s12*s34
       - 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)^2*s12^2
       + 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s23)*den( - s51 + 
      s34 + s23)*s45^2 - 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s23
      )*den( - s51 + s34 + s23)^2*s45^2*s51 - 2*pentagon1(0,1,0,1,0)*den( - 4
       + d)*den( - s51 + s23)^2*den( - s51 + s34 + s23)*s45^2*s51 + pentagon1(
      0,1,0,1,0)*den( - s51 + s34 + s23)*s51 - 2*pentagon1(0,1,0,1,0)*den( - 
      s51 + s34 + s23)*s45 + 2*pentagon1(0,1,0,1,0)*den( - s51 + s34 + s23)^2*
      s45*s51 - pentagon1(0,1,0,1,0)*den( - s51 + s34 + s23)^2*s45^2 + 
      pentagon1(0,1,0,1,0)*den( - s51 + s34 + s23)^2*s34*s51 - 2*pentagon1(0,1
      ,0,1,0)*den( - s51 + s34 + s23)^2*s34*s45 - pentagon1(0,1,0,1,0)*den( - 
      s51 + s34 + s23)^2*s34^2 + 2*pentagon1(0,1,0,1,0)*den( - s51 + s34 + s23
      )^2*s12*s45 + 2*pentagon1(0,1,0,1,0)*den( - s51 + s34 + s23)^2*s12*s34
       - pentagon1(0,1,0,1,0)*den( - s51 + s34 + s23)^2*s12^2 - 2*pentagon1(0,
      1,0,1,0)*den( - s51 + s23)*den( - s51 + s34 + s23)*s45*s51 + 2*
      pentagon1(0,1,0,1,0)*den( - s51 + s23)*den( - s51 + s34 + s23)*s45^2 - 
      pentagon1(0,1,0,1,0)*den( - s51 + s23)*den( - s51 + s34 + s23)^2*s45^2*
      s51 - 2*pentagon1(0,1,0,1,0)*den(s23)*den( - 4 + d)*den( - s51 + s34 + 
      s23)*s12^2 + 2*pentagon1(0,1,0,1,0)*den(s23)*den( - 4 + d)*den( - s51 + 
      s34 + s23)^2*s12^2*s51 - 2*pentagon1(0,1,0,1,0)*den(s23)*den( - s51 + 
      s34 + s23)*s12*s45 + pentagon1(0,1,0,1,0)*den(s23)*den( - s51 + s34 + 
      s23)^2*s12^2*s51 + 1/4*pentagon1(0,1,1,1,1)*s34^2 - 1/2*pentagon1(0,1,1,
      1,1)*s12*s34 + 1/4*pentagon1(0,1,1,1,1)*s12^2 + 1/4*pentagon1(0,1,1,1,1)
      *den( - 3 + d)*s34^2 - 1/2*pentagon1(0,1,1,1,1)*den( - 3 + d)*s12*s34 + 
      1/4*pentagon1(0,1,1,1,1)*den( - 3 + d)*s12^2 + 1/2*pentagon1(0,1,1,1,1)*
      den( - 3 + d)*den( - s51 + s34 + s23)*s34*s45*s51 + 1/2*pentagon1(0,1,1,
      1,1)*den( - 3 + d)*den( - s51 + s34 + s23)*s34^2*s51 - 1/2*pentagon1(0,1
      ,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)*s34^2*s45 - 1/2*pentagon1(
      0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)*s34^3 + 1/2*pentagon1(0
      ,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)*s12*s45*s51 - 1/2*
      pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)*s12*s34*s51
       + 1/2*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)*s12*
      s34*s45 + pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)*s12
      *s34^2 - 1/2*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)*
      s12^2*s34 + 1/4*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + 
      s23)^2*s45^2*s51^2 + 1/2*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51
       + s34 + s23)^2*s34*s45*s51^2 - 1/2*pentagon1(0,1,1,1,1)*den( - 3 + d)*
      den( - s51 + s34 + s23)^2*s34*s45^2*s51 + 1/4*pentagon1(0,1,1,1,1)*den(
       - 3 + d)*den( - s51 + s34 + s23)^2*s34^2*s51^2 - pentagon1(0,1,1,1,1)*
      den( - 3 + d)*den( - s51 + s34 + s23)^2*s34^2*s45*s51 + 1/4*pentagon1(0,
      1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)^2*s34^2*s45^2 - 1/2*
      pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)^2*s34^3*s51
       + 1/2*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)^2*
      s34^3*s45 + 1/4*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + 
      s23)^2*s34^4 + 1/2*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34
       + s23)^2*s12*s34*s45*s51 + 1/2*pentagon1(0,1,1,1,1)*den( - 3 + d)*den(
       - s51 + s34 + s23)^2*s12*s34^2*s51 - 1/2*pentagon1(0,1,1,1,1)*den( - 3
       + d)*den( - s51 + s34 + s23)^2*s12*s34^2*s45 - 1/2*pentagon1(0,1,1,1,1)
      *den( - 3 + d)*den( - s51 + s34 + s23)^2*s12*s34^3 + 1/4*pentagon1(0,1,1
      ,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)^2*s12^2*s34^2 + 1/2*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)*s34*s45*s51 + 1/2*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)*s34^2*s51 - 1/2*pentagon1(0
      ,1,1,1,1)*den( - s51 + s34 + s23)*s34^2*s45 - 1/2*pentagon1(0,1,1,1,1)*
      den( - s51 + s34 + s23)*s34^3 - 1/2*pentagon1(0,1,1,1,1)*den( - s51 + 
      s34 + s23)*s12*s45*s51 - 1/2*pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23
      )*s12*s34*s51 + 1/2*pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)*s12*s34
      *s45 + pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)*s12*s34^2 - 1/2*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)*s12^2*s34 + 1/4*pentagon1(0
      ,1,1,1,1)*den( - s51 + s34 + s23)^2*s45^2*s51^2 + 1/2*pentagon1(0,1,1,1,
      1)*den( - s51 + s34 + s23)^2*s34*s45*s51^2 - 1/2*pentagon1(0,1,1,1,1)*
      den( - s51 + s34 + s23)^2*s34*s45^2*s51 + 1/4*pentagon1(0,1,1,1,1)*den(
       - s51 + s34 + s23)^2*s34^2*s51^2 - pentagon1(0,1,1,1,1)*den( - s51 + 
      s34 + s23)^2*s34^2*s45*s51 + 1/4*pentagon1(0,1,1,1,1)*den( - s51 + s34
       + s23)^2*s34^2*s45^2 - 1/2*pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)
      ^2*s34^3*s51 + 1/2*pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^2*s34^3*
      s45 + 1/4*pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^2*s34^4 + 1/2*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^2*s12*s34*s45*s51 + 1/2*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^2*s12*s34^2*s51 - 1/2*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^2*s12*s34^2*s45 - 1/2*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^2*s12*s34^3 + 1/4*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^2*s12^2*s34^2;


id pentagon1(-3,1,1,1,1)=
2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34)^3*den( - s51 + s34 + 
      s23)*s12^3*s51^2 - 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34
      )^2*den( - s51 + s34 + s23)*s12^3*s51 + 2*pentagon1(0,0,1,0,1)*den( - 4
       + d)*den( - s51 + s34)^2*den( - s51 + s34 + s23)^2*s12^3*s51^2 + 2*
      pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34)*den( - s51 + s34 + 
      s23)*s12^3 - 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34)*den(
       - s51 + s34 + s23)^2*s12^3*s51 + 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*
      den( - s51 + s34)*den( - s51 + s34 + s23)^3*s12^3*s51^2 - 2*pentagon1(0,
      0,1,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)*s34^2 + 6*pentagon1(0,0,1
      ,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)*s12*s34 - 6*pentagon1(0,0,1,
      0,1)*den( - 4 + d)*den( - s51 + s34 + s23)*s12^2 - 2*pentagon1(0,0,1,0,1
      )*den( - 4 + d)*den( - s51 + s34 + s23)^2*s45^3 - 6*pentagon1(0,0,1,0,1)
      *den( - 4 + d)*den( - s51 + s34 + s23)^2*s34*s45*s51 - 4*pentagon1(0,0,1
      ,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^2*s34^2*s51 + 6*pentagon1(0,
      0,1,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^2*s34^2*s45 + 4*
      pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^2*s34^3 + 6*
      pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^2*s12*s45*s51
       + 6*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^2*s12*
      s34*s51 - 12*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^
      2*s12*s34*s45 - 12*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34
       + s23)^2*s12*s34^2 + 6*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + 
      s34 + s23)^2*s12^2*s45 + 12*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - 
      s51 + s34 + s23)^2*s12^2*s34 - 4*pentagon1(0,0,1,0,1)*den( - 4 + d)*den(
       - s51 + s34 + s23)^2*s12^3 - 6*pentagon1(0,0,1,0,1)*den( - 4 + d)*den(
       - s51 + s34 + s23)^3*s45^2*s51^2 + 4*pentagon1(0,0,1,0,1)*den( - 4 + d)
      *den( - s51 + s34 + s23)^3*s45^3*s51 - 6*pentagon1(0,0,1,0,1)*den( - 4
       + d)*den( - s51 + s34 + s23)^3*s34*s45*s51^2 + 12*pentagon1(0,0,1,0,1)*
      den( - 4 + d)*den( - s51 + s34 + s23)^3*s34*s45^2*s51 - 2*pentagon1(0,0,
      1,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^3*s34*s45^3 - 2*pentagon1(0
      ,0,1,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^3*s34^2*s51^2 + 12*
      pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^3*s34^2*s45*
      s51 - 6*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^3*
      s34^2*s45^2 + 4*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34 + 
      s23)^3*s34^3*s51 - 6*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34
       + s23)^3*s34^3*s45 - 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + 
      s34 + s23)^3*s34^4 - 6*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + 
      s34 + s23)^3*s12*s45^2*s51 - 12*pentagon1(0,0,1,0,1)*den( - 4 + d)*den(
       - s51 + s34 + s23)^3*s12*s34*s45*s51 + 6*pentagon1(0,0,1,0,1)*den( - 4
       + d)*den( - s51 + s34 + s23)^3*s12*s34*s45^2 - 6*pentagon1(0,0,1,0,1)*
      den( - 4 + d)*den( - s51 + s34 + s23)^3*s12*s34^2*s51 + 12*pentagon1(0,0
      ,1,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^3*s12*s34^2*s45 + 6*
      pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^3*s12*s34^3
       - 6*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^3*s12^2*
      s34*s45 - 6*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^3
      *s12^2*s34^2 + 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34 + 
      s23)^3*s12^3*s51 + 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34
       + s23)^3*s12^3*s34 - 2*pentagon1(0,0,1,0,1)*den( - 2 + d)*den( - s51 + 
      s34)^3*den( - s51 + s34 + s23)*s12^3*s51^2 + 3*pentagon1(0,0,1,0,1)*den(
       - 2 + d)*den( - s51 + s34)^2*den( - s51 + s34 + s23)*s12^2*s51^2 - 
      pentagon1(0,0,1,0,1)*den( - 2 + d)*den( - s51 + s34)^2*den( - s51 + s34
       + s23)*s12^3*s51 - pentagon1(0,0,1,0,1)*den( - 2 + d)*den( - s51 + s34)
      ^2*den( - s51 + s34 + s23)^2*s12^3*s51^2 + pentagon1(0,0,1,0,1)*den( - 2
       + d)*den( - s51 + s34)*den( - s51 + s34 + s23)*s12^3 + 3*pentagon1(0,0,
      1,0,1)*den( - 2 + d)*den( - s51 + s34)*den( - s51 + s34 + s23)^2*s12^2*
      s51^2 + 3*pentagon1(0,0,1,0,1)*den( - 2 + d)*den( - s51 + s34)*den( - 
      s51 + s34 + s23)^2*s12^2*s45*s51 - 2*pentagon1(0,0,1,0,1)*den( - 2 + d)*
      den( - s51 + s34)*den( - s51 + s34 + s23)^2*s12^3*s51 + 3*pentagon1(0,0,
      1,0,1)*den( - 2 + d)*den( - s51 + s34 + s23)*s45^2 - pentagon1(0,0,1,0,1
      )*den( - 2 + d)*den( - s51 + s34 + s23)*s34^2 + 3*pentagon1(0,0,1,0,1)*
      den( - 2 + d)*den( - s51 + s34 + s23)*s12*s34 - 3*pentagon1(0,0,1,0,1)*
      den( - 2 + d)*den( - s51 + s34 + s23)*s12^2 - 3*pentagon1(0,0,1,0,1)*
      den( - 2 + d)*den( - s51 + s34 + s23)^2*s45^2*s51 + pentagon1(0,0,1,0,1)
      *den( - 2 + d)*den( - s51 + s34 + s23)^2*s45^3 - 3*pentagon1(0,0,1,0,1)*
      den( - 2 + d)*den( - s51 + s34 + s23)^2*s34*s45*s51 + 3*pentagon1(0,0,1,
      0,1)*den( - 2 + d)*den( - s51 + s34 + s23)^2*s34*s45^2 - pentagon1(0,0,1
      ,0,1)*den( - 2 + d)*den( - s51 + s34 + s23)^2*s34^2*s51 + 3*pentagon1(0,
      0,1,0,1)*den( - 2 + d)*den( - s51 + s34 + s23)^2*s34^2*s45 + pentagon1(0
      ,0,1,0,1)*den( - 2 + d)*den( - s51 + s34 + s23)^2*s34^3 - 3*pentagon1(0,
      0,1,0,1)*den( - 2 + d)*den( - s51 + s34 + s23)^2*s12*s45^2 - 6*
      pentagon1(0,0,1,0,1)*den( - 2 + d)*den( - s51 + s34 + s23)^2*s12*s34*s45
       - 3*pentagon1(0,0,1,0,1)*den( - 2 + d)*den( - s51 + s34 + s23)^2*s12*
      s34^2 + 3*pentagon1(0,0,1,0,1)*den( - 2 + d)*den( - s51 + s34 + s23)^2*
      s12^2*s51 + 3*pentagon1(0,0,1,0,1)*den( - 2 + d)*den( - s51 + s34 + s23)
      ^2*s12^2*s45 + 3*pentagon1(0,0,1,0,1)*den( - 2 + d)*den( - s51 + s34 + 
      s23)^2*s12^2*s34 - pentagon1(0,0,1,0,1)*den( - 2 + d)*den( - s51 + s34
       + s23)^2*s12^3 + 3/2*pentagon1(0,0,1,0,1)*den( - s51 + s34)*den( - s51
       + s34 + s23)*s12*s51^2 - 3*pentagon1(0,0,1,0,1)*den( - s51 + s34)*den(
       - s51 + s34 + s23)*s12^2*s51 + 3/2*pentagon1(0,0,1,0,1)*den( - s51 + 
      s34)*den( - s51 + s34 + s23)*s12^3 + 3/2*pentagon1(0,0,1,0,1)*den( - s51
       + s34)*den( - s51 + s34 + s23)^2*s12^2*s51^2 - 3/2*pentagon1(0,0,1,0,1)
      *den( - s51 + s34)*den( - s51 + s34 + s23)^2*s12^3*s51 + 1/2*pentagon1(0
      ,0,1,0,1)*den( - s51 + s34)*den( - s51 + s34 + s23)^3*s12^3*s51^2 - 3/2*
      pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)*s34*s45 - 3/2*pentagon1(0,0
      ,1,0,1)*den( - s51 + s34 + s23)*s34^2 + 3/2*pentagon1(0,0,1,0,1)*den( - 
      s51 + s34 + s23)*s12*s51 + 3*pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23
      )*s12*s45 + 9/2*pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)*s12*s34 - 9/
      2*pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)*s12^2 - 3/2*pentagon1(0,0
      ,1,0,1)*den( - s51 + s34 + s23)^2*s45^2*s51 - 3*pentagon1(0,0,1,0,1)*
      den( - s51 + s34 + s23)^2*s34*s45*s51 + 3/2*pentagon1(0,0,1,0,1)*den( - 
      s51 + s34 + s23)^2*s34*s45^2 - 3/2*pentagon1(0,0,1,0,1)*den( - s51 + s34
       + s23)^2*s34^2*s51 + 3*pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^2*
      s34^2*s45 + 3/2*pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^2*s34^3 + 3
      *pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^2*s12*s45*s51 - 3/2*
      pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^2*s12*s45^2 + 3/2*
      pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^2*s12*s34*s51 - 6*
      pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^2*s12*s34*s45 - 9/2*
      pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^2*s12*s34^2 + 3/2*
      pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^2*s12^2*s51 + 3*pentagon1(0
      ,0,1,0,1)*den( - s51 + s34 + s23)^2*s12^2*s45 + 9/2*pentagon1(0,0,1,0,1)
      *den( - s51 + s34 + s23)^2*s12^2*s34 - 3/2*pentagon1(0,0,1,0,1)*den( - 
      s51 + s34 + s23)^2*s12^3 - 3/2*pentagon1(0,0,1,0,1)*den( - s51 + s34 + 
      s23)^3*s45^2*s51^2 + pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^3*
      s45^3*s51 - 3/2*pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^3*s34*s45*
      s51^2 + 3*pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^3*s34*s45^2*s51
       - 1/2*pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^3*s34*s45^3 - 1/2*
      pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^3*s34^2*s51^2 + 3*
      pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^3*s34^2*s45*s51 - 3/2*
      pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^3*s34^2*s45^2 + pentagon1(0
      ,0,1,0,1)*den( - s51 + s34 + s23)^3*s34^3*s51 - 3/2*pentagon1(0,0,1,0,1)
      *den( - s51 + s34 + s23)^3*s34^3*s45 - 1/2*pentagon1(0,0,1,0,1)*den( - 
      s51 + s34 + s23)^3*s34^4 - 3/2*pentagon1(0,0,1,0,1)*den( - s51 + s34 + 
      s23)^3*s12*s45^2*s51 - 3*pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^3*
      s12*s34*s45*s51 + 3/2*pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^3*s12
      *s34*s45^2 - 3/2*pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^3*s12*
      s34^2*s51 + 3*pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^3*s12*s34^2*
      s45 + 3/2*pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^3*s12*s34^3 - 3/2
      *pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^3*s12^2*s34*s45 - 3/2*
      pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^3*s12^2*s34^2 + 1/2*
      pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^3*s12^3*s51 + 1/2*
      pentagon1(0,0,1,0,1)*den( - s51 + s34 + s23)^3*s12^3*s34 - 2*pentagon1(0
      ,0,1,0,1)*den(s34)*den( - 4 + d)*den( - s51 + s34 + s23)*s45^3 + 2*
      pentagon1(0,0,1,0,1)*den(s34)*den( - 4 + d)*den( - s51 + s34 + s23)^2*
      s45^3*s51 - 2*pentagon1(0,0,1,0,1)*den(s34)*den( - 4 + d)*den( - s51 + 
      s34 + s23)^3*s45^3*s51^2 + 2*pentagon1(0,0,1,0,1)*den(s34)*den( - 2 + d)
      *den( - s51 + s34 + s23)*s45^3 - 3*pentagon1(0,0,1,0,1)*den(s34)*den( - 
      2 + d)*den( - s51 + s34 + s23)*s12*s45^2 - pentagon1(0,0,1,0,1)*den(s34)
      *den( - 2 + d)*den( - s51 + s34 + s23)^2*s45^3*s51 - 3/2*pentagon1(0,0,1
      ,0,1)*den(s34)*den( - s51 + s34 + s23)*s12^2*s45 + 3/2*pentagon1(0,0,1,0
      ,1)*den(s34)*den( - s51 + s34 + s23)^2*s12*s45^2*s51 - 1/2*pentagon1(0,0
      ,1,0,1)*den(s34)*den( - s51 + s34 + s23)^3*s45^3*s51^2 - 2*pentagon1(0,1
      ,0,0,1)*den( - 4 + d)*den( - s51 + s34)^3*den( - s51 + s34 + s23)*s12^3*
      s51^2 + 2*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s34)^2*den( - 
      s51 + s34 + s23)*s12^3*s51 - 2*pentagon1(0,1,0,0,1)*den( - 4 + d)*den(
       - s51 + s34)^2*den( - s51 + s34 + s23)^2*s12^3*s51^2 - 2*pentagon1(0,1,
      0,0,1)*den( - 4 + d)*den( - s51 + s34)*den( - s51 + s34 + s23)*s12^3 + 2
      *pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s34)*den( - s51 + s34
       + s23)^2*s12^3*s51 - 2*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + 
      s34)*den( - s51 + s34 + s23)^3*s12^3*s51^2 + 2*pentagon1(0,1,0,0,1)*den(
       - 4 + d)*den( - s51 + s34 + s23)*s34^2 - 6*pentagon1(0,1,0,0,1)*den( - 
      4 + d)*den( - s51 + s34 + s23)*s12*s34 + 6*pentagon1(0,1,0,0,1)*den( - 4
       + d)*den( - s51 + s34 + s23)*s12^2 + 2*pentagon1(0,1,0,0,1)*den( - 4 + 
      d)*den( - s51 + s34 + s23)^2*s45^3 + 6*pentagon1(0,1,0,0,1)*den( - 4 + d
      )*den( - s51 + s34 + s23)^2*s34*s45*s51 + 4*pentagon1(0,1,0,0,1)*den( - 
      4 + d)*den( - s51 + s34 + s23)^2*s34^2*s51 - 6*pentagon1(0,1,0,0,1)*den(
       - 4 + d)*den( - s51 + s34 + s23)^2*s34^2*s45 - 4*pentagon1(0,1,0,0,1)*
      den( - 4 + d)*den( - s51 + s34 + s23)^2*s34^3 - 6*pentagon1(0,1,0,0,1)*
      den( - 4 + d)*den( - s51 + s34 + s23)^2*s12*s45*s51 - 6*pentagon1(0,1,0,
      0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^2*s12*s34*s51 + 12*pentagon1(
      0,1,0,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^2*s12*s34*s45 + 12*
      pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^2*s12*s34^2
       - 6*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^2*s12^2*
      s45 - 12*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^2*
      s12^2*s34 + 4*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)
      ^2*s12^3 + 6*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^
      3*s45^2*s51^2 - 4*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s34 + 
      s23)^3*s45^3*s51 + 6*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s34
       + s23)^3*s34*s45*s51^2 - 12*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - 
      s51 + s34 + s23)^3*s34*s45^2*s51 + 2*pentagon1(0,1,0,0,1)*den( - 4 + d)*
      den( - s51 + s34 + s23)^3*s34*s45^3 + 2*pentagon1(0,1,0,0,1)*den( - 4 + 
      d)*den( - s51 + s34 + s23)^3*s34^2*s51^2 - 12*pentagon1(0,1,0,0,1)*den(
       - 4 + d)*den( - s51 + s34 + s23)^3*s34^2*s45*s51 + 6*pentagon1(0,1,0,0,
      1)*den( - 4 + d)*den( - s51 + s34 + s23)^3*s34^2*s45^2 - 4*pentagon1(0,1
      ,0,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^3*s34^3*s51 + 6*pentagon1(
      0,1,0,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^3*s34^3*s45 + 2*
      pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^3*s34^4 + 6*
      pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^3*s12*s45^2*
      s51 + 12*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^3*
      s12*s34*s45*s51 - 6*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s34
       + s23)^3*s12*s34*s45^2 + 6*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - 
      s51 + s34 + s23)^3*s12*s34^2*s51 - 12*pentagon1(0,1,0,0,1)*den( - 4 + d)
      *den( - s51 + s34 + s23)^3*s12*s34^2*s45 - 6*pentagon1(0,1,0,0,1)*den(
       - 4 + d)*den( - s51 + s34 + s23)^3*s12*s34^3 + 6*pentagon1(0,1,0,0,1)*
      den( - 4 + d)*den( - s51 + s34 + s23)^3*s12^2*s34*s45 + 6*pentagon1(0,1,
      0,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^3*s12^2*s34^2 - 2*
      pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^3*s12^3*s51
       - 2*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s34 + s23)^3*s12^3*
      s34 - 2*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s23)*den( - s51
       + s34 + s23)*s45^3 + 2*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + 
      s23)*den( - s51 + s34 + s23)^2*s45^3*s51 - 2*pentagon1(0,1,0,0,1)*den(
       - 4 + d)*den( - s51 + s23)*den( - s51 + s34 + s23)^3*s45^3*s51^2 + 2*
      pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s23)^2*den( - s51 + s34
       + s23)*s45^3*s51 - 2*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + 
      s23)^2*den( - s51 + s34 + s23)^2*s45^3*s51^2 - 2*pentagon1(0,1,0,0,1)*
      den( - 4 + d)*den( - s51 + s23)^3*den( - s51 + s34 + s23)*s45^3*s51^2 + 
      2*pentagon1(0,1,0,0,1)*den( - 2 + d)*den( - s51 + s34)^3*den( - s51 + 
      s34 + s23)*s12^3*s51^2 - 3*pentagon1(0,1,0,0,1)*den( - 2 + d)*den( - s51
       + s34)^2*den( - s51 + s34 + s23)*s12^2*s51^2 - pentagon1(0,1,0,0,1)*
      den( - 2 + d)*den( - s51 + s34)^2*den( - s51 + s34 + s23)*s12^3*s51 + 
      pentagon1(0,1,0,0,1)*den( - 2 + d)*den( - s51 + s34)^2*den( - s51 + s34
       + s23)^2*s12^3*s51^2 + 3*pentagon1(0,1,0,0,1)*den( - 2 + d)*den( - s51
       + s34)*den( - s51 + s34 + s23)*s12^2*s51 - 3*pentagon1(0,1,0,0,1)*den(
       - 2 + d)*den( - s51 + s34)*den( - s51 + s34 + s23)^2*s12^2*s51^2 - 3*
      pentagon1(0,1,0,0,1)*den( - 2 + d)*den( - s51 + s34)*den( - s51 + s34 + 
      s23)^2*s12^2*s45*s51 + pentagon1(0,1,0,0,1)*den( - 2 + d)*den( - s51 + 
      s34)*den( - s51 + s34 + s23)^2*s12^3*s51 + pentagon1(0,1,0,0,1)*den( - 2
       + d)*den( - s51 + s34 + s23)*s34*s51 - 3*pentagon1(0,1,0,0,1)*den( - 2
       + d)*den( - s51 + s34 + s23)*s12*s51 + 3*pentagon1(0,1,0,0,1)*den( - 2
       + d)*den( - s51 + s34 + s23)^2*s45*s51^2 - 3*pentagon1(0,1,0,0,1)*den(
       - 2 + d)*den( - s51 + s34 + s23)^2*s45^2*s51 + pentagon1(0,1,0,0,1)*
      den( - 2 + d)*den( - s51 + s34 + s23)^2*s34*s51^2 - 3*pentagon1(0,1,0,0,
      1)*den( - 2 + d)*den( - s51 + s34 + s23)^2*s34*s45*s51 - pentagon1(0,1,0
      ,0,1)*den( - 2 + d)*den( - s51 + s34 + s23)^2*s34^2*s51 + 6*pentagon1(0,
      1,0,0,1)*den( - 2 + d)*den( - s51 + s34 + s23)^2*s12*s45*s51 + 3*
      pentagon1(0,1,0,0,1)*den( - 2 + d)*den( - s51 + s34 + s23)^2*s12*s34*s51
       - 3*pentagon1(0,1,0,0,1)*den( - 2 + d)*den( - s51 + s34 + s23)^2*s12^2*
      s51 + 3*pentagon1(0,1,0,0,1)*den( - 2 + d)*den( - s51 + s23)*den( - s51
       + s34 + s23)*s45^2*s51 - 3*pentagon1(0,1,0,0,1)*den( - 2 + d)*den( - 
      s51 + s23)*den( - s51 + s34 + s23)^2*s45^2*s51^2 + pentagon1(0,1,0,0,1)*
      den( - 2 + d)*den( - s51 + s23)*den( - s51 + s34 + s23)^2*s45^3*s51 - 3*
      pentagon1(0,1,0,0,1)*den( - 2 + d)*den( - s51 + s23)*den( - s51 + s34 + 
      s23)^2*s12*s45^2*s51 - 3*pentagon1(0,1,0,0,1)*den( - 2 + d)*den( - s51
       + s23)^2*den( - s51 + s34 + s23)*s45^2*s51^2 - pentagon1(0,1,0,0,1)*
      den( - 2 + d)*den( - s51 + s23)^2*den( - s51 + s34 + s23)*s45^3*s51 + 
      pentagon1(0,1,0,0,1)*den( - 2 + d)*den( - s51 + s23)^2*den( - s51 + s34
       + s23)^2*s45^3*s51^2 + 2*pentagon1(0,1,0,0,1)*den( - 2 + d)*den( - s51
       + s23)^3*den( - s51 + s34 + s23)*s45^3*s51^2 - 3/2*pentagon1(0,1,0,0,1)
      *den( - s51 + s34)*den( - s51 + s34 + s23)*s12*s51^2 + 3/2*pentagon1(0,1
      ,0,0,1)*den( - s51 + s34)*den( - s51 + s34 + s23)*s12^2*s51 - 1/2*
      pentagon1(0,1,0,0,1)*den( - s51 + s34)*den( - s51 + s34 + s23)*s12^3 - 3/
      2*pentagon1(0,1,0,0,1)*den( - s51 + s34)*den( - s51 + s34 + s23)^2*s12^2
      *s51^2 + pentagon1(0,1,0,0,1)*den( - s51 + s34)*den( - s51 + s34 + s23)^
      2*s12^3*s51 - 1/2*pentagon1(0,1,0,0,1)*den( - s51 + s34)*den( - s51 + 
      s34 + s23)^3*s12^3*s51^2 + 1/2*pentagon1(0,1,0,0,1)*den( - s51 + s34 + 
      s23)*s51^2 + 1/2*pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23)*s34*s51 + 
      1/2*pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23)*s34^2 - 3/2*pentagon1(0
      ,1,0,0,1)*den( - s51 + s34 + s23)*s12*s51 - 3/2*pentagon1(0,1,0,0,1)*
      den( - s51 + s34 + s23)*s12*s34 + 3/2*pentagon1(0,1,0,0,1)*den( - s51 + 
      s34 + s23)*s12^2 + 3/2*pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23)^2*
      s45*s51^2 - 3/2*pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23)^2*s45^2*s51
       + 1/2*pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23)^2*s45^3 + 1/2*
      pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23)^2*s34*s51^2 + 1/2*
      pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23)^2*s34^2*s51 - 3/2*
      pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23)^2*s34^2*s45 - pentagon1(0,1
      ,0,0,1)*den( - s51 + s34 + s23)^2*s34^3 + 3*pentagon1(0,1,0,0,1)*den( - 
      s51 + s34 + s23)^2*s12*s34*s45 + 3*pentagon1(0,1,0,0,1)*den( - s51 + s34
       + s23)^2*s12*s34^2 - 3/2*pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23)^2
      *s12^2*s51 - 3/2*pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23)^2*s12^2*
      s45 - 3*pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23)^2*s12^2*s34 + 
      pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23)^2*s12^3 + 3/2*pentagon1(0,1
      ,0,0,1)*den( - s51 + s34 + s23)^3*s45^2*s51^2 - pentagon1(0,1,0,0,1)*
      den( - s51 + s34 + s23)^3*s45^3*s51 + 3/2*pentagon1(0,1,0,0,1)*den( - 
      s51 + s34 + s23)^3*s34*s45*s51^2 - 3*pentagon1(0,1,0,0,1)*den( - s51 + 
      s34 + s23)^3*s34*s45^2*s51 + 1/2*pentagon1(0,1,0,0,1)*den( - s51 + s34
       + s23)^3*s34*s45^3 + 1/2*pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23)^3
      *s34^2*s51^2 - 3*pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23)^3*s34^2*
      s45*s51 + 3/2*pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23)^3*s34^2*s45^2
       - pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23)^3*s34^3*s51 + 3/2*
      pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23)^3*s34^3*s45 + 1/2*
      pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23)^3*s34^4 + 3/2*pentagon1(0,1
      ,0,0,1)*den( - s51 + s34 + s23)^3*s12*s45^2*s51 + 3*pentagon1(0,1,0,0,1)
      *den( - s51 + s34 + s23)^3*s12*s34*s45*s51 - 3/2*pentagon1(0,1,0,0,1)*
      den( - s51 + s34 + s23)^3*s12*s34*s45^2 + 3/2*pentagon1(0,1,0,0,1)*den(
       - s51 + s34 + s23)^3*s12*s34^2*s51 - 3*pentagon1(0,1,0,0,1)*den( - s51
       + s34 + s23)^3*s12*s34^2*s45 - 3/2*pentagon1(0,1,0,0,1)*den( - s51 + 
      s34 + s23)^3*s12*s34^3 + 3/2*pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23
      )^3*s12^2*s34*s45 + 3/2*pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23)^3*
      s12^2*s34^2 - 1/2*pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23)^3*s12^3*
      s51 - 1/2*pentagon1(0,1,0,0,1)*den( - s51 + s34 + s23)^3*s12^3*s34 - 3/2
      *pentagon1(0,1,0,0,1)*den( - s51 + s23)*den( - s51 + s34 + s23)*s45*
      s51^2 + 3/2*pentagon1(0,1,0,0,1)*den( - s51 + s23)*den( - s51 + s34 + 
      s23)*s45^2*s51 - 1/2*pentagon1(0,1,0,0,1)*den( - s51 + s23)*den( - s51
       + s34 + s23)*s45^3 - 3/2*pentagon1(0,1,0,0,1)*den( - s51 + s23)*den( - 
      s51 + s34 + s23)^2*s45^2*s51^2 + pentagon1(0,1,0,0,1)*den( - s51 + s23)*
      den( - s51 + s34 + s23)^2*s45^3*s51 - 1/2*pentagon1(0,1,0,0,1)*den( - 
      s51 + s23)*den( - s51 + s34 + s23)^3*s45^3*s51^2 - 1/2*pentagon1(0,1,0,1
      ,0)*s51 + 3/2*pentagon1(0,1,0,1,0)*s45 - 1/2*pentagon1(0,1,0,1,0)*s23 - 
      2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)*s34^2 + 6*
      pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)*s12*s34 - 6*
      pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)*s12^2 - 2*
      pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)^2*s45^3 - 6*
      pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)^2*s34*s45*s51
       - 4*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)^2*s34^2*
      s51 + 6*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)^2*
      s34^2*s45 + 4*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)
      ^2*s34^3 + 6*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)^
      2*s12*s45*s51 + 6*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + 
      s23)^2*s12*s34*s51 - 12*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + 
      s34 + s23)^2*s12*s34*s45 - 12*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - 
      s51 + s34 + s23)^2*s12*s34^2 + 6*pentagon1(0,1,0,1,0)*den( - 4 + d)*den(
       - s51 + s34 + s23)^2*s12^2*s45 + 12*pentagon1(0,1,0,1,0)*den( - 4 + d)*
      den( - s51 + s34 + s23)^2*s12^2*s34 - 4*pentagon1(0,1,0,1,0)*den( - 4 + 
      d)*den( - s51 + s34 + s23)^2*s12^3 - 6*pentagon1(0,1,0,1,0)*den( - 4 + d
      )*den( - s51 + s34 + s23)^3*s45^2*s51^2 + 4*pentagon1(0,1,0,1,0)*den( - 
      4 + d)*den( - s51 + s34 + s23)^3*s45^3*s51 - 6*pentagon1(0,1,0,1,0)*den(
       - 4 + d)*den( - s51 + s34 + s23)^3*s34*s45*s51^2 + 12*pentagon1(0,1,0,1
      ,0)*den( - 4 + d)*den( - s51 + s34 + s23)^3*s34*s45^2*s51 - 2*pentagon1(
      0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)^3*s34*s45^3 - 2*
      pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)^3*s34^2*s51^2
       + 12*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)^3*s34^2
      *s45*s51 - 6*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)^
      3*s34^2*s45^2 + 4*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + 
      s23)^3*s34^3*s51 - 6*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34
       + s23)^3*s34^3*s45 - 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + 
      s34 + s23)^3*s34^4 - 6*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + 
      s34 + s23)^3*s12*s45^2*s51 - 12*pentagon1(0,1,0,1,0)*den( - 4 + d)*den(
       - s51 + s34 + s23)^3*s12*s34*s45*s51 + 6*pentagon1(0,1,0,1,0)*den( - 4
       + d)*den( - s51 + s34 + s23)^3*s12*s34*s45^2 - 6*pentagon1(0,1,0,1,0)*
      den( - 4 + d)*den( - s51 + s34 + s23)^3*s12*s34^2*s51 + 12*pentagon1(0,1
      ,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)^3*s12*s34^2*s45 + 6*
      pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)^3*s12*s34^3
       - 6*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)^3*s12^2*
      s34*s45 - 6*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + s23)^3
      *s12^2*s34^2 + 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34 + 
      s23)^3*s12^3*s51 + 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s34
       + s23)^3*s12^3*s34 + 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + 
      s23)*den( - s51 + s34 + s23)*s45^3 - 2*pentagon1(0,1,0,1,0)*den( - 4 + d
      )*den( - s51 + s23)*den( - s51 + s34 + s23)^2*s45^3*s51 + 2*pentagon1(0,
      1,0,1,0)*den( - 4 + d)*den( - s51 + s23)*den( - s51 + s34 + s23)^3*s45^3
      *s51^2 - 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + s23)^2*den(
       - s51 + s34 + s23)*s45^3*s51 + 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*
      den( - s51 + s23)^2*den( - s51 + s34 + s23)^2*s45^3*s51^2 + 2*pentagon1(
      0,1,0,1,0)*den( - 4 + d)*den( - s51 + s23)^3*den( - s51 + s34 + s23)*
      s45^3*s51^2 - pentagon1(0,1,0,1,0)*den( - 2 + d)*s34 + 3*pentagon1(0,1,0
      ,1,0)*den( - 2 + d)*s12 - 3*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - 
      s51 + s34 + s23)*s45*s51 - 2*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - 
      s51 + s34 + s23)*s34*s51 + 3*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - 
      s51 + s34 + s23)*s34*s45 + 2*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - 
      s51 + s34 + s23)*s34^2 + 3*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51
       + s34 + s23)*s12*s51 - 6*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51
       + s34 + s23)*s12*s45 - 6*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51
       + s34 + s23)*s12*s34 + 6*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51
       + s34 + s23)*s12^2 - 3*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51 + 
      s34 + s23)^2*s45*s51^2 + 6*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51
       + s34 + s23)^2*s45^2*s51 - pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - 
      s51 + s34 + s23)^2*s45^3 - pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51
       + s34 + s23)^2*s34*s51^2 + 6*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - 
      s51 + s34 + s23)^2*s34*s45*s51 - 3*pentagon1(0,1,0,1,0)*den( - 2 + d)*
      den( - s51 + s34 + s23)^2*s34*s45^2 + 2*pentagon1(0,1,0,1,0)*den( - 2 + 
      d)*den( - s51 + s34 + s23)^2*s34^2*s51 - 3*pentagon1(0,1,0,1,0)*den( - 2
       + d)*den( - s51 + s34 + s23)^2*s34^2*s45 - pentagon1(0,1,0,1,0)*den( - 
      2 + d)*den( - s51 + s34 + s23)^2*s34^3 - 6*pentagon1(0,1,0,1,0)*den( - 2
       + d)*den( - s51 + s34 + s23)^2*s12*s45*s51 + 3*pentagon1(0,1,0,1,0)*
      den( - 2 + d)*den( - s51 + s34 + s23)^2*s12*s45^2 - 3*pentagon1(0,1,0,1,
      0)*den( - 2 + d)*den( - s51 + s34 + s23)^2*s12*s34*s51 + 6*pentagon1(0,1
      ,0,1,0)*den( - 2 + d)*den( - s51 + s34 + s23)^2*s12*s34*s45 + 3*
      pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51 + s34 + s23)^2*s12*s34^2
       - 3*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51 + s34 + s23)^2*s12^2*
      s45 - 3*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51 + s34 + s23)^2*
      s12^2*s34 + pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51 + s34 + s23)^2
      *s12^3 + pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51 + s23)*den( - s51
       + s34 + s23)*s45^3 + 3*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51 + 
      s23)*den( - s51 + s34 + s23)^2*s45^2*s51^2 - 2*pentagon1(0,1,0,1,0)*den(
       - 2 + d)*den( - s51 + s23)*den( - s51 + s34 + s23)^2*s45^3*s51 + 3*
      pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51 + s23)*den( - s51 + s34 + 
      s23)^2*s12*s45^2*s51 + 3*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51
       + s23)^2*den( - s51 + s34 + s23)*s45^2*s51^2 - pentagon1(0,1,0,1,0)*
      den( - 2 + d)*den( - s51 + s23)^2*den( - s51 + s34 + s23)*s45^3*s51 - 
      pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51 + s23)^2*den( - s51 + s34
       + s23)^2*s45^3*s51^2 - 2*pentagon1(0,1,0,1,0)*den( - 2 + d)*den( - s51
       + s23)^3*den( - s51 + s34 + s23)*s45^3*s51^2 - 1/2*pentagon1(0,1,0,1,0)
      *den( - s51 + s34 + s23)*s51^2 + 3/2*pentagon1(0,1,0,1,0)*den( - s51 + 
      s34 + s23)*s45*s51 - 3/2*pentagon1(0,1,0,1,0)*den( - s51 + s34 + s23)*
      s45^2 - 3/2*pentagon1(0,1,0,1,0)*den( - s51 + s34 + s23)^2*s45*s51^2 + 3
      *pentagon1(0,1,0,1,0)*den( - s51 + s34 + s23)^2*s45^2*s51 - pentagon1(0,
      1,0,1,0)*den( - s51 + s34 + s23)^2*s45^3 - 1/2*pentagon1(0,1,0,1,0)*den(
       - s51 + s34 + s23)^2*s34*s51^2 + 3/2*pentagon1(0,1,0,1,0)*den( - s51 + 
      s34 + s23)^2*s34*s45*s51 - 3/2*pentagon1(0,1,0,1,0)*den( - s51 + s34 + 
      s23)^2*s34*s45^2 + 1/2*pentagon1(0,1,0,1,0)*den( - s51 + s34 + s23)^2*
      s34^3 + 3/2*pentagon1(0,1,0,1,0)*den( - s51 + s34 + s23)^2*s12*s45^2 - 3/
      2*pentagon1(0,1,0,1,0)*den( - s51 + s34 + s23)^2*s12*s34^2 + 3/2*
      pentagon1(0,1,0,1,0)*den( - s51 + s34 + s23)^2*s12^2*s34 - 1/2*
      pentagon1(0,1,0,1,0)*den( - s51 + s34 + s23)^2*s12^3 - 3/2*pentagon1(0,1
      ,0,1,0)*den( - s51 + s34 + s23)^3*s45^2*s51^2 + pentagon1(0,1,0,1,0)*
      den( - s51 + s34 + s23)^3*s45^3*s51 - 3/2*pentagon1(0,1,0,1,0)*den( - 
      s51 + s34 + s23)^3*s34*s45*s51^2 + 3*pentagon1(0,1,0,1,0)*den( - s51 + 
      s34 + s23)^3*s34*s45^2*s51 - 1/2*pentagon1(0,1,0,1,0)*den( - s51 + s34
       + s23)^3*s34*s45^3 - 1/2*pentagon1(0,1,0,1,0)*den( - s51 + s34 + s23)^3
      *s34^2*s51^2 + 3*pentagon1(0,1,0,1,0)*den( - s51 + s34 + s23)^3*s34^2*
      s45*s51 - 3/2*pentagon1(0,1,0,1,0)*den( - s51 + s34 + s23)^3*s34^2*s45^2
       + pentagon1(0,1,0,1,0)*den( - s51 + s34 + s23)^3*s34^3*s51 - 3/2*
      pentagon1(0,1,0,1,0)*den( - s51 + s34 + s23)^3*s34^3*s45 - 1/2*
      pentagon1(0,1,0,1,0)*den( - s51 + s34 + s23)^3*s34^4 - 3/2*pentagon1(0,1
      ,0,1,0)*den( - s51 + s34 + s23)^3*s12*s45^2*s51 - 3*pentagon1(0,1,0,1,0)
      *den( - s51 + s34 + s23)^3*s12*s34*s45*s51 + 3/2*pentagon1(0,1,0,1,0)*
      den( - s51 + s34 + s23)^3*s12*s34*s45^2 - 3/2*pentagon1(0,1,0,1,0)*den(
       - s51 + s34 + s23)^3*s12*s34^2*s51 + 3*pentagon1(0,1,0,1,0)*den( - s51
       + s34 + s23)^3*s12*s34^2*s45 + 3/2*pentagon1(0,1,0,1,0)*den( - s51 + 
      s34 + s23)^3*s12*s34^3 - 3/2*pentagon1(0,1,0,1,0)*den( - s51 + s34 + s23
      )^3*s12^2*s34*s45 - 3/2*pentagon1(0,1,0,1,0)*den( - s51 + s34 + s23)^3*
      s12^2*s34^2 + 1/2*pentagon1(0,1,0,1,0)*den( - s51 + s34 + s23)^3*s12^3*
      s51 + 1/2*pentagon1(0,1,0,1,0)*den( - s51 + s34 + s23)^3*s12^3*s34 + 3/2
      *pentagon1(0,1,0,1,0)*den( - s51 + s23)*den( - s51 + s34 + s23)*s45*
      s51^2 - 3*pentagon1(0,1,0,1,0)*den( - s51 + s23)*den( - s51 + s34 + s23)
      *s45^2*s51 + 3/2*pentagon1(0,1,0,1,0)*den( - s51 + s23)*den( - s51 + s34
       + s23)*s45^3 + 3/2*pentagon1(0,1,0,1,0)*den( - s51 + s23)*den( - s51 + 
      s34 + s23)^2*s45^2*s51^2 - 3/2*pentagon1(0,1,0,1,0)*den( - s51 + s23)*
      den( - s51 + s34 + s23)^2*s45^3*s51 + 1/2*pentagon1(0,1,0,1,0)*den( - 
      s51 + s23)*den( - s51 + s34 + s23)^3*s45^3*s51^2 - 2*pentagon1(0,1,0,1,0
      )*den(s23)*den( - 4 + d)*den( - s51 + s34 + s23)*s12^3 + 2*pentagon1(0,1
      ,0,1,0)*den(s23)*den( - 4 + d)*den( - s51 + s34 + s23)^2*s12^3*s51 - 2*
      pentagon1(0,1,0,1,0)*den(s23)*den( - 4 + d)*den( - s51 + s34 + s23)^3*
      s12^3*s51^2 - 3*pentagon1(0,1,0,1,0)*den(s23)*den( - 2 + d)*den( - s51
       + s34 + s23)*s12^2*s45 + 2*pentagon1(0,1,0,1,0)*den(s23)*den( - 2 + d)*
      den( - s51 + s34 + s23)*s12^3 - pentagon1(0,1,0,1,0)*den(s23)*den( - 2
       + d)*den( - s51 + s34 + s23)^2*s12^3*s51 - 3/2*pentagon1(0,1,0,1,0)*
      den(s23)*den( - s51 + s34 + s23)*s12*s45^2 + 3/2*pentagon1(0,1,0,1,0)*
      den(s23)*den( - s51 + s34 + s23)^2*s12^2*s45*s51 - 1/2*pentagon1(0,1,0,1
      ,0)*den(s23)*den( - s51 + s34 + s23)^3*s12^3*s51^2 - 1/8*pentagon1(0,1,1
      ,1,1)*s34^3 + 3/8*pentagon1(0,1,1,1,1)*s12*s34^2 - 3/8*pentagon1(0,1,1,1
      ,1)*s12^2*s34 + 1/8*pentagon1(0,1,1,1,1)*s12^3 - 3/8*pentagon1(0,1,1,1,1
      )*den( - 3 + d)*s34^3 + 9/8*pentagon1(0,1,1,1,1)*den( - 3 + d)*s12*s34^2
       - 9/8*pentagon1(0,1,1,1,1)*den( - 3 + d)*s12^2*s34 + 3/8*pentagon1(0,1,
      1,1,1)*den( - 3 + d)*s12^3 - 9/8*pentagon1(0,1,1,1,1)*den( - 3 + d)*den(
       - s51 + s34 + s23)*s34^2*s45*s51 - 9/8*pentagon1(0,1,1,1,1)*den( - 3 + 
      d)*den( - s51 + s34 + s23)*s34^3*s51 + 9/8*pentagon1(0,1,1,1,1)*den( - 3
       + d)*den( - s51 + s34 + s23)*s34^3*s45 + 9/8*pentagon1(0,1,1,1,1)*den(
       - 3 + d)*den( - s51 + s34 + s23)*s34^4 + 3/4*pentagon1(0,1,1,1,1)*den(
       - 3 + d)*den( - s51 + s34 + s23)*s12*s34*s45*s51 + 9/4*pentagon1(0,1,1,
      1,1)*den( - 3 + d)*den( - s51 + s34 + s23)*s12*s34^2*s51 - 9/4*
      pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)*s12*s34^2*s45
       - 27/8*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)*s12*
      s34^3 + 3/8*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)*
      s12^2*s45*s51 - 9/8*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34
       + s23)*s12^2*s34*s51 + 9/8*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - 
      s51 + s34 + s23)*s12^2*s34*s45 + 27/8*pentagon1(0,1,1,1,1)*den( - 3 + d)
      *den( - s51 + s34 + s23)*s12^2*s34^2 - 9/8*pentagon1(0,1,1,1,1)*den( - 3
       + d)*den( - s51 + s34 + s23)*s12^3*s34 - 9/8*pentagon1(0,1,1,1,1)*den(
       - 3 + d)*den( - s51 + s34 + s23)^2*s34*s45^2*s51^2 - 9/4*pentagon1(0,1,
      1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)^2*s34^2*s45*s51^2 + 9/4*
      pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)^2*s34^2*s45^2
      *s51 - 9/8*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)^2*
      s34^3*s51^2 + 9/2*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + 
      s23)^2*s34^3*s45*s51 - 9/8*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51
       + s34 + s23)^2*s34^3*s45^2 + 9/4*pentagon1(0,1,1,1,1)*den( - 3 + d)*
      den( - s51 + s34 + s23)^2*s34^4*s51 - 9/4*pentagon1(0,1,1,1,1)*den( - 3
       + d)*den( - s51 + s34 + s23)^2*s34^4*s45 - 9/8*pentagon1(0,1,1,1,1)*
      den( - 3 + d)*den( - s51 + s34 + s23)^2*s34^5 - 3/8*pentagon1(0,1,1,1,1)
      *den( - 3 + d)*den( - s51 + s34 + s23)^2*s12*s45^2*s51^2 + 3/4*
      pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)^2*s12*s34*s45
      *s51^2 - 3/4*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)^
      2*s12*s34*s45^2*s51 + 9/8*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51
       + s34 + s23)^2*s12*s34^2*s51^2 - 21/4*pentagon1(0,1,1,1,1)*den( - 3 + d
      )*den( - s51 + s34 + s23)^2*s12*s34^2*s45*s51 + 9/8*pentagon1(0,1,1,1,1)
      *den( - 3 + d)*den( - s51 + s34 + s23)^2*s12*s34^2*s45^2 - 9/2*
      pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)^2*s12*s34^3*
      s51 + 9/2*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)^2*
      s12*s34^3*s45 + 27/8*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34
       + s23)^2*s12*s34^4 + 3/4*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51
       + s34 + s23)^2*s12^2*s34*s45*s51 + 9/4*pentagon1(0,1,1,1,1)*den( - 3 + 
      d)*den( - s51 + s34 + s23)^2*s12^2*s34^2*s51 - 9/4*pentagon1(0,1,1,1,1)*
      den( - 3 + d)*den( - s51 + s34 + s23)^2*s12^2*s34^2*s45 - 27/8*
      pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)^2*s12^2*s34^3
       + 9/8*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)^2*
      s12^3*s34^2 - 3/8*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + 
      s23)^3*s45^3*s51^3 - 9/8*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51
       + s34 + s23)^3*s34*s45^2*s51^3 + 9/8*pentagon1(0,1,1,1,1)*den( - 3 + d)
      *den( - s51 + s34 + s23)^3*s34*s45^3*s51^2 - 9/8*pentagon1(0,1,1,1,1)*
      den( - 3 + d)*den( - s51 + s34 + s23)^3*s34^2*s45*s51^3 + 27/8*
      pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)^3*s34^2*s45^2
      *s51^2 - 9/8*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)^
      3*s34^2*s45^3*s51 - 3/8*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + 
      s34 + s23)^3*s34^3*s51^3 + 27/8*pentagon1(0,1,1,1,1)*den( - 3 + d)*den(
       - s51 + s34 + s23)^3*s34^3*s45*s51^2 - 27/8*pentagon1(0,1,1,1,1)*den(
       - 3 + d)*den( - s51 + s34 + s23)^3*s34^3*s45^2*s51 + 3/8*pentagon1(0,1,
      1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)^3*s34^3*s45^3 + 9/8*
      pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)^3*s34^4*s51^2
       - 27/8*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)^3*
      s34^4*s45*s51 + 9/8*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34
       + s23)^3*s34^4*s45^2 - 9/8*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - 
      s51 + s34 + s23)^3*s34^5*s51 + 9/8*pentagon1(0,1,1,1,1)*den( - 3 + d)*
      den( - s51 + s34 + s23)^3*s34^5*s45 + 3/8*pentagon1(0,1,1,1,1)*den( - 3
       + d)*den( - s51 + s34 + s23)^3*s34^6 - 9/8*pentagon1(0,1,1,1,1)*den( - 
      3 + d)*den( - s51 + s34 + s23)^3*s12*s34*s45^2*s51^2 - 9/4*pentagon1(0,1
      ,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)^3*s12*s34^2*s45*s51^2 + 9/
      4*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)^3*s12*s34^2
      *s45^2*s51 - 9/8*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + 
      s23)^3*s12*s34^3*s51^2 + 9/2*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - 
      s51 + s34 + s23)^3*s12*s34^3*s45*s51 - 9/8*pentagon1(0,1,1,1,1)*den( - 3
       + d)*den( - s51 + s34 + s23)^3*s12*s34^3*s45^2 + 9/4*pentagon1(0,1,1,1,
      1)*den( - 3 + d)*den( - s51 + s34 + s23)^3*s12*s34^4*s51 - 9/4*
      pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)^3*s12*s34^4*
      s45 - 9/8*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)^3*
      s12*s34^5 - 9/8*pentagon1(0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + 
      s23)^3*s12^2*s34^2*s45*s51 - 9/8*pentagon1(0,1,1,1,1)*den( - 3 + d)*den(
       - s51 + s34 + s23)^3*s12^2*s34^3*s51 + 9/8*pentagon1(0,1,1,1,1)*den( - 
      3 + d)*den( - s51 + s34 + s23)^3*s12^2*s34^3*s45 + 9/8*pentagon1(0,1,1,1
      ,1)*den( - 3 + d)*den( - s51 + s34 + s23)^3*s12^2*s34^4 - 3/8*pentagon1(
      0,1,1,1,1)*den( - 3 + d)*den( - s51 + s34 + s23)^3*s12^3*s34^3 - 3/8*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)*s34^2*s45*s51 - 3/8*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)*s34^3*s51 + 3/8*pentagon1(0
      ,1,1,1,1)*den( - s51 + s34 + s23)*s34^3*s45 + 3/8*pentagon1(0,1,1,1,1)*
      den( - s51 + s34 + s23)*s34^4 + 3/4*pentagon1(0,1,1,1,1)*den( - s51 + 
      s34 + s23)*s12*s34*s45*s51 + 3/4*pentagon1(0,1,1,1,1)*den( - s51 + s34
       + s23)*s12*s34^2*s51 - 3/4*pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)
      *s12*s34^2*s45 - 9/8*pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)*s12*
      s34^3 - 3/8*pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)*s12^2*s45*s51
       - 3/8*pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)*s12^2*s34*s51 + 3/8*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)*s12^2*s34*s45 + 9/8*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)*s12^2*s34^2 - 3/8*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)*s12^3*s34 - 3/8*pentagon1(0
      ,1,1,1,1)*den( - s51 + s34 + s23)^2*s34*s45^2*s51^2 - 3/4*pentagon1(0,1,
      1,1,1)*den( - s51 + s34 + s23)^2*s34^2*s45*s51^2 + 3/4*pentagon1(0,1,1,1
      ,1)*den( - s51 + s34 + s23)^2*s34^2*s45^2*s51 - 3/8*pentagon1(0,1,1,1,1)
      *den( - s51 + s34 + s23)^2*s34^3*s51^2 + 3/2*pentagon1(0,1,1,1,1)*den(
       - s51 + s34 + s23)^2*s34^3*s45*s51 - 3/8*pentagon1(0,1,1,1,1)*den( - 
      s51 + s34 + s23)^2*s34^3*s45^2 + 3/4*pentagon1(0,1,1,1,1)*den( - s51 + 
      s34 + s23)^2*s34^4*s51 - 3/4*pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23
      )^2*s34^4*s45 - 3/8*pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^2*s34^5
       + 3/8*pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^2*s12*s45^2*s51^2 + 
      3/4*pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^2*s12*s34*s45*s51^2 - 3/
      4*pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^2*s12*s34*s45^2*s51 + 3/8
      *pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^2*s12*s34^2*s51^2 - 9/4*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^2*s12*s34^2*s45*s51 + 3/8*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^2*s12*s34^2*s45^2 - 3/2*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^2*s12*s34^3*s51 + 3/2*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^2*s12*s34^3*s45 + 9/8*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^2*s12*s34^4 + 3/4*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^2*s12^2*s34*s45*s51 + 3/4*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^2*s12^2*s34^2*s51 - 3/4*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^2*s12^2*s34^2*s45 - 9/8*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^2*s12^2*s34^3 + 3/8*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^2*s12^3*s34^2 - 1/8*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^3*s45^3*s51^3 - 3/8*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^3*s34*s45^2*s51^3 + 3/8*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^3*s34*s45^3*s51^2 - 3/8*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^3*s34^2*s45*s51^3 + 9/8*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^3*s34^2*s45^2*s51^2 - 3/8*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^3*s34^2*s45^3*s51 - 1/8*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^3*s34^3*s51^3 + 9/8*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^3*s34^3*s45*s51^2 - 9/8*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^3*s34^3*s45^2*s51 + 1/8*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^3*s34^3*s45^3 + 3/8*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^3*s34^4*s51^2 - 9/8*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^3*s34^4*s45*s51 + 3/8*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^3*s34^4*s45^2 - 3/8*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^3*s34^5*s51 + 3/8*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^3*s34^5*s45 + 1/8*
      pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)^3*s34^6 - 3/8*pentagon1(0,1
      ,1,1,1)*den( - s51 + s34 + s23)^3*s12*s34*s45^2*s51^2 - 3/4*pentagon1(0,
      1,1,1,1)*den( - s51 + s34 + s23)^3*s12*s34^2*s45*s51^2 + 3/4*pentagon1(0
      ,1,1,1,1)*den( - s51 + s34 + s23)^3*s12*s34^2*s45^2*s51 - 3/8*pentagon1(
      0,1,1,1,1)*den( - s51 + s34 + s23)^3*s12*s34^3*s51^2 + 3/2*pentagon1(0,1
      ,1,1,1)*den( - s51 + s34 + s23)^3*s12*s34^3*s45*s51 - 3/8*pentagon1(0,1,
      1,1,1)*den( - s51 + s34 + s23)^3*s12*s34^3*s45^2 + 3/4*pentagon1(0,1,1,1
      ,1)*den( - s51 + s34 + s23)^3*s12*s34^4*s51 - 3/4*pentagon1(0,1,1,1,1)*
      den( - s51 + s34 + s23)^3*s12*s34^4*s45 - 3/8*pentagon1(0,1,1,1,1)*den(
       - s51 + s34 + s23)^3*s12*s34^5 - 3/8*pentagon1(0,1,1,1,1)*den( - s51 + 
      s34 + s23)^3*s12^2*s34^2*s45*s51 - 3/8*pentagon1(0,1,1,1,1)*den( - s51
       + s34 + s23)^3*s12^2*s34^3*s51 + 3/8*pentagon1(0,1,1,1,1)*den( - s51 + 
      s34 + s23)^3*s12^2*s34^3*s45 + 3/8*pentagon1(0,1,1,1,1)*den( - s51 + s34
       + s23)^3*s12^2*s34^4 - 1/8*pentagon1(0,1,1,1,1)*den( - s51 + s34 + s23)
      ^3*s12^3*s34^3;


