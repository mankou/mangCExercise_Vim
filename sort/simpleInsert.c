void simpleInsertPass(int *a,int x,int i);
void simpleInsert(int *a,int n)
{
	int i=0;
/* 	执行n-1次，
 * 	从a[1]开始插入，因为a[0]是排列好的。
 */
	for(i=1;i<n;i++)
	{
		simpleInsertPass(a,*(a+i),i);
	}
}
