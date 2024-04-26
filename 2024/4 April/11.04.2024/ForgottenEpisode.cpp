#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;

	cin >> n;

	std::vector<int> v(n+1,0);

	for(int i=0; i<n-1; i++)
	{
		int x;

		cin >> x;

		v[x] = 1;
	}

	for(int i=1; i<n+1; i++) {

		if(v[i] == 0) {

			cout << i << endl;

			return 0;
		}
	}
}