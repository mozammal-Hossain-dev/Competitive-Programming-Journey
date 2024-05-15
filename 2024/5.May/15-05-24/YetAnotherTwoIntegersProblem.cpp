#include<bits/stdc++.h>

using namespace std;

void solution()
{
	int a,b;

	cin >> a >> b;

	int dif = abs(a - b);

	int ans = (dif/10) + ( (dif % 10 == 0)? 0 : 1);

	cout << ans  << endl;
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