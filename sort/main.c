# include <stdio.h>
# define N 4
int main()
{
	void simpleInsert(int *a,int n);
	int a[N]={1,2,9,8};
	int i;
	printf("hello world\n");
/* 	todo 这里插入读入数组的语句 并调用simpleInsert函数
 */
	simpleInsert(a,N);
	for(i=0;i<N;i++)
	{
		printf("%d ",a[i]);
	}



  getchar();
  return 0;
}
