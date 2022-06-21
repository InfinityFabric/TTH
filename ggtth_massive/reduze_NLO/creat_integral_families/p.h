#procedure permutation

.sort
#write <integralfamilies.yaml>"integralfamilies:\n"

.sort

#do i=1,120
    Local s1=g1;
    Local s2=g2;
    Local s3=g3;
    Local s4=g4;
    Local s5=g5;

    .sort

    Skip;
    NSkip s1,s2,s3,s4,s5;
    id p?i1set?i`i'set=p;
    id q=-(p1+p2+p3+p4);
    id p3=-p3;
    id p4=-p4;

    .sort
    #do k={4,3,2,1,0}
    
    #$in=fac_(5)/fac_(5-`k')/fac_(`k');

        #do j=1,$in
    
            Local a1=j`k'`j'set[1];
            Local a2=j`k'`j'set[2];
            Local a3=j`k'`j'set[3];
            Local a4=j`k'`j'set[4];
            Local a5=j`k'`j'set[5];
        
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
