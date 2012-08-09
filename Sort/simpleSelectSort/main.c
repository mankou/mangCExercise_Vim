
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
	int a[N]={2,6,3,5,1,4};
	
	printf("simpleSelectSort 示例\n");
	printf("排序前\n");
	for (i = 0; i < N; i++) {
		printf("%d\n",a[i]);
	}
	simepleSelectSort(a,N);
	printf("排序后\n");
	for (i = 0; i < N; i++) {
		printf("%d\n",a[i]);
	}
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
