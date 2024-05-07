#include<bits/stdc++.h>
using namespace std;

void solve()
{
  long long int  n,k,x;
  cin >> n >> k;
  map<long long int ,long long int >mp;
  for(long long int  i=0; i<n; i++)
   {
      cin >> x;
      mp[x]++;
   }

   vector<long long int >v;

   for(auto it = mp.begin(); it != mp.end(); it++)
     if(it->second >= k)
       v.push_back(it->first);

  int len = v.size();
  if(len == 0)
  {
    cout << -1 << endl;
    return;
  }

  int l = v[0], r = v[0], total = 1;

  int tmp = 1, tmpL = l, tmpR = r;

   for(int i=1; i<v.size(); i++)
   {
      if(v[i] == v[i-1]+1)
          tmp++, tmpR = v[i];
      else
         tmp = 1, tmpL = v[i], tmpR = v[i];

      if(tmp >= total)
          total = tmp, l = tmpL, r = tmpR;
   }

  cout << l << " " << r << endl;

}



int  main()
{
  long long int  test = 1;
  cin >> test;
  while(test--)
  {
     solve();
  }
}
