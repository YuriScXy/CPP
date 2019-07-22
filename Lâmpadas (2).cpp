#include <bits/stdc++.h>
using namespace std;

	int main()
	{
		int n;

		cin >> n;

		int n1, a = 0, b = 0;
		
		for (int i = 0; i < n; ++i)
		{
			cin >> n1;

			if (n1 == 1)
			{
				if (a == 0)
				{
					a = 1;
				}
				else if (a == 1)
				{
					a = 0;
				}
			}
			else if (n1 == 2)
			{
				if (b == 0 && a == 0)
				{
					b = 1;
					a = 1;
				}
				else if(b == 1 && a == 1){
					b = 0;
					a = 0;
				}
				else if(a == 0 && b == 1)
				{
					a = 1;
					b = 0;
				}
				else if(a == 1 && b == 0){
					a = 0;
					b = 1;
				}
			} 			
		}
		cout << a << endl << b << endl;

		
		return 0;
	}