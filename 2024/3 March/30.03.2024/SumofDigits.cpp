#include<bits/stdc++.h>
using namespace std;

int stringToDigit(string s)
{
	int digit = 0;

	for(int i=0; i<s.length(); i++)
	{
		digit += (s[i] - '0');

	}
	return digit;
}

string digitToString(int digit)
{
	string s;

	while(digit != 0)
	{
		s += ((digit%10) + '0');

		digit /= 10;
	}

	return s;
}

int main()
{
	string n;

	cin >> n;

	int ans = 0;

	while(n.length() != 1)
	{
		int digit = stringToDigit(n);
		n = digitToString(digit);

		ans++;
	}
	cout << ans << endl;
}