
#include<stdio.h>

struct book
{
	char title[20], author[20], genre[20];
}b;
 void getdata()
{
	printf("enter author:- ");
	scanf("%s", &b.genre);
	printf("enter titile:- ");
	scanf("%s", &b.title);
	printf("enter genre:- ");
	scanf("%s", &b.genre);
}
void display()
{
 printf("author:- %s\n", b.author);
printf("title:-%s\n",b.title);
printf(" genre:-%s\n", b.genre);
}
int main()
{
	getdata();
	printf("the entered details are");
	display();
	return 0;
}
