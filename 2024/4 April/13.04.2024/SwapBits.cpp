#include<bits/stdc++.h>

using namespace std;

string swapBits(string s)
{
	for(int i=1; i<s.length(); i+= 2)
	{
		char c = s[i];

		s[i] = s[i-1];

		s[i-1] = c;
	}

	return s;
}

long long bitToInt(string s)
{
	long long sum = 0;

	long long n = 1;

	for(int i=0; i<s.length(); i++)
	{
		long long digit = s[i] - '0';

		sum += ( digit * n );

		n *= 2;

	}

	return sum;
}

string intToBit(int num)
{
	string str;

	while(num > 0) {

		if(num & 1)
			str += "1";
		else 
		    str +=  "0";

		num >>= 1;

	}

	while(str.length() < 32)
	{
		str += "0";

	}

	return str;
}



void solution()
{
	long long n;

	cin >> n;

	string bits = intToBit(n);

	bits = swapBits(bits);


	long long ans = bitToInt(bits);


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