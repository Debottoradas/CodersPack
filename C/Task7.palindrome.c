#include<stdio.h>

int main()
{
	char  a[20], b[20];
	int n, i, x, j;
	printf("enter any string: ");
	scanf("%s", &a);
	n = strlen(a) - 1;
	x = n;
    for(i=0;i<=n;i++)
	{
		b[i] = a[n - i];
	}

	for (j = 0; j <= x; j++)
	{
		if (b[j] != a[j])
		{
			printf("not palindrome");
			return 0;
		}
	}
	printf("palindrome");
		return 0;
}
