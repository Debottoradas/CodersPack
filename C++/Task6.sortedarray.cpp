#include<iostream>
using namespace std;
int main()
{
	int i, j, n, temp;
	int a[10];
	cout << "enter the number of elements: ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "enter element" << i + 1 << ": ";
		cin >> a[i];
	}
	for (i = 0; i <= n-1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	cout << " \nthe sorted array is:-  ";
	for (i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
