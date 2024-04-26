#include<iostream>
#include<algorithm>
using namespace std;

void solution()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);

    int dif = 0;

    for(int i=0; i<n/2; i++)
    {
         dif += a[n-1-i] - a[i];
    }

    cout << dif << endl;

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