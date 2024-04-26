#include<iostream>
#include<vector>

using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>

void print(ordered_set odr)
{
  
  for(auto it = odr.begin(); it != odr.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}


void solution()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
     cin >> v[i];

    long long sum = 0;

   ordered_set tree;
   tree.insert(v[0]);
   
   for(int i=1; i<n; i++)
   {
      int idx  = tree.order_of_key(v[i]);
      cout << idx << endl;
      sum += (i - idx);
      cout << "sum from for loop " << sum << endl;
      tree.insert(v[i]);
      print(tree);
   }

    cout<< sum << endl;
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