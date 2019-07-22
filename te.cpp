#include <bits/stdc++.h>
using namespace std;

	int main()
	{
		int n, v[1010][1010], soma = 0, max = 0,soma2 = 0 ,max2 = 0;

		cin >> n;

		int n2 = n;

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cin >> v[i][j];
			}
		}
		for (int i = 0; i < n; ++i)
		{
			n2--;
			for (int j = 0; j < n; ++j)
			{
				soma += v[i][j] + v[j][i];
			//	soma2 += v[n2][j] +  v[j][n2];
			}

			if (max < soma)
			{
				max = soma;
			}/*
			if (max2 < soma)
			{
				max2 = soma2;
			}*/
			cout << soma << " " << max << endl;
			cout << soma2 << " " << max2 << endl;
			soma = 0;
			soma2 = 0;
			
		}


		return 0;
	}