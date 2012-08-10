#define outputEveryPass                         /* 定义是否输出每一趟排序结果 */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  simpleSelectSort
 *  Description: 简单选择排序主函数 按从小到大顺序排
 *  参数说明：  int *a 指向数组
 *  			int n  数组元素个数
 * =====================================================================================
 */
	void
simpleSelectSort (int *a,int n)
{
	int i,j;
/* 这里最能体现其思想了。每次从a[i……n-1]找出最小的元素放在a[i]这个位置
 */
	for (i = 0; i < n; i++) {
		simpleSelectSortPass(a,i,n);
#ifdef outputEveryPass
		printf("\n第%d趟排序\n",i+1);
		for (j = 0; j < n; j++) {
		printf("%d ",a[j]);
		}
#endif
	}
	return; 
}		/* -----  end of function simpleSelectSort  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  simpleSelectSortPass
 *  Description:  简单选择排序一趟排序
 *  参数说明：    int *a 指向数组
 *  			  int i 第i趟排序
 *  			  int n 数组元素个数
 *  功用：  第i趟排序的含义：即从a[i---n-1]中找出最小的元素与a[i]互换。 
 *  这里找最小的元素的办法还是 进行两两比较。和找max相似。所以这里才叫"简单"选择排序
 * =====================================================================================
 */
	void
simpleSelectSortPass (int *a,int i,int n)
{
	int j;                                      /* 循环变量 */
	int k,t;                                    /* 临时变量 */

	k=i;
	for ( j = i; j < n; j += 1 ) {
		if(a[j]<a[k]) {k=j;}
	}
	if(i!=k){
		t=a[i];
		a[i]=a[k];
		a[k]=t;
	}
	return; 
}		/* -----  end of function simpleSelectSortPass  ----- */
