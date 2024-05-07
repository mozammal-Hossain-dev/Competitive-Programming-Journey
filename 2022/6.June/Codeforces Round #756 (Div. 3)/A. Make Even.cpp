#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  vector<int>v;
  while(n>0)
  {
      v.push_back(n%10);
      n /= 10;
  }

   reverse(v.begin(),v.end());
  if(v[v.size()-1]%2 == 0)
  {
      cout << 0 << endl;
      return;
  }
  for(int i =0; i<v.size(); i++)
  {
    if(v[i]%2 == 0){
            if(i==0)
            cout << 1 << endl;
    else
        cout<< 2 <<endl;
       return;
  }
  }
  cout<< -1 << endl;
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

