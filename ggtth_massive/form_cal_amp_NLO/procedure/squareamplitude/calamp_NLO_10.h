#procedure calamponebyone

#call findnf

.sort

#do i=1,8
    Skip;
    NSkip loop0diagram`i';

    #call complexconjugate
    .sort
#enddo

#do i=1,140
    #do j=1,8
        
        #call squareamplitude(loop0diagram`j',loop1diagram`i',Mat10o`i'o`j')
	.sort

    #enddo
#enddo

#endprocedure
