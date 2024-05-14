#include<bits/stdc++.h>

using namespace std;

void solution()
{
	int n,m;

	cin >> n >> m;

    int ans = n%m == 0 ? 0 : m - (n%m);

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