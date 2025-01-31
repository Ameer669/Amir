#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - i - 1; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
		}
	}
}
void printArray(int arr[], int size){
	for(int i = 0; i < size; i++){
		cout<<arr[i]<< " ";
	}
}

int main(){
	int arr[] = {6,8,43,13,76,21,3,67,97,23,45,71,12};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	cout<<"\nArray Before Sorting: ";
	printArray(arr, size);
	
	bubbleSort(arr, size);
	
	cout<<"\nArray After Sorting: ";
	printArray(arr, size);
	
	return 0;
}