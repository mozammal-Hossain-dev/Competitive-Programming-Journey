                    /**************************************************************************************
                    *                                       Coder :                                       *
                                                        Mozammal_Hossain
                    *                                   (Nil_paracetamol)                                   *
                                                   mozammalruet@gmail.com                               |
                    **************************************************************************************/
#include<bits/stdc++.h>

using namespace std;

#define N 1e7+1

vector<bool>prime(N,1);

void sieve()
{
    prime[0] = prime[1] = 0;
    for(long long int  i=2; i<N; i++)
    {
        if(prime[i] == 1)
        {
            for(long long int  j=i*i; j<N; j+=i)
                prime[j] = 0;
        }
    }

}

void solve(long long int  test)
{
   long long int  n;
   map<long long int ,long long int >mp;
   cin >> n;
   for(long long int  i=2; i<=n/2; i++)
      if(prime[i])
   {
       long long int  sub = n - i;
       if(prime[sub])
       {
            long long int  a = min(i,sub), b = max(i,sub);
            mp[a] = b;
       }
   }

   cout << "Case "<<test<<": "<<mp.size()<<endl;

}
 int  main()
{
  long long int  test = 1;
  sieve();
  cin >> test;
  for(long long int  i = 1; i<=test; i++)
  {
      solve(i);
  }
}


