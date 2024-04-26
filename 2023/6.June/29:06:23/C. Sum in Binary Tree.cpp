#include<iostream>

using namespace std;

void solution()
{
    long long givenVertex;
    long long ans = 0;
    cin >> givenVertex ;

    while(givenVertex >= 1)
    {
       ans += givenVertex;
       givenVertex /= 2;
    }

    cout << ans << endl;
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
