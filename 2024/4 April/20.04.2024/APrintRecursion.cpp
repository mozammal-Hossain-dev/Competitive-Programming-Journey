#include<bits/stdc++.h>

using namespace std;

void printingLoveForRecursion(int n)
{
	if (n == 0)
		return;

	printingLoveForRecursion(n-1);

	cout << "I love Recursion" << endl;

}

int main()
{
	int n;

	cin >> n;

	printingLoveForRecursion(n);

}