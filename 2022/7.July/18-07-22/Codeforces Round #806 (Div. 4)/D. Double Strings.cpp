#include<bits/stdc++.h>
using namespace std;

string newString(string s,int a,int b)
{
    string res;
    for(int i=a; i<=b; i++)
        res += s[i];

    return res;
}

void solve()
{
   int n;
   cin >> n;
   string s[n];
   for(int i=0; i<n; i++)
     cin >> s[i];
   map<string,int>mp;
   for(int i=0; i<n; i++)
      mp[s[i]]++;

  vector<int>ans(n,0);

   for(int i=0; i<n; i++)
   {
       for(int j=0; j<s[i].size()-1; j++)
       {
           string a = newString(s[i],0,j);
           string b = newString(s[i],j+1,s[i].size()-1);

           if(mp.find(a) != mp.end() && mp.find(b) != mp.end()){
              ans[i] = 1;
              break;
       }
       }
   }

   for(int i=0; i<n; i++)
    cout << ans[i];

   cout << endl;

}
int main()
{
  int test = 1;
  cin >> test;
  for(int i = 1; i<=test; i++)
  {
      solve();
  }
}

