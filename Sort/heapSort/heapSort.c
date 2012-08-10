#define outputEveryPass
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  heapSort
 *  Description:  
 * =====================================================================================
 */
	void
heapSort ( int *a,int n)
{
	void createHeap(int *a,int n);
	void sift ( int *a,int k,int m);
	int i,t;

	createHeap(a,n);
#ifdef outputEveryPass
	printf("\n������ѽ��\n");
	for (i = 1; i <=n; i++) {
			printf("%d ",a[i]);
	}
#endif

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
	printf("/n�������n/2%d",n/2);
	for ( i = n/2; i >= 1; i -= 1 ) {       /* ע������n/2�õ����Զ�����ת�� */
		j=2*i;
		
		if (j+1<=n) {
			j=a[j+1]<a[j] ? j+1 : j;
		}

		if(a[i]>a[j]){
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
	int j,t,finish;


	j=2*k;
	t=a[k];
	finish=0;
//��������д��j+1<=m ����������Ҫ�ж�j+1ҪС���½硣��ѭ�������ʹ����a[j+k]����ʽ��Ӧ���ж�j+k�Ƿ�Խ�磬����j�Ƿ�Խ��
	while (j+1<=m && !finish) {
/*˵������Ϊʲô�����ж�Խ�� 
 */
		j=a[j+1]<a[j] ? j+1 : j;
		if (t<a[j]) {
			finish=1;
		}
		else {
			a[k]=a[j];
			k=j;
			j=2*k;
		}
	a[k]=t;
	}
	return; 
}		/* -----  end of function sift  ----- */
