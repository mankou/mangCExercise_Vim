/**功能说明**********
 * todo
 **参数说明***************
 * todo
 */
void simpleInsert(int *a,int n)
{
	void simpleInsertPass(int *a,int x,int i);  /*todo  */
	int i=0;
/* 	执行n-1次，
 * 	从a[2]开始插入，因为a[1]是排列好的。
 */
	for(i=2;i<n;i++)
	{
/*  把a[i]插入已经有序的序列中，即前面a[1]--a[i-1]是有序的
 */
		simpleInsertPass(a,i,a[i]);
	}
}
