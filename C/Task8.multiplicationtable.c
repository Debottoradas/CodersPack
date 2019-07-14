#include<stdio.h>

int main()
{

	int n, i, p;
	printf("enter any number: ");
	scanf("%d", &n);
	printf("the multiplication table of the number is:");
	for(i=1;i<=10;i++)
	{
		p = n*i;
		printf("\n%d * %d=%d\n", n, i, p );
	}
	return 0;
}
