#include <iostream>
#include <string>
using namespace std;

void myname1(int For){
	
	string n;
	int t;
	
	cout<<"Whats your name? ";
	cin>>n;
	cout<<"How many times? ";
	cin>>t;
	cout<<endl;
	
	for(int i = 1; i <= t; i++){
		
		cout<<i<<") "<<"Your name is "<<n<<endl;
	}
}
void myname2(int While){
	
	string n;
	int t;
	
	cout<<"Whats your name? ";
	cin>>n;
	cout<<"How many times? ";
	cin>>t;
	cout<<endl;
	
	int i=1;
	while (i <= t){
		
		cout<<i<<") "<<"Your name is "<<n<<endl;
		i++;
	}
}
void myname3(int WhileDo){
	
	string n;
	int t;
	
	cout<<"Whats your name? ";
	cin>>n;
	cout<<"How many times? ";
	cin>>t;
	cout<<endl;
	
	int i=1;
	do{
		
		cout<<i<<") "<<"Your name is "<<n<<endl;
		i++;
	} while (i <= t);	
}

void table1(int For){

	int no;
	int ti;
	
	cout<<"Enter the number you want to multiply: ";
	cin>>no;
	cout<<"How many times: ";
	cin>>ti;
	
	cout<<endl;
	
	for(int i = 1; i <= ti; i++){
		cout<<no<<" * "<<i<<" = "<<no*i<<endl;
	}	
}
void table2(int While){
	
	int no;
	int ti;
	
	cout<<"Enter the number you want to multiply: ";
	cin>>no;
	cout<<"How many times: ";
	cin>>ti;
	
	cout<<endl;
	
	int i = 1;
	while(i <= ti){
		cout<<no<<" * "<<i<<" = "<<no*i<<endl;
		i++;
	}
		
}
void table3(int WhileDo){
	
	int no;
	int ti;
	
	cout<<"Enter the number you want to multiply: ";
	cin>>no;
	cout<<"How many times: ";
	cin>>ti;
	
	cout<<endl;
	
	int i = 1;
	do{
		cout<<no<<" * "<<i<<" = "<<no*i<<endl;
		i++;
	} while(i <= ti);
		
}

void oddEven1(int For){
	
	int no1, no2;
	cout<<"Enter the range of numbers!\n\n";
	cout<<"Enter the first numbers: ";
	cin>>no1;
	cout<<"Enter the second numbers: ";
	cin>>no2;
	
	cout<<endl;
	
	for(int i= no1; i<=no2; i++){
		if(i % 2 != 0){
			cout<<i<<" Is "<<"Odd"<<endl;
		} else{
			cout<<i<<" Is "<<"Even"<<endl;
		}
	}
	
}
void oddEven2(int While){
	
	int no1, no2;
	cout<<"Enter the range of numbers!\n\n";
	cout<<"Enter the first numbers: ";
	cin>>no1;
	cout<<"Enter the second numbers: ";
	cin>>no2;
	
	cout<<endl;
	int i= no1;
	
	while(i<=no2){
		if(i % 2 != 0){
			cout<<i<<" Is "<<"Odd"<<endl;
		} else{
			cout<<i<<" Is "<<"Even"<<endl;
		}
		i++;
	}
	
}
void oddEven3(int WhileDo){
	
	int no1, no2;
	cout<<"Enter the range of numbers!\n\n";
	cout<<"Enter the first numbers: ";
	cin>>no1;
	cout<<"Enter the second numbers: ";
	cin>>no2;
	
	cout<<endl;
	int i= no1;
	
	do{
		if(i % 2 != 0){
			cout<<i<<" Is "<<"Odd"<<endl;
		} else{
			cout<<i<<" Is "<<"Even"<<endl;
		}
		i++;
	} while(i<=no2);
	
}

int main(){
	
	
	
	return 0;
}