#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a;

	cin >> a;

	string s = "0000";

	int index = 3;

	while(a>0)
	{
		char c = (a%10) + '0';

		a /= 10;

		s[index] = c;

		index--;
	}

	cout << s << endl;
}