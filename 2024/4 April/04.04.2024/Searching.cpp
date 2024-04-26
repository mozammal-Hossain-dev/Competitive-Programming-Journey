#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;

	cin >> n;

	vector<int>v(n);

	for(int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	int m;

	cin >> m;

	for(int i = 0; i < n; i++)
	{
		if(v[i] == m) {
			cout << i << endl;
			return 0;
		}
	}

	cout << -1 << endl;

}