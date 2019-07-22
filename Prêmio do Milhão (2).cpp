#include<bits/stdc++.h>
using namespace std;

	int main()
	{
		int n, a, b, c = 0, i = 0, j ;

		cin >> n;

		int v[n];

		while( n > i ){

			cin >> v[i] ;

			i++;		
		}
		for (int i = 0; i < n; ++i)
		{
			c += v[i];

			if (c > 999999)
			{
				j = i;
				break;
			}
		}

		cout << j + 1 << endl;	


		return 0;
	}