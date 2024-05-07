/**************************************************************************************
*                                       Coder :                                       *
                                    Mozammal_Hossain
*                                   (Nil_paracetamol)                                   *
                               mozammalruet@gmail.com                               |
**************************************************************************************/
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

//data_type_compressions :
#define     ll                              long long int
#define     ull                             unsigned long long int
#define     ui                              unsigned int
//STL :
#define     vi                              vector<int>
#define     vb                              vector<bool>
#define     vs                              vector<string>
#define     vl                              vector<ll>
#define     si                              set<int>
#define     sl                              set<ll>
#define     ip                              pair<int,int>
#define     lp                              pair<ll,ll>
#define     sip                             pair<string,int>
#define     slp                             pair<string,ll>
#define     cip                             pair<char,int>
#define     clp                             pair<char,ll>
#define     vip                             vector<ip>
#define     PQ                              priority_queue
#define     vlp                             vector<lp>
#define     hashmap                         unordered_map
#define     msi                             multiset<int>
#define     msl                             multiset<ll>
#define     pb                              push_back
#define     spb                             insert
#define     erase_duplicates(x)             x.erase(unique(all(x)),x.end());
#define     all(x)                          x.begin(),x.end()
#define     all_0(x)                        memset(x,0,sizeof(x))
#define     all_neg(x)                      memset(x,-1,sizeof(x))
#define     all_1(x)                        memset(x,1,sizeof(x))
//I/O :
#define     Faster                          ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define     Read(x)                         freopen(x,"r",stdin)
#define     Write(x)                        freopen (x,"w",stdout)
#define     PI                              acos(-1)
#define     take_the_array_INT(x,o,n)       for(int i=o;i<=n;i++){scanf("%d",&x[i]);}
#define     take_the_array_LL(x,o,n)        for(int i=o;i<=n;i++){scanf("%lld",&x[i]);}
#define     take_the_array_DBL(x,o,n)       for(int i=o;i<=n;i++){scanf("%lf",&x[i]);}
#define     print_the_array_INT(x,o,n)      for(int i=o;i<=n;i++){printf("%d ",x[i]);}printf("\n");
#define     print_the_array_LL(x,o,n)       for(int i=o;i<=n;i++){printf("%lld ",x[i]);}printf("\n");
#define     cin_the_array(x,o,n)            for(int i=o;i<=n;i++){cin>>x[i];}
#define     cout_the_array(x,o,n)           for(int i=o;i<=n;i++){cout<<x[i]<<" ";}cout<<endl;
#define     __lcm(a,b)                      (a/__gcd(a,b)*b)
#define     int_in(x)                       scanf("%d",&x)
#define     ll_in(x)                        scanf("%lld",&x)
#define     dbl_in(x)                       scanf("%lf",&x)
#define     char_in(x)                      scanf(" %c",&x)
#define     str_in(x)                       scanf("%s",&x)
#define     int_in2(x,y)                    scanf("%d %d",&x,&y)
#define     int_in3(x,y,z)                  scanf("%d %d %d",&x,&y,&z)
#define     ll_in2(x,y)                     scanf("%lld %lld",&x,&y)
#define     ll_in3(x,y,z)                   scanf("%lld %lld %lld",&x,&y,&z)
#define     int_out(x)                      printf("%d",x)
#define     ll_out(x)                       printf("%lld",x)
#define     char_out(x)                     printf("%c",x)
#define     str_out(x)                      printf("%s",x)

//extras :
#define     INF                             LLONG_MAX
#define     in_range(i,x,y)                 for(int i=x;i<=y;i++)
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)


using namespace __gnu_pbds;
using namespace std;

bool prime[1001];
vector<int>prime_list;
vector< pair<int,int>>v;


void init()
{
    for(int i=0; i<=1e3; i++)
        prime[i] = 1;
    prime[0] = prime[1] = 0;

    for(int i=2; i<1e3+1; i++)
    {
        if(prime[i] == 1)
        {
            for(int j=i*i; j<1e3+1; j+=i)
                prime[j] = 0;
        }
    }

    for(int i=0; i<1e3+1; i++)
        if(prime[i])
            prime_list.pb(i);

}


void init2()
{
    for(int j = 1; j<=1e3; j++)
    {
        int n = j;
         int ans = 1;

        if(prime[n] == 0)
        {
            for(int i=0; i<prime_list.size(); i++)
            {
                int cnt = 0;
                while(n%prime_list[i] == 0)
                {
                    n /= prime_list[i];
                    cnt++;
                }
                ans *= (cnt+1);
            }
        }
        else
        {
            ans = 2;
        }

        pair<int,int>p;
        p.first = ans;
        p.second = j;

        v.push_back(p);
    }

    sort(v.begin(),v.end());

    int tmpIdx = 0, tmpVal = v[0].first;

    for(int i=1; i<=1e3; i++)
    {
        if(tmpVal != v[i].first)
        {
            reverse(v.begin()+tmpIdx,v.begin()+i);
            tmpIdx = i, tmpVal=v[i].first;
        }
    }

    reverse(v.begin()+tmpIdx,v.begin()+1e3);


}

void solve(int test)
{

    int n;
    cin >> n;
    cout << "Case "<<test<<": " <<v[n-1].second<<endl;

  //  for(int i = 1000; i >=0; i-- )
        //cout << "No " << i << " Number "<<v[i-1].second<<" Divisor "<<v[i-1].first<<endl;
}
int main()
{
    int test = 1;
    init();
    init2();
    cin >> test;
    for(int i = 1; i<=test; i++)
    {
        solve(i);
    }
}


