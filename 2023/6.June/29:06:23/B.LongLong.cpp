#include<iostream>
using namespace std;

void solution()
{
    long long int  n; 
    cin >> n;
    long long int a[n];
    for(long long int i=0; i<n; i++)
    cin >> a[i];

    long long int  step = 0;
    long long int  ans = 0;
    bool contd = false;

    if(a[0] < 0)
      ans += (a[0] * (-1)), contd = true, step++;
    else if(a[0] > 0)
      ans += a[0];

    for(int i=1; i<n; i++)
    {
        if(a[i] <0)
        {
            ans += (a[i] * (-1));
            if(!contd)
             contd = true, step++;   
        }
        else if(a[i] > 0)
          ans += a[i], contd = false;
    }

    cout << ans << " " << step << endl;

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
