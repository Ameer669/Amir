#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"How many numbers? ";
	cin>>n;
	int arr[n];
	
	for(int i = 0; i<n; i++){
		cout<<"\nEnter number "<<i+1<<": ";
		cin>>arr[i];
	}
	for(int i = 0; i<n; i++){
		if(arr[i] % 2 !=0){
			cout<<"\nNumber "<<arr[i]<< " is Odd";
		} else{
			cout<<"\nNumber "<<arr[i]<< " is even";
		}
	}
}