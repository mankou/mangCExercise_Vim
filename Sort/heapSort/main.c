
#include	<stdlib.h>
#define N 6

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  堆排序示例主调函数
 *  create:21:59 2012-8-10
 *  lastmodify:
 *  author:mang
 *  version:1.0
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	void heapSort(int *,int);                   /* 堆排序函数声明 */
	int a[N+1]={0,2,1,5,9,4,3};                 /* 数组从a[1]开始存储记录，因为堆用数组表示从a[1]开始存储好计算其左右孩子结点 */
	int i;                                      /* 循环变量 */
	printf("排序前\n");
	for (i = 1; i <=N; i++) {
		printf("%d ",a[i]);
	}
	
	heapSort(a,N);

/* 因为这里的堆定义为最小值在上面，所以每次把第一个与最后一个互换后，最小值就在最后。所以堆排序结束后是倒序。但也没有关系，因为数组是随机访问方式。正序、倒序都是一个循环的事 
 */
	printf("\n\n排序后,这里倒序输出\n");
	for ( i = N; i >= 1; i -= 1 ) {
		printf("%d ",a[i]);
	}

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
