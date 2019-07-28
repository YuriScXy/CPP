#include <bits/stdc++.h>
using namespace std;

	int main()
	{
		int n, m;

		cin >> n >> m;

		int v[n], d = 0;
		
		for (int i = 0; i < n; ++i)
			cin >> v[i];

		int total = 0, aux;

		for (int i = 0; i < n; ++i)
		{
			d = 0;
			for (int j = 0; j < n; ++j)
				if (v[j] != m)
					d = 1;

			if (d == 0)	break;

			int t = 0;
			aux = 0;

			veri:
			if (v[i] == m)
			{
				++i;
				goto veri;
			}
			else
			{
				if (v[i] > m)
				{
					aux = v[i] - m ;
					t = 1;
				}
				else
					aux = m - v[i];							
			}
			if (t == 1)
			{
				v[i] -= aux;
				if (i + 1 <= n)
					v[i + 1] -= aux;			
			}
			if (t == 0)
			{
				v[i] += aux;
				if (i + 1 <= n)
					v[i + 1] += aux;			
			}
			
						
			if (aux < 0)
				aux *= -1;
			

			total += aux;			
		}
				
		cout << total << endl;


		return 0;
	}
