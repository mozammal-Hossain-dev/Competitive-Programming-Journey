#include<bits/stdc++.h>

using namespace std;

int log2(long long n){

	if(n == 1) return 0;

	return 1 + log2(n/2);
	
}

int main(){

	long long n;

	cin >> n;

	cout << log2(n) << endl;

}