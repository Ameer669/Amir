#include <iostream>
using namespace std;

int main(){
	
	const int code = 1234;
	int unsigned at = 3;
	double ba = 0.0;
	long long ucode;
	
	cout<<"Welcome To Your Bank Account!\n";
	
	while(at>0){
		cout<<"\nEnter Your Passcode: ";
		cin>>ucode;
		if(cin.fail()){
			cout<<"\nInvaild input!\n";
			cin.clear();
			cin.ignore(1000,'\n');
			continue;
		} if(ucode == code){
			cout<<"\nAccess Granted!\n";
			break;
		} else {
			at--;
		} if(at == 0){
			cout<<"\nYou have got 3 failed attempts and your account has been locked!\n";
			return 1;
			break;
		} else if(at>0){
			cout<<"\nThe Passcode is incorrect, You have "<<at<<" more tries!\n";
		}
	}
	int op;
	double wit, dep;
	bool bal = true;
	cout<<"\n\nYour Balance is $"<<ba<<endl<<endl;
	
	while(true){
		cout<<"\n-------------------------------------------------------\n";
		cout<<"0. Exit\n1. Withdraw Amount\n2. Deposit Amount\n3. Check Balance";
		cout<<"\n-------------------------------------------------------\n";
		cout<<"\nSelect an option: ";
		cin>>op;
		if(cin.fail()){
			cout<<"\nInvaild input!\n";
			cin.clear();
			cin.ignore(1000,'\n');
			continue;
		}if(op == 0){
			cout<<"\nThank you for using our Bank, GoodBye!\n";
			break;
		}else if(op == 1){
			cout<<"\nEnter the amount you want to withdraw: $";
			cin>>wit;
			if (cin.fail() || wit <= 0) {
                cout << "\nInvalid amount!\n";
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
            }
			if(ba>=wit){
				ba -= wit;
				continue;
			}else{
				cout<<"\nInsufficient Balance!\n";
				bal = false;
			}
		}else if(op == 2){
			cout<<"\nEnter the amount you want to deposit: $";
			cin>>dep;
			if (cin.fail() || dep <= 0) {
                cout << "\nInvalid amount!\n";
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
            }
			ba += dep;
		}else if(op == 3){
			cout<<"\n\nYour Balance is: $"<<ba<<endl;
		}else{
			cout<<"\nInvalid Choice!\n";
		}
	}
	
	
	
	return 0;
}