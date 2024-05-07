#include<bits/stdc++.h>
using namespace std;


long long int cnt2(long long int a,long long int b)
{
   long long int tmpA = a /2;
   long long tmpB = b /2;
   //long long int remA = a % 2;
  // long long int remB = b %2;

   long long int ans = 0;

     ans = tmpB;

      b -= (tmpB*2);
      a -= (tmpB*2);

       if(b >= 1)
       {
           if(a >= 3)
            ans++;
       }
  return ans;
}

long long int cnt3(long long int a,long long int b)
{
   long long int tmpA = a /3;
  // long long tmpB = b /3;
   long long int remA = a % 3;
   long long int remB = b - tmpA;

   long long int ans = 0;

   if(tmpA >= b)
   {
     ans = b;
   }
   else if(tmpA < b)
   {
       ans = tmpA;
       b -= tmpA;
       a -= (tmpA*3);

       if(a >= b)
       ans += cnt2(a,b);
       else
        ans += cnt2(b,a);
   }
  return ans;
}
void solve()
{
  long long int a,b;
  cin >> a >> b;

  if(a >= b)
    cout << max(cnt2(a,b),cnt3(a,b)) << endl;
  else
    cout << max(cnt2(b,a),cnt3(b,a)) << endl;

}
int main()
{
  int test;
  cin >> test;
  for(int i = 1; i<=test; i++)
  {
      solve();
  }
}

