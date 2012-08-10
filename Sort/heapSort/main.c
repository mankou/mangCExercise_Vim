
#include	<stdlib.h>
#define N 6

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 *  create:21:59 2012-8-10
 *  lastmodify:
 *  author:mang
 *  version:1.0
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	void heapSort(int *,int);
	int a[N+1]={0,2,1,5,9,4,3};
	int i;
	for (i = 1; i <=N; i++) {
		printf("%d ",a[i]);
	}
	
	heapSort(a,N);

	printf("\nÕâÀïµ¹ÐòÊä³ö\n");
	for ( i = N; i >= 1; i -= 1 ) {
		printf("%d ",a[i]);
	}

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
