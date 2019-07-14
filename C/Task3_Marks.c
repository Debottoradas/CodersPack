#include<stdio.h>
int main()
{
	int a, b, c, total, average;
	printf("-----test marks-----\n\n");
	printf("enter the marks in maths:");
	scanf("%d",&a);
	printf("enter the marks in english:");
	scanf("%d", &b);
	printf("enter the marks in science:");
	scanf("%d", &c);
	total = a + b + c;
	average = total / 3;
	printf("MATHS:-%d\n", a);
	printf("ENGLISH:-%d\n", b);
	printf("SCIENCE:-%d\n", c);
	printf("The total marks obtained is:-%d\nthe average marks obtained is%d\n", total, average);
    return 0;
}
