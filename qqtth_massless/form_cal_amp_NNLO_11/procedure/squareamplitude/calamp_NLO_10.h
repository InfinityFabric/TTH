#procedure calamponebyone

#call findnf

.sort

#do i=1,31
    Skip;
*    NSkip loop1diagram`i';
    Local Cloop1diagram`i'=loop1diagram`i';
    Multiply replace_(k1,k2);

    #call complexconjugate
    .sort
#enddo

#do i=1,31
    #do j=1,31
        
        #call squareamplitude(Cloop1diagram`j',loop1diagram`i',Mat11o`i'o`j')
	.sort

    #enddo
#enddo

#endprocedure
