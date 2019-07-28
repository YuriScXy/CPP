#include <bits/stdc++.h>
using namespace std;



	int main()
	{
		int n;
		int MD[] = {1, 5, 10, 25, 50, 100};

		cin >> n;

		int troco = n;

		int cont = 0;
		
		for (int i = 5; i > 0; --i)
		{	
			veri:
			if (troco < MD[i])
			{
				i--;			
				goto veri;	
			} 
			else if (troco >= MD[i])
			{
				
				cont++;
				troco -= MD[i];
				if (troco == 0)
					break;
				else
					goto veri;
			}
			
		}
		cout << cont << endl;
		

		return 0;
	}