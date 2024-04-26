#include<bits/stdc++.h>

using namespace std;

void solution()
{
	int n;

	cin >> n;

	std::vector<int> v(n);

	for(int i=0; i<n; i++)
	{
		cin >> v[i];
	}

	for(int i=0; i<n; i++)
	{

		for(int j = 0; j<n; j++){
			int maximum = INT_MIN;
			for(int k = j; k <= j+i && j+i < n; k++)
			{
				maximum = max(maximum, v[k]);
			}


			if(maximum != INT_MIN){
				cout << maximum << " ";

			}
		}
			
	}

	cout << endl;
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