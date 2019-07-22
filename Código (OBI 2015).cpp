#include<bits/stdc++.h>
using namespace std;

	int main()
	{

		int n, rest = 0;

		cin >> n;

		int v[n];

		for (int i = 0; i < n; i++)
			cin >> v[i];
		
		for (int i = 2; i < n; ++i)
			if(v[i - 2] == 1 && v[i - 1] == 0 && v[i] == 0){
				rest++;					
		cout << rest << endl;
		
	
	return 0;
	}