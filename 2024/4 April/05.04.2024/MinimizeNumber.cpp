#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n; 

	cin >> n;

	std::vector<int> v(n,0);

	for(int i=0; i<n; i++)
		cin >> v[i];

	int ans = 0;

	while(1)
	{
		for(int i=0; i<n; i++)
		{
			if(v[i]%2)
			{
				cout << ans << endl;
				return 0;
			}

			v[i] /= 2;
		}

		ans++;
	}
}