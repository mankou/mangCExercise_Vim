
#include	<stdlib.h>
#define N 10

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 *  Parameter:
 *  Create:
 *  Lastmodify:
 *  Author:  	  mang
 *  Version: 	  1.0
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	char * strcpy(char*,char*);
	int strcmp(char*,char*);
	int tmp;
	char *a1="123";
	char *a2="12345";
	char *cmp1="123";
	char *cmp2="456";
	char dst[N];
	char src[N];

	printf("�ַ�����غ���ʾ��\n");
	printf("����src�ַ������ַ�,ע�ⳬ��%dλ�Ĳ��ֽ��Զ��ض�:",N-1);
	scanf("%s",src);
	src[N-1]=NULL;                              /* ��ֹ�����ַ����ȳ����ַ����ɷ�Χ */
	

printf("\n\nstrcmpy()����ʾ��\n");
/*
 * ע����ʹ��strcpy()����֮ǰ���ж�Ŀ�������Ƿ����������Դ����
 */
	printf("��src�ַ��������� ���Ƶ�dst�ַ�����");
	if (N-1>=strlen(src)) {
		strcpy(dst,src);
		printf("\n���ƺ�dst����Ϊ:%s\n",dst);
	}
	else {
		printf("����:src���ȴ���dst,dst��������src\n");
	}

	printf("\ndst�ַ�����ĳ���Ϊ:%d\n",strlen(dst));

/*
 * �������˵��:�޷��������������
 * ��strlen ����ֵΪ�޷��������޷�������Զ�Ǵ���0��
 * ���⣺�з�����������������������㣬������޷��ŵġ�
 */
	printf("\n\n�������˵��\n�������strlen()����ֵǿ������ת����int,������a1 a2�ĳ���Ϊ���٣��������a1>a2\n");
	printf("a1:%s\n",a1);
	printf("a2:%s\n",a2);
	if ((int)strlen(a1)-(int)strlen(a2)>0) {
		printf("a1>a2\n");
	}
	else {
		printf("a1<a2\n");
	}


	printf("\nstrcat()����ʾ��\n");
	printf("���ַ���link���ӵ�dst������\n");
	strcat(dst,"link");
	printf("%s\n",dst);

	
	printf("\n\nstrcmp()����ʾ��\n");
/*
 * ��������Ϊcmp1���������,��Ϊǰ���кܶ� �޳������Ƶ��ַ����������������ܻḲ�ǵ�cmp1 cmp2��ֵ�����ִ�����ѷ��ֵ�
 */
	cmp1="123";
	cmp2="456";
	printf("cmp1:%s\n",cmp1);
	printf("cmp2:%s\n",cmp2);
	tmp=strcmp(cmp1,cmp2);
	if (tmp==0) {
			printf("cmp1==cmp2\n");

	}
	else if (tmp<0) {
		printf("cmp1<cmp2\n");
	}
	else {
		printf("cmp1>cmp2\n");
	}

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
