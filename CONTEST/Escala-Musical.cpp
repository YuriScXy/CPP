#include <bits/stdc++.h>
using namespace std;

	int main()
	{
		int v[61];
		int notas = 0, n;

		for (int i = 0; i < 61; ++i)
		{
			v[i] = notas + 1;
			notas++;
			if (notas - 1 == 12)
				notas = 0;
			
		}
		cout << endl;
		for (int i = 0; i < 61; ++i){
			cout << i + 1 << " = " << v[i] << "\t";
			if (v[i] % 13 == 0 && v[i] != 1)
				cout << endl;
			
		}
		

		return 0;
	}