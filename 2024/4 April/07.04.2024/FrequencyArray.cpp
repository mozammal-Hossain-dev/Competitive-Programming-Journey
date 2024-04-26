#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;

	cin >> n >> m;

	std::vector<int> frequencyArray(m+1,0);

	for(int i=0; i<n; i++)
	{
		int x; 

		cin >> x;

		frequencyArray[x]++;
	}

	for(int i=1; i<=m; i++)
	{
		cout << frequencyArray[i] << endl;

	}
}