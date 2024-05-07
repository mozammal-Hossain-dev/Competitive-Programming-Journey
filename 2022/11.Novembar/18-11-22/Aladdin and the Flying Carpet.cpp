#include<bits/stdc++.h>
using namespace std;


#define f cout<<"flag here " << endl;

vector<long long int > prime;    //List of primes
const int  nx = 1e6 + 10;        // range of prime numbers

void generate_prime()           //For generating all primes within 10^6 using sieve of eratosthenes
{

    bool flag[nx]={};

    long long int  rt = 1e3;               // because root of 10^6 is 10^3

    for( long long int  i=3; i<rt; i+=2)
    {
        if(!flag[i])
        {
            for( long long int  j=i*i; j<nx; j+=i)
            {
                flag[j] = true;
            }
        }
    }

    prime.push_back(2);
    for( long long int  i=3; i<nx; i+=2)
    {
        if(!flag[i]) prime.push_back(i);
    }
}

long long int divisor( long long int  n)
{
    long long int ans=1,siz;
    siz = prime.size();
   for(long long int i=0;i<siz && (prime[i]*prime[i])<=n ;i++)
    {

        long long int power = 0;
        if(n%prime[i]==0)
        {
            // for counting the power of each prime factor.
            while(n%prime[i]==0)
            {
                ++power;
                n/=prime[i];
            }
        }
        ans *=(power+1);
    }

    if(n!=1) ans<<=1;

    return ans;
}

void solve()
{
    long long int  area, b,rt;
    cin >> area >> b;

    rt = sqrt(area);

   if((b*b==area)||rt<b)
   {
       cout << 0 << endl;
       return;
   }

   long long int ans = divisor(area)/2;

   for(long long int i=1; i<b; i++)
   {
       if(area%i == 0)
         ans--;
   }
   cout << ans << endl;

}



int  main()
{
    long long int  test;
    generate_prime();
    cin >> test;
    for( long long int  i=1; i<=test; i++)
    {
        cout << "Case "<<i<<": ";
        solve();
    }
}
