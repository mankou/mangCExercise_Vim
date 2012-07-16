/* 
 * create:23:43 2012-7-16
 * last modify:23:43 2012-7-16
 */
# include <stdio.h>
# define outputEveryPass                        /*当宏定义该变量时会输出每一趟排序后的结果，当未宏定义该变量时则不输出每一趟的排序后的结果 */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  shellSort
 *  Description:希尔排序总函数
 *  参数说明： int *a  指向数组
 *             int n   要排序的记录数
 * =====================================================================================
 */
	void
shellSort (int *a, int n)
{
	int k;                                      /* 即希而排序中的间隔 */
	printf("\n输入k的值：");
	scanf("%d",&k);
	
    # ifdef outputEveryPass
	int passCount=0;                            /* 用于记录排序的趟数 */
	int i;
    # endif 

	while(k!=0){
		shellPass(a,n,k);

    # ifdef outputEveryPass
		passCount++;
		printf("\n第%d趟排序 此时k=%d\n",passCount,k);
		for (i=1;i<=n;i++)
			printf("%d ",a[i]);
    # endif 
		k/=2;                                   /* 这里并不代表除以2,而是因为k=k/2 左右是int型 右边经过计算后是浮点型，把浮点型赋值给整型就会把小数点给截取掉。*/
	}
	
}		/* -----  end of function shellSort  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  shellPass
 *  Description: 希尔排序的一趟排序，由小到大
 *  一趟排序指的是把数组中间隔为k的记录分组都排好。如数组由a1---a5  此时k=2  则一趟排序指的是把<a1 a3 a5> <a2 a4>两组数组都排好。
 *  参数说明：   int *a 指向数组
 *               int n  要排序的记录数
 *               int k  希尔排序中的间隔
 * =====================================================================================
 */
	void
shellPass (int *a,int n,int k)

{
	int i;
/* 为了说明内涵，仍假设有a1---a5 k=2	
 *  每一趟排序时 并不是先把第一组排好，再排第二组。即不是先把<a1 a3 a5>排好，再排<a2 a4>，而是先进来a3 把a1 a3排好，再进来a4 把a2 和a4排好，也是一个数一个数的进来，然后排序。这和简单插入排序的思想是一致的，只不过那里k=1	
 *  所以希尔排序与简单插入排序的区别 在于当来一个数后，是一步一步的向前比较呢？还是一次一大步的向前比较。
 */
	for(i=k+1;i<=n;i++)
		shellLins(a,i,k);
	return ;
}		/* -----  end of function shellPass  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  shelllins
 *  Description: 将a[i]插入到已经有序的序列a[i-k] a[i-2k] ……中。
 *  参数说明：   int *a 指向数组
 *               int i  表示目前只在将a[i]插入到有序序列中
 *               int k 希而排序的间隔
 * =====================================================================================
 */
	void
shellLins (int *a,int i,int k)
{
	int j;
	a[0]=a[i];
/*
 * 注意简单插入排序是不需要判断j>0的，但希而排序要，因为一次j减k
 */
	for(j=i-k;j>0&&a[j]>a[0];j-=k)
		a[j+k]=a[j];

/*
 * 从循环出来有两种可能 一种是j=0了 另一种是a[j]<a[0]了。不论哪一种都可以用a[j+k]=a[0]来处理。
 */
	a[j+k]=a[0];
	return ;
}		/* -----  end of function shelllins  ----- */
