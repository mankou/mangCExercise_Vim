
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
	char *a1="123";
	char *a2="12345";
	char dst[N];
	char src[N];

	printf("����src�ַ������ַ�,ע�ⳬ��%dλ�Ĳ��ֽ��Զ��ض�:",N-1);
	scanf("%s",src);
	src[N-1]=NULL;                              /* ��ֹ�����ַ����ȳ����ַ����ɷ�Χ */
	

/*
 * ע����ʹ��strcpy()����֮ǰ���ж�Ŀ�������Ƿ����������Դ����
 */
	if (N-1=strlen(src)) {
		strcpy(dst,src);
		printf("%s\n",dst);
	}
	else {
		printf("����:src���ȴ���dst,dst��������src\n");
	}

	printf("\ndst�ַ�����ĳ���Ϊ:%d\n",strlen(dst));

	if (strlen(a1)-strlen(a2)>0) {
		printf("a1>a2\n");
	}
	else {
		printf("a1<a2\n");
	}

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
