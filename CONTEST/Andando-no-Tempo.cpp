#include <bits/stdc++.h>
using namespace std;

	int main()
	{
		int a1, a2, a3;

		cin >> a1 >> a2 >> a3;

		if (a1 == a2 || a2 == a3 || a1 == a3)
			cout << "S" << endl;
		else if(a1 >= a2 && a1 >= a3){
			a2 = a2 + a3;
			if (a2 == a1)
				cout << "S" << endl;
			else
				cout << "N" << endl;
		}
		else if(a2 >= a1 && a2 >= a3){
			a1 = a1 + a3;
			if (a2 == a1)
				cout << "S" << endl;
			else
				cout << "N" << endl;
		}
		else if(a3 >= a1 && a3 >= a2){
			a1 = a1 + a2;
			if (a3 == a1)
				cout << "S" << endl;
			else
				cout << "N" << endl;
		}


		return 0;
	}