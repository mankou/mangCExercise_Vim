
# include <stdio.h>
# define N 5
int main()
{
	void simpleInsert(int *a,int n);
	int a[N+1]={0,2,9,8,7,1};                       /*a[0]在排序时起监督哨作用，不存储数据 */
	int i;                                      /* 用于循环数组 */
	printf("simple insert 示例\n");
	printf("原始数组\n");
	for(i=1;i<N;i++)
	{
		printf("%d ",a[i]);
	}

/* 	调用simpleInsert()函数
 */
	simpleInsert(a,N+1);


	printf("\n排序后数组\n");
	for(i=1;i<N;i++)
	{
		printf("%d ",a[i]);
	}


  getchar();
  return 0;
}

/**功能说明**********
 * 简单插入排序主程序 
 **参数说明***************
 * int *a 指向数组
 * int n  代表排序的个数
 */
void simpleInsert(int *a,int n)
{
	int i=0;
   void simpleInsertPass(int *a,int x,int i);  /*进行一趟简单插入排序*/

/* 	执行n-1次，
 * 	从a[2]开始插入，因为a[0]用于监督哨，a[1]是排列好的。
 */
	for(i=2;i<n;i++)
	{
/*  把a[i]插入已经有序的序列中，即前面a[1]--a[i-1]是有序的
 */
		simpleInsertPass(a,i,a[i]);
	}
}

/* *功能说明***************************
 * 第i趟排序，即把x插入已经有i个元素的有序序列中，按由小到大的顺序排列
 * 数组从0开始记数
 * *参数说明*************************
 * 指针a 指向数组
 * i 代表第i趟插入排序
 * x 代表要插入的数值
 */
void simpleInsertPass(int *a,int i,int x)
{
	a[0]=x;                                     /*a[0]用于监督哨  */
	int j=0;

/*  a[0]有双重作用，一是起到临时变量x的作用，二是起到防止越界的作用，即监督哨。 因为当j=0时 a[0]<a[j] 为false 循环会自动结束。如果你有临时变量x的话，就要注意j>=0;
 *  *  在循环中一边比较一边移动记录。
 *  *
 */
// for(j=i-1;j>=0&&x<a[j];j--)
	for(j=i-1;a[0]<a[j];j--)
	{
		a[j+1]=a[j];
	}

/* 跳出循环后肯定是不满足循环的要求，要么是越界 要么是a[0]<a[j] 不论如何都可以用a[j+1]=a[0]表示。因为当j=0时，说明要插入的数a[0]是最小值，所以a[1]=a[0]. 
 */

	a[j+1]=a[0];
}
