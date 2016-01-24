#include<stdio.h>

int main ()
{
	int a, b, op;
	scanf(" %d %d %d", &a, &b, &op);
	if (op==1) 
	{
		printf("%d", a + b);
	}
	if (op==2)
	{	
		printf("%d", a -b);
	}
	if (op==3)
	{
		printf("%d", a*b);
	}
	if (op==4)
	{
		printf("%d", a/b);
	}

	return 0;
}
