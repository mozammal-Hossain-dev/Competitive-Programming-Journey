#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;

	cin >> s;

	bool isRemoved = false;

	for(int i=0; i<s.length(); i++)
	{
		if(s[i] == '0'){
			s.erase(s.begin() + i);
			
			isRemoved = true;

			break;
		}
	}

	if(!isRemoved)
		s.erase(s.begin());



	cout << s <<endl;
}