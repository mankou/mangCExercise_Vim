
#include	<stdlib.h>
#define N 6                                     /* ��������Ԫ�ظ��� */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  ��ѡ������ʾ�� ��������
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	void simpleSelectSort(int*,int);            /*��ѡ������  */
	int i;
	int a[N]={2,6,3,5,1,4};

	
	printf("simpleSelectSort ʾ��\n");
	printf("����ǰ\n");
	for (i = 0; i < N; i++) {
		printf("%d ",a[i]);
	}
	printf("\n");

	simpleSelectSort(a,N);                      /* ��ѡ������ */

	printf("\n\n�����\n");
	for (i = 0; i < N; i++) {
		printf("%d ",a[i]);
	}
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
