#include <bits/stdc++.h>
using namespace std;

	int main()
	{
		int n,	d,
			x1, x2,
			y1, y2;

		/*---------------tamanho do chocolate------------*/	
		cin >> n;
		d = n / 2;
		/*---------------coordenadas das figurinhas------------*/	
		cin >> x1 >> y1;
		cin >> x2 >> y2;
		
		if (x1 <= d && y1 <= d)
		{
			if (x2 <= d && y2 <= d)
				cout << "N"	<< endl;
			else
				cout << "S" << endl;
		}
		else if (x1 > d && y1 > d)
		{
			if (x2 > d && y2 > d)
				cout << "N"	<< endl;
			else
				cout << "S" << endl;
		}
		else if (x1 > d && y1 <= d)
		{
			if (x2 > d && y2 <= d)
				cout << "N"	<< endl;
			else
				cout << "S" << endl;
		}
		else if (x1 <= d && y1 > d)
		{
			if (x2 <= d && y2 > d)
				cout << "N"	<< endl;
			else
				cout << "S" << endl;
		}


		return 0;
	}