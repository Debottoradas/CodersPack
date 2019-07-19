#include<iostream>
using namespace std;
void swap(int*, int*);
int main()
{
	int a, b;
	cout << "enter the  number in variable a: ";
	cin >> a;
	cout << "enter the number in variable b: ";
	cin >> b;
	 swap(&a ,&b);
	cout << "after swapping,";
	cout << "the value of a: " << a;
	cout << "\nthe value of b: " << b;
	return 0;
	}
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}




