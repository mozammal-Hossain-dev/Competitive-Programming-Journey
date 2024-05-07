#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int n,len;
  cin >> n >> len;

  int ans = INT_MAX;

  string s[n];

  for(int i=0; i<n; i++)
   cin >> s[i];

  for(int i=0; i<n; i++){
   for(int j=0; j<n; j++)
   {
     if(i == j)
       continue;
     int tmp = 0;
      for(int k=0; k<len; k++) {
        int dif = s[i][k] - s[j][k];
          tmp += abs(dif);
        }

         ans = min(ans,tmp);
   }

   }

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

