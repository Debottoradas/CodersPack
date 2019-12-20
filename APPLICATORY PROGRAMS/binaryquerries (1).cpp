
// Sample code to perform I/O:

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	long int n,q,c,x,l,j,r,total=0;
	cin >> n;
	int a[n];
	cin >> q;
	for(int i=0;i<n;i++)
	{
	    cin >> a[i];
	}
	for(int i=0;i<q;i++)
	{
	    cin >> c;
	    if(c==1)
	    {
	       cin >> x;
	       if (a[x-1]==0)
	       a[x-1]=1;
	       else
	       a[x-1]=0;
	    }
	    else if (c==0)
	    {
	        cin >> l;
	        cin >> r;

	         if(a[r-1]==0)
	         cout << "EVEN" << endl;
	         else
	         cout << "ODD" << endl;

	    }
	}
	return 0;
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
