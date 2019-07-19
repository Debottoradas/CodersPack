#include<iostream>
using namespace std;
int main()
{
	int days, year, week, remdays1, remdays2;
	cout << "enter the number of days: ";
	cin >> days;
	year = days / 365;
	remdays1 = days % 365;
	week = remdays1 / 7;
	remdays2 = remdays1 % 7;
	cout << "year" << year<<endl;
	cout << "week" << week << endl;
	cout << "days" << remdays2 << endl;
	return 0;
}







