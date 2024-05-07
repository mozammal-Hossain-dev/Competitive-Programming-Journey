#include<bits/stdc++.h>
using namespace std;

string rev(string str)
{
    int len = str.length();
    for(int i=0; i<len; i++)
    {
        if(str[i] == 'U')
          str[i] = 'D';
        else
            str[i] = 'U';
    }

   return str;
}

int chng(int n, string s)
{
    int len = s.length();
    for(int i=0; i<len; i++)
    {
        if(s[i] == 'D')
            n++;
         if(s[i] == 'U')
            n--;
        if(n<0)
            n = 9;
        if(n > 9)
            n = 0;
    }

    return n;
}


void solve()
{
  int n;
  cin >> n;
  int arr[n];
  for(int i=0; i<n; i++)
    cin >> arr[i];

  int x;
  string str;

  for(int i=0; i<n; i++)
  {
      cin >> x;
      cin >> str;
     // str = rev(str);
     // cout<< str<<endl;
      arr[i] = chng(arr[i],str);
     // cout<<arr[i]<<endl;
  }

  for(int i=0; i<n; i++)
    cout << arr[i] <<" ";

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

