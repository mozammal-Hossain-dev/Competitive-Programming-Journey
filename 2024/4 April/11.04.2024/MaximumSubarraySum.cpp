#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;

	cin >> n;

	vector<long long>v(n);


	for(int i=0; i<n; i++)
		cin >> v[i];


	long long tmpSum = 0;

	long long mxSum = LLONG_MIN;



	for(int i=0; i<n; i++)
	{
		tmpSum += v[i];

		if(mxSum < tmpSum)
		{
			mxSum = tmpSum;

		} 

		if(tmpSum < 0 )
		{
			tmpSum = 0;

		}

	}

	cout << mxSum << endl;


}