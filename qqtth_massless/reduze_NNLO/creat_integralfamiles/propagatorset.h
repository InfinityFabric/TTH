label 1;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop2)/2;
id sc3=(prop2 + prop3 + s12)/2;
id sc4=(2 * p1 p3 - 2 * prop1 + prop3 + prop4 - 2 * s12 + s23)/2;
id sc5=(2 * p1 p4 + 2 * p2 p4 + prop4 + prop5 + s34)/2;
goto 10001;

label 2;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop2)/2;
id sc3=(prop2 + prop3 + s12)/2;
id sc4=(2 * p1 p3 - 2 * prop1 + prop3 + prop4 - 2 * s12 + s23)/2;
id sc5=(prop1 + prop5)/2;
goto 10002;

label 3;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop2)/2;
id sc3=(prop2 + prop3 + s12)/2;
id sc4=(2 * p1 p3 + prop4 + prop5 + s23 + s34)/2;
id sc5=(2 * p1 p4 + 2 * p2 p4 - 2 * prop1 + prop3 + prop4 - 2 * s12)/2;
goto 10003;

label 4;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop2)/2;
id sc3=(prop2 + prop3 + s12)/2;
id sc4=(prop1 + prop5)/2;
id sc5=(2 * p1 p4 + 2 * p2 p4 - 2 * prop1 + prop3 + prop4 - 2 * s12)/2;
goto 10004;

label 5;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop2)/2;
id sc3=(prop2 + prop3 + s12)/2;
id sc4=(prop4 + prop5 + s34)/2;
id sc5=(prop1 + prop5)/2;
goto 10005;

label 6;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop2)/2;
id sc3=(prop2 + prop3 + s12)/2;
id sc4=(prop1 + prop5)/2;
id sc5=(prop4 + prop5 + s34)/2;
goto 10006;

label 7;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop2)/2;
id sc3=(-4 * p1 p3 + 2 * prop1 + prop3 + prop4 + s12 + s23)/2;
id sc4=(-2 * p1 p3 + prop2 + prop3)/2;
id sc5=(2 * p1 p4 + 2 * p2 p4 + prop4 + prop5 + s34)/2;
goto 10007;

label 8;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop2)/2;
id sc3=(-4 * p1 p3 + 2 * prop1 + prop3 + prop4 + s12 + s23)/2;
id sc4=(-2 * p1 p3 + prop2 + prop3)/2;
id sc5=(prop1 + prop5)/2;
goto 10008;

label 9;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop2)/2;
id sc3=(-2 * p2 p4 + prop4 + prop5 + s12 + s23)/2;
id sc4=(-2 * p1 p3 + prop2 + prop3)/2;
id sc5=(4 * p1 p3 + 2 * p1 p4 - 2 * prop1 + prop3 + prop4 + s34)/2;
goto 10009;

label 10;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop2)/2;
id sc3=(prop1 + prop5)/2;
id sc4=(-2 * p1 p3 + prop2 + prop3)/2;
id sc5=(4 * p1 p3 + 2 * p1 p4 - 2 * prop1 + prop3 + prop4 + s34)/2;
goto 100010;

label 11;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop2)/2;
id sc3=(2 * p2 p4 + prop4 + prop5)/2;
id sc4=(-2 * p1 p3 + prop2 + prop3)/2;
id sc5=(prop1 + prop5)/2;
goto 100011;

label 12;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop2)/2;
id sc3=(prop1 + prop5)/2;
id sc4=(-2 * p1 p3 + prop2 + prop3)/2;
id sc5=(-2 * p2 p4 + prop4 + prop5)/2;
goto 100012;

label 13;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop2)/2;
id sc3=(-4 * p1 p4 - 2 * p2 p4 + 2 * prop1 + prop3 + prop4 + s12)/2;
id sc4=(2 * p1 p3 + prop4 + prop5 + s23 + s34)/2;
id sc5=(-2 * p1 p4 + prop2 + prop3)/2;
goto 100013;

label 14;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop2)/2;
id sc3=(-4 * p1 p4 - 2 * p2 p4 + 2 * prop1 + prop3 + prop4 + s12)/2;
id sc4=(prop1 + prop5)/2;
id sc5=(-2 * p1 p4 + prop2 + prop3)/2;
goto 100014;

label 15;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop2)/2;
id sc3=(-2 * p2 p4 + prop4 + prop5 + s12 + s23)/2;
id sc4=(2 * p1 p3 + 4 * p1 p4 - 2 * prop1 + prop3 + prop4 + s34)/2;
id sc5=(-2 * p1 p4 + prop2 + prop3)/2;
goto 100015;

label 16;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop2)/2;
id sc3=(prop1 + prop5)/2;
id sc4=(2 * p1 p3 + 4 * p1 p4 - 2 * prop1 + prop3 + prop4 + s34)/2;
id sc5=(-2 * p1 p4 + prop2 + prop3)/2;
goto 100016;

label 17;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop2)/2;
id sc3=(prop4 + prop5 + s23)/2;
id sc4=(prop1 + prop5)/2;
id sc5=(-2 * p1 p4 + prop2 + prop3)/2;
goto 100017;

label 18;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop2)/2;
id sc3=(prop1 + prop5)/2;
id sc4=(prop4 + prop5 + s23)/2;
id sc5=(-2 * p1 p4 + prop2 + prop3)/2;
goto 100018;

label 19;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop2)/2;
id sc3=(-2 * p2 p4 + 2 * prop1 + prop3 + prop4 + s23 + 2 * s34)/2;
id sc4=(prop4 + prop5 + s34)/2;
id sc5=(prop1 + prop5)/2;
goto 100019;

label 20;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop2)/2;
id sc3=(-2 * p2 p4 + 2 * prop1 + prop3 + prop4 + s23 + 2 * s34)/2;
id sc4=(prop1 + prop5)/2;
id sc5=(prop4 + prop5 + s34)/2;
goto 100020;

label 21;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop2)/2;
id sc3=(2 * p2 p4 + prop4 + prop5)/2;
id sc4=(4 * p2 p4 - 2 * prop1 + prop3 + prop4 + s23 + s34)/2;
id sc5=(prop1 + prop5)/2;
goto 100021;

label 22;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop2)/2;
id sc3=(prop1 + prop5)/2;
id sc4=(4 * p2 p4 - 2 * prop1 + prop3 + prop4 + s23 + s34)/2;
id sc5=(-2 * p2 p4 + prop4 + prop5)/2;
goto 100022;

label 23;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop2)/2;
id sc3=(prop4 + prop5 + s23)/2;
id sc4=(prop1 + prop5)/2;
id sc5=(2 * p2 p4 - 2 * prop1 + prop3 + prop4 - 2 * s23 + s34)/2;
goto 100023;

label 24;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop2)/2;
id sc3=(prop1 + prop5)/2;
id sc4=(prop4 + prop5 + s23)/2;
id sc5=(2 * p2 p4 - 2 * prop1 + prop3 + prop4 - 2 * s23 + s34)/2;
goto 100024;

label 25;
id sc1=(2 * prop1)/2;
id sc2=(prop2 + prop3 + s12)/2;
id sc3=(prop1 + prop2)/2;
id sc4=(2 * p1 p3 - 2 * prop1 + prop3 + prop4 - 2 * s12 + s23)/2;
id sc5=(2 * p1 p4 + 2 * p2 p4 + prop4 + prop5 + s34)/2;
goto 100025;

label 26;
id sc1=(2 * prop1)/2;
id sc2=(prop2 + prop3 + s12)/2;
id sc3=(prop1 + prop2)/2;
id sc4=(2 * p1 p3 - 2 * prop1 + prop3 + prop4 - 2 * s12 + s23)/2;
id sc5=(prop1 + prop5)/2;
goto 100026;

label 27;
id sc1=(2 * prop1)/2;
id sc2=(prop2 + prop3 + s12)/2;
id sc3=(prop1 + prop2)/2;
id sc4=(2 * p1 p3 + prop4 + prop5 + s23 + s34)/2;
id sc5=(2 * p1 p4 + 2 * p2 p4 - 2 * prop1 + prop3 + prop4 - 2 * s12)/2;
goto 100027;

label 28;
id sc1=(2 * prop1)/2;
id sc2=(prop2 + prop3 + s12)/2;
id sc3=(prop1 + prop2)/2;
id sc4=(prop1 + prop5)/2;
id sc5=(2 * p1 p4 + 2 * p2 p4 - 2 * prop1 + prop3 + prop4 - 2 * s12)/2;
goto 100028;

label 29;
id sc1=(2 * prop1)/2;
id sc2=(prop2 + prop3 + s12)/2;
id sc3=(prop1 + prop2)/2;
id sc4=(prop4 + prop5 + s34)/2;
id sc5=(prop1 + prop5)/2;
goto 100029;

label 30;
id sc1=(2 * prop1)/2;
id sc2=(prop2 + prop3 + s12)/2;
id sc3=(prop1 + prop2)/2;
id sc4=(prop1 + prop5)/2;
id sc5=(prop4 + prop5 + s34)/2;
goto 100030;

label 31;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 + 2 * prop1 + prop3 + prop4 + s12 + 2 * s23)/2;
id sc3=(prop1 + prop2)/2;
id sc4=(prop2 + prop3 + s23)/2;
id sc5=(2 * p1 p4 + 2 * p2 p4 + prop4 + prop5 + s34)/2;
goto 100031;

label 32;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 + 2 * prop1 + prop3 + prop4 + s12 + 2 * s23)/2;
id sc3=(prop1 + prop2)/2;
id sc4=(prop2 + prop3 + s23)/2;
id sc5=(prop1 + prop5)/2;
goto 100032;

label 33;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 - 2 * p1 p4 + prop4 + prop5 + s12)/2;
id sc3=(prop1 + prop2)/2;
id sc4=(prop2 + prop3 + s23)/2;
id sc5=(2 * p2 p4 - 2 * prop1 + prop3 + prop4 - 2 * s23 + s34)/2;
goto 100033;

label 34;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop5)/2;
id sc3=(prop1 + prop2)/2;
id sc4=(prop2 + prop3 + s23)/2;
id sc5=(2 * p2 p4 - 2 * prop1 + prop3 + prop4 - 2 * s23 + s34)/2;
goto 100034;

label 35;
id sc1=(2 * prop1)/2;
id sc2=(2 * p1 p4 + prop4 + prop5)/2;
id sc3=(prop1 + prop2)/2;
id sc4=(prop2 + prop3 + s23)/2;
id sc5=(prop1 + prop5)/2;
goto 100035;

label 36;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop5)/2;
id sc3=(prop1 + prop2)/2;
id sc4=(prop2 + prop3 + s23)/2;
id sc5=(-2 * p1 p4 + prop4 + prop5)/2;
goto 100036;

label 37;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p4 - 4 * p2 p4 + 2 * prop1 + prop3 + prop4 + s12)/2;
id sc3=(prop1 + prop2)/2;
id sc4=(2 * p1 p3 + prop4 + prop5 + s23 + s34)/2;
id sc5=(-2 * p2 p4 + prop2 + prop3)/2;
goto 100037;

label 38;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p4 - 4 * p2 p4 + 2 * prop1 + prop3 + prop4 + s12)/2;
id sc3=(prop1 + prop2)/2;
id sc4=(prop1 + prop5)/2;
id sc5=(-2 * p2 p4 + prop2 + prop3)/2;
goto 100038;

label 39;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 - 2 * p1 p4 + prop4 + prop5 + s12)/2;
id sc3=(prop1 + prop2)/2;
id sc4=(4 * p2 p4 - 2 * prop1 + prop3 + prop4 + s23 + s34)/2;
id sc5=(-2 * p2 p4 + prop2 + prop3)/2;
goto 100039;

label 40;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop5)/2;
id sc3=(prop1 + prop2)/2;
id sc4=(4 * p2 p4 - 2 * prop1 + prop3 + prop4 + s23 + s34)/2;
id sc5=(-2 * p2 p4 + prop2 + prop3)/2;
goto 100040;

label 41;
id sc1=(2 * prop1)/2;
id sc2=(2 * p1 p3 + prop4 + prop5)/2;
id sc3=(prop1 + prop2)/2;
id sc4=(prop1 + prop5)/2;
id sc5=(-2 * p2 p4 + prop2 + prop3)/2;
goto 100041;

label 42;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop5)/2;
id sc3=(prop1 + prop2)/2;
id sc4=(-2 * p1 p3 + prop4 + prop5)/2;
id sc5=(-2 * p2 p4 + prop2 + prop3)/2;
goto 100042;

label 43;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 - 2 * p1 p4 + 2 * prop1 + prop3 + prop4 + 2 * s34)/2;
id sc3=(prop1 + prop2)/2;
id sc4=(prop4 + prop5 + s34)/2;
id sc5=(prop1 + prop5)/2;
goto 100043;

label 44;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 - 2 * p1 p4 + 2 * prop1 + prop3 + prop4 + 2 * s34)/2;
id sc3=(prop1 + prop2)/2;
id sc4=(prop1 + prop5)/2;
id sc5=(prop4 + prop5 + s34)/2;
goto 100044;

label 45;
id sc1=(2 * prop1)/2;
id sc2=(2 * p1 p4 + prop4 + prop5)/2;
id sc3=(prop1 + prop2)/2;
id sc4=(2 * p1 p3 + 4 * p1 p4 - 2 * prop1 + prop3 + prop4 + s34)/2;
id sc5=(prop1 + prop5)/2;
goto 100045;

label 46;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop5)/2;
id sc3=(prop1 + prop2)/2;
id sc4=(2 * p1 p3 + 4 * p1 p4 - 2 * prop1 + prop3 + prop4 + s34)/2;
id sc5=(-2 * p1 p4 + prop4 + prop5)/2;
goto 100046;

label 47;
id sc1=(2 * prop1)/2;
id sc2=(2 * p1 p3 + prop4 + prop5)/2;
id sc3=(prop1 + prop2)/2;
id sc4=(prop1 + prop5)/2;
id sc5=(4 * p1 p3 + 2 * p1 p4 - 2 * prop1 + prop3 + prop4 + s34)/2;
goto 100047;

label 48;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop5)/2;
id sc3=(prop1 + prop2)/2;
id sc4=(-2 * p1 p3 + prop4 + prop5)/2;
id sc5=(4 * p1 p3 + 2 * p1 p4 - 2 * prop1 + prop3 + prop4 + s34)/2;
goto 100048;

label 49;
id sc1=(2 * prop1)/2;
id sc2=(2 * p1 p3 + prop2 + prop3)/2;
id sc3=(-4 * p1 p3 + 2 * prop1 + prop3 + prop4 + s12 + s23)/2;
id sc4=(prop1 + prop2)/2;
id sc5=(2 * p1 p4 + 2 * p2 p4 + prop4 + prop5 + s34)/2;
goto 100049;

label 50;
id sc1=(2 * prop1)/2;
id sc2=(2 * p1 p3 + prop2 + prop3)/2;
id sc3=(-4 * p1 p3 + 2 * prop1 + prop3 + prop4 + s12 + s23)/2;
id sc4=(prop1 + prop2)/2;
id sc5=(prop1 + prop5)/2;
goto 100050;

label 51;
id sc1=(2 * prop1)/2;
id sc2=(2 * p1 p3 + prop2 + prop3)/2;
id sc3=(-2 * p2 p4 + prop4 + prop5 + s12 + s23)/2;
id sc4=(prop1 + prop2)/2;
id sc5=(4 * p1 p3 + 2 * p1 p4 - 2 * prop1 + prop3 + prop4 + s34)/2;
goto 100051;

label 52;
id sc1=(2 * prop1)/2;
id sc2=(2 * p1 p3 + prop2 + prop3)/2;
id sc3=(prop1 + prop5)/2;
id sc4=(prop1 + prop2)/2;
id sc5=(4 * p1 p3 + 2 * p1 p4 - 2 * prop1 + prop3 + prop4 + s34)/2;
goto 100052;

label 53;
id sc1=(2 * prop1)/2;
id sc2=(2 * p1 p3 + prop2 + prop3)/2;
id sc3=(2 * p2 p4 + prop4 + prop5)/2;
id sc4=(prop1 + prop2)/2;
id sc5=(prop1 + prop5)/2;
goto 100053;

label 54;
id sc1=(2 * prop1)/2;
id sc2=(2 * p1 p3 + prop2 + prop3)/2;
id sc3=(prop1 + prop5)/2;
id sc4=(prop1 + prop2)/2;
id sc5=(-2 * p2 p4 + prop4 + prop5)/2;
goto 100054;

label 55;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 + 2 * prop1 + prop3 + prop4 + s12 + 2 * s23)/2;
id sc3=(prop2 + prop3 + s23)/2;
id sc4=(prop1 + prop2)/2;
id sc5=(2 * p1 p4 + 2 * p2 p4 + prop4 + prop5 + s34)/2;
goto 100055;

label 56;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 + 2 * prop1 + prop3 + prop4 + s12 + 2 * s23)/2;
id sc3=(prop2 + prop3 + s23)/2;
id sc4=(prop1 + prop2)/2;
id sc5=(prop1 + prop5)/2;
goto 100056;

label 57;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 - 2 * p1 p4 + prop4 + prop5 + s12)/2;
id sc3=(prop2 + prop3 + s23)/2;
id sc4=(prop1 + prop2)/2;
id sc5=(2 * p2 p4 - 2 * prop1 + prop3 + prop4 - 2 * s23 + s34)/2;
goto 100057;

label 58;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop5)/2;
id sc3=(prop2 + prop3 + s23)/2;
id sc4=(prop1 + prop2)/2;
id sc5=(2 * p2 p4 - 2 * prop1 + prop3 + prop4 - 2 * s23 + s34)/2;
goto 100058;

label 59;
id sc1=(2 * prop1)/2;
id sc2=(2 * p1 p4 + prop4 + prop5)/2;
id sc3=(prop2 + prop3 + s23)/2;
id sc4=(prop1 + prop2)/2;
id sc5=(prop1 + prop5)/2;
goto 100059;

label 60;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop5)/2;
id sc3=(prop2 + prop3 + s23)/2;
id sc4=(prop1 + prop2)/2;
id sc5=(-2 * p1 p4 + prop4 + prop5)/2;
goto 100060;

label 61;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 - 2 * p1 p4 + 2 * prop1 + prop3 + prop4 + 2 * s34)/2;
id sc3=(-2 * p2 p4 + prop4 + prop5 + s12 + s23)/2;
id sc4=(prop1 + prop2)/2;
id sc5=(prop2 + prop3 + s34)/2;
goto 100061;

label 62;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 - 2 * p1 p4 + 2 * prop1 + prop3 + prop4 + 2 * s34)/2;
id sc3=(prop1 + prop5)/2;
id sc4=(prop1 + prop2)/2;
id sc5=(prop2 + prop3 + s34)/2;
goto 100062;

label 63;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 - 2 * p1 p4 + prop4 + prop5 + s12)/2;
id sc3=(-2 * p2 p4 + 2 * prop1 + prop3 + prop4 + s23 + 2 * s34)/2;
id sc4=(prop1 + prop2)/2;
id sc5=(prop2 + prop3 + s34)/2;
goto 100063;

label 64;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop5)/2;
id sc3=(-2 * p2 p4 + 2 * prop1 + prop3 + prop4 + s23 + 2 * s34)/2;
id sc4=(prop1 + prop2)/2;
id sc5=(prop2 + prop3 + s34)/2;
goto 100064;

label 65;
id sc1=(2 * prop1)/2;
id sc2=(prop4 + prop5 + s12)/2;
id sc3=(prop1 + prop5)/2;
id sc4=(prop1 + prop2)/2;
id sc5=(prop2 + prop3 + s34)/2;
goto 100065;

label 66;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop5)/2;
id sc3=(prop4 + prop5 + s12)/2;
id sc4=(prop1 + prop2)/2;
id sc5=(prop2 + prop3 + s34)/2;
goto 100066;

label 67;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p4 - 4 * p2 p4 + 2 * prop1 + prop3 + prop4 + s12)/2;
id sc3=(2 * p2 p4 + prop4 + prop5)/2;
id sc4=(prop1 + prop2)/2;
id sc5=(prop1 + prop5)/2;
goto 100067;

label 68;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p4 - 4 * p2 p4 + 2 * prop1 + prop3 + prop4 + s12)/2;
id sc3=(prop1 + prop5)/2;
id sc4=(prop1 + prop2)/2;
id sc5=(-2 * p2 p4 + prop4 + prop5)/2;
goto 100068;

label 69;
id sc1=(2 * prop1)/2;
id sc2=(2 * p1 p4 + prop4 + prop5)/2;
id sc3=(-4 * p1 p4 - 2 * p2 p4 + 2 * prop1 + prop3 + prop4 + s12)/2;
id sc4=(prop1 + prop2)/2;
id sc5=(prop1 + prop5)/2;
goto 100069;

label 70;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop5)/2;
id sc3=(-4 * p1 p4 - 2 * p2 p4 + 2 * prop1 + prop3 + prop4 + s12)/2;
id sc4=(prop1 + prop2)/2;
id sc5=(-2 * p1 p4 + prop4 + prop5)/2;
goto 100070;

label 71;
id sc1=(2 * prop1)/2;
id sc2=(prop4 + prop5 + s12)/2;
id sc3=(prop1 + prop5)/2;
id sc4=(prop1 + prop2)/2;
id sc5=(2 * p1 p4 + 2 * p2 p4 - 2 * prop1 + prop3 + prop4 - 2 * s12)/2;
goto 100071;

label 72;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop5)/2;
id sc3=(prop4 + prop5 + s12)/2;
id sc4=(prop1 + prop2)/2;
id sc5=(2 * p1 p4 + 2 * p2 p4 - 2 * prop1 + prop3 + prop4 - 2 * s12)/2;
goto 100072;

label 73;
id sc1=(2 * prop1)/2;
id sc2=(2 * p1 p4 + prop2 + prop3)/2;
id sc3=(-4 * p1 p4 - 2 * p2 p4 + 2 * prop1 + prop3 + prop4 + s12)/2;
id sc4=(2 * p1 p3 + prop4 + prop5 + s23 + s34)/2;
id sc5=(prop1 + prop2)/2;
goto 100073;

label 74;
id sc1=(2 * prop1)/2;
id sc2=(2 * p1 p4 + prop2 + prop3)/2;
id sc3=(-4 * p1 p4 - 2 * p2 p4 + 2 * prop1 + prop3 + prop4 + s12)/2;
id sc4=(prop1 + prop5)/2;
id sc5=(prop1 + prop2)/2;
goto 100074;

label 75;
id sc1=(2 * prop1)/2;
id sc2=(2 * p1 p4 + prop2 + prop3)/2;
id sc3=(-2 * p2 p4 + prop4 + prop5 + s12 + s23)/2;
id sc4=(2 * p1 p3 + 4 * p1 p4 - 2 * prop1 + prop3 + prop4 + s34)/2;
id sc5=(prop1 + prop2)/2;
goto 100075;

label 76;
id sc1=(2 * prop1)/2;
id sc2=(2 * p1 p4 + prop2 + prop3)/2;
id sc3=(prop1 + prop5)/2;
id sc4=(2 * p1 p3 + 4 * p1 p4 - 2 * prop1 + prop3 + prop4 + s34)/2;
id sc5=(prop1 + prop2)/2;
goto 100076;

label 77;
id sc1=(2 * prop1)/2;
id sc2=(2 * p1 p4 + prop2 + prop3)/2;
id sc3=(prop4 + prop5 + s23)/2;
id sc4=(prop1 + prop5)/2;
id sc5=(prop1 + prop2)/2;
goto 100077;

label 78;
id sc1=(2 * prop1)/2;
id sc2=(2 * p1 p4 + prop2 + prop3)/2;
id sc3=(prop1 + prop5)/2;
id sc4=(prop4 + prop5 + s23)/2;
id sc5=(prop1 + prop2)/2;
goto 100078;

label 79;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p4 - 4 * p2 p4 + 2 * prop1 + prop3 + prop4 + s12)/2;
id sc3=(2 * p2 p4 + prop2 + prop3)/2;
id sc4=(2 * p1 p3 + prop4 + prop5 + s23 + s34)/2;
id sc5=(prop1 + prop2)/2;
goto 100079;

label 80;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p4 - 4 * p2 p4 + 2 * prop1 + prop3 + prop4 + s12)/2;
id sc3=(2 * p2 p4 + prop2 + prop3)/2;
id sc4=(prop1 + prop5)/2;
id sc5=(prop1 + prop2)/2;
goto 100080;

label 81;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 - 2 * p1 p4 + prop4 + prop5 + s12)/2;
id sc3=(2 * p2 p4 + prop2 + prop3)/2;
id sc4=(4 * p2 p4 - 2 * prop1 + prop3 + prop4 + s23 + s34)/2;
id sc5=(prop1 + prop2)/2;
goto 100081;

label 82;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop5)/2;
id sc3=(2 * p2 p4 + prop2 + prop3)/2;
id sc4=(4 * p2 p4 - 2 * prop1 + prop3 + prop4 + s23 + s34)/2;
id sc5=(prop1 + prop2)/2;
goto 100082;

label 83;
id sc1=(2 * prop1)/2;
id sc2=(2 * p1 p3 + prop4 + prop5)/2;
id sc3=(2 * p2 p4 + prop2 + prop3)/2;
id sc4=(prop1 + prop5)/2;
id sc5=(prop1 + prop2)/2;
goto 100083;

label 84;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop5)/2;
id sc3=(2 * p2 p4 + prop2 + prop3)/2;
id sc4=(-2 * p1 p3 + prop4 + prop5)/2;
id sc5=(prop1 + prop2)/2;
goto 100084;

label 85;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 - 2 * p1 p4 + 2 * prop1 + prop3 + prop4 + 2 * s34)/2;
id sc3=(-2 * p2 p4 + prop4 + prop5 + s12 + s23)/2;
id sc4=(prop2 + prop3 + s34)/2;
id sc5=(prop1 + prop2)/2;
goto 100085;

label 86;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 - 2 * p1 p4 + 2 * prop1 + prop3 + prop4 + 2 * s34)/2;
id sc3=(prop1 + prop5)/2;
id sc4=(prop2 + prop3 + s34)/2;
id sc5=(prop1 + prop2)/2;
goto 100086;

label 87;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 - 2 * p1 p4 + prop4 + prop5 + s12)/2;
id sc3=(-2 * p2 p4 + 2 * prop1 + prop3 + prop4 + s23 + 2 * s34)/2;
id sc4=(prop2 + prop3 + s34)/2;
id sc5=(prop1 + prop2)/2;
goto 100087;

label 88;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop5)/2;
id sc3=(-2 * p2 p4 + 2 * prop1 + prop3 + prop4 + s23 + 2 * s34)/2;
id sc4=(prop2 + prop3 + s34)/2;
id sc5=(prop1 + prop2)/2;
goto 100088;

label 89;
id sc1=(2 * prop1)/2;
id sc2=(prop4 + prop5 + s12)/2;
id sc3=(prop1 + prop5)/2;
id sc4=(prop2 + prop3 + s34)/2;
id sc5=(prop1 + prop2)/2;
goto 100089;

label 90;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop5)/2;
id sc3=(prop4 + prop5 + s12)/2;
id sc4=(prop2 + prop3 + s34)/2;
id sc5=(prop1 + prop2)/2;
goto 100090;

label 91;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 + 2 * prop1 + prop3 + prop4 + s12 + 2 * s23)/2;
id sc3=(prop4 + prop5 + s23)/2;
id sc4=(prop1 + prop5)/2;
id sc5=(prop1 + prop2)/2;
goto 100091;

label 92;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 + 2 * prop1 + prop3 + prop4 + s12 + 2 * s23)/2;
id sc3=(prop1 + prop5)/2;
id sc4=(prop4 + prop5 + s23)/2;
id sc5=(prop1 + prop2)/2;
goto 100092;

label 93;
id sc1=(2 * prop1)/2;
id sc2=(2 * p1 p3 + prop4 + prop5)/2;
id sc3=(-4 * p1 p3 + 2 * prop1 + prop3 + prop4 + s12 + s23)/2;
id sc4=(prop1 + prop5)/2;
id sc5=(prop1 + prop2)/2;
goto 100093;

label 94;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop5)/2;
id sc3=(-4 * p1 p3 + 2 * prop1 + prop3 + prop4 + s12 + s23)/2;
id sc4=(-2 * p1 p3 + prop4 + prop5)/2;
id sc5=(prop1 + prop2)/2;
goto 100094;

label 95;
id sc1=(2 * prop1)/2;
id sc2=(prop4 + prop5 + s12)/2;
id sc3=(prop1 + prop5)/2;
id sc4=(2 * p1 p3 - 2 * prop1 + prop3 + prop4 - 2 * s12 + s23)/2;
id sc5=(prop1 + prop2)/2;
goto 100095;

label 96;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop5)/2;
id sc3=(prop4 + prop5 + s12)/2;
id sc4=(2 * p1 p3 - 2 * prop1 + prop3 + prop4 - 2 * s12 + s23)/2;
id sc5=(prop1 + prop2)/2;
goto 100096;

label 97;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 - 2 * p1 p4 + prop2 + prop3 + s12)/2;
id sc3=(-2 * p2 p4 + 2 * prop1 + prop3 + prop4 + s23 + 2 * s34)/2;
id sc4=(prop4 + prop5 + s34)/2;
id sc5=(prop1 + prop5)/2;
goto 100097;

label 98;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 - 2 * p1 p4 + prop2 + prop3 + s12)/2;
id sc3=(-2 * p2 p4 + 2 * prop1 + prop3 + prop4 + s23 + 2 * s34)/2;
id sc4=(prop1 + prop5)/2;
id sc5=(prop4 + prop5 + s34)/2;
goto 100098;

label 99;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 - 2 * p1 p4 + prop2 + prop3 + s12)/2;
id sc3=(2 * p2 p4 + prop4 + prop5)/2;
id sc4=(4 * p2 p4 - 2 * prop1 + prop3 + prop4 + s23 + s34)/2;
id sc5=(prop1 + prop5)/2;
goto 100099;

label 100;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 - 2 * p1 p4 + prop2 + prop3 + s12)/2;
id sc3=(prop1 + prop5)/2;
id sc4=(4 * p2 p4 - 2 * prop1 + prop3 + prop4 + s23 + s34)/2;
id sc5=(-2 * p2 p4 + prop4 + prop5)/2;
goto 1000100;

label 101;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 - 2 * p1 p4 + prop2 + prop3 + s12)/2;
id sc3=(prop4 + prop5 + s23)/2;
id sc4=(prop1 + prop5)/2;
id sc5=(2 * p2 p4 - 2 * prop1 + prop3 + prop4 - 2 * s23 + s34)/2;
goto 1000101;

label 102;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 - 2 * p1 p4 + prop2 + prop3 + s12)/2;
id sc3=(prop1 + prop5)/2;
id sc4=(prop4 + prop5 + s23)/2;
id sc5=(2 * p2 p4 - 2 * prop1 + prop3 + prop4 - 2 * s23 + s34)/2;
goto 1000102;

label 103;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 - 2 * p1 p4 + 2 * prop1 + prop3 + prop4 + 2 * s34)/2;
id sc3=(-2 * p2 p4 + prop2 + prop3 + s12 + s23)/2;
id sc4=(prop4 + prop5 + s34)/2;
id sc5=(prop1 + prop5)/2;
goto 1000103;

label 104;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 - 2 * p1 p4 + 2 * prop1 + prop3 + prop4 + 2 * s34)/2;
id sc3=(-2 * p2 p4 + prop2 + prop3 + s12 + s23)/2;
id sc4=(prop1 + prop5)/2;
id sc5=(prop4 + prop5 + s34)/2;
goto 1000104;

label 105;
id sc1=(2 * prop1)/2;
id sc2=(2 * p1 p4 + prop4 + prop5)/2;
id sc3=(-2 * p2 p4 + prop2 + prop3 + s12 + s23)/2;
id sc4=(2 * p1 p3 + 4 * p1 p4 - 2 * prop1 + prop3 + prop4 + s34)/2;
id sc5=(prop1 + prop5)/2;
goto 1000105;

label 106;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop5)/2;
id sc3=(-2 * p2 p4 + prop2 + prop3 + s12 + s23)/2;
id sc4=(2 * p1 p3 + 4 * p1 p4 - 2 * prop1 + prop3 + prop4 + s34)/2;
id sc5=(-2 * p1 p4 + prop4 + prop5)/2;
goto 1000106;

label 107;
id sc1=(2 * prop1)/2;
id sc2=(2 * p1 p3 + prop4 + prop5)/2;
id sc3=(-2 * p2 p4 + prop2 + prop3 + s12 + s23)/2;
id sc4=(prop1 + prop5)/2;
id sc5=(4 * p1 p3 + 2 * p1 p4 - 2 * prop1 + prop3 + prop4 + s34)/2;
goto 1000107;

label 108;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop5)/2;
id sc3=(-2 * p2 p4 + prop2 + prop3 + s12 + s23)/2;
id sc4=(-2 * p1 p3 + prop4 + prop5)/2;
id sc5=(4 * p1 p3 + 2 * p1 p4 - 2 * prop1 + prop3 + prop4 + s34)/2;
goto 1000108;

label 109;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p4 - 4 * p2 p4 + 2 * prop1 + prop3 + prop4 + s12)/2;
id sc3=(2 * p2 p4 + prop4 + prop5)/2;
id sc4=(2 * p1 p3 + prop2 + prop3 + s23 + s34)/2;
id sc5=(prop1 + prop5)/2;
goto 1000109;

label 110;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p4 - 4 * p2 p4 + 2 * prop1 + prop3 + prop4 + s12)/2;
id sc3=(prop1 + prop5)/2;
id sc4=(2 * p1 p3 + prop2 + prop3 + s23 + s34)/2;
id sc5=(-2 * p2 p4 + prop4 + prop5)/2;
goto 1000110;

label 111;
id sc1=(2 * prop1)/2;
id sc2=(2 * p1 p4 + prop4 + prop5)/2;
id sc3=(-4 * p1 p4 - 2 * p2 p4 + 2 * prop1 + prop3 + prop4 + s12)/2;
id sc4=(2 * p1 p3 + prop2 + prop3 + s23 + s34)/2;
id sc5=(prop1 + prop5)/2;
goto 1000111;

label 112;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop5)/2;
id sc3=(-4 * p1 p4 - 2 * p2 p4 + 2 * prop1 + prop3 + prop4 + s12)/2;
id sc4=(2 * p1 p3 + prop2 + prop3 + s23 + s34)/2;
id sc5=(-2 * p1 p4 + prop4 + prop5)/2;
goto 1000112;

label 113;
id sc1=(2 * prop1)/2;
id sc2=(prop4 + prop5 + s12)/2;
id sc3=(prop1 + prop5)/2;
id sc4=(2 * p1 p3 + prop2 + prop3 + s23 + s34)/2;
id sc5=(2 * p1 p4 + 2 * p2 p4 - 2 * prop1 + prop3 + prop4 - 2 * s12)/2;
goto 1000113;

label 114;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop5)/2;
id sc3=(prop4 + prop5 + s12)/2;
id sc4=(2 * p1 p3 + prop2 + prop3 + s23 + s34)/2;
id sc5=(2 * p1 p4 + 2 * p2 p4 - 2 * prop1 + prop3 + prop4 - 2 * s12)/2;
goto 1000114;

label 115;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 + 2 * prop1 + prop3 + prop4 + s12 + 2 * s23)/2;
id sc3=(prop4 + prop5 + s23)/2;
id sc4=(prop1 + prop5)/2;
id sc5=(2 * p1 p4 + 2 * p2 p4 + prop2 + prop3 + s34)/2;
goto 1000115;

label 116;
id sc1=(2 * prop1)/2;
id sc2=(-2 * p1 p3 + 2 * prop1 + prop3 + prop4 + s12 + 2 * s23)/2;
id sc3=(prop1 + prop5)/2;
id sc4=(prop4 + prop5 + s23)/2;
id sc5=(2 * p1 p4 + 2 * p2 p4 + prop2 + prop3 + s34)/2;
goto 1000116;

label 117;
id sc1=(2 * prop1)/2;
id sc2=(2 * p1 p3 + prop4 + prop5)/2;
id sc3=(-4 * p1 p3 + 2 * prop1 + prop3 + prop4 + s12 + s23)/2;
id sc4=(prop1 + prop5)/2;
id sc5=(2 * p1 p4 + 2 * p2 p4 + prop2 + prop3 + s34)/2;
goto 1000117;

label 118;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop5)/2;
id sc3=(-4 * p1 p3 + 2 * prop1 + prop3 + prop4 + s12 + s23)/2;
id sc4=(-2 * p1 p3 + prop4 + prop5)/2;
id sc5=(2 * p1 p4 + 2 * p2 p4 + prop2 + prop3 + s34)/2;
goto 1000118;

label 119;
id sc1=(2 * prop1)/2;
id sc2=(prop4 + prop5 + s12)/2;
id sc3=(prop1 + prop5)/2;
id sc4=(2 * p1 p3 - 2 * prop1 + prop3 + prop4 - 2 * s12 + s23)/2;
id sc5=(2 * p1 p4 + 2 * p2 p4 + prop2 + prop3 + s34)/2;
goto 1000119;

label 120;
id sc1=(2 * prop1)/2;
id sc2=(prop1 + prop5)/2;
id sc3=(prop4 + prop5 + s12)/2;
id sc4=(2 * p1 p3 - 2 * prop1 + prop3 + prop4 - 2 * s12 + s23)/2;
id sc5=(2 * p1 p4 + 2 * p2 p4 + prop2 + prop3 + s34)/2;
goto 1000120;

