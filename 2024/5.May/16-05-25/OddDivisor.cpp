#include<bits/stdc++.h>

using namespace std;

void solution()
{
	long long int n;

	cin >> n;

	if(n % 2)
	{
		cout << "YES" << endl;

		return;
	}

	long long int sq = sqrt(n);

	long long int i = 2;


	while(sq >= i) {

		if(n%i == 0)
		{
			long long div1 = i;

			long long div2 = (n/i);

			if(div1 % 2 || div2 % 2 )
			{
				cout << "YES" << endl;

				return;
			}

			n = max(div1, div2);

			sq = sqrt(n);

			i = 1;
		}

		i++;
	}


	cout << "NO" << endl;

	return;
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