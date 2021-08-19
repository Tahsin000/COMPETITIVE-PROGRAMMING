#include<stdio.h>
void fun(int n)
{
	int i,f;
	f=0;
	for (i=1; i<=n; i++)
	{
		if (i%2==0)
		{
			printf("%d\n",i);
			f=1;
		}
	}
	if (f==0)
	{
		printf("-1\n");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	fun(n);
	
	return 0;
}