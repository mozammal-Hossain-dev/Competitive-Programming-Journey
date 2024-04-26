#include<bits/stdc++.h>

using namespace std;

std::vector<long long> v(51,0);

long long  fibonacci(int n)
{
	if(n == 1) return 0;

	if(n == 2) return 1;

	if(v[n] != 0) return v[n];

	return v[n] = (fibonacci(n-1) + fibonacci (n-2));
}

int main()
{
	int n;

	cin >> n;

	cout << fibonacci(n) << endl;

}