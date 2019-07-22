#include<stdio.h>

int main()
{
	int n;
	printf("------TEMPERATURE CONVERSION------\n");
	while(1)
	{
		printf("Enter your choice: 1) Celsius to Fahrenheit 2) Fahrenheit to Celsius 3) Exit\n");
	scanf("%d", &n);
		switch (n)
		{
		case 1:
		{
			float temp, fahrenheit;
			printf("enter the temperature in celsius:- ");
			scanf("%f", &temp);
			fahrenheit = ((9 * temp) / 5) + 32;
			printf("the fahrenheit temperature is:%f\n", fahrenheit);
			break;
		}
		case 2:
		{
			float celcius, temp;
			printf("enter the temperature in fahrenheit:- ");
			scanf("%f", &temp);
			celcius = ((temp - 32) * 5) / 9;
			printf("the celcius temperature is:%f\n", celcius);
			break;
		}
		case 3:
		{
			exit(0);
			break;
		}
		default:printf("Invalid choice\n");
			break;

		}
	}
	return 0;
}
