#include<bits/stdc++.h>

using namespace std;

void solution()
{
	string s;

	cin >> s;

	for(int i=0; i+2<s.length(); i++)
	{
		if(s[i] == '0' && s[i+1] == '1' && s[i+2] == '0')
		{
			cout << "Good" << endl;
			return;
		} else if(s[i] == '1' && s[i+1] == '0' && s[i+2] == '1')
		{
			cout << "Good" << endl;
			return;
		}

	}

	cout << "Bad" << endl;
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