id pentagon1(1,0,1,0,0)=2 + Eps^(-1) + Log(-(Mu^2/s12));
id pentagon1(1,0,0,1,0)=2 + Eps^(-1) + Log(-(Mu^2/s45));
id pentagon1(0,1,0,1,0)=2 + Eps^(-1) + Log(-(Mu^2/s23));
id pentagon1(1,1,1,1,0)=2/(Eps^2*s12*s23) - Pi^2/(2*s12*s23) -
  (2*DiLog((s12 - s45)/s12, -s12 + s45))/(s12*s23) -
  (2*DiLog((s23 - s45)/s23, -s23 + s45))/(s12*s23) +
  (2*Log(-(Mu^2/s12)))/(Eps*s12*s23) + (2*Log(-(Mu^2/s12))*Log(-(Mu^2/s23)))/
   (s12*s23) - Log(-(Mu^2/s45))^2/(s12*s23) +
  ((2*Log(-(Mu^2/s23)))/(s12*s23) - (2*Log(-(Mu^2/s45)))/(s12*s23))/Eps;
id pentagon1(0,1,0,0,1)= 2 + Eps^(-1) + Log(-(Mu^2/s51));
id pentagon1(0,0,1,0,1)= 2 + Eps^(-1) + Log(-(Mu^2/s34));
id pentagon1(1,1,1,0,1)= 2/(Eps^2*s12*s51) - Pi^2/(2*s12*s51) -
  (2*DiLog((s12 - s34)/s12, -s12 + s34))/(s12*s51) -
  (2*DiLog(-((s34 - s51)/s51), s34 - s51))/(s12*s51) +
  (2*Log(-(Mu^2/s12)))/(Eps*s12*s51) - Log(-(Mu^2/s34))^2/(s12*s51) +
  (2*Log(-(Mu^2/s12))*Log(-(Mu^2/s51)))/(s12*s51) +
  ((-2*Log(-(Mu^2/s34)))/(s12*s51) + (2*Log(-(Mu^2/s51)))/(s12*s51))/Eps;
id pentagon1(1,1,0,1,1)= 2/(Eps^2*s45*s51) - Pi^2/(2*s45*s51) -
  (2*DiLog(-((s23 - s45)/s45), s23 - s45))/(s45*s51) -
  (2*DiLog(-((s23 - s51)/s51), s23 - s51))/(s45*s51) -
  (2*Log(-(Mu^2/s23)))/(Eps*s45*s51) - Log(-(Mu^2/s23))^2/(s45*s51) +
  (2*Log(-(Mu^2/s45))*Log(-(Mu^2/s51)))/(s45*s51) +
  ((2*Log(-(Mu^2/s45)))/(s45*s51) + (2*Log(-(Mu^2/s51)))/(s45*s51))/Eps;
id pentagon1(1,0,1,1,1)= 2/(Eps^2*s34*s45) - Pi^2/(2*s34*s45) -
  (2*DiLog(-((s12 - s34)/s34), s12 - s34))/(s34*s45) -
  (2*DiLog(-((s12 - s45)/s45), s12 - s45))/(s34*s45) -
  (2*Log(-(Mu^2/s12)))/(Eps*s34*s45) - Log(-(Mu^2/s12))^2/(s34*s45) +
  (2*Log(-(Mu^2/s34))*Log(-(Mu^2/s45)))/(s34*s45) +
  ((2*Log(-(Mu^2/s34)))/(s34*s45) + (2*Log(-(Mu^2/s45)))/(s34*s45))/Eps;
id pentagon1(0,1,1,1,1)= 2/(Eps^2*s23*s34) - Pi^2/(2*s23*s34) -
  (2*DiLog((s23 - s51)/s23, -s23 + s51))/(s23*s34) -
  (2*DiLog((s34 - s51)/s34, -s34 + s51))/(s23*s34) +
  (2*Log(-(Mu^2/s23)))/(Eps*s23*s34) + (2*Log(-(Mu^2/s23))*Log(-(Mu^2/s34)))/
   (s23*s34) - Log(-(Mu^2/s51))^2/(s23*s34) +
  ((2*Log(-(Mu^2/s34)))/(s23*s34) - (2*Log(-(Mu^2/s51)))/(s23*s34))/Eps;

id pentagon1(1,1,1,1,1)=  -((-4*s12*s23)/Eps^2 + Pi^2*s12*s23 - 
     (4*s23*s34)/Eps^2 + Pi^2*s23*s34 -
     (4*s34*s45)/Eps^2 + Pi^2*s34*s45 - (4*s12*s51)/Eps^2 + Pi^2*s12*s51 -
     (4*s45*s51)/Eps^2 + Pi^2*s45*s51 + 4*(-(s23*s34) + s34*s45 - s45*s51 +
       s12*(s23 + s51))*DiLog(1 - s12/s34, s12 - s34) +
     4*(-(s12*s23) + s23*s34 + s34*s45 + s12*s51 - s45*s51)*
      DiLog(1 - s34/s12, -s12 + s34) + 4*s12*s23*DiLog(1 - s12/s45,
       s12 - s45) - 4*s23*s34*DiLog(1 - s12/s45, s12 - s45) +
     4*s34*s45*DiLog(1 - s12/s45, s12 - s45) +
     4*s12*s51*DiLog(1 - s12/s45, s12 - s45) -
     4*s45*s51*DiLog(1 - s12/s45, s12 - s45) +
     4*s12*s23*DiLog(1 - s23/s45, s23 - s45) +
     4*s23*s34*DiLog(1 - s23/s45, s23 - s45) -
     4*s34*s45*DiLog(1 - s23/s45, s23 - s45) -
     4*s12*s51*DiLog(1 - s23/s45, s23 - s45) +
     4*s45*s51*DiLog(1 - s23/s45, s23 - s45) +
     4*s12*s23*DiLog(1 - s45/s12, -s12 + s45) -
     4*s23*s34*DiLog(1 - s45/s12, -s12 + s45) +
     4*s34*s45*DiLog(1 - s45/s12, -s12 + s45) -
     4*s12*s51*DiLog(1 - s45/s12, -s12 + s45) +
     4*s45*s51*DiLog(1 - s45/s12, -s12 + s45) +
     4*s12*s23*DiLog(1 - s45/s23, -s23 + s45) -
     4*s23*s34*DiLog(1 - s45/s23, -s23 + s45) +
     4*s34*s45*DiLog(1 - s45/s23, -s23 + s45) -
     4*s12*s51*DiLog(1 - s45/s23, -s23 + s45) +
     4*s45*s51*DiLog(1 - s45/s23, -s23 + s45) +
     4*s12*s23*DiLog(1 - s23/s51, s23 - s51) +
     4*s23*s34*DiLog(1 - s23/s51, s23 - s51) -
     4*s34*s45*DiLog(1 - s23/s51, s23 - s51) -
     4*s12*s51*DiLog(1 - s23/s51, s23 - s51) +
     4*s45*s51*DiLog(1 - s23/s51, s23 - s51) -
     4*s12*s23*DiLog(1 - s34/s51, s34 - s51) +
     4*s23*s34*DiLog(1 - s34/s51, s34 - s51) +
     4*s34*s45*DiLog(1 - s34/s51, s34 - s51) +
     4*s12*s51*DiLog(1 - s34/s51, s34 - s51) -
     4*s45*s51*DiLog(1 - s34/s51, s34 - s51) -
     4*s12*s23*DiLog(1 - s51/s23, -s23 + s51) +
     4*s23*s34*DiLog(1 - s51/s23, -s23 + s51) -
     4*s34*s45*DiLog(1 - s51/s23, -s23 + s51) +
     4*s12*s51*DiLog(1 - s51/s23, -s23 + s51) +
     4*s45*s51*DiLog(1 - s51/s23, -s23 + s51) -
     4*s12*s23*DiLog(1 - s51/s34, -s34 + s51) +
     4*s23*s34*DiLog(1 - s51/s34, -s34 + s51) -
     4*s34*s45*DiLog(1 - s51/s34, -s34 + s51) +
     4*s12*s51*DiLog(1 - s51/s34, -s34 + s51) +
     4*s45*s51*DiLog(1 - s51/s34, -s34 + s51) + (4*s12*s23*Log(-(Mu^2/s12)))/
      Eps - (4*s23*s34*Log(-(Mu^2/s12)))/Eps - (4*s34*s45*Log(-(Mu^2/s12)))/
      Eps + (4*s12*s51*Log(-(Mu^2/s12)))/Eps - (4*s45*s51*Log(-(Mu^2/s12)))/
      Eps + 2*s12*s23*Log(-(Mu^2/s12))^2 - 2*s23*s34*Log(-(Mu^2/s12))^2 +
     2*s34*s45*Log(-(Mu^2/s12))^2 + 2*s12*s51*Log(-(Mu^2/s12))^2 -
     2*s45*s51*Log(-(Mu^2/s12))^2 + (4*s12*s23*Log(-(Mu^2/s23)))/Eps +
     (4*s23*s34*Log(-(Mu^2/s23)))/Eps - (4*s34*s45*Log(-(Mu^2/s23)))/Eps -
     (4*s12*s51*Log(-(Mu^2/s23)))/Eps - (4*s45*s51*Log(-(Mu^2/s23)))/Eps -
     4*s12*s23*Log(-(Mu^2/s12))*Log(-(Mu^2/s23)) + 4*s23*s34*Log(-(Mu^2/s12))*
      Log(-(Mu^2/s23)) - 4*s34*s45*Log(-(Mu^2/s12))*Log(-(Mu^2/s23)) +
     4*s12*s51*Log(-(Mu^2/s12))*Log(-(Mu^2/s23)) - 4*s45*s51*Log(-(Mu^2/s12))*
      Log(-(Mu^2/s23)) + 2*s12*s23*Log(-(Mu^2/s23))^2 +
     2*s23*s34*Log(-(Mu^2/s23))^2 - 2*s34*s45*Log(-(Mu^2/s23))^2 -
     2*s12*s51*Log(-(Mu^2/s23))^2 + 2*s45*s51*Log(-(Mu^2/s23))^2 -
     (4*s12*s23*Log(-(Mu^2/s34)))/Eps + (4*s23*s34*Log(-(Mu^2/s34)))/Eps +
     (4*s34*s45*Log(-(Mu^2/s34)))/Eps - (4*s12*s51*Log(-(Mu^2/s34)))/Eps -
     (4*s45*s51*Log(-(Mu^2/s34)))/Eps + 4*s12*s23*Log(-(Mu^2/s23))*
      Log(-(Mu^2/s34)) - 4*s23*s34*Log(-(Mu^2/s23))*Log(-(Mu^2/s34)) +
     4*s34*s45*Log(-(Mu^2/s23))*Log(-(Mu^2/s34)) - 4*s12*s51*Log(-(Mu^2/s23))*
      Log(-(Mu^2/s34)) - 4*s45*s51*Log(-(Mu^2/s23))*Log(-(Mu^2/s34)) -
     2*s12*s23*Log(-(Mu^2/s34))^2 + 2*s23*s34*Log(-(Mu^2/s34))^2 +
     2*s34*s45*Log(-(Mu^2/s34))^2 + 2*s12*s51*Log(-(Mu^2/s34))^2 -
     2*s45*s51*Log(-(Mu^2/s34))^2 - (4*s12*s23*Log(-(Mu^2/s45)))/Eps -
     (4*s23*s34*Log(-(Mu^2/s45)))/Eps + (4*s34*s45*Log(-(Mu^2/s45)))/Eps -
     (4*s12*s51*Log(-(Mu^2/s45)))/Eps + (4*s45*s51*Log(-(Mu^2/s45)))/Eps -
     4*s12*s23*Log(-(Mu^2/s34))*Log(-(Mu^2/s45)) + 4*s23*s34*Log(-(Mu^2/s34))*
      Log(-(Mu^2/s45)) - 4*s34*s45*Log(-(Mu^2/s34))*Log(-(Mu^2/s45)) -
     4*s12*s51*Log(-(Mu^2/s34))*Log(-(Mu^2/s45)) + 4*s45*s51*Log(-(Mu^2/s34))*
      Log(-(Mu^2/s45)) + 2*s12*s23*Log(-(Mu^2/s45))^2 -
     2*s23*s34*Log(-(Mu^2/s45))^2 + 2*s34*s45*Log(-(Mu^2/s45))^2 -
     2*s12*s51*Log(-(Mu^2/s45))^2 + 2*s45*s51*Log(-(Mu^2/s45))^2 -
     (4*s12*s23*Log(-(Mu^2/s51)))/Eps - (4*s23*s34*Log(-(Mu^2/s51)))/Eps -
     (4*s34*s45*Log(-(Mu^2/s51)))/Eps + (4*s12*s51*Log(-(Mu^2/s51)))/Eps +
     (4*s45*s51*Log(-(Mu^2/s51)))/Eps + 4*s12*s23*Log(-(Mu^2/s12))*
      Log(-(Mu^2/s51)) - 4*s23*s34*Log(-(Mu^2/s12))*Log(-(Mu^2/s51)) -
     4*s34*s45*Log(-(Mu^2/s12))*Log(-(Mu^2/s51)) - 4*s12*s51*Log(-(Mu^2/s12))*
      Log(-(Mu^2/s51)) + 4*s45*s51*Log(-(Mu^2/s12))*Log(-(Mu^2/s51)) -
     4*s12*s23*Log(-(Mu^2/s45))*Log(-(Mu^2/s51)) - 4*s23*s34*Log(-(Mu^2/s45))*
      Log(-(Mu^2/s51)) + 4*s34*s45*Log(-(Mu^2/s45))*Log(-(Mu^2/s51)) +
     4*s12*s51*Log(-(Mu^2/s45))*Log(-(Mu^2/s51)) - 4*s45*s51*Log(-(Mu^2/s45))*
      Log(-(Mu^2/s51)) - 2*s12*s23*Log(-(Mu^2/s51))^2 +
     2*s23*s34*Log(-(Mu^2/s51))^2 - 2*s34*s45*Log(-(Mu^2/s51))^2 +
     2*s12*s51*Log(-(Mu^2/s51))^2 + 2*s45*s51*Log(-(Mu^2/s51))^2)/
   (4*s12*s23*s34*s45*s51);
