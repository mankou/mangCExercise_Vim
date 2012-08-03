#define N 6
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  linearSelect
 *  Description:  
 * =====================================================================================
 */
	int	
linearSelect ( int *a,int h,int e,int k)
{
	int m,d;
	int i;
//	if(h==e) return h;
	printf("\n在a[%d]与a[%d]之间找第%d小",h,e,k);
	for (i = h; i <= e; i++) {
		printf("%d ",a[i]);
	}
	m=quickSortPass(a,h,e);
	printf("\n");
	for (i = 0; i < N; i++) {
		printf("%d ",a[i]);
	}
	printf("\n此时m=%d\n",m);
	d=m-h+1;
	if(k==d) {return m;}
	else if(k<d) linearSelect(a,h,m,k);
	else if(k>d) linearSelect(a,m+1,e,k-d);
	
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
	i=h;j=e+1;
	t=a[i];
	while(i<j){
		while(i<j&&a[--j]>t)
			;
		a[i]=a[j];
		while (i<j&&a[++i]<t)
			;
		a[j]=a[i];
	}
	a[i]=t;
	return i;
}		/* -----  end of function quickSortPass  ----- */
