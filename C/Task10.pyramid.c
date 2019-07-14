#include<stdio.h>
int main()
{

	int  i, j;
	printf("the pyramid is: \n");
	for(j=5;j>0;j--)
	{
		for (i = 1; i <= j; i++)
			printf("%d", i);
	printf("\n");
}
	return 0;
}
