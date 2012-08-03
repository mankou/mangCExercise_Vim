
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  linearSelect
 *  Description:  
 * =====================================================================================
 */
	int	
linearSelect ( int *a,int h,int e,int k)
{
	if(h==e) return a[h];
	m=quickSortPass(a,h,e);
	d=m-h+1;

	if(k==d) {return m;}
	else if(k<d) linearSelect(a,h,m,k);
	else if(k>d) linearSelect(a,m+1,e,m-k);
	
	return m;
}		/* -----  end of function linearSelect  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  quickSortPass
 *  Description:  
 * =====================================================================================
 */
	int
quickSortPass ( int *a,int h,int e)
{
	int i,j,t;
	i=h;j=e+1
	t=a[i]
	while(i<j){
		while(i<j&&a[--j]>t)
			;
		a[i]=a[j];
		while (i<j&&a[++i]>t) {
			;
			}
		a[j]=a[i];
	}

	return i;
}		/* -----  end of function quickSortPass  ----- */