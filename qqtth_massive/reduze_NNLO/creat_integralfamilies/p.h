#procedure permutation

.sort
#write <integralfamilies.yaml>"integralfamilies:\n"

.sort

#do i=1,1
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

    #do k={6,5,4,3,2,1}
    
    #$in=fac_(11)/fac_(11-`k')/fac_(`k');

        #do j=1,$in
    
            Local a1=i`k'o`j'set[1];
            Local a2=i`k'o`j'set[2];
            Local a3=i`k'o`j'set[3];
            Local a4=i`k'o`j'set[4];
            Local a5=i`k'o`j'set[5];
            Local a6=i`k'o`j'set[6];
            Local a7=i`k'o`j'set[7];
            Local a8=i`k'o`j'set[8];
            Local a9=i`k'o`j'set[9];
            Local a10=i`k'o`j'set[10];
            Local a11=i`k'o`j'set[11];
        
            id m=mt^2;
        
            Print a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11;
            .sort
        
            #append <integralfamilies.yaml>
            #write <integralfamilies.yaml>"  - name: F1m_%s_%s",`k',`j'
            #write <integralfamilies.yaml>"    loop_momenta: [k1,k2]"
            #write <integralfamilies.yaml>"    propagators:"
            #write <integralfamilies.yaml>"      - [\"%E\",%E]",s1,a1
            #write <integralfamilies.yaml>"      - [\"%E\",%E]",s2,a2
            #write <integralfamilies.yaml>"      - [\"%E\",%E]",s3,a3
            #write <integralfamilies.yaml>"      - [\"%E\",%E]",s4,a4
            #write <integralfamilies.yaml>"      - [\"%E\",%E]",s5,a5
            #write <integralfamilies.yaml>"      - [\"%E\",%E]",s6,a6
            #write <integralfamilies.yaml>"      - [\"%E\",%E]",s7,a7
            #write <integralfamilies.yaml>"      - [\"%E\",%E]",s8,a8
            #write <integralfamilies.yaml>"      - [\"%E\",%E]",s9,a9
            #write <integralfamilies.yaml>"      - [\"%E\",%E]",s10,a10
            #write <integralfamilies.yaml>"      - [\"%E\",%E]\n",s11,a11
            .sort
    
        #enddo
    #enddo

#enddo

#do i=1,1
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

    #do k={6,5,4,3,2,1}
    
    #$in=fac_(11)/fac_(11-`k')/fac_(`k');

        #do j=1,$in
    
            Local a1=i`k'o`j'set[1];
            Local a2=i`k'o`j'set[2];
            Local a3=i`k'o`j'set[3];
            Local a4=i`k'o`j'set[4];
            Local a5=i`k'o`j'set[5];
            Local a6=i`k'o`j'set[6];
            Local a7=i`k'o`j'set[7];
            Local a8=i`k'o`j'set[8];
            Local a9=i`k'o`j'set[9];
            Local a10=i`k'o`j'set[10];
            Local a11=i`k'o`j'set[11];
        
            id m=mt^2;
        
            Print a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11;
            .sort
        
            #append <integralfamilies.yaml>
            #write <integralfamilies.yaml>"  - name: F2m_%s_%s",`k',`j'
            #write <integralfamilies.yaml>"    loop_momenta: [k1,k2]"
            #write <integralfamilies.yaml>"    propagators:"
            #write <integralfamilies.yaml>"      - [\"%E\",%E]",s1,a1
            #write <integralfamilies.yaml>"      - [\"%E\",%E]",s2,a2
            #write <integralfamilies.yaml>"      - [\"%E\",%E]",s3,a3
            #write <integralfamilies.yaml>"      - [\"%E\",%E]",s4,a4
            #write <integralfamilies.yaml>"      - [\"%E\",%E]",s5,a5
            #write <integralfamilies.yaml>"      - [\"%E\",%E]",s6,a6
            #write <integralfamilies.yaml>"      - [\"%E\",%E]",s7,a7
            #write <integralfamilies.yaml>"      - [\"%E\",%E]",s8,a8
            #write <integralfamilies.yaml>"      - [\"%E\",%E]",s9,a9
            #write <integralfamilies.yaml>"      - [\"%E\",%E]",s10,a10
            #write <integralfamilies.yaml>"      - [\"%E\",%E]\n",s11,a11
            .sort
    
        #enddo
    #enddo

#enddo

#endprocedure
