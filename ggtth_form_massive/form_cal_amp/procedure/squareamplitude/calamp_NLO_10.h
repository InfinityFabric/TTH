#procedure calamponebyone

.sort

#do i=1,8
    Skip;
    NSkip loop0diagram`i';

    #call complexconjugate
    .sort
#enddo

#do i=1,134
    #do j=1,8
        
        #call squareamplitude(loop0diagram`j',loop1diagram`i',Mat10o`i'o`j')
        Bracket basis1,basis2,Basis1,Basis2,basis3,Basis3;
        Print Mat10o`i'o`j';
	.sort

    #enddo
#enddo

#endprocedure
