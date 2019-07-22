#include <bits/stdc++.h>
using namespace std;

	int main()
	{
		int n, somaL = 0, somaC = 0, somaC1 = 0,somaD = 0 ,somaD2 = 0, v = 0, a[15][15];

		cin >> n;

		int n2 = n - 1;
				
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < n; ++j)
				cin >> a[i][j];

		for(int i = 0; i < n; ++i)
			somaL += a[0][i];
	
		for(int i = 0; i < n; ++i)
		{
			somaC = 0;
			somaC1 = 0;
			for(int j = 0; j < n; ++j)
			{
				somaC += a[i][j];
				somaC1 += a[j][i];
			}
			if (somaC != somaL || somaC1 != somaL)
				v = 1;			
		}
		for(int i = 0; i < n; ++i)
		{
			somaD += a[i][i];
			somaD2 += a[i][n2];
			n2--;
		}
		if (somaD != somaL || somaD2 != somaL)
			v = 1;

		if (v == 1)
			cout << -1 << endl;
		else
			cout << somaD2 << endl;
	}

