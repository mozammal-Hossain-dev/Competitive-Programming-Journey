#include<bits/stdc++.h>
using namespace std;

int main()
{
	int highestSum, highestMultiplication;
	int ans = 0;

	cin >> highestSum >> highestMultiplication;

	for(int i=0; i<= highestSum; i++)
		for(int j=0; j<= highestSum; j++)
			for(int k=0; k<= highestSum; k++)
			{
				int totalSum = i+j+k;
				int multiplication = i*j*k;

				if(totalSum <= highestSum && multiplication <= highestMultiplication)
					ans++;
			}

cout << ans << endl;


}