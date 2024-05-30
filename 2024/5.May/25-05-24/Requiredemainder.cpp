#include<bits/stdc++.h>

using namespace std;

void solution()
{
	int x,y,n;

	cin >> x >> y >> n;

	int div = n/x;

	int ans = div * x;

	if(ans+y <= n)
		ans += y;
	else
	{
		ans = (div -1 ) * x + y;
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