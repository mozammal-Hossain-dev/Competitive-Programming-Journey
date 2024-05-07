#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>v1(100,vector<int>(100,0));
int n;

int chng(int a)
{
    vector<vector<int>>v2(4);


    for(int i=a; i<n-a-1; i++)
        v2[0].push_back(v1[a][i]);

    for(int i=n-a-1; i>a; i--)
        v2[3].push_back(v1[i][a]);

    for(int i=n-a-1; i>a; i--)
        v2[2].push_back(v1[n-a-1][i]);

    for(int i=a; i<n-a-1; i++)
        v2[1].push_back(v1[i][n-a-1]);


    int len = v2[0].size();


        int ans = 0;

    for(int i=0; i<len; i++){
            int zero = 0, one = 0;
    for(int j=0; j<4; j++)
    {
         if(v2[j][i] == 0)
            zero++;
         else
            one++;
    }
      ans += min(zero,one);
    }

   return ans;
}


void solve()
{
  cin >> n;

  string s[n];
  for(int i=0; i<n; i++)
    cin >> s[i];

  for(int i=0; i<n; i++)
    for(int j=0; j<n; j++)
     v1[i][j] = s[i][j] - '0';

  int ans = 0;

  for(int i=0; i<n/2; i++)
    ans += chng(i);

  cout << ans << endl;

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
