#include<bits/stdc++.h>

using namespace std;

void solution()
{
	int n;

	cin >> n;

	std::vector<int> v(n);

	for(int i=0; i<n; i++)
		cin >> v[i];


	int ans = 0;


	for(int i=0; i<n; i++)
	{
		int tmp = 0;
		
		if(v[i] > i+1)
		{
			tmp = v[i] - i - 1;


			ans += max(0, tmp - ans);

		}
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