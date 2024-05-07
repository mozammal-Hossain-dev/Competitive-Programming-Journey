#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  char c[2*(n-2)];
  for(int i=0; i<2*(n-2); i++)
    cin>>c[i];
  int k = 2*(n-2) - n;
  string s;
  for(int i=0; i<2*(n-2); i++)
    s += c[i];

    int cnt =0;

  for(int i=0; i<s.length(); i++)
  {
      if(i == 0)
         cout << s[i];
      else if(i == s.length()-1)
        cout<< s[i];
      else
      {
        cout << s[i];
         while(s[i] == s[i+1])
         {
             s.erase(i+1,1);
             if(i+1 < s.length())
                break;
         }
      }

      cnt++;
  }

  while(cnt < n)
  {
      cout << s[s.length()-1];
      cnt++;
  }



}
int main()
{
  int test;
  cin >> test;
  while(test--)
  {
      solve();
      cout << endl;
  }
}

