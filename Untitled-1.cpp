#include <iostream>
using namespace std;

int search(int arr[], int size, int target){
	for(int i = 0; i < size; i++){
		if(arr[i] == target){
			return i;
		}
	}
	return -1;
}

int main() {
   int arr[] = {1,4,68,1,6,8,32,76,93};
   int size = sizeof(arr) / sizeof(arr[0]);
   
   int index = search(arr, size, 32);
   if(index != -1){
		cout<<"Number Found At Index: "<<index;
   }else{
   	cout<<"Number Not Found!";
   }
    return 0;
}
 