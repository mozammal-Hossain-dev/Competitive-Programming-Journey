#include<bits/stdc++.h>
using namespace std;

int n;
vector<int>arr(100000);

int partion(int lw, int hi)
{
    int pivot_val = arr[hi];
    int lw_idx = lw, hi_idx = hi;

    for(int i=lw ; i<=hi-1 ; i++)
    {
        if(arr[i] < pivot_val)
        {
            int tmp = arr[i];
            arr[i] = arr[lw_idx];
            arr[lw_idx] = tmp;
            lw_idx++;
        }
        else
        {
            int tmp = arr[i];
            arr[i] = arr[hi_idx];
            arr[hi_idx] = tmp;
            hi_idx--;
            lw_idx = i;
        }
    }

    return hi_idx;
}

void QuickSort(int lw, int hi)
{
    if(lw >= hi)
        return;

    int pi = partion(lw,hi);
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    QuickSort(lw,pi-1);
    QuickSort(pi+1,hi);
}

int main()
{
  cin >> n;
  for(int i = 0; i<n; i++)
    cin >> arr[i];

  QuickSort(0,n-1);

  for(int i=0; i<n; i++)
    cout << arr[i] << " ";

}
