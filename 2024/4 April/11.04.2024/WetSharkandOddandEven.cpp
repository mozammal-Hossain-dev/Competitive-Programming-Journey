#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int>oddNumbers;
	vector<int>evenNumbers;

	for(int i=0; i<n; i++)
	{
		int x; 

		cin >> x;

		if(x % 2) 
			oddNumbers.push_back(x);
		else
			evenNumbers.push_back(x);
	}

	long long ans = 0;

	for(int i=0; i<evenNumbers.size(); i++)
		ans += evenNumbers[i];

	sort(oddNumbers.begin(),oddNumbers.end());

	reverse(oddNumbers.begin(), oddNumbers.end());

	int possibleLength = oddNumbers.size() - (oddNumbers.size() % 2);


	for(int i=0; i<possibleLength; i++)
		ans += oddNumbers[i];

	cout << ans << endl;


}