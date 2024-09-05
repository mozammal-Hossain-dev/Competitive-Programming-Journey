#include<bits/stdc++.h>
using namespace std;

int l,r;

pair<int,int> lcm(int a, int b, int c){

	if(l <= c && c <= r){

		return make_pair(c/a,c/b);

	} else if(a > r || b > r){

		return make_pair(INT_MAX,INT_MAX);

	}
	else{

		return min( lcm(a+1,b,c*b), lcm(a,b+1,a*b));

	}
}


void solution(){

	cin >> l >> r;

	cout << lcm(l,r,1) << endl;
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
	