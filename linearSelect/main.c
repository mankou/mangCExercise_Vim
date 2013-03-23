
#include	<stdlib.h>
#include <stdio.h>
#define N 6                                     /* 数组元素个数 */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description: 线性选择程序示例的主调函数 
 *  author:mang
 *  create:00:16 2012-8-4
 *  last modify:00:17 2012-8-4
 *  version:1.0
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	int linearSelect(int *a,int h,int e,int k); /* 线性选择函数 */
	int a[N]={2,5,1,3,7,6};
	int k;                                      /* 线性选择中第k小值 */
	int i,m;                                    /* 临时变量用于循环或接收函数返回值 */
	
	printf("线性选择示例,本程序将帮助您找第k小的值\n");
	printf("输入k:");
	scanf("%d",&k);

	printf("\n数组初始序列如下：\n");
	for (i = 0; i < N; i++) {
		printf("%d ",a[i]);
	}
	printf("\n");

	if (k<N) {
		m=linearSelect(a,0,N-1,k);
		printf("\n第%d小数为%d\n",k,a[m]);
	}
	else {
		printf("输入错误\n");
	}

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
