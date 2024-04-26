#include<bits/stdc++.h>

using namespace std;

void solution()
{
	string s1, s2;

	cin >> s1 >> s2;

	string ans;

	for(int i=0; i<s1.length() || i<s2.length(); i++)
	{
		if(i< s1.length())
			ans += s1[i];

		if(i<s2.length())
			ans += s2[i];
	}

	cout << ans << endl;
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