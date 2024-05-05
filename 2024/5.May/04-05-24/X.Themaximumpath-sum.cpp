#include<bits/stdc++.h>

using namespace std;

int n,m;

long long ans = -1e9;

int a[12][12];

void iteration(int i,int j, long long total) {

	if(i+1 == n && j+1 == m) {
		ans = max(ans,total);
		return;
	}

	
	if(i+1 < n) {
		iteration(i+1,j,total+a[i+1][j]);
	}


	if(j+1 < m) {
		iteration(i,j+1,total+a[i][j+1]);
	}

}


int main(){

	cin >> n >> m;

	for(int i = 0; i < n; i++){

		for(int j = 0; j < m; j++){

			cin >> a[i][j];

		}
		
	}

	iteration(0,0,a[0][0]);

	cout << ans << endl;
	
}