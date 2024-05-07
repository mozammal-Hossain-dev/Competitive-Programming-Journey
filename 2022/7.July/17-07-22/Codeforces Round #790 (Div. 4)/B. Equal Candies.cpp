#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >>n;
  int arr[n];
  int req = INT_MAX;
  for(int i=0; i<n; i++)
  {
    cin >> arr[i];
    req = min(req,arr[i]);
  }

  int ans = 0;

  for(int i=0; i<n; i++)
   ans += arr[i] - req;

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

