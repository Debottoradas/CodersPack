#include<stdio.h>
#include<string.h>
int main()
{
	char a[30] = { 0 }, b[30] = { 0 };
	int i, j = 0;
	printf("enter string: ");
	scanf("%s", &a);
	printf("enter string: ");
	scanf("%s", &b);
	for (i = 0; a[i] != '\0'; i++);
	while (b[j] != '\0')
	{
		a[i] = b[j];
		i++;
		j++;
		}
	printf("combined string:%s",a);
	return 0;

}
