
#include	<stdlib.h>
#include <stdio.h>
#define N 5                                     /* ����Ԫ�ظ��� */
#define outputEveryPass                         /* �������ú�������м�����������Ҫ�ӵ�quickSort.c�ļ���ȥ�ģ������ּӽ�ȥ��ÿһ�ε��øú��������һ�飬���Լӵ����������� */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:�������ÿ�������������������  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{   
	void quickSort(int *,int,int);              /* �������� */
	int a[N]={3,7,1,6,2};
	int i;

	printf("quickSortʾ��\n");
	printf("����ǰ\n");
	for ( i = 0; i < N; i += 1 ) {
		printf("%d ",a[i]);
	}

#ifdef outputEveryPass
	printf("\n���ｫ��������м���\n");
#endif
	quickSort(a,0,N-1);                         /* �������� */

	printf("\n�����\n");
	for ( i = 0; i < N; i += 1 ) {
		printf("%d ",a[i]);
	}
	getchar();
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
