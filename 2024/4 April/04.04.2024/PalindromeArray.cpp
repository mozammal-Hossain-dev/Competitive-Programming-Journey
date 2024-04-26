#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; 
	cin >> n;

	std::vector<int> v(n);

	for(int i=0; i<n; i++)
		cin >> v[i];

	int hi = n-1, lw = 0;

	while(hi >= lw)
	{
		if(v[hi] != v[lw])
		{
			cout << "NO";

			return 0;
		}

		hi--, lw++;

	}

	cout << "YES" << endl;
}