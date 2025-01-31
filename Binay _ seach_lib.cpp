#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int target;
	vector<int> no = {1,90,56,32,76,11,76,53,78,22,4};
	
	cout<<"\nNumbers Before Sorting: ";
	for(int n : no){
		cout<< n << " " ;
	}
	sort(no.begin(), no.end());
	cout<<"\nNumbers After Sorting: ";
	for(int n : no){
		cout<< n << " " ;
	}
	
	cout<<"\nWhich number you wanna search? ";
	cin>>target;
	
	auto it = lower_bound(no.begin(), no.end(), target);
	bool found = binary_search(no.begin(), no.end(), target);
	
	if(found){
		cout<<"\nNumber found at index: "<< distance(no.begin(), it);
	} else{
		cerr<<"\nNumber Not Found!";
	}
	
	return 0;
}