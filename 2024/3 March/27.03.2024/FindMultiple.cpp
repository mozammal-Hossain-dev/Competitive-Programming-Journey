#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;

	cin >> a >> b >> c;

	if(a%c == 0)
		cout << a <<endl;
	else
	{
		int d = ((a/c)+1) * c;

		if(a<=d && d <= b)
			cout << d <<endl;
		else 
			cout << -1 << endl;

	}

	
}