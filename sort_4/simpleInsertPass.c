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
 for(j=i-1;j>=0&&x<a[j];j--)
	for(j=i-1;a[0]<a[j];j--)
	{
		a[j+1]=a[j];
	}

/* 跳出循环后肯定是不满足循环的要求，要么是越界 要么是a[0]<a[j] 不论如何都可以用a[j+1]=a[0]表示。因为当j=0时，说明要插入的数a[0]是最小值，所以a[1]=a[0]. 
 */

	a[j+1]=a[0];
}