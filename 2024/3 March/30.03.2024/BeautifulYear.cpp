#include<bits/stdc++.h>
using namespace std;

bool isDistinct(int n)
{
	vector<int>a(10,0);

	while(n > 0)
	{
		a[n%10]++;

		n /= 10;
	}

	cout << endl;

	for(int i=0; i<10; i++)
		if(a[i]>1) return false;

	return true;
}

int main()
{
	int n;

	cin >> n;

	int ansYear = n;

	while(1)
	{
		ansYear++;

		if(isDistinct(ansYear))
			break;

	}

	cout << ansYear << endl;

}