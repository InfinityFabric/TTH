#procedure calamponebyone

#call findnf

.sort

#do i=1,2
    Skip;
    NSkip loop0diagram`i';

    #call complexconjugate
    .sort
#enddo

#do i=1,31
    #do j=1,2
        
        #call squareamplitude(loop0diagram`j',loop1diagram`i',Mat10o`i'o`j')
	.sort

    #enddo
#enddo

#endprocedure
