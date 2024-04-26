#include<bits/stdc++.h>

using namespace std;

void solution()
{
	int n;

	cin >> n;

	vector<int>v(n);

	for(int i=0; i<n; i++)
		cin >> v[i];

	int ans = 0; 

	for(int i=0; i<n; i++)
	{
		if(i+1 < v[i])
		{

			ans += ((v[i] - i-1) - ans);
		}
	}

	cout << ans << endl;
}

int main()
{
	int test;

	cin >> test;

	while(test--)
	{
		solution();
	}
}