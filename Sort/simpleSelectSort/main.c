
#include	<stdlib.h>
#define N 6                                     /* 定义数组元素个数 */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  简单选择排序示例 主调函数
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	void simpleSelectSort(int*,int);            /*简单选择排序  */
	int i;
	int a[N]={2,6,3,5,1,4};

	
	printf("simpleSelectSort 示例\n");
	printf("排序前\n");
	for (i = 0; i < N; i++) {
		printf("%d ",a[i]);
	}
	printf("\n");

	simpleSelectSort(a,N);                      /* 简单选择排序 */

	printf("\n\n排序后\n");
	for (i = 0; i < N; i++) {
		printf("%d ",a[i]);
	}
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
