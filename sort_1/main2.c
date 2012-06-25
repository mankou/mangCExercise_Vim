# include <stdio.h>
//# include "simpleInsertPass.c"
//# include "simpleInsert.c"
# define N 4
int main()
{
	int a[N]={4,2,1,3};
	int i;
	void simpleInsert(int *a,int n);
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

void simpleInsert(int *a,int n)
{
	void simpleInsertPass(int *a,int x,int i);
	int i=0;
/* 	执行n-1次，
 * 	从a[1]开始插入，因为a[0]是排列好的。

 */
	for(i=0;i<n;i++)
	{
		simpleInsertPass(a,i,a[i]);
	}
}

void simpleInsertPass(int *a,int i,int x)
{   int j;
	for(j=i-1;j>=0&&x<a[j];j--)
	{
		a[j+1]=a[j];
	}
	a[j+1]=x;
}

