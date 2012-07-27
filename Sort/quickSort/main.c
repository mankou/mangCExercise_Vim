
#include	<stdlib.h>
#include <stdio.h>
#define N 5

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{   
	void quickSort(int *,int,int);
	int a[N]={3,7,1,2,6};
	int i;

	printf("quickSort æ¿˝\n");
	printf("≈≈–Ú«∞\n");
	for ( i = 0; i < N; i += 1 ) {
		printf("%d ",a[i]);
	}
	quickSort(a,0,N-1);

	printf("\n≈≈–Ú∫Û\n");
	for ( i = 0; i < N; i += 1 ) {
		printf("%d ",a[i]);
	}
	getchar();
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
