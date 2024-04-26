#include<iostream>
#include<vector>
#include <utility>

using namespace std;

void solution()
{
    int n,t;
    cin >> n >> t;
    vector<pair<int,int>>v;
    pair<int,int>p;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        p.first = 0,
        p.second = x+i;
        v.push_back(p);
    }

    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v[i].first = x;
    }

    int mxEntertainment = 0, mxEntertainmentIndex = -1;

    for(int i=0; i<n; i++)
    {
        if(v[i].first > mxEntertainment && v[i].second <= t )
        {
            mxEntertainment = v[i].first;
            mxEntertainmentIndex = i+1;
        }
    }

    cout << mxEntertainmentIndex << endl;

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