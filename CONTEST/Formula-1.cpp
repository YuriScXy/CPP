#include <bits/stdc++.h>
using namespace std;

	struct corrida
	{
		int idPlt, idPos[105], TipPont; 
	};

	bool compara(corrida a, corrida b){
		return a.idPos < b.idPos;
	}

	int main()
	{
		int p, g, s;
		corrida d[108];
		do{
			cin >> g >> p;
			if(p == 0 && g == 0) break;

			for (int i2 = 0; i2 < g; ++i2)
			{					
				for (int i = 0; i < p; ++i)
					d[i2].idPlt[i]	= i + 1;

				for (int i = 1; i <= p; ++i)
					cin >> d[i2].idPos[i];
			}
				sort(d+1, d+n+1, compara);

			cin >> s;	

			for (int i = 0; i < s; ++i)
			{
				int tam;
				cin >> tam;
				for (int i = 1; i <= tam; ++i)
					cin >> d[i].TipPont;
					for (int i = 1; i <= tam; ++i)
					{
						
					}
			}
			
					



		}while(g != 0)
		return 0;
				
	}