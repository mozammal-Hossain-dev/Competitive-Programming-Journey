#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int arr[n][n];

	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin >> arr[i][j];


	int leftToRightSum = 0, rightToLeftSum = 0;


	for(int i=0; i<n; i++)
		leftToRightSum += arr[i][i];

	for(int i=n-1, j = 0; i>=0, j<n; i--, j++)
		rightToLeftSum += arr[i][j];



	cout << abs(leftToRightSum - rightToLeftSum) << endl;

}