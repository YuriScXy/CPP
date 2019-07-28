#include <bits/stdc++.h>
using namespace std;

	int main()
	{
		int n, D, X;
		int Dr = 0, Xer = 0;

		cin >> n;

		for (int i = 0; i < n; ++i)
		{
			cin >> D >> X;
			/*Tomando de base a decisao por dario*/
			switch( D )
			{
				/*se dario ganhar conta se não ,xerxes que ganhou a mão*/
				case 0:
					if ( X == 1 || X == 2)
						Dr++;
					else
						Xer++;	
					break;				
				case 1:
					if (X == 2 || X == 3)
						Dr++;
					else
						Xer++;
					break;
				case 2:
					if (X == 3 || X == 4)
						Dr++;
					else
						Xer++;
					break;
				case 3:
					if (X == 4 || X == 0)
						Dr++;
					else
						Xer++;
					break;
				case 4:
					if (X == 0 || X == 1)
						Dr++;
					else
						Xer++;
					break;
			}
		}
		if (Dr > Xer)
			cout << "dario" << endl;
		else
			cout << "xerxes" << endl;

		return 0;
			
	}