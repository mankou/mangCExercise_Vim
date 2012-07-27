
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  quickSort
 *  Description:  
 * =====================================================================================
 */
	void
quickSort ( int *a,int h,int e)
{
	int m;
	if(h<e){
		m=quickSortPass(a,h,e);
		quickSort(a,h,m);
		quickSort(a,m+1,e);
	}
	return ;
}		/* -----  end of function quickSort  ----- */



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  quickSortPass
 *  Description:  
 * =====================================================================================
 */
	int
quickSortPass (int *a,int h,int e)
{
	int i,j,t;
	i=h;j=e+1;
	t=a[h];
	
	
	while ( i<j ) {
		
		while ( i<j&&a[--j]>a[i] )
			;
		a[i]=a[j];

		
		while ( i<j&&a[++i]<a[j] )
			;
		a[j]=a[i];
	}
	a[j]=t;
	return i;
}		/* -----  end of function quickSortPass  ----- */
