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


/* 第i趟排序，即把x插入已经有i个元素的有序序列中
 * 数组从0开始记数
 */
void simpleInsertPass(int *a,int i,int x)
{   int j;
	for(j=i-1;j>=0&&x<a[j];j--)
	{
		a[j+1]=a[j];
	}
	a[j+1]=x;
}
