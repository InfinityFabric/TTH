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


id pentagon1(0,1,0,1,1)=
 0;


id pentagon1(0,-1,1,0,0)=
 0;


id pentagon1(0,1,1,0,0)=
 0;


id pentagon1(0,1,1,0,-1)=
 0;


id pentagon1(0,1,1,0,1)=
 0;


id pentagon1(0,-1,1,1,0)=
 0;


id pentagon1(0,1,1,-1,0)=
 0;


id pentagon1(0,1,1,1,0)=
 0;


id pentagon1(0,-1,1,1,1)=
 0;


id pentagon1(0,1,1,-1,1)=
 0;


id pentagon1(0,1,1,1,-1)=
 0;


id pentagon1(1,0,0,0,0)=
 0;


id pentagon1(1,0,0,0,-1)=
 0;


id pentagon1(1,0,0,0,1)=
 0;


id pentagon1(1,0,0,-1,0)=
 0;


id pentagon1(1,0,0,1,-1)=
 0;


id pentagon1(1,0,0,1,1)=
 0;


id pentagon1(-1,0,1,0,0)=
 - 2*pentagon1(0,0,1,0,1)*den(s34) - 2*pentagon1(0,0,1,0,1)*den(s34)*den( - 4
       + d);


id pentagon1(1,0,-1,0,0)=
2*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51 + s23) + 2*pentagon1(0,1,0,0,1
      )*den( - s51 + s23) - 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s51 + 
      s23) - 2*pentagon1(0,1,0,1,0)*den( - s51 + s23);


id pentagon1(1,0,1,0,-1)=
 - 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34) - 2*pentagon1(0,0,1,
      0,1)*den( - s51 + s34) + 2*pentagon1(0,1,0,0,1)*den( - 4 + d)*den( - s51
       + s34) + 2*pentagon1(0,1,0,0,1)*den( - s51 + s34);


id pentagon1(1,0,1,0,1)=
 - 2*pentagon1(0,1,0,1,0)*den(s23) - 2*pentagon1(0,1,0,1,0)*den(s23)*den( - 4
       + d);


id pentagon1(1,0,1,0,-2)=
pentagon1(0,0,1,0,1) - pentagon1(0,0,1,0,1)*den(s34)*s51 - 2*pentagon1(0,0,1,0
      ,1)*den(s34)*den( - 4 + d)*s23;


id pentagon1(-1,0,1,1,0)=
pentagon1(0,0,1,0,1) - 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34)*
      s23 - 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34)^2*s23*s51
       + pentagon1(0,0,1,0,1)*den( - s51 + s34)*s51 + 2*pentagon1(0,1,0,0,1)*
      den( - 4 + d)*den( - s51 + s34)*s23 + 2*pentagon1(0,1,0,0,1)*den( - 4 + 
      d)*den( - s51 + s34)^2*s23*s51 - pentagon1(0,1,0,0,1)*den( - s51 + s34)*
      s51 + pentagon1(0,1,0,0,1)*den( - s51 + s34)*s23;


id pentagon1(1,0,-1,1,0)=
pentagon1(0,1,0,1,0) - pentagon1(0,1,0,1,0)*den(s23)*s51 - 2*pentagon1(0,1,0,1
      ,0)*den(s23)*den( - 4 + d)*s34;


id pentagon1(1,0,1,-1,0)=
 - 1/2*pentagon1(1,0,0,1,0)*s45;


id pentagon1(1,0,1,1,0)=
 - 2*pentagon1(1,0,0,1,0)*den(s45) - 2*pentagon1(1,0,0,1,0)*den(s45)*den( - 4
       + d);


id pentagon1(-1,0,1,1,1)=
1/2*pentagon1(1,0,1,0,0)*s34 - 1/2*pentagon1(1,0,1,0,0)*s12;


id pentagon1(1,0,-1,1,1)=
2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s34 + s12) + 2*pentagon1(0,0,1,0,1
      )*den( - s34 + s12) - 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s34 + 
      s12) - 2*pentagon1(1,0,1,0,0)*den( - s34 + s12);


id pentagon1(1,0,1,-1,-1)=
1/4*pentagon1(1,0,1,0,0)*s34^2 - 1/2*pentagon1(1,0,1,0,0)*s12*s34 + 1/4*
      pentagon1(1,0,1,0,0)*s12^2 + 1/4*pentagon1(1,0,1,0,0)*den( - 1 + d)*
      s34^2 - 1/2*pentagon1(1,0,1,0,0)*den( - 1 + d)*s12*s34 + 1/4*pentagon1(1
      ,0,1,0,0)*den( - 1 + d)*s12^2;


id pentagon1(1,0,1,-1,1)=
 - 1/2*pentagon1(1,0,0,1,0)*s45 + 1/2*pentagon1(1,0,0,1,0)*s12;


id pentagon1(1,0,1,1,-1)=
1/2*pentagon1(1,0,1,0,0)*s45 - 1/2*pentagon1(1,0,1,0,0)*s12;


id pentagon1(1,-1,0,0,0)=
2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s12) + 2*pentagon1(1,0,0,1,0
      )*den( - s45 + s12) - 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + 
      s12) - 2*pentagon1(1,0,1,0,0)*den( - s45 + s12);


id pentagon1(1,1,0,0,0)=
pentagon1(0,0,1,0,1) - pentagon1(0,0,1,0,1)*den(s34)*s12 - 2*pentagon1(0,0,1,0
      ,1)*den(s34)*den( - 4 + d)*s45;


id pentagon1(1,1,0,0,-1)=
pentagon1(1,0,0,1,0) - pentagon1(1,0,0,1,0)*den(s45)*s12 - 2*pentagon1(1,0,0,1
      ,0)*den(s45)*den( - 4 + d)*s34;


id pentagon1(1,1,0,0,1)=
1/4*pentagon1(1,0,1,0,0)*s34*s45 - 1/4*pentagon1(1,0,1,0,0)*s12*s45 - 1/4*
      pentagon1(1,0,1,0,0)*s12*s34 + 1/4*pentagon1(1,0,1,0,0)*s12^2 - 1/4*
      pentagon1(1,0,1,0,0)*den( - 1 + d)*s34*s45 - 1/4*pentagon1(1,0,1,0,0)*
      den( - 1 + d)*s12*s45 - 1/4*pentagon1(1,0,1,0,0)*den( - 1 + d)*s12*s34
       + 1/4*pentagon1(1,0,1,0,0)*den( - 1 + d)*s12^2;


id pentagon1(1,-1,0,1,0)=
 - 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s34 + s12)^2*s34*s45 - 
      pentagon1(0,0,1,0,1)*den( - s34 + s12)*s34 + pentagon1(1,0,1,0,0) + 2*
      pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s34 + s12)^2*s34*s45 - 
      pentagon1(1,0,1,0,0)*den( - s34 + s12)*s45 + pentagon1(1,0,1,0,0)*den(
       - s34 + s12)*s34;


id pentagon1(1,1,0,-1,0)=
 - 2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s12)^2*s34*s45 - 
      pentagon1(1,0,0,1,0)*den( - s45 + s12)*s45 + pentagon1(1,0,1,0,0) + 2*
      pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s12)^2*s34*s45 + 
      pentagon1(1,0,1,0,0)*den( - s45 + s12)*s45 - pentagon1(1,0,1,0,0)*den(
       - s45 + s12)*s34;


id pentagon1(1,1,0,1,0)=
 - 2*pentagon1(0,1,0,0,1)*den(s51) - 2*pentagon1(0,1,0,0,1)*den(s51)*den( - 4
       + d);


id pentagon1(1,-1,0,1,1)=
 - 1/2*pentagon1(1,0,0,1,0)*s45 + 1/2*pentagon1(1,0,0,1,0)*s23;


id pentagon1(1,1,0,-1,1)=
 - 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23) - 2*pentagon1(0,1,0,
      1,0)*den( - s45 + s23) + 2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45
       + s23) + 2*pentagon1(1,0,0,1,0)*den( - s45 + s23);


id pentagon1(1,1,0,1,-1)=
pentagon1(1,0,0,1,0) - pentagon1(1,0,0,1,0)*den(s45)*s23 - 2*pentagon1(1,0,0,1
      ,0)*den(s45)*den( - 4 + d)*s51;


id pentagon1(-1,1,1,0,0)=
pentagon1(0,1,0,0,1) - pentagon1(0,1,0,0,1)*den(s51)*s23 - 2*pentagon1(0,1,0,0
      ,1)*den(s51)*den( - 4 + d)*s45;


id pentagon1(1,-1,1,0,0)=
pentagon1(0,1,0,1,0) + 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23)^
      2*s45*s51 - pentagon1(0,1,0,1,0)*den( - s45 + s23)*s51 + pentagon1(0,1,0
      ,1,0)*den( - s45 + s23)*s45 - 2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den(
       - s45 + s23)^2*s45*s51 - pentagon1(1,0,0,1,0)*den( - s45 + s23)*s45;


id pentagon1(1,1,-1,0,0)=
 - 1/2*pentagon1(1,0,1,0,0)*s12;


id pentagon1(1,1,1,0,0)=
 - 2*pentagon1(1,0,1,0,0)*den(s12) - 2*pentagon1(1,0,1,0,0)*den(s12)*den( - 4
       + d);


id pentagon1(-1,1,1,0,1)=
pentagon1(0,0,1,0,1) + 2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s51 + s34)^
      2*s12*s51 + pentagon1(0,0,1,0,1)*den( - s51 + s34)*s51 - pentagon1(0,0,1
      ,0,1)*den( - s51 + s34)*s12 - 2*pentagon1(0,1,0,0,1)*den( - 4 + d)*den(
       - s51 + s34)^2*s12*s51 - pentagon1(0,1,0,0,1)*den( - s51 + s34)*s51;


id pentagon1(1,-1,1,0,-1)=
 - 1/4*pentagon1(1,0,1,0,0)*s12*s34 + 1/4*pentagon1(1,0,1,0,0)*s12^2 + 1/2*
      pentagon1(1,0,1,0,0)*den( - 1 + d)*s12*s51 - 1/4*pentagon1(1,0,1,0,0)*
      den( - 1 + d)*s12*s34 + 1/4*pentagon1(1,0,1,0,0)*den( - 1 + d)*s12^2;


id pentagon1(1,-1,1,0,1)=
2*pentagon1(0,0,1,0,1)*den( - 4 + d)*den( - s34 + s12)*s51 + 2*pentagon1(0,0,1
      ,0,1)*den( - 4 + d)*den( - s34 + s12)^2*s34*s51 + pentagon1(0,0,1,0,1)*
      den( - s34 + s12)*s51 - pentagon1(0,0,1,0,1)*den( - s34 + s12)*s34 + 
      pentagon1(1,0,1,0,0) - 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s34
       + s12)*s51 - 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s34 + s12)^2*
      s34*s51 + pentagon1(1,0,1,0,0)*den( - s34 + s12)*s34;


id pentagon1(1,1,-1,0,1)=
pentagon1(0,1,0,0,1) - pentagon1(0,1,0,0,1)*den(s51)*s34 - 2*pentagon1(0,1,0,0
      ,1)*den(s51)*den( - 4 + d)*s12;


id pentagon1(1,1,1,0,-1)=
pentagon1(1,0,1,0,0) - pentagon1(1,0,1,0,0)*den(s12)*s34 - 2*pentagon1(1,0,1,0
      ,0)*den(s12)*den( - 4 + d)*s51;


id pentagon1(1,1,1,0,-2)=
pentagon1(1,0,1,0,0)*s34 - 1/2*pentagon1(1,0,1,0,0)*s12 + 2*pentagon1(1,0,1,0,
      0)*den( - 2 + d)*s51 - 1/2*pentagon1(1,0,1,0,0)*den(s12)*s34^2 - 2*
      pentagon1(1,0,1,0,0)*den(s12)*den( - 4 + d)*s51^2 + 2*pentagon1(1,0,1,0,
      0)*den(s12)*den( - 2 + d)*s51^2 - 2*pentagon1(1,0,1,0,0)*den(s12)*den(
       - 2 + d)*s34*s51;


id pentagon1(-1,1,1,1,0)=
pentagon1(0,1,0,1,0) - pentagon1(0,1,0,1,0)*den(s23)*s45 - 2*pentagon1(0,1,0,1
      ,0)*den(s23)*den( - 4 + d)*s12;


id pentagon1(1,-1,1,-1,0)=
 - 1/4*pentagon1(1,0,1,0,0)*s12*s45 + 1/4*pentagon1(1,0,1,0,0)*s12^2 - 1/4*
      pentagon1(1,0,1,0,0)*den( - 1 + d)*s12*s45 + 1/2*pentagon1(1,0,1,0,0)*
      den( - 1 + d)*s12*s23 + 1/4*pentagon1(1,0,1,0,0)*den( - 1 + d)*s12^2;


id pentagon1(1,-1,1,1,0)=
2*pentagon1(1,0,0,1,0)*den( - 4 + d)*den( - s45 + s12)*s23 + 2*pentagon1(1,0,0
      ,1,0)*den( - 4 + d)*den( - s45 + s12)^2*s23*s45 - pentagon1(1,0,0,1,0)*
      den( - s45 + s12)*s45 + pentagon1(1,0,0,1,0)*den( - s45 + s12)*s23 + 
      pentagon1(1,0,1,0,0) - 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45
       + s12)*s23 - 2*pentagon1(1,0,1,0,0)*den( - 4 + d)*den( - s45 + s12)^2*
      s23*s45 + pentagon1(1,0,1,0,0)*den( - s45 + s12)*s45;


id pentagon1(1,1,-1,1,0)=
pentagon1(0,1,0,1,0) - 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23)*
      s12 - 2*pentagon1(0,1,0,1,0)*den( - 4 + d)*den( - s45 + s23)^2*s12*s45
       + pentagon1(0,1,0,1,0)*den( - s45 + s23)*s45 + 2*pentagon1(1,0,0,1,0)*
      den( - 4 + d)*den( - s45 + s23)*s12 + 2*pentagon1(1,0,0,1,0)*den( - 4 + 
      d)*den( - s45 + s23)^2*s12*s45 - pentagon1(1,0,0,1,0)*den( - s45 + s23)*
      s45 + pentagon1(1,0,0,1,0)*den( - s45 + s23)*s12;


id pentagon1(1,1,1,-1,0)=
pentagon1(1,0,1,0,0) - pentagon1(1,0,1,0,0)*den(s12)*s45 - 2*pentagon1(1,0,1,0
      ,0)*den(s12)*den( - 4 + d)*s23;


id pentagon1(-1,1,1,1,1)=
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


id pentagon1(1,-1,1,1,-1)=
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


id pentagon1(1,-1,1,1,1)=
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


id pentagon1(1,1,1,-1,-1)=
1/2*pentagon1(1,0,1,0,0)*s45 + 1/2*pentagon1(1,0,1,0,0)*s34 - 1/2*pentagon1(1,
      0,1,0,0)*s12 + pentagon1(1,0,1,0,0)*den( - 2 + d)*s51 + pentagon1(1,0,1,
      0,0)*den( - 2 + d)*s23 - 1/2*pentagon1(1,0,1,0,0)*den(s12)*s34*s45 - 2*
      pentagon1(1,0,1,0,0)*den(s12)*den( - 4 + d)*s23*s51 - pentagon1(1,0,1,0,
      0)*den(s12)*den( - 2 + d)*s45*s51 + pentagon1(1,0,1,0,0)*den(s12)*den(
       - 2 + d)*s34*s45 + 2*pentagon1(1,0,1,0,0)*den(s12)*den( - 2 + d)*s23*
      s51 - pentagon1(1,0,1,0,0)*den(s12)*den( - 2 + d)*s23*s34;


id pentagon1(1,1,1,-1,1)=
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


id pentagon1(1,1,1,1,-1)=
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


id pentagon1(1,-2,1,0,0)=
1/4*pentagon1(1,0,1,0,0)*s12^2 + 1/4*pentagon1(1,0,1,0,0)*den( - 1 + d)*s12^2;


id pentagon1(1,-2,1,1,0)=
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


id pentagon1(1,-2,1,1,1)=
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


