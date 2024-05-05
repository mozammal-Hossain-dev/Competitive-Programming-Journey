#include<bits/stdc++.h>

using namespace std;

int n;

long long x;

std::vector<int> v;

bool isItPossible(int i, long long tmp){

	if(i >= n) {
		return (tmp == x);
	}

	return (isItPossible(i + 1, tmp + v[i]) || isItPossible(i + 1, tmp - v[i]));
	
}


int main(){

	cin >> n >> x;

	v.resize(n);

	for(int i = 0; i < n; i++){
		
		cin >> v[i];
	}


   isItPossible(1,v[0]) ? cout << "YES" : cout << "NO";

	
}