#include <stdio.h>
#include	<stdlib.h>
# define N 5

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description: ����ϣ������ ������������ 
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
//	shellSort(int *��int);
	int a[N+1]={0,1,8,9,12,5};
	int i=0;
	printf("ϣ������ʾ����\n");
	printf("ԭʼ���飺\n");
	for(i=1;i<N;i++)
		printf("%d ",a[i]);
	
//	shellSort(a,N)                              /* ϣ������ */
	printf("\nϣ�����������\n");
	for(i=1;i<N;i++)
		printf("%d ",a[i]);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
