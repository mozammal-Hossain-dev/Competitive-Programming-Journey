#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;

	cin >> n;

	vector<int>v(n);

	for(int i=0; i<n; i++)
		cin >> v[i];

	int minimual = INT_MAX;

	for(int i=0; i<n; i++)
		minimual = min(minimual , v[i]);

	int occurance = 0;

	for(int i=0; i<n; i++)
		if(minimual == v[i])
			occurance++;

	if(occurance % 2)
		cout << "Lucky"<<endl;
	else
		cout << "Unlucky"<<endl;
}