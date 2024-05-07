#include<bits/stdc++.h>
using namespace std;
void solve()
{
  long long int n,tmp1,tmp2;
  cin >> n;
  vector<long long int>v(n);

  tmp1 = n;
  tmp2 = 1;

  for(int i= n-1; i>=0; i -=2)
  {
      v[i] = tmp2++;
  }

  for(int i = n-2; i>=0; i-=2)
  {
      v[i] = tmp1--;
  }

  for(int i=0; i<n; i++)
    cout << v[i]<<" ";

    cout << endl;

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

