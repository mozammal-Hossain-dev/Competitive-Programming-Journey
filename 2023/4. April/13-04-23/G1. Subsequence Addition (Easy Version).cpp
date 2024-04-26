#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

void print(vector<int>v)
{
    int n = v.size();

    for(int i=0; i<v.size(); i++)
    if(v[i] > 0)
    cout << i << " ";

    cout << endl;
}


void solution()
{
    int n;
    cin >> n;
    vector<int>v(5010,0);
    vector<int>coin(n);

    for(int i=0; i<n; i++)
    cin >> coin[i];

    sort(coin.begin(),coin.end());

    if(coin[0] != 1)
    {
        cout << "NO" << endl;
        return;
    }

    v[1] = 1;


    for(int i=1; i<n; i++)
    {
        vector<int>idx;

        for(int j=1; j+coin[i]<=5000; j++)
        {
            if(v[j]==1){

                idx.push_back(j+coin[i]);
            }

        }

        for(int k=0; k<idx.size(); k++)
          v[idx[k]] = 1;
        
        if(v[coin[i]] == 0)
        {
           // cout <<"Could not find " <<  coin[i] << endl;
            cout << "NO" <<endl;
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