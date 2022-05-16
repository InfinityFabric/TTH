#procedure permutation

.sort
#write <integralfamilies.yaml>"integralfamilies:\n"

* topology 1

.sort

#do i=1,120
    Local s1=f1;
    Local s2=f2;
    Local s3=f3;
    Local s4=f4;
    Local s5=f5;

    .sort

    Skip;
    NSkip s1,s2,s3,s4,s5;

    id p?i1set?i`i'set=p;
    id q=p1+p2-p3-p4;
    
    .sort
     
    #append <integralfamilies.yaml>
    #write <integralfamilies.yaml>"  - name: pentagon%s",`i'
    #write <integralfamilies.yaml>"    loop_momenta: [k1]"
    #write <integralfamilies.yaml>"    propagators:"
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s1
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s2
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s3
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s4
    #write <integralfamilies.yaml>"      - [\"%E\",0]\n",s5
    .sort
#enddo

* topology 2

.sort

#do i=1,120
    Local s1=g1;
    Local s2=g2;
    Local s3=g3;
    Local s4=g4;
    Local s5=g5;
    Local s6=g6;
    Local s7=g7;
    Local s8=g8;
    Local s9=g9;
    Local s10=g10;
    Local s11=g11;

    .sort

    Skip;
    NSkip s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11;

    id p?i1set?i`i'set=p;
    id q=p1+p2-p3-p4;

    .sort

    #append <integralfamilies.yaml>
    #write <integralfamilies.yaml>"  - name: pentagonbox%s",`i'
    #write <integralfamilies.yaml>"    loop_momenta: [k1,k2]"
    #write <integralfamilies.yaml>"    propagators:"
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s1
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s2
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s3
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s4
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s5
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s6
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s7
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s8
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s9
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s10
    #write <integralfamilies.yaml>"      - [\"%E\",0]\n",s11
    .sort
#enddo

* topology 3

.sort

#do i=1,120
    Local s1=h1;
    Local s2=h2;
    Local s3=h3;
    Local s4=h4;
    Local s5=h5;
    Local s6=h6;
    Local s7=h7;
    Local s8=h8;
    Local s9=h9;
    Local s10=h10;
    Local s11=h11;

    .sort

    Skip;
    NSkip s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11;

    id p?i1set?i`i'set=p;
    id q=p1+p2-p3-p4;

    .sort

    #append <integralfamilies.yaml>
    #write <integralfamilies.yaml>"  - name: hexagonbox%s",`i'
    #write <integralfamilies.yaml>"    loop_momenta: [k1,k2]"
    #write <integralfamilies.yaml>"    propagators:"
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s1
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s2
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s3
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s4
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s5
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s6
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s7
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s8
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s9
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s10
    #write <integralfamilies.yaml>"      - [\"%E\",0]\n",s11
    .sort
#enddo

* topology 4

.sort

#do i=1,120
    Local s1=e1;
    Local s2=e2;
    Local s3=e3;
    Local s4=e4;
    Local s5=e5;
    Local s6=e6;
    Local s7=e7;
    Local s8=e8;
    Local s9=e9;
    Local s10=e10;
    Local s11=e11;

    .sort

    Skip;
    NSkip s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11;

    id p?i1set?i`i'set=p;
    id q=p1+p2-p3-p4;

    .sort

    #append <integralfamilies.yaml>
    #write <integralfamilies.yaml>"  - name: doublepentagon%s",`i'
    #write <integralfamilies.yaml>"    loop_momenta: [k1,k2]"
    #write <integralfamilies.yaml>"    propagators:"
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s1
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s2
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s3
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s4
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s5
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s6
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s7
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s8
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s9
    #write <integralfamilies.yaml>"      - [\"%E\",0]",s10
    #write <integralfamilies.yaml>"      - [\"%E\",0]\n",s11
    .sort
#enddo

#endprocedure
