#include<bits/stdc++.h>

using namespace std;

long long nthFibonacci(int n) {

	if(n == 1)
		return 0;

	else if(n == 2)
		return 1;
	
	else 
		return nthFibonacci(n-1) + nthFibonacci(n-2);
}	

int main() {

	int n;	

	cin >> n;

	cout << nthFibonacci(n) << endl;
	
}