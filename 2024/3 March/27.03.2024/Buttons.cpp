#include<bits/stdc++.h>
using namespace std;


int main()
{
	int a,b;
	int ans = 0;

	cin >> a >> b;

	if(a >= b) {
		ans += a;
		a--;
	} else {
		ans += b;
		b--;
	}

	if(a >= b) {
		ans += a;
		a--;
	} else {
		ans += b;
		b--;
	}

	cout << ans << endl;

}