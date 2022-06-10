(* ::Package:: *)

a=Import["test.m"];


<<FeynCalc`


ScalarProduct[p1,p1]=0;
ScalarProduct[p2,p2]=0;
ScalarProduct[p3,p3]=0;
ScalarProduct[p4,p4]=0;
ScalarProduct[p1,p2]=s12/2;
ScalarProduct[p1,p3]=-s13/2;
ScalarProduct[p1,p4]=-s14/2;
ScalarProduct[p2,p3]=-s23/2;
ScalarProduct[p2,p4]=-s24/2;
ScalarProduct[p3,p4]=-(s12+s13+s14+s23+s24)/2;


rule1={prop[x_,y_]->FeynAmpDenominator[PropagatorDenominator[Momentum[x,D],0]]}
rule2=(x1_).(x2_)->Pair[Momentum[x1,D],Momentum[x2,D]]
rule3={x1_ .(x2_+x3_)->x1.x2+x1.x3,(x1_+x2_).x3_->x1.x3+x2.x3}
rule4={x1_ .x2_^2->(x1.x2)^2}


b=a/.rule4/.q->p1+p2-p3-p4//.rule3/.rule2/.rule1;


c=FCLoopIsolate[b,{k1},Head->loopInt]//Simplify


d=c/32/.{basis2->1,Basis2->1,Nc->1,gs->1,Y->1}


ma=Import["/home/xty/Desktop/qq2tTH/amplitude_square/NLO/amp_sq10_12_1_.m"];


ma1=ma/.u34->-(s12+t13+t14+u23+u24)/.{s12->s12,t13->s13,t14->s14,u23->s23,u24->s24,u34->s34}//FCLoopIsolate[#,{l},Head->loopInt]&//FCReplaceAll[#,l->k1]&//Simplify


ma2=ma1/.{CF->1,gs->1,Y->1}//Simplify


Cases2[c,loopInt]


i=10
d[[6]][[i]]//Simplify
ma2[[6]][[i]]//Simplify





e=4*d//FeynAmpDenominatorExplicit
f=ma2//FeynAmpDenominatorExplicit
e-f



