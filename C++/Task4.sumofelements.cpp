#include<iostream>
using namespace std;
int main()
{
	int s=0;
	int i, n;
	int a[50];
	cout << "enter the number of elements: ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "enter the number " << i + 1<<": ";
		cin >> a[i];
		s = s + a[i];
	}

cout << " \nthe sum is: " << s;
	return 0;
}
