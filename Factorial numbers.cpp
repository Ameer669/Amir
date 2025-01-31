#include <iostream>
using namespace std;

int main(){
	int n;
	unsigned long long fac = 1;
	while(true){
		cout<<"Enter a positive number: ";
		cin>>n;
		if(cin.fail() || n<=0){
			cout<<"\nInvaild input, Enter a Positive number!\n";
			cin.clear();
			cin.ignore(10000, '\n');
		} else{
			break;
		}
	}
	for(int i=1; i<=n;i++){
		fac *= i;
		}	
	cout<<"\nThe factorial of "<<n<<" is "<<fac;
	return 0;
}