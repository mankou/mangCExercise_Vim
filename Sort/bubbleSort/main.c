/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  主函数用于调用冒泡排序函数
 *  author:mang
 *  create:21:26 2012-7-18
 *  last modify:21:26 2012-7-18
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#define N 5                                     /* 数组个数 */

	int
main ( int argc, char *argv[] )
{
	void bubbleSort(int *,int);
	int i;
	int a[N+1]={7,2,1,6,12};
	
	printf("bubble sort 示例\n");
	printf("排序前\n");	
	for(i=0;i<N;i++)
	{
		printf("%d ",a[i]);
	}
	putchar('\n'); putchar('\n');

	bubbleSort(a,N);                            /*冒泡排序  */

	printf("\n\n排序后\n");
	for(i=0;i<N;i++)
	{
		printf("%d ",a[i]);
	}
	getchar();

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
