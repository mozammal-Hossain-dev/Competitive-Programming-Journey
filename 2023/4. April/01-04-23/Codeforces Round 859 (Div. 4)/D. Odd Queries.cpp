#include<bits/stdc++.h>
#include<vector>


using namespace std;

void solution()
{
    long long int n,q;
    cin >> n >> q;

    vector<long long int>v(n),pre(n,0),post(n,0);

    for(int i=0; i<n; i++)
    cin >> v[i];

    for(int i=1; i<n; i++)
     pre[i] = pre[i-1] + v[i-1];

    for(int i=n-2; i>=0; i--)
      post[i] = post[i+1] + v[i+1];

    while(q--)
    {
        long long int l,r,k;
        cin >> l >> r >> k;
        l--, r--;

        long long int sum = pre[l] + post[r] + (r-l+1)*k;

        if(sum%2 == 1)
         cout << "YES" << endl;
        else
        cout << "NO" << endl;

    }

}


int main()
{
    int test;
    //cout<<"hello"<<endl;
    cin >> test;
    while(test--)
    {
        solution();
    }
}