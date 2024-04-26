#include<bits/stdc++.h>

using namespace std;


void solution()
{
	int n;

	cin >> n;

	std::vector<long long> v(n);

	for(int i=0; i<n; i++)
		cin >> v[i];


	long long ans = 0;


	for(int i=1; i<n; i++)
	{
		ans = max(ans, v[i] * v[i-1]);
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