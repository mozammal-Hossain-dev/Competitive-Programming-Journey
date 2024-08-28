#include<bits/stdc++.h>

using namespace std;

int main()
{
	int dice1[6] = {1,2,3,4,5,6};
	int dice2[6] = {1,2,3,4,5,6};
	int dice3[6] = {1,2,3,4,5,6};

	int expectedIncident = 0, totalIncident = 0;

	for(int i=0; i<6; i++)
	{
		if(dice1[i] %2 == 0)
			expectedIncident++;

		totalIncident++;
	}

	int through = 3;

	while(through--) {
		for(int i=0; i<6; i++)
		for(int j=0; j<6; j++)
			for(int k=0; k<6; k++)
			{
				int total = dice1[i] + dice2[j] + dice3[k];

				if(total % 2 == 0){
					// cout << "dice1 "<<dice1[i] << "\t dice2 " <<dice2[j] << "\t dice3 " << dice3[k] << endl;
					expectedIncident++;
				}

				totalIncident++;
			}
	}

	

	cout << expectedIncident << endl;
	cout << "---------------------"<<endl;
	cout << totalIncident << endl;
}