
#include	<stdlib.h>
#include <stdio.h>
#define N 6
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	int linearSelect(int *a,int h,int e,int k);
	int a[N]={8,5,1,3,7,6};
	int b[N]={0};
	int k;
	int i,m;
	
	printf("����ѡ��ʾ��\n");
	printf("����k:");
	scanf("%d",&k);

	printf("�����������£�\n");
	for (i = 0; i < N; i++) {
		printf("%d ",a[i]);
	}
	for (i = 0; i <N; i++) {
			b[i]=a[i];
		}
	m=linearSelect(b,0,N-1,k);
	printf("\n��������ѡ���m=%d\n",m);
	printf("\n��%dС��Ϊ%d",k,b[m]);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
