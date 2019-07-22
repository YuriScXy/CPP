#include <bits/stdc++.h>
using namespace std;

	int main()
	{
		int n ,j = 0 ,max = 0;

		cin >> n;

		int n1, n2 = 0;

		for (int i = 0; i < n; ++i)
		{
			cin >> n1;

			if (n1 == n2)
			{
				j++;
			}
			if (max < j)
			{
				max = j;
			}
			else if (n1 != n2)
			{
				j = 0;
			}

			n2 = n1;
		}
		cout << max + 1 << endl;
		return 0;
	}