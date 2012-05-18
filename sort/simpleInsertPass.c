void simpleInsertPass(int *a,int x,int i)
{
	for(int j=n;j>=0&&a[j]<x,j--)
	{
		a[j+1]=a[j];
	}
	jf(j>0)
	{
		a[j+1]=x;
	}

}