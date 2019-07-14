#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{

	int n, i, p = 1;
	printf("enter any number: ");
	scanf("%d", &n);
	printf("the factorial of the number is: ");
	for (i = n; i >= 1; i--)
	{
		p = p*i;
	}
		printf("%d", p );
	return 0;
}
