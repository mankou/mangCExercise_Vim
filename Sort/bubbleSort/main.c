/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  ���������ڵ���ð��������
 *  author:mang
 *  create:21:26 2012-7-18
 *  last modify:21:26 2012-7-18
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#define N 5                                     /* ������� */

	int
main ( int argc, char *argv[] )
{
	void bubbleSort(int *,int);
	int i;
	int a[N+1]={7,2,1,6,12};
	
	printf("bubble sort ʾ��\n");
	printf("����ǰ\n");	
	for(i=0;i<N;i++)
	{
		printf("%d ",a[i]);
	}
	putchar('\n'); putchar('\n');

	bubbleSort(a,N);                            /*ð������  */

	printf("\n\n�����\n");
	for(i=0;i<N;i++)
	{
		printf("%d ",a[i]);
	}
	getchar();

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
