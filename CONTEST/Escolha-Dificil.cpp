#include <bits/stdc++.h>
using namespace std;

	int main()
	{
		int cA, bA, pA,
			cB, bB, pB;

		cin >> cA >> bA >> pA;
		cin >> cB >> bB >> pB;

		cA = cA - cB;
		bA = bA - bB;
		pA = pA - pB;

		if (cA > 0 && bA > 0 && pA > 0)
			cA = 0;
		else if (cA < 0 && bA > 0 && pA > 0)
			cA = cA;
		else if (cA > 0 && bA < 0 && pA > 0)
			cA = bA;
		else if (cA > 0 && bA > 0 && pA < 0)
			cA = pA;
		else if (cA < 0 && bA < 0 && pA < 0)
			cA = cA + bA + pA;
		else if (cA < 0 && bA < 0 && pA > 0)
			cA = cA + bA;
		else if (cA < 0 && bA > 0 && pA < 0)
			cA = cA + pA;
		else if (cA > 0 && bA < 0 && pA < 0)
			cA = bA + pA;
		cout << cA * (-1) << endl;


		return 0;
	}