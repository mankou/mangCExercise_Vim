/*
*判断单词个数
*/
#include <stdio.h>
main()
{
	int wordNumber(char *s);
	char s[100];

	printf("输入字符串：");
	gets(s);
	printf("单词个数为 %d\n",wordNumber(s));


}

int wordNumber(char* s)
{
	int count=0,word=0;
	char *p=s;
	while(*p)
	{
		if(*p==' ') 
			word=0;
		else if(word==0)
		{
			count++;
			word=1;
		}
		p++;
	}
	return count;


}
