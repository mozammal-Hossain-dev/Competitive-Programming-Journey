#include<iostream>
#include<string>
#include<map>

using namespace std;

void solution()
{
    int n; 
    cin >> n;
    string s;
    cin >> s;
    string oneZero, zeroOne;

    for(int i=0; i<n; i++)
    if(i%2 == 0)
     oneZero += '1', zeroOne += '0';
    else
     oneZero += '0', zeroOne += '1';

    bool one = true, zero = true;

    map<char,int>mp01, mp10;

    for(int i=0; i<n; i++)
    {
        if(mp01.find(s[i]) != mp01.end())
        {
            if(mp01[s[i]] != zeroOne[i])
              zero = false;
        }
        else
            mp01[s[i]] = zeroOne[i];
        
        if(mp10.find(s[i]) != mp10.end())
        {
            if(mp10[s[i]] != oneZero[i])
              one = false;
        }
        else
            mp10[s[i]] = oneZero[i];
    }


    if(one == 1 || zero==1)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl; 

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