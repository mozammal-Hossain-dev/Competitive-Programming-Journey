#include<bits/stdc++.h>
#include <utility>

using namespace std;


void solution()
{
	int l,r;
	pair<int,int> ans = make_pair(-1,-1);

	cin >> l >> r;

	if((r - l) >= l)
	{
		ans.first = l;
		ans.second = (2 * l);
	}


	cout << ans.first << " " << ans.second << endl;



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