#include<bits/stdc++.h>

using namespace std;

void solution()
{
	int a,b,c;

	cin >> a >> b >> c;

	int dif1 = b - a, dif2 = c - b, dif3 = c - a;

	if( (dif3 % (2*b)) == 0 && dif3 >= 0)
	{
		cout << "printing from (dif3)" << endl;
		cout << "YES" << endl;
		return;
	}

	if( (b+dif1) % c == 0 && dif1 >= 0)
	{
		cout << "printing from (b+dif1)" << endl;
		cout << "YES" << endl;
		return;
	}

	if((b-dif2) % a == 0 && dif2 >= 0 && (b-dif2) >= 0)
	{
		cout<< "printing from (b-dif2)" << endl;

		cout << "YES" << endl;
		return;
	}

	cout << "NO" << endl;


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