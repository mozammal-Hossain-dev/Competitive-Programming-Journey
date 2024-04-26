#include<iostream>

using namespace std;

void solution()
{
    string s;
    cin >> s;
    char c; 
    cin >> c;
    
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == c)
        {
            int left = i, right = s.length() - i-1;

            if(left%2 == 0 && right %2 == 0) {
              cout << "YES" << endl;
            return;
            }
        }
    }

    cout << "NO" << endl;
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