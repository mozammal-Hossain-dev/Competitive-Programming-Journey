#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int arr[7];
    for(int i=0; i<7; i++)
        cin >> arr[i];
    for(int i = 0; i<7; i++)
        for(int j = i+1; j<7; j++)
         for(int k = j+1; k<7; k++)
    {
        for(int m = 0; m<7; m++)
        {
            if(arr[m] != arr[i] && arr[m] != arr[j] && arr[m] != arr[k] && arr[m] != arr[i]+arr[j]  &&  arr[m] != arr[i]+arr[k]  &&  arr[m] != arr[j]+arr[k]  &&  arr[m] != arr[i]+arr[j]+arr[k])
            goto xx;

        }

        cout<<arr[i] << " " << arr[j] << " " << arr[k] << endl;
                return;

        xx:
            int nothing = 0;
    }

}
int main()
{
  int test;
  cin >> test;
  while(test--)
  {
      solve();
  }
}
