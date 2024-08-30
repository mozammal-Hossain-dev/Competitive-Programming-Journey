#include<bits/stdc++.h>

using namespace std;

long long customFunction(long long n) {
	if(n == 0)
		return 0;

	if(n % 2 == 0)
		return n + customFunction(n - 1);
	else
		return -n + customFunction(n - 1);

}

int main() {
	long long n;

	cin >> n;

	cout << customFunction(n) << endl;
	
}