#include <iostream>
using namespace std;

int main(){
	int arr[4][3]={
	{1,2,3},
	{5,8,7},
	{9,1,7},
	{6,9,3},
	};
	
	int max = arr[0][0];
	int min = arr[0][0];
	
	for (int i = 0; i < 4; i++) {      
	    for (int j = 0; j < 3; j++) {  
	        if (arr[i][j] > max) {
	            max = arr[i][j];
	        }
	        if (arr[i][j] < min) {
	            min = arr[i][j];
	        }
	    }
	}
	
	cout << endl;
	cout << "Maximum value: " << max << endl;
    cout << "Minimum value: " << min << endl;
	
	return 0;
}