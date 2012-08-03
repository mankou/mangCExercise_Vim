
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
	int a[N]={8,5,1,3,7,6};
	int b[N]={0};
	int k;
	int i,m;
	
	printf("线性选择示例\n");
	printf("输入k:");
	scanf("%d",&k);

	printf("数组序列如下：\n");
	for (i = 0; i < N; i++) {
		printf("%d ",a[i]);
	}
	for (i = 0; i <N; i++) {
			b[i]=a[i];
		}
	m=linearSelect(b,0,N-1,k);
	printf("\n经过线性选择后m=%d\n",m);
	printf("\n第%d小数为%d",k,b[m]);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
