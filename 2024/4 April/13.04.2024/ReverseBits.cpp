#include<bits/stdc++.h>

using namespace std;

string intToStr(unsigned int num)
{
	string str;

	while(num > 0)
	{
		if(num & 1)
			str += '1';
		else
			str += '0';

		num >>= 1;
	}

	reverse(str.begin(), str.end());

	while(str.length() < 32)
	{
		str.insert(0,"0");
	}

	return str;
}

string reverseBits(string str)
{
	 reverse(str.begin(), str.end());

	 return str;
}

unsigned int bitsToNum(string str)
{
	unsigned int sum = 0;

	unsigned int n = 1;

	reverse(str.begin(), str.end());

	for(int i=0; i<str.length(); i++)
	{
		unsigned int digit = str[i] - '0';

		sum += (digit * n);

		n *= 2;
	}

	return sum;

}

void solution()
{
	 int n;

	cin >> n;

	string bit = intToStr(n);

	bit = reverseBits(bit);

	cout << bitsToNum(bit) << endl;
	
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