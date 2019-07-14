#include<stdio.h>
int main()
{
	float temp;
	float fahrenheit;
	printf("enter the temperature in celsius");
	scanf("%f", &temp);
	fahrenheit = ((9 * temp) / 5) + 32;
	printf("the fahrenheit temperature is:%f\n", fahrenheit);
	return 0;
}
