#include<bits/stdc++.h>
using namespace std;

std::vector<int>arr(3);
int ans = 0;


void calculation1(int index, int addedOtherTwo,int multiplicationOtherTwo) {
	ans = max(ans, max(addedOtherTwo + arr[index], addedOtherTwo * arr[index]));
	ans = max(ans, max(multiplicationOtherTwo + arr[index], multiplicationOtherTwo * arr[index]));
}


int main()
{

	for(int i=0; i<3; i++)
		cin >> arr[i];

	calculation1(2, arr[0]+arr[1], arr[0]*arr[1]);

	calculation1(0, arr[1]+arr[2], arr[1]*arr[2]);


 cout << ans << endl;
}