#include<bits/stdc++.h>
#include<string>
using namespace std;
bool isPalindrome(int h, int m)
{
    if(h%10 != m/10)
        return 0;
    if(h/10 != m%10)
        return  0;

    return 1;

}

string making_string(int h,int m)
{
    string str;
    str += to_string(h/10);
    str += to_string(h%10);
    str += to_string(m/10);
    str += to_string(m%10);

    return str;
}


void solve()
{
    string time;
    int nxt;
    cin >> time;
    cin >> nxt;

    pair<int,int>p;

    map< string, int >mp;

    int h = (time[0] - '0')*10 + (time[1] - '0');
    int m = (time[3] - '0')*10 + (time[4] - '0');



    int ans = 0;

    while(1)
    {
        m += nxt;
        h += (m/60), m %= 60;
        h %= 24;

        string str;
        str = making_string(h,m);

        if(mp.find(str) != mp.end())
            break;

        if(isPalindrome(h,m))
        {
            // cout << "palindrome "<< h << " : " << m << endl;
            ans++;
        }

        mp[str]= 1;
    }

    cout << ans << endl;
}
int main()
{
    int test = 1;
    cin >> test;
    for(int i = 1; i<=test; i++)
    {
        solve();
    }
}

