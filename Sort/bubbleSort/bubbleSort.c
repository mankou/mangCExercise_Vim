/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  bubbleSort
 *  Description:  ð������������
 *  ����˵��������int *a��ָ������
 *  ��������������int n�� �������
 *  ����˵��������Ԫ�ش�a[0]��ʼ
 *  create:21:26 2012-7-18
 *  last modify:21:26 2012-7-18
 *��authore:mang
 * =====================================================================================
 */
# include <stdio.h>
# define outputEveryPass //�����Ƿ����ÿ�������м������Ѹ���ע�͵�����ʾÿ���м���
	void
bubbleSort (int *a, int n)
{
	int i,flag=0;
	int j=0;
/* 
 * ����n��ð������i=5��ʾ���е�5������
 * flag�����⣺��ĳһ��������û�н��й�������¼�Ĳ�������˵�������Ѿ������ˣ����������ˣ�ֱ�ӷ��ؾ�ok������Լ����һ��������û�н�������¼����flag=0���������1;
 */
	for(i=1;i<n;i++)
	{
		flag=bubbleSortPass(a,n,i);
		if(flag==0) return;
		
/*
 * ����м�������
 */
#ifdef outputEveryPass
		printf("\n��%d������:\n",i);
		for ( j = 0; j < n; j += 1 ) {
			printf("%d ",a[j]);
		}
#endif

	}
	return;
}		/* -----  end of function bubbleSort  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  bubbleSortPass
 *  Description:  ð�������һ��
 *  ����˵��������int *a��ָ������
 *  ��������������int n   �������
 *  ��������������int i�� Ŀǰ���ڽ��е�i������
 *  ����ֵ��      int flag �����һ����������н�������¼�򷵻�1,���򷵻�0
 *  create:21:27 2012-7-18
 *  last modify:21:27 2012-7-18
 *  authore:mang
 * =====================================================================================
 */
	int	
bubbleSortPass (int *a, int n, int i)
{
	int j,t,flag=0;
	for(j=0;j<n-i;j++)
	{
		if(a[j]>a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;

			flag=1;                             /* ���һ����������н�������¼���falg���ó�1 */
		}
	}
	return flag;
}		/* -----  end of function bubbleSortPass  ----- */
