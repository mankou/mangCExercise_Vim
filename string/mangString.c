

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  strcmp
 *  Description: �Լ�д���ַ������ƺ��� 
 *  Parameter:char *dst ָ��Ŀ���ַ�������
 *  ����������char const *src ָ��Դ�ַ��������ﲻ�����޸�*src��ֵ
 *  ע�⣺���ַ������ƺ�����"���Ȳ������Ƶ�"��ֻ��src��NULL�ַ�Ϊ������ʶ�����Ե��øú���ǰҪ�����ж�dst�Ƿ��������src�е��ַ���
 *  Create:22:44 2012-8-17
 *  Lastmodify:22:44 2012-8-17
 *  Author: 	��mang
 *  Version:    ��1.0
 * =====================================================================================
 */
	char *	
strcpy (char * dst,char const *src)
{
/*
 * ע��3�� 
 * һ Ŀ���ַ���ָ�뱸��
 * �� Ŀ���ַ������һ���ַ���\0.���ǳ����أ���Ϊ��whileѭ���� ���ȸ��� �ټ�1 �����ȸ�����\0 Ȼ��һ�ж�Ϊ�գ�����ѭ���ͽ����ˡ�
 * �� ���ƽ����ı�ʶ�� *src==NULL
 */
	char *tmp=dst;
	while(*dst++ = *src++);

	return tmp;
/*
 * char *tmp=dst;
 * while(*src!=\0)
 * {
 *   *dst++=*src++;
 * }
 * *dst=\0;
 * return tmp;
 */
}		/* -----  end of function strcmp  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  strlen
 *  Description: ���ַ����ĳ���
 *  Parameter:char const *src ָ���ַ���
 *  Create:23:25 2012-8-18
 *  Lastmodify:23:26 2012-8-18
 *  Author: 	��mang
 *  Version:    ��1.0
 * =====================================================================================
 */
	unsigned 	
strlen ( char const * src )
{
	unsigned count=0;
	while(*src++){
		count++;
	}
	return count;
}		/* -----  end of function strlen  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  strcat
 *  Description:  �Լ�д�������ַ����ĺ���
 *  Parameter: char * dst ָ��Ŀ���ַ���
 *             char const *src ָ��Դ�ַ���
 *  Create:23:30 2012-8-18
 *  Lastmodify:23:30 2012-8-18
 *  Author: 	��mang
 *  Version:    ��1.0
 * =====================================================================================
 */
	void
strcat ( char * dst,char const * src)
{
	char *tmp=dst;
	while(*dst++)
		;

	while(*dst++=*src++)
		;
	return tmp;
}		/* -----  end of function strcat  ----- */
