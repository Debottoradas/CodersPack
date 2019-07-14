#include<stdio.h>
int main()
{
	int  n, a, b[20], i = 0, c = 1, total = 0, s[20] , j, k;
	printf("enter any number: ");
	scanf("%d", &n);
	a = n;
	while (a >= 10)
	{
		b[i] = a % 10;
		a = a / 10;
		c++;
		i++;
	}
	b[i] = a;
	for (j = 0; j < c; j++)
	{
	    s[j]=1;
		for (k = 0; k < c; k++)
		{

			s[j] = s[j] * b[j];
		}
		total = total + s[j];
	}
	if (total == n)
	{
		printf("armstrong no");
	}
	else
	{
		printf("not");
	}
		return 0;
}
