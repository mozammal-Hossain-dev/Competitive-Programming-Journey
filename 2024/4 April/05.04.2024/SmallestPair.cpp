#include<bits/stdc++.h>

using namespace std;

void solve()
{
	int n;

	cin >> n;

	int v[n];

	for(int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	int ans = INT_MAX;

	for(int i = 0; i < n; i++)
		for(int j = i+1; j < n; j++)
		{
			int sum = v[i] + v[j] + j - i;

			ans = min(ans,sum);

		}

	cout << ans << endl;
}

int main()
{
	int test;

	cin >> test;

	while(test--)
	{
		solve();
	}
}