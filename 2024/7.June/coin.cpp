#include<bits/stdc++.h>

using namespace std;

int main()
{
	char coin1[2] = {'H','T'};
	char coin2[2] = {'H','T'};
	char coin3[2] = {'H','T'};
	char coin4[2] = {'H','T'};


	int expectedIncedent = 0, totalIncedent = 0;

	int through = 4;

	while(through--) {
		for(int i=0; i<2; i++)
			for(int j=0; j<2; j++)
				for(int k=0; k<2; k++)
					for(int l=0; l<2; l++)
					{
						int totalHead = 0;
						if(coin1[i] == 'H') totalHead++;
						if(coin2[j] == 'H') totalHead++;
						if(coin3[k] == 'H') totalHead++;
						if(coin4[l] == 'H') totalHead++;

						if(totalHead == 3)
						expectedIncedent++;

					totalIncedent++;
					}
	}

	cout << expectedIncedent << endl;
	cout << "---------------------"<<endl;
	cout << totalIncedent << endl;

}