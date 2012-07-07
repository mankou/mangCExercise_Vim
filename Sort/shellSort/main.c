#include <stdio.h>
#include	<stdlib.h>
# define N 5

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description: 调用希尔排序 函数的主函数 
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
//	shellSort(int *，int);
	int a[N+1]={0,1,8,9,12,5};
	int i=0;
	printf("希而排序示例：\n");
	printf("原始数组：\n");
	for(i=1;i<N;i++)
		printf("%d ",a[i]);
	
//	shellSort(a,N)                              /* 希尔排序 */
	printf("\n希而排序后结果：\n");
	for(i=1;i<N;i++)
		printf("%d ",a[i]);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
