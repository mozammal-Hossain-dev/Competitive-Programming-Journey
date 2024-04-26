#include<bits/stdc++.h>

using namespace std;

int row, col;

char arr[105][105];

int selectedRow, selectedCol;


bool isUpperRowOk(){
	if(arr[selectedRow-1][selectedCol-1] != 'x' || arr[selectedRow-1][selectedCol] != 'x' || arr[selectedRow-1][selectedCol+1] != 'x'){
		// cout << arr[selectedRow-1][selectedCol-1] << "\t" << arr[selectedRow-1][selectedCol] << "\t" << arr[selectedRow-1][selectedCol+1] << endl;  
		// cout << "cmae from isUpperRowOk" << endl;
		return false;
	}

	return true;
}


bool isSameRowOk(){
	if(arr[selectedRow][selectedCol-1] != 'x' || arr[selectedRow][selectedCol+1] != 'x'){
		// cout << "Came from isSameRowOk" << endl;
		return false;
	}

	return true;

}


bool isLowerRowOk(){
	if(arr[selectedRow+1][selectedCol-1] != 'x' || arr[selectedRow+1][selectedCol] != 'x' || arr[selectedRow+1][selectedCol+1] != 'x'){
		// cout << "Came from isLowerRowOk" << endl;
		return false;
	}

	return true;
}




int main()
{

	cin >> row >> col;

	for(int i=0; i<row; i++) {
		string s;
		cin >> s;

		for(int j=0; j<col; j++)
		{
			arr[i+1][j+1] = s[j];
		}

	}


	for(int i=0; i<= row+1; i++) {
		for(int j=0; j<= col+1; j++) {
			if(i==0 || j==0 || i==row+1 || j==col+1)
				arr[i][j] ='x';
		}
	}


	cin >> selectedRow >> selectedCol;



	if(isUpperRowOk() && isSameRowOk() && isLowerRowOk())
	{
		cout << "yes" << endl;
	} else {
		cout << "no" << endl;
	}

}