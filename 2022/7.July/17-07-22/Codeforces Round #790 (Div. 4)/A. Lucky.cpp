#include<bits/stdc++.h>
using namespace std;

void solve()
{
  string s;
  cin >> s;
  int sum1 = 0, sum2 =0;
  for(int i=0; i<6; i++)
  {
    if(i<3)
      sum1 += s[i] - '0';
    else
      sum2 += s[i] - '0';
  }

  if(sum1 == sum2)
   cout << "YES" << endl;
  else
    cout << "NO" << endl;
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
