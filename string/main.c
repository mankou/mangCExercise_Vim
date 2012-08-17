
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

	printf("输入src字符数组字符,注意超出%d位的部分将自动截断:",N-1);
	scanf("%s",src);
	src[N-1]=NULL;                              /* 防止输入字符长度超出字符容纳范围 */
	

/*
 * 注意在使用strcpy()函数之前先判断目标数组是否可能容纳下源数组
 */
	if (N-1=strlen(src)) {
		strcpy(dst,src);
		printf("%s\n",dst);
	}
	else {
		printf("错误:src长度大于dst,dst不能容纳src\n");
	}

	printf("\ndst字符数组的长度为:%d\n",strlen(dst));

	if (strlen(a1)-strlen(a2)>0) {
		printf("a1>a2\n");
	}
	else {
		printf("a1<a2\n");
	}

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
