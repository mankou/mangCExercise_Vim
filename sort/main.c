# include <stdio.h>
# define N 4
int main()
{
	void simpleInsert(int *a,int n);
	int a[N]={1,2,9,8};
	int i;
	printf("hello world\n");
/* 	todo ������������������ ������simpleInsert����
 */
	simpleInsert(a,N);
	for(i=0;i<N;i++)
	{
		printf("%d ",a[i]);
	}



  getchar();
  return 0;
}
