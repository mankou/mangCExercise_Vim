void simpleInsertPass(int *a,int x,int i);
void simpleInsert(int *a,int n)
{
	int i=0;
	for(i=1;i<n;i++)
	{
		simpleInsertPass(a,*(a+i),i);
	}
}