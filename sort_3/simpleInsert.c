void simpleInsert(int *a,int n)
{
	void simpleInsertPass(int *a,int x,int i);
	int i=0;
/* 	执行n-1次，
 * 	从a[1]开始插入，因为a[0]是排列好的。
 */
	for(i=0;i<n;i++)
	{
		simpleInsertPass(a,i,a[i]);
	}
}
