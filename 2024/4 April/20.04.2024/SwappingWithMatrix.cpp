#include<bits/stdc++.h>

using namespace std;

int v[501][501];

void swapColum(int col1, int col2, int n)
{
	for(int i=0; i<n; i++)
	{
		int tmpVal = v[i][col1];

		v[i][col1] = v[i][col2];

		v[i][col2] = tmpVal;
	}
}

void swapRow(int rw1, int rw2, int n)
{
	for(int i=0; i<n; i++)
	{
		int tmpVal = v[rw1][i];

		v[rw1][i] = v[rw2][i];

		v[rw2][i] = tmpVal;
	}
}

int main()
{
	int n,x,y;

	cin >> n >> x >> y;

	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
		{
			cin >> v[i][j];
		}

	swapRow(x-1,y-1,n);

	swapColum(x-1,y-1,n);

	for(int i=0; i<n; i++) {

		for(int j=0; j<n; j++)
			cout << v[i][j] << " ";

		cout << endl;
	}


}