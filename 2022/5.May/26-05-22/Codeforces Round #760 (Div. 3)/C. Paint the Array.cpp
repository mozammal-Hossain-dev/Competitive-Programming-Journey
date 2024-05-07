#include<bits/stdc++.h>
using namespace std;

bool checking1(vector<int>v,int x)
{
    int n = v.size();
    sort(v.begin(),v.end());

    for(int i=0; i<n; i++)
    if(v[i] % x)
        return 0;

    return 1;
}

bool checking2(vector<int>v,int x)
{
    int n = v.size();
    sort(v.begin(),v.end());

    for(int i=0; i<n; i++)
    if(v[i] % x == 0)
        return 0;

    return 1;
}



void solve()
{
  int n;
  cin >> n;
  vector<int>odd, even;
  int x;

  for(int i=0; i<n ; i++)
    {
        cin >> x;
        if(i%2 == 0)
            odd.push_back(x);
        else
            even.push_back(x);
    }
//cout << "hello " << endl;
   if(n == 1)
    {
          cout << odd[0];
          return;
    }

  if(checking1(odd,odd[0]) && checking2(even,odd[0]))
        cout << odd[0] << endl;
  else if(checking1(even,even[0]) && checking2(odd,even[0]))
       cout << even[0] << endl;
  else
    cout << 0 << endl;


}
int main()
{
  int test;
  cin >> test;
  for(int i=1; i<=test ; i++)
  {
      cout << "test "<<i<<" : "<<endl;
      solve();
  }
}

