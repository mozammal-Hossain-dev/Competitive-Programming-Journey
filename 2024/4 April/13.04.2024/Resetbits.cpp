#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n,k;

	cin >> n >> k;

	n =  (n & ((1u << 31) - (1u << k)));

	cout << n << endl;
}