# include <stdio.h>
//# include "simpleInsertTest.c"
# define N 5
int main()
{
	void simpleInsert(int *a,int n);
	int a[N+1]={0,2,9,8,7,1};                       /*todo  */
	int i;
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
