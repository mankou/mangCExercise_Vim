/*
*�жϵ��ʸ���
*/
#include <stdio.h>
main()
{
	int wordNumber(char *s);
	char s[100];

	printf("�����ַ�����");
	gets(s);
	printf("���ʸ���Ϊ %d\n",wordNumber(s));


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
