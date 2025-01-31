#include<iostream>
using namespace std;

int main(){
	int no;
	bool p = true;
	
	cout<<"Enter the number: ";
	cin>>no;

	cout<<endl;
	
	if(no <= 0){
		cout<<"The number isnt Prime!";
	}
	for(int i = 2; i * i <= no; i++){
		if(no % i == 0){
			p = false;
			break;
		}
	}
	
	if (p){
		cout<<"The number is Prime!";
	}else{
		cout<<"The number is not Prime!";
	}
	return 0;
}