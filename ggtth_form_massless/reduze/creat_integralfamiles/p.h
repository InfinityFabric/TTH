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
    id q=-(p1+p2+p3+p4);
    id p3=-p3;
    id p4=-p4;
    
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

#endprocedure
