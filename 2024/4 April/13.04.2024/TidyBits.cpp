#include<bits/stdc++.h>

using namespace std;

string intToStr(long long num)
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


int count1s(string str)
{
	int count = 0;

	for(int i =0; i<str.length(); i++)
		if(str[i] == '1') count++;

	return count;
}


string createReqStr(string bits)
{
	int count = count1s(bits);
	string str;

	for(int i=0; i<count; i++)
		str += "1";

	while(str.length() < 32)
	{
		str.insert(0,"0");
	}

	return str;

}


long long bitsToNum(string str)
{
	long long int sum = 0;

	long long int n = 1;

	reverse(str.begin(), str.end());

	for(int i=0; i<str.length(); i++)
	{
		int digit = str[i] - '0';

		sum += (digit * n);

		n *= 2;
	}

	return sum;

}


int main()
{
	int n;

	cin >> n;

	string str = intToStr(n);

	str = createReqStr(str);

	cout << bitsToNum(str) << endl;

}