#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void solution()
{
    int n;
    cin >> n;
    if(n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if(n%2) {
        cout << -1 << endl;
        return;
    }
    vector<int>ans(n);

    int last = n, first = 1;

    for(int i=0; i<n/2; i++)
    {
        if(i%2 == 0)
        {
            ans[i] = last--;
            ans[n-i-1] = last--;
        }
        else
        {
            ans[i] = first++;
            ans[n-i-1] = first++;

        }  
    }


    for(int i=0; i<n; i++)
    cout << ans[i] << " ";

    cout << endl;
     
    
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