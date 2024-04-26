#include<iostream>

using namespace std;

void solve(){
    int n,tmpV;
    cin >> n;
    int ans = 0;
    int tmp = 0;
    for(int i=0; i<n; i++) {
        cin >> tmpV;
        if(tmpV == 0) tmp++;
        else tmp = 0;

        if(ans < tmp) ans = tmp;
    }

    cout << ans << endl;
}

int main()
{
    int test;
    cin >>test;
    while(test--) {
        solve();
    }
}