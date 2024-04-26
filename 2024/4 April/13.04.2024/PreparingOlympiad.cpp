#include<bits/stdc++.h>

using namespace std;

int n,l,r,x;

int cnt = 0;

std::vector<int> v;

void findProblemSet(int index, int problemTaken, int sum, int mn, int mx)
{

	if(index >= n){
		if(problemTaken >= 2 && sum <= r && sum >= l && (mx - mn) >= x)
	{
		cnt++;
	}
		return;
	}

	


	findProblemSet(index+1, problemTaken, sum, mn, mx);

	findProblemSet(index+1, problemTaken+1, sum + v[index], min(mn,v[index]), max(mx,v[index]));

}



int main()
{

	cin >> n >> l >> r >> x;


	for(int i=0; i<n; i++) {
		int x;
		cin >> x;

		v.push_back(x);
	}

	findProblemSet(0,0,0,INT_MAX, 0);


	cout << cnt << endl;

}