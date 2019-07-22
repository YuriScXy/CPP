#include <bits/stdc++.h>
using namespace std;

	int main()
	{
		char n;
		double x, y;

		cin >> n >> x >> y;

		if (n == 'M')
		{
			cout << fixed << showpoint << setprecision(2) << x * y;
		}
		if (n == 'D')
		{
			cout << fixed << showpoint << setprecision(2) << x / y;
		}

		return 0;
	}