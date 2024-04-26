#include<bits/stdc++.h>
using namespace std;


int main()
{
	double n;

	cin >> n;

	int ans = n;

	if(n - ans >= 0.5) ans++;


	cout << ans << endl;
}