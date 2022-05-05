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

    .sort

    #do k={3,2,1,0}
    
    #$in=fac_(5)/fac_(5-`k')/fac_(`k');

        #do j=1,$in
    
            Local a1=i`k'`j'set[1];
            Local a2=i`k'`j'set[2];
            Local a3=i`k'`j'set[3];
            Local a4=i`k'`j'set[4];
            Local a5=i`k'`j'set[5];
        
            id m=mt^2;
        
            Print a1,a2,a3,a4,a5;
            .sort
        
            #append <integralfamilies.yaml>
            #write <integralfamilies.yaml>"  - name: pentagon%s_%s_%s",`i',`k',`j'
            #write <integralfamilies.yaml>"    loop_momenta: [k1]"
            #write <integralfamilies.yaml>"    propagators:"
            #write <integralfamilies.yaml>"      - [\"%E\",%E]",s1,a1
            #write <integralfamilies.yaml>"      - [\"%E\",%E]",s2,a2
            #write <integralfamilies.yaml>"      - [\"%E\",%E]",s3,a3
            #write <integralfamilies.yaml>"      - [\"%E\",%E]",s4,a4
            #write <integralfamilies.yaml>"      - [\"%E\",%E]\n",s5,a5
            .sort
    
        #enddo
    #enddo

#enddo

#endprocedure
