#include<bits/stdc++.h>
using namespace std;

void solve()
{
   long long int a,b;
   cin >> a >> b;
   long long int dif = b - a;
   if(dif % 3 == 0 || dif % 3 == 1)
    cout << "YES" << endl;
   else
    cout << "NO" << endl;
}

int main()
{
    int test;
    cin >> test;
    for(int i=1; i<=test; i++)
    {
        solve();
    }
}
