#include <stdio.h>
#include	<stdlib.h>
# define N 5                                    /*���������¼����  */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description: ����ϣ������ ������������ 
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	void shellSort(int * a,int n);
	int a[N+1]={0,13,10,9,12,5};                /* a[0]���洢���ݣ����ڼල�� */
	int i=0;
	printf("ϣ������ʾ����\n");
	printf("ԭʼ���飺\n");
	for(i=1;i<=N;i++)
		printf("%d ",a[i]);
	
	shellSort(a,N);                              /* ϣ������ */
	printf("\nϣ�����������\n");
	for(i=1;i<=N;i++)
		printf("%d ",a[i]);

	getchar();getchar();
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
