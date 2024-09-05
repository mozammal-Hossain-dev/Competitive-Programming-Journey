#include<bits/stdc++.h>
using namespace std;

void solution()
{
	int a;

	cin >> a;

	if(a == 3){
		cout << 6 << endl;
		return;
	} else if(a < 5){
		cout << a << endl;
		return;
	}
	if(a >= 5){
		cout << 0 << endl;
		return;
	}

}

int main()
{
	int test;

	cin >> test;

	while(test--) {
		solution();
	}
}