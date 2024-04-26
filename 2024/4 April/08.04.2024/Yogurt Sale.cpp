#include<bits/stdc++.h>

using namespace std;

void solution()
{
	int n,a,b;

	cin >> n >> a >> b;

	if(n == 1)
	{
		if(a < b)
			cout << a << endl;
		else
			cout << b << endl;
	} else{

		if(2 * a >= b)
		{
			cout << a * n << endl;
		} else {
			int total = n / 2;

			cout << total * n + a * (n%2) << endl;
		}
	}


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