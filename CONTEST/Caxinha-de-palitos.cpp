#include <bits/stdc++.h>
using namespace std;

	int main()
	{
		int a1, a2, a3;
		int time1, time2, time3;

		cin >> a1 >> a2 >> a3;

		time1 = (a2 * 2)  + (a3 * 4);
		time2 = (a1 * 2)  + (a3 * 2);
		time3 = (a2 * 2)  + (a1 * 4);

		if (time1 <= time2 && time1 <= time3)
			cout << time1 << endl;
		else if (time2 <= time1 && time2 <= time3)
			cout << time2 << endl;
		else if (time3 <= time1 && time3 <= time2)
			cout << time3 << endl;

		return 0;
	}