#include<iostream>


using namespace std;

void solution()
{
    int n;
    cin >> n;
    int x;
    int odd = 0, even = 0;

    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(x%2 == 0)
         even += x;
         else
          odd += x;
    }

    if(even > odd)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;

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