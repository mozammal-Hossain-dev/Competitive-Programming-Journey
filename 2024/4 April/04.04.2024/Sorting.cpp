#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;

	cin >> n;

	vector<int>v(n);

	for(int i=0; i<n; i++)
		cin >> v[i];

	for(int i=0; i<n; i++)
		for(int j=1; j<n-i; j++)
		{
			if(v[j-1] > v[j])
			{
				int tmp = v[j-1];

				v[j-1] = v[j];

				v[j] = tmp;
			}

		}

	for(int i=0; i<n; i++)
		cout << v[i] << " ";
}