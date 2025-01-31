#include <iostream>
using namespace std;

int main(){
	int val[5];
	int num;
	cout<<"Type 5 Numbers To Reverse:\n"<<endl;

	for( int i = 0; i < 5; i++ ){
		cout<<"number "<<i+1<<": ";
		cin>>num;
		val[i] = num;
	}
	cout<<"\n====================\n";
	for( int i = 4; i > -1 ; i-- ){
		int j = 0;
		cout<<"\nReverse number "<<j+1<<": "<< val[i];
		j++;
	}
}