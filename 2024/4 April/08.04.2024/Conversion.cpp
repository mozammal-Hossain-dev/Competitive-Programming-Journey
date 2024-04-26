#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;

	getline(cin,s);


	for(int i=0; i<s.length(); i++)
	{
		if(s[i] == ',')
			{
				cout << " ";
			}
		else {

			int asciiValue = s[i];

			if(asciiValue < 97)
				cout << char(asciiValue + 32);
			else 
			   cout << char(asciiValue - 32);
		}
	}
}