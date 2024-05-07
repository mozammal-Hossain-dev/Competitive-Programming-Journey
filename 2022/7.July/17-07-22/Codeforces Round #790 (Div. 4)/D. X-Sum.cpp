#include<bits/stdc++.h>
using namespace std;

int n,m;

int left_up_val[200][200];
int left_down_val[200][200];
int right_up_val[200][200];
int right_down_val[200][200];
int arr[200][200];

bool ok(int r, int c)
{
  if(r>=n || r < 0)
    return 0;
  else if(c >= m || c<0)
    return 0;

    return 1;
}

int left_upper(int r,int c)
{
   if(!ok(r,c))
     return 0;
  else if(left_up_val[r][c] > 0)
      return left_up_val[r][c];
   else
      return left_up_val[r][c] = arr[r][c] + left_upper(r-1,c-1);
}

int right_upper(int r,int c)
{
   if(!ok(r,c))
     return 0;
  else if(right_up_val[r][c] > 0)
      return right_up_val[r][c];
   else
      return right_up_val[r][c] = arr[r][c] + right_upper(r-1,c+1);
}

int right_down(int r,int c)
{
   if(!ok(r,c))
     return 0;
  else if(right_down_val[r][c] > 0)
     return right_down_val[r][c];
   else
      return right_down_val[r][c] = arr[r][c] + right_down(r+1,c+1);
}

int left_down(int r,int c)
{
   if(!ok(r,c))
     return 0;
   else if(left_down_val[r][c] > 0)
     return left_down_val[r][c];
   else
      return left_down_val[r][c] = arr[r][c] + left_down(r+1,c-1);
}

void init()
{
  for(int i =0; i<200; i++)
  for(int j=0; j<200; j++)
    right_up_val[i][j] = 0, right_down_val[i][j] = 0, left_down_val[i][j] = 0, left_up_val[i][j] = 0;
}

void solve()
{
  init();

  cin >> n >> m;


  for(int i=0; i<n; i++)
   for(int j=0; j<m; j++)
     cin >> arr[i][j];

     //cout << "came " << endl;

      int ans = 0;

  for(int i=0; i<n; i++)
   for(int j=0; j<m; j++)
    {
       //cout << "row " << i << " col " << j << " " << left_down(i,j) << endl;
    int total_val = left_down(i+1,j-1) + right_down(i+1,j+1) + left_upper(i-1,j-1) + right_upper(i-1,j+1) + arr[i][j];

          ans = max(ans,total_val);
    }

  cout << ans << endl;

}

int main()
{
  int test = 1;
  cin >> test;
  while(test--)
  {
     solve();
  }
}
