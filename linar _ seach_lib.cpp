#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int target;
	vector<int> no ={1,2,3,4,5,6,7,8,9,10};
	
	cout << "Array elements: ";
    for (int n : no) {
        cout << n << " ";
    }
	cout<<"\nEnter an element to be searched: ";
	cin>> target;
	
	auto it = find(no.begin(), no.end() ,target);
	
	if (it != no.end()){
		int index = distance(no.begin(), it);
		cout<<"Number found at index: "<< index;
	} else{
		cout<<"Number not found";		
	}
	
	return 0;
}