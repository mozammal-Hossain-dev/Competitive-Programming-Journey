#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;

	cin >> n;

	std::vector<int> v(n);

	for(int i=0; i<n; i++)
		cin >> v[i];

	int minimum = INT_MAX, maximum = INT_MIN, min_index = -1, max_index = -1;

	for(int i=0; i<n; i++)
	{
		if(v[i] > maximum){
			maximum = v[i];
			max_index = i;
		}

		if(v[i] < minimum) {
			minimum = v[i];
			min_index = i;
		}
	}

	v[max_index] = minimum;

	v[min_index] = maximum;

	for(int i=0; i<n; i++)
	{
		cout << v[i] << " ";
	}

	cout << endl;


}