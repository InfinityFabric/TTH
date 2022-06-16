id pentagon1(1,1,1,0,0) = 
 + pentagon1(1,0,1,0,0)*(num((-2*d+6))*den((d-4)*s12))
;

id pentagon1(1,1,0,1,0) = 
 + pentagon1(0,1,0,1,0)*(num((2*d-6))*den((d-4)*s45+(-d+4)*s23))
 + pentagon1(1,0,0,1,0)*(num((-2*d+6))*den((d-4)*s45+(-d+4)*s23))
;

id pentagon1(1,0,1,1,0) = 
 + pentagon1(1,0,0,1,0)*(num((-2*d+6))*den((d-4)*s45+(-d+4)*s12))
 + pentagon1(1,0,1,0,0)*(num((2*d-6))*den((d-4)*s45+(-d+4)*s12))
;

id pentagon1(0,1,1,1,0) = 
 + pentagon1(0,1,0,1,0)*(num((-2*d+6))*den((d-4)*s23))
;

id pentagon1(1,1,0,0,1) = 
 + pentagon1(0,1,0,0,1)*(num((-2*d+6))*den((d-4)*s51))
;

id pentagon1(1,0,1,0,1) = 
 + pentagon1(0,0,1,0,1)*(num((-2*d+6))*den((d-4)*s34+(-d+4)*s12))
 + pentagon1(1,0,1,0,0)*(num((2*d-6))*den((d-4)*s34+(-d+4)*s12))
;

id pentagon1(0,1,1,0,1) = 
 + pentagon1(0,0,1,0,1)*(num((2*d-6))*den((d-4)*s51+(-d+4)*s34))
 + pentagon1(0,1,0,0,1)*(num((-2*d+6))*den((d-4)*s51+(-d+4)*s34))
;

id pentagon1(1,0,0,1,1) = 
 + pentagon1(1,0,0,1,0)*(num((-2*d+6))*den((d-4)*s45))
;

id pentagon1(0,1,0,1,1) = 
 + pentagon1(0,1,0,0,1)*(num((-2*d+6))*den((d-4)*s51+(-d+4)*s23))
 + pentagon1(0,1,0,1,0)*(num((2*d-6))*den((d-4)*s51+(-d+4)*s23))
;

id pentagon1(0,0,1,1,1) = 
 + pentagon1(0,0,1,0,1)*(num((-2*d+6))*den((d-4)*s34))
;
