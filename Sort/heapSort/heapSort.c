
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  heapSort
 *  Description:  
 * =====================================================================================
 */
	void
heapSort ( int *a,int n)
{
	createHeap(int *a,int n);


	for ( i = n; i >= 1; i -= 1 ) {
		t=a[1];a[1]=a[i];a[i]=t;
		sift(a,1,i-1);
	}
	return ;
}		/* -----  end of function heapSort  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  createHeap
 *  Description:  
 *  create:22:03 2012-8-10
 *  lastmodify:
 *  author:
 *  version:
 * =====================================================================================
 */
	void
createHeap ( int *a,int n)
{
	int i,j,t;

	for ( int i = n/2; i >= 1; i -= 1 ) {       /* 注意这里n/2用到了自动类型转换 */
		j=2*i;
		
		j=a[j+1]<a[j] ? j+1 : j;

		if(a[i]<a[j]){
			t=a[i];a[i]=a[j];a[j]=t;
		}
	}
	return;
	/* -----  end of function createHeap  ----- */
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  sift
 *  Description:  
 * =====================================================================================
 */
	void
sift ( int *a,int k,int m)
{
	j=2*k;
	t=a[k];
	finish=0;
	while (j<=m && !finish) {
		j=a[j+1]<a[j] ? j+1 : j;
		if (t<a[j]) {
			finish=1;
		}
		else {
			a[k]=a[j];
			k=j;
			j=2*k;
		}
	}
	return; 
}		/* -----  end of function sift  ----- */
