
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

	printf("字符串相关函数示例\n");
	printf("输入src字符数组字符,注意超出%d位的部分将自动截断:",N-1);
	scanf("%s",src);
	src[N-1]=NULL;                              /* 防止输入字符长度超出字符容纳范围 */
	

printf("\n\nstrcmpy()函数示例\n");
/*
 * 注意在使用strcpy()函数之前先判断目标数组是否可能容纳下源数组
 */
	printf("将src字符数组内容 复制到dst字符数组");
	if (N-1>=strlen(src)) {
		strcpy(dst,src);
		printf("\n复制后dst内容为:%s\n",dst);
	}
	else {
		printf("错误:src长度大于dst,dst不能容纳src\n");
	}

	printf("\ndst字符数组的长度为:%d\n",strlen(dst));

/*
 * 经典错误说明:无符号数参与的运算
 * 因strlen 返回值为无符号数，无符号数永远是大于0的
 * 另外：有符号数与符号数进行算术运算，结果是无符号的。
 */
	printf("\n\n经典错误说明\n如果不对strlen()返回值强制类型转换成int,则无论a1 a2的长度为多少，结果都是a1>a2\n");
	printf("a1:%s\n",a1);
	printf("a2:%s\n",a2);
	if ((int)strlen(a1)-(int)strlen(a2)>0) {
		printf("a1>a2\n");
	}
	else {
		printf("a1<a2\n");
	}


	printf("\nstrcat()函数示例\n");
	printf("将字符串link连接到dst数组中\n");
	strcat(dst,"link");
	printf("%s\n",dst);

	
	printf("\n\nstrcmp()函数示例\n");
/*
 * 这里重新为cmp1是有深意的,因为前面有很多 无长度限制的字符串操作函数，可能会覆盖掉cmp1 cmp2的值，这种错误很难发现的
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
