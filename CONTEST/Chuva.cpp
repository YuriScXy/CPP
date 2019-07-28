#include <bits/stdc++.h>
using namespace std;

	int main()
	{
		int n, cont = 0, n2, max = 0 ;

		cin >> n;

		int v[n], d = 0;

		for (int i = 0; i < n; ++i)
			cin >> v[i];
		
		max = v[0];

		for (int i = 0; i < n; ++i)
		{
			if (i - 1 > 0 && i + 1 < n)
			{
				if (v[i] - v[i - 1] > 2 && v[i] - v[i + 1] > 2)
				{
					cont++;
				}
			}
		}
			
		
		cout << cont << endl;

		


		return 0;
	}