# include <stdio.h>
# include "simpleInsertTest.c"
# define N 5
int main()
{
	void simpleInsert(int *a,int n);
	int a[N+1]={0,2,9,8,7,1};                       /*a[0]������ʱ��ල�����ã����洢���� */
	int i;                                      /* ����ѭ������ */
	printf("simple insert ʾ��\n");
	printf("ԭʼ����\n");
	for(i=1;i<N;i++)
	{
		printf("%d ",a[i]);
	}

/* 	����simpleInsert()����
 */
	simpleInsert(a,N+1);


	printf("\n���������\n");
	for(i=1;i<N;i++)
	{
		printf("%d ",a[i]);
	}


  getchar();
  return 0;
}
