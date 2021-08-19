#include<stdio.h>
int main()
{
	int a,b,c,d,e,temp=0,temp1=0,temp3=0,temp4=0;

	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

	if (a>0)
	{
		temp = temp + 1;
	}

	if (b>0)
	{
		temp = temp + 1;
	}

	if (c>0)
	{
		temp = temp + 1;
	}

	if (d>0)
	{
		temp = temp + 1;
	}

	if (e>0)
	{
		temp = temp + 1;
	}

	if (a<0)
	{
		temp1 = temp1 + 1;
	}

	if (b<0)
	{
		temp1 = temp1 + 1;
	}

	if (c<0)
	{
		temp1 = temp1 + 1;
	}

	if (d<0)
	{
		temp1 = temp1 + 1;
	}

	if (e<0)
	{
		temp1 = temp1 + 1;
	}

	if (a%2==0)
	{
		temp3 = temp3 + 1;
	}

	if (b%2==0)
	{
		temp3 = temp3 + 1;
	}

	if (c%2==0)
	{
		temp3 = temp3 + 1;
	}

	if (d%2==0)
	{
		temp3 = temp3 + 1;
	}

	if (e%2==0)
	{
		temp3 = temp3 + 1;
	}

	if (a%2!=0)
	{
		temp4 = temp4 + 1;
	}

	if (b%2!=0)
	{
		temp4 = temp4 + 1;
	}

	if (c%2!=0)
	{
		temp4 = temp4 + 1;
	}

	if (d%2!=0)
	{
		temp4 = temp4 + 1;
	}

	if (e%2!=0)
	{
		temp4 = temp4 + 1;
	}

	printf("%d valor(es) par(es)\n",temp3);
	printf("%d valor(es) impar(es)\n",temp4);
	printf("%d valor(es) positivo(s)\n",temp);
	printf("%d valor(es) negativo(s)\n",temp1);


	return 0;
}

