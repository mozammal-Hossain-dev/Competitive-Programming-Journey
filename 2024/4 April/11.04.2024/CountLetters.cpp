#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;

	std::vector<int> v(26,0);

	cin >> s;

	for(int i=0; i<s.length(); i++)
	{
		int charVal = s[i] - 'a';

		v[charVal]++;

	}

	for(int i=0; i<26; i++)
	{
		char c = 'a' + i;

		if(v[i] > 0)
		{
			cout << c << " : " << v[i] << endl;
		}
	}

}