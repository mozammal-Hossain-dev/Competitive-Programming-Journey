#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void solution()
{
    long long n;
    cin >> n;
    cout << (n+1) * (n+1) + 1 << endl;
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