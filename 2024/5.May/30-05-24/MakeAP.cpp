#include<bits/stdc++.h>
using namespace std;

bool changeThird(int num1, int num2, int num3)
{
	if(num1 > num2) {
		int dif = num1 - num2;

		int expectedNum3 = num2 - dif;

		if(expectedNum3 % num3 == 0)
			return true;
	} else if(num1 <= num2) {

	int dif = num2 - num1;

	int expectedNum3 = num2 + dif;

	if(expectedNum3 % num3 == 0)
		return true;
}

	return false;
}

bool changeFirst(int num1, int num2, int num3)
{

	if(num2 > num3) {
		int dif = num2 - num3;

		int expectedNum1 = num2 + dif;

		if(expectedNum1 % num1 == 0)
			return true;

	} else if(num2 <= num3) {

	int dif = num3 - num2;

	int expectedNum1 = num2 - dif;

	if(expectedNum1 % num1 == 0)
		return true;
}


	return false;


}

bool changeMiddle(int num1, int num2, int num3)
{
	if((num1 + num3) % 2) return false;

	int mid = (num1 + num3) / 2;

	if((mid >= num2) && (mid % num2 == 0))
		return true;

	return false;
}

void solution()
{
	int a,b,c;

	cin >> a >> b >> c;

	if(changeFirst(a,b,c) || changeMiddle(a,b,c) || changeThird(a,b,c))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
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