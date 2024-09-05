#include<bits/stdc++.h>

using namespace std;

long long lcmFn(int a, int b) {

	if(b == 0)
		return a;

	if(a == b)
		return a;

	long long num1 = a > b ? a : b, num2 = a > b ? b : a;

	long long sq2 = sqrt(num2);


	for(long long i = 2; i <= sq2; i++) {
		if(num2 % i == 0 && num1 % i == 0) {
			return i * lcmFn(num1/i , num2/i);
		}
		
	}

	return num1 * num2;
	
}

int main() {
	long long a,b;

	cin>>a>>b;

	long long num1 = a > b ? a : b, num2 = a > b ? b : a;


	cout << lcmFn(num1,num2);
	
}