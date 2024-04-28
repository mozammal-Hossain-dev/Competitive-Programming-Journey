#include<bits/stdc++.h>

using namespace std;

int sequenceLength(int n){

	if(n == 1)
		return 1;

	return 1 + (n%2 == 0 ? sequenceLength(n/2) : sequenceLength(3*n+1));
	
}

int main()
{
	int n;

	cin >> n;

	cout << sequenceLength(n) << endl;


}