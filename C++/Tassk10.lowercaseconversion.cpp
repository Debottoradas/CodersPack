#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	char a[20];
	cout << "enter string: ";
	cin >> a;
	while (a[i] != '\0')
	{
		if (a[i] >= 65&& a[i]<=90)
		{
			a[i] = a[i] + 32;
	   }
		i++;
	}
	cout << "the converted array is: " << a;
	return 0;
}







