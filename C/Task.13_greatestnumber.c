
#include<stdio.h>
int main()
{
	int i, j, temp, a[10], n;
	printf("enter n: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("enter the number%d: ", (i + 1));
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("the largest number: %d", a[n - 1]);
	printf("the smallest number: %d", a[0]);
	return 0;
}

