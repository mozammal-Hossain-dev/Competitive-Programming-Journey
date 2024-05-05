#include <bits/stdc++.h>
using namespace std;

int startIndex, endIndex;

int ans = 0;

void traveling(int tmpStart) {

	if(tmpStart > endIndex) {
		return;
	}

	if(tmpStart == endIndex) {
		ans++;
		return;
	}

	traveling(tmpStart + 1);
	traveling(tmpStart + 2);
	traveling(tmpStart + 3);
}

int main()
{
	cin >> startIndex >> endIndex;


	traveling(startIndex);

	cout << ans << endl;



}