#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vector<int> vect(n);
		for (int i = 0; i < n; i++)
		{
			cin >>vect[i];
		}
		sort(vect.begin(), vect.end());

		int lng = 1;
		int cnt = 1;
		for (int i = 1; i < n; i++)
		{
			int diff = vect[i] - vect[i - 1];
			if (diff <= k)
			{
				cnt++;
			}
			else
			{
				cnt = 1;
			}
			lng = max(lng, cnt);
		}

		int ans = n - lng;
		cout << ans << endl;
	}
}