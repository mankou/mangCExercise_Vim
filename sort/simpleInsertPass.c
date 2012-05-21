/* 第i趟排序，即把x插入已经有i个元素的有序序列中
 * 数组从0开始记数
 */
void simpleInsertPass(int *a,int x,int i)
{
	for(int j=i-1;j>=0&&x<a[j],j--)
	{
		a[j+1]=a[j];
	}
	jf(j>0)
	{
		a[j+1]=x;
	}

}
