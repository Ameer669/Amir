#include <iostream>
using namespace std;

int main() {
	
	int n;
	int sum = 0;
	int arr[n];
	cout<<"How many numbers? ";
	cin>>n;
	
	for(int i = 0; i < n; i++){
		cout<<"\nNumber "<<i + 1<<": ";
		cin>>arr[i];
		sum += arr[i];
	}
	
	int avg = sum / n;
	cout<<"\nThe Sum Of The Numbers is: "<<sum<<"\nThe Average Of The Numbers is: "<<avg;
	
    return 0;
}