#include<bits/stdc++.h>

using namespace std;

int main()
{

    int test;

    cin >> test;

    while(test--)
    {
        int n;

        cin >> n;

        vector<int>v(n);

        for(int i=0; i<n; i++)
            cin >> v[i];

        int cntNeg = 0;

        bool isZeroExist = false;

        for(int i=0; i<n; i++)
        {
            if(v[i] < 0) cntNeg++;

            if(v[i] == 0) isZeroExist = true;
        }

        if(cntNeg%2 && !isZeroExist)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}
