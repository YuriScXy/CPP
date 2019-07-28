#include <bits/stdc++.h>
using namespace std;

	struct consultas
	{
		int Hchd ,Hsaid;
	};

	int n;

	bool comparar(consultas dx, consultas dy){
		return dx.Hsaid < dy.Hsaid;
	}

	int main()
	{
		cin >> n;

		consultas d[n];
		
		for (int i = 0; i < n; ++i)
			cin >> d[i].Hchd >> d[i].Hsaid;

		sort(d ,d+n ,comparar);

		int veri = 0,cont = 0 ;
		
		for (int i = 0; i < n; ++i)
		{
			if (d[i].Hchd >= veri){
				cont++;
				veri = d[i].Hsaid;
			}
		}

		cout << cont << endl;
		
		

		return 0;
	}