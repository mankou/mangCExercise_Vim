#include <stdio.h>
# define N 5
main()
{
	int binarySearch(int *,int,int);
	int a[N];
	int t,k,i;


	printf("输入%d个数，空格分隔\n",N);
	for (i = 0; i < N; i++) {
		scanf("%d",&a[i]);
	}

	printf("输入要查找的值k:");
	scanf("%d",&k);
	t=binarySearch(a,N,k);

	if(t==-1)
		printf("没有找到");
	else printf("其所在位置为%d",t);

	getchar();
	getchar();


}
/* 
 * 功能：二分查找
 * 说明：来自算法书28页。书中说很少有人能写对二分查找
 */
int binarySearch(int *a,int n,int k)
{
	int f,r,m;
	f=0;r=n-1;

//这里<= 很重要，不能写成<　主要是防止只有一个元素时的情况。
	while(f<=r)
	{
		//这里先计算m,以后if　else if中就不用重复计算m的值
		m=(f+r)/2;
		if(k<a[m]) r=m-1;
		else if (k>a[m]) f=m+1;
		else return m;
	}
	return -1;


}
/*
* 要点：二分查找前数组必须是有序的
*		边界要写对，测试时多测试几次，测有1个数　多个数的情况。
*/
