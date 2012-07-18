/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  bubbleSort
 *  Description:  冒泡排序主函数
 *  参数说明：　　int *a　指向数组
 *  　　　　　　　int n　 数组个数
 *  其它说明：数组元素从a[0]开始
 *  create:21:26 2012-7-18
 *  last modify:21:26 2012-7-18
 *　authore:mang
 * =====================================================================================
 */
# include <stdio.h>
# define outputEveryPass //定义是否输出每趟排序中间结果，把该行注释掉则不显示每趟中间结果
	void
bubbleSort (int *a, int n)
{
	int i,flag=0;
	int j=0;
/* 
 * 进行n趟冒泡排序，i=5表示进行第5趟排序
 * flag的用意：当某一趟排序中没有进行过交换记录的操作，则说明数组已经正序了，不用再排了，直接返回就ok。这里约定当一趟排序中没有交换过记录　则flag=0，否则等于1;
 */
	for(i=1;i<n;i++)
	{
		flag=bubbleSortPass(a,n,i);
		if(flag==0) return;
		
/*
 * 输出中间排序结果
 */
#ifdef outputEveryPass
		printf("\n第%d趟排序:\n",i);
		for ( j = 0; j < n; j += 1 ) {
			printf("%d ",a[j]);
		}
#endif

	}
	return;
}		/* -----  end of function bubbleSort  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  bubbleSortPass
 *  Description:  冒泡排序的一趟
 *  参数说明：　　int *a　指向数组
 *  　　　　　　　int n   数组个数
 *  　　　　　　　int i　 目前正在进行第i趟排序
 *  返回值：      int flag 　如果一趟排序过程中交换过记录则返回1,否则返回0
 *  create:21:27 2012-7-18
 *  last modify:21:27 2012-7-18
 *  authore:mang
 * =====================================================================================
 */
	int	
bubbleSortPass (int *a, int n, int i)
{
	int j,t,flag=0;
	for(j=0;j<n-i;j++)
	{
		if(a[j]>a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;

			flag=1;                             /* 如果一趟排序过程中交换过记录则把falg设置成1 */
		}
	}
	return flag;
}		/* -----  end of function bubbleSortPass  ----- */
