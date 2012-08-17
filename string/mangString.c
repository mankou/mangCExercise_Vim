

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
	char *tmp=dst;
	while(*dst++ = *src++);
	return tmp;
}		/* -----  end of function strcmp  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  strlen
 *  Description:  
 *  Parameter:
 *  Create:
 *  Lastmodify:
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
