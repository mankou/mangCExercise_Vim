
#include	<stdlib.h>
#include <stdio.h>
#define N 5                                     /* 数组元素个数 */
#define outputEveryPass                         /* 如果定义该宏则输出中间结果，本来是要加到quickSort.c文件中去的，但发现加进去后每一次调用该函数都输出一遍，所以加到函数外面了 */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:用来调用快速排序函数的主调函数  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{   
	void quickSort(int *,int,int);              /* 快速排序 */
	int a[N]={3,7,1,6,2};
	int i;

	printf("quickSort示例\n");
	printf("排序前\n");
	for ( i = 0; i < N; i += 1 ) {
		printf("%d ",a[i]);
	}

#ifdef outputEveryPass
	printf("\n这里将输出排序中间结果\n");
#endif
	quickSort(a,0,N-1);                         /* 快速排序 */

	printf("\n排序后\n");
	for ( i = 0; i < N; i += 1 ) {
		printf("%d ",a[i]);
	}
	getchar();
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
