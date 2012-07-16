#include <stdio.h>
#include	<stdlib.h>
# define N 5                                    /*代表数组记录个数  */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description: 调用希尔排序 函数的主函数 
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	void shellSort(int * a,int n);
	int a[N+1]={0,13,10,9,12,5};                /* a[0]不存储数据，用于监督哨 */
	int i=0;
	printf("希而排序示例：\n");
	printf("原始数组：\n");
	for(i=1;i<=N;i++)
		printf("%d ",a[i]);
	
	shellSort(a,N);                              /* 希尔排序 */
	printf("\n希而排序后结果：\n");
	for(i=1;i<=N;i++)
		printf("%d ",a[i]);

	getchar();getchar();
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
