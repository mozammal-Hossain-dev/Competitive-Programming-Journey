#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solution()
{
    int n;
    cin >> n;
    vector<long long int>v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    long long ans = max(v[0]*v[1], v[n-2]*v[n-1]);

    cout << ans << endl;
}


int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        solution();
    }
}