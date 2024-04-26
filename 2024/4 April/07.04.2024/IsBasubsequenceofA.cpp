#include<bits/stdc++.h>

using namespace std;

vector<int>v, subArray;

int foundInIndex = -1;

bool isFounded(int val, int startingIndex)
{
	for(int i=startingIndex; i<v.size(); i++)
	{
		if(v[i] == val) {
			foundInIndex = i;
			return true;
		}
	}

	return false;
}


int main()
{
	int totalElementOfWholeArray, totalElementOfSubstractedArray;

	cin >> totalElementOfWholeArray >> totalElementOfSubstractedArray;


	for(int i=0; i<totalElementOfWholeArray; i++)
	{
		int x;

		cin >> x;

		v.push_back(x);
	}


	for(int i=0; i<totalElementOfSubstractedArray; i++) {

		int x;

		cin >> x;

		subArray.push_back(x);
	}


	for(int i=0; i<totalElementOfSubstractedArray; i++)
	{
		int val = subArray[i];

		if(!isFounded(val,foundInIndex+1))
		{
			cout << "NO" << endl;

			return 0;
		}


	}

	cout << "YES" << endl;

}