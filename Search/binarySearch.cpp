#include <stdio.h>
# define N 5
main()
{
	int binarySearch(int *,int,int);
	int a[N];
	int t,k,i;


	printf("����%d�������ո�ָ�\n",N);
	for (i = 0; i < N; i++) {
		scanf("%d",&a[i]);
	}

	printf("����Ҫ���ҵ�ֵk:");
	scanf("%d",&k);
	t=binarySearch(a,N,k);

	if(t==-1)
		printf("û���ҵ�");
	else printf("������λ��Ϊ%d",t);

	getchar();
	getchar();


}
/* 
 * ���ܣ����ֲ���
 * ˵���������㷨��28ҳ������˵����������д�Զ��ֲ���
 */
int binarySearch(int *a,int n,int k)
{
	int f,r,m;
	f=0;r=n-1;

//����<= ����Ҫ������д��<����Ҫ�Ƿ�ֹֻ��һ��Ԫ��ʱ�������
	while(f<=r)
	{
		//�����ȼ���m,�Ժ�if��else if�оͲ����ظ�����m��ֵ
		m=(f+r)/2;
		if(k<a[m]) r=m-1;
		else if (k>a[m]) f=m+1;
		else return m;
	}
	return -1;


}
/*
* Ҫ�㣺���ֲ���ǰ��������������
*		�߽�Ҫд�ԣ�����ʱ����Լ��Σ�����1������������������
*/
