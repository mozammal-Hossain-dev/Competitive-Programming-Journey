#include<bits/stdc++.h>
using namespace std;

long long int n;
vector<long long int>pre;

void queries()
{
  long long int val;
  cin >> val;

  long long int hi = n-1, lw = 0;

  while(lw < hi)
  {
    long long int mid = (lw+hi) / 2;
    if(pre[mid] > val)
      hi = mid -1 ;
    else
      lw = mid + 1;
  }
  if(lw-1 >= 0 && pre[lw-1] >= val)
    cout << lw << endl;
  else if(lw >= 0 && pre[lw] >= val)
    cout << lw+1 << endl;
  else if(lw+1 < n && pre[lw+1] >= val)
    cout << lw + 2 <<endl;
  else
    cout << -1 << endl;

}

void solve()
{
   long long int q;
   cin >> n >> q;
   vector<long long int>a(n);

   for(long long int i=0; i<n; i++)
     cin >> a[i];

  sort(a.begin(),a.end());

  reverse(a.begin(),a.end());

  pre.clear();
  pre.push_back(a[0]);

  for(long long int i=1; i<n; i++)
    pre.push_back(pre[i-1] + a[i]);


  for(long long int i=0; i<q; i++)
    queries();


}



int main()
{
  long long int test = 1;
  cin >> test;
  while(test--)
  {
     solve();
  }
}
