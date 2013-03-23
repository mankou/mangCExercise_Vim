/*
*判断单词个数
*/
#include <stdio.h>
main()
{
	int charToInt(char * s);
	char s[50];
	printf("输入字符串：");
	gets(s);

	printf("\n%d\n",charToInt(s));

}
int charToInt(char * s)
{
	int sum=0; int d;
	char * p=s;
	while(*p)
	{
		d=(*p)-'0';
		sum=sum*10+d;
		p++;
	}
	return sum;

}

