
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
	int a[N]={2,5,1,3,7,6};
	int k;
	int i,m;
	
	printf("����ѡ��ʾ��,�����򽫰������ҵ�kС��ֵ\n");
	printf("����k:");
	scanf("%d",&k);

	printf("\n�����ʼ�������£�\n");
	for (i = 0; i < N; i++) {
		printf("%d ",a[i]);
	}
	printf("\n");

	if (k<N) {
		m=linearSelect(a,0,N-1,k);
		printf("\n��%dС��Ϊ%d\n",k,a[m]);
	}
	else {
		printf("�������\n");
	}

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
