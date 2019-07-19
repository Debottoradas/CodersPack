#include<iostream>
using namespace std;
int main()
{
	char a[20], b[20];
	int x, i = 0, j, flag;
	cout << "enter the  first string: ";
	cin >> a;
	cout << "enter the second  string : ";
	cin >> b;
	while (a[i] != '\0')
	{
		j = 0;
		flag = 0;
		while (b[j] != '\0')
		{
			if (a[i] == b[j])
			{
				x = j;
				while (b[x] != '\0')
				{
					b[x] = b[x + 1];
					x++;
				}
				flag = 1;

			}
			j++;
		}
		if (flag == 0)
		{
			cout << "not an anagram";
			return 0;
		}
		i++;
	}
	cout << "the strings are anagram";
	return 0;
}





