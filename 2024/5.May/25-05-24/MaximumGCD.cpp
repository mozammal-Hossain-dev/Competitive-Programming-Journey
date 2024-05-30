#include<bits/stdc++.h>
using namespace std;

void solution()
{
	long long n;

	cin >> n;

	long long ans = n%2 == 0 ? n/2 : (n-1)/2;

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