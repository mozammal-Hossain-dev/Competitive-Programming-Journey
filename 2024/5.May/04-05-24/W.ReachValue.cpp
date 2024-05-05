#include<bits/stdc++.h>

using namespace std;

long long n;

bool isPossible(long long x){

	if(x == n)
		return true;

	if(x > n)
		return false;

	return isPossible(x * 10) || isPossible(x * 20);


}

void solution() {

	cin >> n;

	isPossible(1) ? cout << "YES" : cout << "NO";

	cout << endl;

}

int main() {
	int test;

	cin >> test;

	while(test--)
	{
		solution();
	}
}