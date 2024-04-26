#include<bits/stdc++.h>

using namespace std;

long long powerMultiplication(int n, int pw)
{
	if(pw <= 1)
		return n;

	return n * powerMultiplication(n, pw-1);
}


long long solution(int n, int m)
{
	long long sum = 0;

	for(int i=0; i<=m; i++)
	{
		if(i % 2) continue;

		long long powVal = i == 0 ? 0 : powerMultiplication(n,i);

		sum += powVal;

	}

	return sum;
}


int main()
{
	int n,m;

	cin >> n >> m;

	cout << solution(n,m) << endl;


}