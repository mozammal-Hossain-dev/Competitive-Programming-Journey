#include<bits/stdc++.h>
using namespace std;
void solve()
{
  string s1,s2;
  long long int len;
  cin >> len;
  cin >> s1 >> s2;
  map<char, int>mp;

  for(int i=0; i<len; i++)
  {
     if(s1[i] != s2[i])
     {
         mp[s2[i]]++;
     }
  }

  cout << mp.size() << endl;

}
int main()
{
  int test;
  cin >> test;
  for(int i = 1; i<=test; i++)
  {
      solve();
  }
}

