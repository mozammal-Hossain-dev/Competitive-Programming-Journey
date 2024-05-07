#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  map<char,int>mp;
  for(int i=0; i<n; i++)
    mp[s[i]]++;
  int ans = 0;
  for(auto it = mp.begin(); it != mp.end(); it++)
    ans += it->second;
  ans += mp.size();

  cout << ans << endl;
}


int main()
{
    int test = 1;
    cin >> test;
    while(test--)
    {
        solve();
    }

}

