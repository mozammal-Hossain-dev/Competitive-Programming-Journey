#include<bits/stdc++.h>

using namespace std;

int combination(int n, int r)
{
	if(n < r || r < 0 || n < 0)
		return 0;

	if(n == 0) 
		return 1;

	return combination(n-1,r) + combination(n-1,r-1);
}

int main()
{
	int n,r;

	cin >> n >> r;

	cout << combination(n,r) << endl;

	return 0 ;
}