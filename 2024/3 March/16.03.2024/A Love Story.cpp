#include<iostream>

using namespace std;

void solve() {
    string givenStr = "codeforces";
    string str;
    cin >> str;

    int ans = 0;
    for(int i=0; i<10; i++)
    {
        if(givenStr[i] != str[i]) ans++;
    }
    cout << ans << endl;
}

int main(){
    int test;
    cin >> test;

    while(test--)
    {
        solve();
    }
}