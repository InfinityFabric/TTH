id pentagon1(0,0,1,0,0) = 
 + 0
;

id pentagon1(0,1,0,0,0) = 
 + 0
;

id pentagon1(0,1,1,0,0) = 
 + 0
;

id pentagon1(0,1,1,0,-1) = 
 + 0
;

id pentagon1(0,1,1,-1,0) = 
 + 0
;

id pentagon1(1,0,0,0,0) = 
 + 0
;

id pentagon1(1,1,0,0,0) = 
 + 0
;

id pentagon1(1,1,0,0,-1) = 
 + 0
;

id pentagon1(1,1,0,-1,0) = 
 + 0
;

id pentagon1(-1,1,1,0,0) = 
 + 0
;

id pentagon1(1,0,1,0,-1) = 
 + pentagon1(1,0,1,0,0)*(num((s34-s12))*den(2))
;

id pentagon1(1,0,1,-1,0) = 
 + pentagon1(1,0,1,0,0)*(num((s45-s12))*den(2))
;

id pentagon1(1,-1,1,0,0) = 
 + pentagon1(1,0,1,0,0)*(num(-s12)*den(2))
;

id pentagon1(1,1,1,0,0) = 
 + pentagon1(1,0,1,0,0)*(num((-2*d+6))*den((d-4)*s12))
;

id pentagon1(1,1,1,0,-1) = 
 + pentagon1(1,0,1,0,0)*(num((-2*s51+(-d+4)*s34+(d-4)*s12))*den((d-4)*s12))
;

id pentagon1(1,1,1,0,-2) = 
 + pentagon1(1,0,1,0,0)*(num((-8*s51^2+((-4*d+16)*s34+(4*d-16)*s12)*s51+(-d^2+6*d-8)*s34^2+((2*d^2-12*d+16)*s12)*s34+(-d^2+6*d-8)*s12^2))*den((2*d^2-12*d+16)*s12))
;

id pentagon1(1,1,1,-1,0) = 
 + pentagon1(1,0,1,0,0)*(num(((-d+4)*s45-2*s23+(d-4)*s12))*den((d-4)*s12))
;
