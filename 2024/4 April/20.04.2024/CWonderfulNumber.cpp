#include<bits/stdc++.h>

using namespace std;

bool isPalindrom(string s)
{
	int len = s.length();

	for(int i=0; i<len/2; i++)
	{
		if(s[i] != s[len-i-1])
			return false;
	}

	return true;
}

string bitRepresentation(int n)
{
	string str;

	while(n > 0)
	{
		if(n & 1) str += '1';
		else 
		  str += '0';

		n >>= 1;
	}

	return str;
}


int main()
{
	int n;

	cin >> n;

	string str = bitRepresentation(n);

	if((n%2) && isPalindrom(str))
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;

}