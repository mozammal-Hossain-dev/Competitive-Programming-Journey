#include<bits/stdc++.h>

using namespace std;

vector<int>listOfRoundNumbers;

void roundNumbers(int n, int mul)
{
	if(n == 0)
		return;
	
	if(n%10 != 0)
	{
		listOfRoundNumbers.push_back( (n%10) * mul );
	}

	roundNumbers(n/10, mul*10);

}

void solution()
{
	int n;

	listOfRoundNumbers.resize(0);

	cin >> n;

	roundNumbers(n,1);

	cout << listOfRoundNumbers.size() << endl;

	for(int i=0; i<listOfRoundNumbers.size(); i++)
		cout << listOfRoundNumbers[i] << endl;


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