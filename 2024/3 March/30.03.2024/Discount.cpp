#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;

	cin >> a >> b;

	if(a <= b)
		cout << 0.00 << endl;
	else
	{
		int discountAmount = (a - b);

		double discountPercentage = (discountAmount * 100.0) / a;

		cout << discountPercentage << endl;
	}
}