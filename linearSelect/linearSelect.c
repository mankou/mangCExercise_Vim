#define N 6                                     /* 数组元素个数 */
#define outpurtIntermediate                     /* 是否输b出中间结果 */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  linearSelect
 *  Description: 线性选择主函数
 *  功能：将从数组a[h]---a[e]之间找到第k小数。
 *  参数说明：int *a 指向数组
 *            int h  数组第一个元素
 *            int e  数组最后一个元素
 *            k      第k小
 *  author:mang
 *  create:00:22 2012-8-4
 *  last modify:00:22 2012-8-4
 *  version:1.0
 * =====================================================================================
 */
	int	
linearSelect ( int *a,int h,int e,int k)
{
	int m,d;                                    /* m用于接收调用函数的返回值 d用于计算在一趟快排后a[h]--a[m]间有几个数 */
	int i;
	if(h==e) return h;
#ifdef outpurtIntermediate
	printf("\n在a[%d]与a[%d]之间",h,e);
	for (i = h; i <= e; i++) {
		printf("%d ",a[i]);
	}
	printf("找第%d小\n",k);
#endif

	m=quickSortPass(a,h,e);

#ifdef outpurtIntermediate
	printf("经过一趟快速排序后结果为:\n");
	for (i = 0; i < N; i++) {
		printf("%d ",a[i]);
	}
	printf("\n此时quickSortPass返回值m=%d\n",m);
#endif

	d=m-h+1;
/*
 * 如果k==d则说明a[m]就是第k小值。
 * 如果k<d 则说明第k小值在a[h]与a[m]之间，则再从a[h]与a[m]之间找第k小值
 * 如果k>d 则说明第k小值在a[m+1]与a[e]之间，则应从这之间找第k小值
 */
	if(k==d) {return m;}
	else if(k<d) return linearSelect(a,h,m,k);
	else if(k>d) return linearSelect(a,m+1,e,k-d);
	
}		/* -----  end of function linearSelect  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  quickSortPass
 *  Description: 以a[0]为支点进行一趟快速排序
 *  author:mang
 *  create:00:27 2012-8-4
 *  lastmodify:00:27 2012-8-4
 *  version:1.0
 * =====================================================================================
 */
	int
quickSortPass ( int *a,int h,int e)
{
	int i,j,t;
	i=h;j=e+1;
	t=a[i];
	while(i<j){
		while(i<j&&a[--j]>t)
			;                                   /* 注意这里是空语句 */
		a[i]=a[j];
		while (i<j&&a[++i]<t)
			;                                   /* 注意这里是空语句 */
		a[j]=a[i];
	}
	a[i]=t;
	return i;
}		/* -----  end of function quickSortPass  ----- */
