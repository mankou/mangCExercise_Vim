

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  strcmp
 *  Description: 自己写的字符串复制函数 
 *  Parameter:char *dst 指向目标字符串数组
 *  　　　　　char const *src 指向源字符串，这里不允许修改*src的值
 *  注意：　字符串复制函数是"长度不受限制的"，只以src的NULL字符为结束标识，所以调用该函数前要自行判断dst是否可以容纳src中的字符。
 *  Create:22:44 2012-8-17
 *  Lastmodify:22:44 2012-8-17
 *  Author: 	　mang
 *  Version:    　1.0
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
 *  Description: 求字符串的长度
 *  Parameter:char const *src 指向字符串
 *  Create:23:25 2012-8-18
 *  Lastmodify:23:26 2012-8-18
 *  Author: 	　mang
 *  Version:    　1.0
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
 *  Description:  自己写的连接字符串的函数
 *  Parameter: char * dst 指向目标字符串
 *             char const *src 指向源字符串
 *  Create:23:30 2012-8-18
 *  Lastmodify:23:30 2012-8-18
 *  Author: 	　mang
 *  Version:    　1.0
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
