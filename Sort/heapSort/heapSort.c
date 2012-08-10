#define outputEveryPass                         /* 输出排序中间结果 */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  heapSort
 *  Description:堆排序主函数
 *  			这里编写堆 以最上面的为小
 *  参数说明   ：int *a 指向数组
 *               int n  数组元素个数
 *  create:23:03 2012-8-10
 *  lastmodify:23:03 2012-8-10
 *  author:mang
 *  version:1.0
 * =====================================================================================
 */
	void
heapSort ( int *a,int n)
{
	void createHeap(int *a,int n);              /* 建堆函数声明 */
	void sift ( int *a,int k,int m);            /* 调整函数声明 */
	int i,t,j;                                    /* 循环变量 临时变量 */

	createHeap(a,n);                            /* 建堆 */
#ifdef outputEveryPass
	printf("\n\n输出建堆结果\n");
	for (i = 1; i <=n; i++) {
			printf("%d ",a[i]);
	}
	printf("\n");
#endif
/*
 * 第一个元素与最后一个元素 互换。然后重新调整，使a[1--i-1]仍然满足堆的性质
 */
	for ( i = n; i >= 1; i -= 1 ) {
		t=a[1];a[1]=a[i];a[i]=t;
		sift(a,1,i-1);
//输出排序中间结果
#ifdef outputEveryPass
	printf("\n第%d次首尾互换并调整后的结果\n",n-i+1);
	for (j = 1; j <=n; j++) {
			printf("%d ",a[j]);
	}
#endif

	}
	return ;
}		/* -----  end of function heapSort  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  createHeap
 *  Description:  建堆
 *  参数说明：  int *a 指向数组
 *              int n 元素个数
 *  create:22:03 2012-8-10
 *  lastmodify:
 *  author:mang
 *  version:1.0
 * =====================================================================================
 */
	void
createHeap ( int *a,int n)
{
	int i,j,t;                                  /* 循环变量 临时变量 */
/*
 * 因为用一维数组存储堆，即用完全二叉树的形式表现，从n/2个结点开始为非叶子结点。所以从这里开始调整建堆。
 */
	for ( i = n/2; i >= 1; i -= 1 ) {       /* 注意这里n/2用到了自动类型转换 */
		j=2*i;
		
/*
 * 判断a[i]的左右孩子，哪个小。找出最小的再与a[i]比。
 * 如果孩子<a[i] 则互换
 * 如果孩子>a[i] 则不用换
 */
		if (j+1<=n) {                           /* 这里必须先判断,因为j+1可能会越界 */
			j=a[j+1]<a[j] ? j+1 : j;
		}

		if(a[i]>a[j]){
			t=a[i];a[i]=a[j];a[j]=t;
		}
	}
	return;
	/* -----  end of function createHeap  ----- */
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  sift
 *  Description: 调整堆
 *              假设a[k+1---m]已经满足堆性质，现在调整a[k]使a[k--m]满足堆的性质
 *  create:23:10 2012-8-10
 *  lastmodify:
 *  author:
 *  version:
 * =====================================================================================
 */
	void
sift ( int *a,int k,int m)
{
	int j,t,finish;


	j=2*k;
	t=a[k];
	finish=0;
/* 
 *从上往下开始调整，先找出堆顶两个孩子的较小值，与堆顶比。如果堆顶<两个孩子的最小值，则说明已经满足堆的性质。调整结束
 否则 互换位置，继续往下调整。
 直到循环变量越界，或者已经满足堆性质。
 *这里特意写在j+1<=m 让你明白是要判断j+1要小于下界。在循环中如果使用了a[j+k]的形式，应该判断j+k是否越界，而不j是否越界
 */
	while (j+1<=m && !finish) {
/* 对j+1是否越界在while循环中进行了
 */
		j=a[j+1]<a[j] ? j+1 : j;
		if (t<a[j]) {
			finish=1;
		}
		else {
			a[k]=a[j];                          /* 这里没有互换，只是赋值，等循环结束后一次赋值。这种技巧可运用于有互换的操作中，如选择排序 */
			k=j;
			j=2*k;
		}
	a[k]=t;
	}
	return; 
}		/* -----  end of function sift  ----- */
