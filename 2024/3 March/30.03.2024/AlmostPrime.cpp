#include<bits/stdc++.h>
using namespace std; 


bool isPrime(int n)
{
	if(n == 2) return true;

	int squareRoot = sqrt(n);


	for(int i=2; i<=squareRoot; i++)
	{
		if(n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int n;
	int almostPrime = 0;

	cin >> n;

	std::vector<int> v(n+1,0);

	for(int i=2; i<=n; i++)
	{
		if(isPrime(i)){
			for(int j=i ; j<=n ; j+=i)
			{
				v[j]++;
			}

		}
	}

	for(int i=0; i<=n; i++)
		if(v[i] == 2) almostPrime++;


cout << almostPrime << endl;




}