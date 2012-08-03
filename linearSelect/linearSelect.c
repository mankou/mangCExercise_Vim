#define N 6
#define outpurtIntermediate                     /* �Ƿ���b���м��� */
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
	if(h==e) return h;
#ifdef outpurtIntermediate
	printf("\n��a[%d]��a[%d]֮��",h,e);
	for (i = h; i <= e; i++) {
		printf("%d ",a[i]);
	}
	printf("�ҵ�%dС\n",k);
#endif

	m=quickSortPass(a,h,e);

#ifdef outpurtIntermediate
	printf("����һ�˿����������Ϊ:\n");
	for (i = 0; i < N; i++) {
		printf("%d ",a[i]);
	}
	printf("\n��ʱquickSortPass����ֵm=%d\n",m);
#endif

	d=m-h+1;
	if(k==d) {return m;}
	else if(k<d) return linearSelect(a,h,m,k);
	else if(k>d) return linearSelect(a,m+1,e,k-d);
	
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
