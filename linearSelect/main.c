
#include	<stdlib.h>
#include <stdio.h>
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
	int linearSelect(int *a,int h,int e,int k);
	int a[N]={2,5,1,3,7,6};
	int k;
	int i,m;
	
	printf("线性选择示例\n");
	printf("输入k");
	scanf("%d",&k);

	for (i = 0; i < N; i++) {
		printf("%d ",a[i]);
	}

	linearSelect(a,0,N-1,k);
	printf("第%d小数为%d",k,a[m]);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
