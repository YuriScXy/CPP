#include <bits/stdc++.h>
using namespace std;

	int main(int argc, char const *argv[])
	{
		int n, d; 
		cin >> n ;
		d = -5;

		if (n > 50)
		{
			d = d - n;
		}
		else
		{
			d = n + d;
		}
		n += d;

		cout << n;
		return 0;
	}