#define outputEveryPass                         /* �����Ƿ����ÿһ�������� */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  simpleSelectSort
 *  Description: ��ѡ������������ ����С����˳����
 *  ����˵����  int *a ָ������
 *  			int n  ����Ԫ�ظ���
 * =====================================================================================
 */
	void
simpleSelectSort (int *a,int n)
{
	int i,j;
/* ��������������˼���ˡ�ÿ�δ�a[i����n-1]�ҳ���С��Ԫ�ط���a[i]���λ��
 */
	for (i = 0; i < n; i++) {
		simpleSelectSortPass(a,i,n);
#ifdef outputEveryPass
		printf("\n��%d������\n",i+1);
		for (j = 0; j < n; j++) {
		printf("%d ",a[j]);
		}
#endif
	}
	return; 
}		/* -----  end of function simpleSelectSort  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  simpleSelectSortPass
 *  Description:  ��ѡ������һ������
 *  ����˵����    int *a ָ������
 *  			  int i ��i������
 *  			  int n ����Ԫ�ظ���
 *  ���ã�  ��i������ĺ��壺����a[i---n-1]���ҳ���С��Ԫ����a[i]������ 
 *  ��������С��Ԫ�صİ취���� ���������Ƚϡ�����max���ơ���������Ž�"��"ѡ������
 * =====================================================================================
 */
	void
simpleSelectSortPass (int *a,int i,int n)
{
	int j;                                      /* ѭ������ */
	int k,t;                                    /* ��ʱ���� */

	k=i;
	for ( j = i; j < n; j += 1 ) {
		if(a[j]<a[k]) {k=j;}
	}
	if(i!=k){
		t=a[i];
		a[i]=a[k];
		a[k]=t;
	}
	return; 
}		/* -----  end of function simpleSelectSortPass  ----- */
