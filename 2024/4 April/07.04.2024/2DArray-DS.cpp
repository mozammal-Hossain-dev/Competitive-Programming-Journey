#include<bits/stdc++.h>

using namespace std;

int main()
{
	int arr[6][6];

	for(int i=0; i<6; i++)
		for(int j=0; j<6; j++)
			cin >> arr[i][j];

	int ans = INT_MIN;

	for(int i=1; i<5; i++)
		for(int j=1; j<5; j++)
		{
			int sum = arr[i-1][j-1] + arr[i-1][j] + arr[i-1][j+1] + arr[i][j] + arr[i+1][j-1] + arr[i+1][j] + arr[i+1][j+1];

			ans = max(sum,ans);
		}

	cout << ans << endl;
}
