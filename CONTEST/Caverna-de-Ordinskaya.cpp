#include <bits/stdc++.h>
using namespace std;

	int main()
	{
		int n, m ;

		cin >> n >> m;

		int v[n];

		for (int i = 0; i < n; ++i)
			cin >> v[i];
		int aux;

		for (int i = 1; i < n ; ++i)
		{
			aux = v[i] - m;
			if (aux < v[i])
			{
				v[i] = aux;
			}
		}
		

		return 0;
	}