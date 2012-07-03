/**功能说明**********
 * 简单插入排序主程序 
 **参数说明***************
 * int *a 指向数组
 * int n  代表排序的个数
 */
void simpleInsert(int *a,int n)
{
	int i=0;
    void simpleInsertPass(int *a,int x,int i);  /*进行一趟简单插入排序*/

/* 	执行n-1次，
 * 	从a[2]开始插入，因为a[0]用于监督哨，a[1]是排列好的。
 */
	for(i=2;i<n;i++)
	{
/*  把a[i]插入已经有序的序列中，即前面a[1]--a[i-1]是有序的
 */
		simpleInsertPass(a,i,a[i]);
	}
}
