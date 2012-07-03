# include <stdio.h>
# include "simpleInsertTest.c"
# define N 5
int main()
{
	void simpleInsert(int *a,int n);
	int a[N+1]={0,2,9,8,7,1};                       /*a[0]在排序时起监督哨作用，不存储数据 */
	int i;                                      /* 用于循环数组 */
	printf("simple insert 示例\n");

/* 	调用simpleInsert()函数
 */
	simpleInsert(a,N+1);


	for(i=1;i<N;i++)
	{
		printf("%d ",a[i]);
	}


  getchar();
  return 0;
}
