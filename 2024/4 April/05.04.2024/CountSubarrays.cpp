#include<bits/stdc++.h>

using namespace std;




void solution()
{
	int n; 
	vector<int>v;

	cin >> n;

	for(int i = 0; i < n; i++)
	{
		int x;

		cin >> x;

		v.push_back(x);

	}

	int ans = 0, length = 1;

	  for (int i = 1; i < n; i++) {
        if (v[i] >= v[i - 1]) {
            length++;
        } else {
            ans += (length * (length + 1)) / 2;
            length = 1; 
        }
    }

        ans += (length * (length + 1)) / 2;

	cout << ans << endl;
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

