#include <bits/stdc++.h>
#include <cstdio>
#include <algorithm>

#define MAX_TAM 100
#define INF 1000000000

using namespace std;

	int main()
	{
		int v[MAX_TAM][MAX_TAM];
		int n,somaL[MAX_TAM] ,somaC[MAX_TAM];
		
		cin >> n;

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cin >> v[i][j];
				somaC[i] += v[i][j];
				somaL[j] += v[i][j];
			}
		}

		int soma = -INF;

		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j)
				soma = max(soma, somaC[i] + somaL[j] - 2 * v[i][j]);

		cout << soma;
		return 0;
	}
