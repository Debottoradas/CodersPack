#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter any year: ";
	cin >> n;
	if (n % 100 != 0 && n % 4 == 0 || n % 100 == 0 && n % 400 == 0)
		cout << "the year is a leap year";
	else
		cout << "the year is not a leap year";
	return 0;
}
