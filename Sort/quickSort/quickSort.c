# define N 5                                    /* 数组元素个数 */
# define outputEveryPass                        /* 如果定义了该宏将输出排序中间结果 */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  quickSort
 *  Description:  快速排序主函数
 *  参数说明：　int *a 指向数组
 *  　　　　　　int h　待排序数组的第一个元素在数组中的标号　取head首字母
 *  　　　　　　int e　待排序数组最后一个元素在数组中的标号　取end首字母
 * =====================================================================================
 */
	void
quickSort ( int *a,int h,int e)
{
	int m;                                      /* 用于存放每一趟快速排序过程中a[h]最后排列的位置 */
	int i;
	if(h<e){
		m=quickSortPass(a,h,e);
		quickSort(a,h,m);
		quickSort(a,m+1,e);
	}
	return ;
}		/* -----  end of function quickSort  ----- */



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  quickSortPass
 *  Description:  快速排序的一趟排序。即以a[h]为基准把数组划分为两部分，前面的都小于等于a[h]　后面的等大于等于a[h]
 *  参数说明：　　int *a　指向数组
 *  　　　　　　　int h　 待排序数组第一个元素在数组中的序号
 *  　　　　　　　int e 　待排序数组最后一个元素在数组中的序号
 *  返回值：　　　int     返回一趟排序后a[h]在数组中的位置
 * =====================================================================================
 */
	int
quickSortPass (int *a,int h,int e)
{
	int i,j,t;
	i=h;j=e+1;                                  /* 因为 i和j都是先加一和减一　所以这里j等于e+1*/
	t=a[h];
	
/*
 * 从后往前移动如果后面的一直比a[h]大，则继续移动指针，否则把a[j]赋值给a[i]。然后从a[i]再开始找如果一直比a[h]小，则继续移动指针，否则把a[i]赋值给a[j].
 * 最初的版本先前后往前比　如果后面的小于a[h]则a[i]与a[j]互换。这里不互换了，直接赋值，等最后把t再赋值给a[i]那时肯定是i==j，所以这里直接赋值的代价是多了个t,而且a[++i] a[--j]都是与t比，而老版本可以是a[--j]>a[i] a[++i]<a[j]
 */
	while ( i<j ) {

/*
 * 
 * 下句中的i<j是必须的，这个不要丢掉
 */
		while ( i<j&&a[--j]>t )
			;                                   /* 注意这里是空循环，所以占用一行，因为在while循环中j已经做了减１操作，所以这里是空循环*/
		a[i]=a[j];

		
		while ( i<j&&a[++i]<t )
			;                                   /* 注意这里是空循环，所以占用一行 */
		a[j]=a[i];
	}

	a[i]=t;
#ifdef outputEveryPass	
		int k;
		printf("\n此时h=%d e=%d a[h]=%d \n",h,e,t);
		for ( k = 0; k < N; k += 1 ) {
			printf("%d ",a[k]);
		}
		printf("\n");
#endif
	return i;
}		/* -----  end of function quickSortPass  ----- */
