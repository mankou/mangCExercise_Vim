
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  simpleSelectSort
 *  Description:  
 * =====================================================================================
 */
	void
simpleSelectSort (int *a,int n)
{
	int i;
	for (i = 0; i < n; i++) {
		simpleSelectSortPass(a,i,n);
	}
	return; 
}		/* -----  end of function simpleSelectSort  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  simpleSelectSortPass
 *  Description:  
 * =====================================================================================
 */
	void
simpleSelectSortPass (int *a,int i,int n)
{
	int j;
	int k,t;

	k=i;
	for ( j = i; j < n; j += 1 ) {
		if(a[j]<a[k]) {k=j;}
	}
	if(i!=k){
		t=a[i];
		a[i]=a[k];
		a[k]=t;
	}
	return; 
}		/* -----  end of function simpleSelectSortPass  ----- */
