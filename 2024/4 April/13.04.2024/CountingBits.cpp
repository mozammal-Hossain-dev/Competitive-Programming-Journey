#include<bits/stdc++.h>

using namespace std;

std::vector<int> v(1001,0);

void total1sInNumber(int num)
{
	  string str;

	  int index = num;

      while(num) {

      if(num & 1) 
        str += '1';
      else 
        str += '0';

      num >>= 1;
    }  

    int count = 0;

    for(int i=0; i<str.length(); i++)
    {
    	if(str[i] == '1')
    		count++;
    } 

    v[index] = count;
}

void solution()
{

	int n;

	cin >> n;

	int ans = 0;

	for(int i=1; i<=n; i++)
		ans += v[i];

	cout << ans << endl;

}

int main()
{
	int test;

	cin >> test;

	for(int i = 1; i <= 1000; i++)
		total1sInNumber(i);


	while(test--)
	{
		solution();
	}
}