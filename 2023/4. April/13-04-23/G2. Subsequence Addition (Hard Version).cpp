#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void solution()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    cin >> v[i];

    sort(v.begin(),v.end());

    if(v[0] != 1)
    {
        cout << "NO" << endl;
        return;
    }

    long long int sum = 0;

    for(int i=1; i<n; i++)
    {
        sum += v[i-1];

        if(sum < v[i])
         {
            cout << "NO" << endl;
            return;
         }
    }
    cout << "YES" << endl;
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