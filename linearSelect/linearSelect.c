#define N 6                                     /* ����Ԫ�ظ��� */
#define outpurtIntermediate                     /* �Ƿ���b���м��� */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  linearSelect
 *  Description: ����ѡ��������
 *  ���ܣ���������a[h]---a[e]֮���ҵ���kС����
 *  ����˵����int *a ָ������
 *            int h  �����һ��Ԫ��
 *            int e  �������һ��Ԫ��
 *            k      ��kС
 *  author:mang
 *  create:00:22 2012-8-4
 *  last modify:00:22 2012-8-4
 *  version:1.0
 * =====================================================================================
 */
	int	
linearSelect ( int *a,int h,int e,int k)
{
	int m,d;                                    /* m���ڽ��յ��ú����ķ���ֵ d���ڼ�����һ�˿��ź�a[h]--a[m]���м����� */
	int i;
	if(h==e) return h;
#ifdef outpurtIntermediate
	printf("\n��a[%d]��a[%d]֮��",h,e);
	for (i = h; i <= e; i++) {
		printf("%d ",a[i]);
	}
	printf("�ҵ�%dС\n",k);
#endif

	m=quickSortPass(a,h,e);

#ifdef outpurtIntermediate
	printf("����һ�˿����������Ϊ:\n");
	for (i = 0; i < N; i++) {
		printf("%d ",a[i]);
	}
	printf("\n��ʱquickSortPass����ֵm=%d\n",m);
#endif

	d=m-h+1;
/*
 * ���k==d��˵��a[m]���ǵ�kСֵ��
 * ���k<d ��˵����kСֵ��a[h]��a[m]֮�䣬���ٴ�a[h]��a[m]֮���ҵ�kСֵ
 * ���k>d ��˵����kСֵ��a[m+1]��a[e]֮�䣬��Ӧ����֮���ҵ�kСֵ
 */
	if(k==d) {return m;}
	else if(k<d) return linearSelect(a,h,m,k);
	else if(k>d) return linearSelect(a,m+1,e,k-d);
	
}		/* -----  end of function linearSelect  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  quickSortPass
 *  Description: ��a[0]Ϊ֧�����һ�˿�������
 *  author:mang
 *  create:00:27 2012-8-4
 *  lastmodify:00:27 2012-8-4
 *  version:1.0
 * =====================================================================================
 */
	int
quickSortPass ( int *a,int h,int e)
{
	int i,j,t;
	i=h;j=e+1;
	t=a[i];
	while(i<j){
		while(i<j&&a[--j]>t)
			;                                   /* ע�������ǿ���� */
		a[i]=a[j];
		while (i<j&&a[++i]<t)
			;                                   /* ע�������ǿ���� */
		a[j]=a[i];
	}
	a[i]=t;
	return i;
}		/* -----  end of function quickSortPass  ----- */
