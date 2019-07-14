#include<stdio.h>

int main()
{
	int number, age;
	char name[20];
	printf("enter your name: ");
	scanf("%s", &name);
	printf("enter your age: ");
	scanf("%d", &age);
	printf("enter your phone number: ");
	scanf("%d", &number);
	printf("the name is: %s\n", name);
	printf("the age is:%d\n", age);
	printf("the number is:%d\n", number);
	return 0;
}
