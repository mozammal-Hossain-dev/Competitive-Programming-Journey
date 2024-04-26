#include<bits/stdc++.h>

using namespace std;

int v[101];

bool isPrime(int n){

	int sq = sqrt(n);

	for(int i = 2; i <= sq; i++){

		if(n % i == 0){

			return false;
		}

	}

	return true;
}

bool isPalindrome(int n){

	string s = to_string(n);

	reverse(s.begin(), s.end());

	if(s == to_string(n)){

		return true;
		
	} else {

		return false;
		
	}
	
}

int totalDivisor(int n){

	int sq = sqrt(n);

	int totalDivisors = 0;

	for(int i = 2; i <= sq; i++){

		if(n % i == 0){

			totalDivisors += 2;

		}	

	}

	return totalDivisors;
	
}

int main(){

	int n, mx = 0, mn = 101, primeCnt = 0, palindromCnt = 0, highestDivisor = 0, totalDivisor = 0;

	cin >> n;

	for(int i = 0; i < n; i++){

		cin >> v[i];

		mx = max(mx, v[i]);

		mn = min(mn, v[i]);

		if(isPrime(v[i])){

			primeCnt++;
			
		}

		if(isPalindrome(v[i])){

			palindromCnt++;
			
		}

	    if(totalDivisor > totalDivisors(v[i])){

	    	highestDivisor = v[i];

	    } else if(totalDivisor == totalDivisors(v[i])){

	    	highestDivisor = max(highestDivisor, v[i]);
	    }
		
	}

	cout << "The maximum number : " << mx << endl;

	cout<<"The minimum number : " << mn << endl;

	cout << "The number of prime numbers : " << primeCnt << endl;

	cout << "The number of palindrome numbers : " << palindromCnt << endl;

	cout << "The number that has the maximum number of divisors : " << highestDivisor << endl;

	
}