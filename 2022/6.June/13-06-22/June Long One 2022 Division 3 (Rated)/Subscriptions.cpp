#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,x;
    cin >> n >> x;

    int need = n/6;
    if(n%6)
        need++;

    cout << need * x << endl;


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
