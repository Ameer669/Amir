#include <iostream>
using namespace std;

int main(){
	int arr[4][3]={
	{1,2,3},
	{5,8,7},
	{9,1,7},
	{6,9,3},
	};	
	
	int sum = 0;
	
	for (int i = 0; i < 4; i++) {  
		for (int j = 0; j < 3; j++) {  
	    	sum += arr[i][j];
	    }
	}
	
	cout<<endl<<sum<<endl;
	
	
	return 0;
}
