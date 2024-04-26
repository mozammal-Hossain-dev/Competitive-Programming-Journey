#include<iostream>
#include<algorithm>

using namespace std;

long long int func(long long int a,long long int x)
{
    return ((x/a) +(x%a));
}

long long int maxAmongThree(long long int a, long long int b, long long int c)
{
    return max(a,max(b,c));
}

void solution()
{
    long long int l,r,a,mid1,mid2;
    cin >> l >> r >> a;

    long long int q = r/a, ans = 0;

    long long int x1 = max(min(q*a + (a-1),r),l), x2 = max(min((q-1)*a + (a-1),r),l);

    ans = max(func(a,x1),func(a,x2));

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