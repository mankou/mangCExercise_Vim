
#include	<stdlib.h>
#define N 6

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	void simpleSelectSort(int*,int);
	int i;
	int a[N]={2,6,3,5,1,4};

	
	printf("simpleSelectSort ʾ��\n");
	printf("����ǰ\n");
	for (i = 0; i < N; i++) {
		printf("%d ",a[i]);
	}
	simpleSelectSort(a,N);
	printf("�����\n");
	for (i = 0; i < N; i++) {
		printf("%d ",a[i]);
	}
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
