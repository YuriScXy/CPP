#include <bits/stdc++.h>
using namespace std;

	int main()
	{
		int n;

		cin >> n;

		int v[n], soma = 0;

		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];
		}
		for (int i = 0; i < n; ++i)
		{
			if (n - 1 > i)
			{
				soma += v[i + 1];
			}
			if (i > 0)
			{
				soma += v[i - 1];
			}
			soma += v[i];

			cout << soma << endl;

			soma = 0;
		}


		return 0;
	}