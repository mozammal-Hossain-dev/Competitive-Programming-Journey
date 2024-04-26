#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k,s;
	int ans = 0;

	cin >> k >> s;

	for(int i=0; i<=k; i++)
		for(int j=0; j<=k; j++)
			{
				int total = i+j;
				int lastNumber = s - total;

				if(lastNumber >= 0 && lastNumber <= k)
				{
					pair<int,int> p = pair<int,int>(i,j);

					ans++;
				}
			}

			cout << ans << endl;
}