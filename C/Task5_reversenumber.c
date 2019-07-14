#include<stdio.h>
int main()
{
	int revnum = 0, n;
	printf("enter any number: ");
	scanf("%d", &n);
	while (n > 0)
	{
		revnum = revnum * 10 + n % 10;
		n = n / 10;
	}
	printf("the reverse no is: %d", revnum);
		return 0;
}
