#include <iostream>
#include <string>

using namespace std;

class BankAccount{
	protected:
		string AccName;
		int AccNum;
		double Balance;
	public:
		BankAccount(string name, int number, double initial_balance){
			AccName = name;
    	    AccNum = number;
        	Balance = initial_balance;
		}
		void Deposit(double amount){
			Balance += amount;
			cout << "\nDeposit successful! $" << amount << " was deposited to your account" << "\nNew balance: $" << Balance << endl;
		}
		void Withdraw(double amount){
			if(amount > Balance){
				cout<<"Insufficent Funds!";
			} else{
				Balance -= amount;
				cout << "\nWithdrawal successful! $" << amount << " was Withdrawn from your account" << "\nNew balance: $" << Balance << endl;
			}
		}
		void display(){
			cout<<"\n-------------------------";
			cout<<"\nAccount Holder: "<< AccName;
			cout<<"\nAccount Number: "<< AccNum;
			cout<<"\nAccount Balance: "<< Balance;
			cout<<"\n-------------------------";
		}
};

class SavingsAccount : public BankAccount{
	private:
	double interest;
	
	public:
		SavingsAccount(string name, int number, double initial_balance, double InterestRate) : BankAccount(name, number,initial_balance){
			interest = InterestRate;
		}
		void InterestCal(){
			double rate = Balance * (interest / 100);
			Balance += rate;
			cout<< "\nInterest Applied! \nNew Balance: $" << Balance << endl;
		}
		void Display(){
			BankAccount::display();
			cout<< "\nInterest Rate: " << interest << "%" << endl;
		}
		void transfer(SavingsAccount& other, double amount){
			if(Balance < amount){
				cout<<"\nInsufficent Funds!";
			}else{
				Balance -= amount;
				other.Balance += amount;
				cout << "\nTransfer successful! New balance: $" << Balance << "\nRecipient's new balance: $" << other.Balance << endl;
			}
		}
		
};

int main(){
	SavingsAccount sa1("Amir Rasas", 192045, 10000, 5.5);
	sa1.Display();
	sa1.Deposit(3000);
	sa1.Withdraw(7000);
	sa1.InterestCal();
	SavingsAccount sa2("Mohammed Akkawi", 395104, 4500, 3.0);
	sa2.Display();
	sa2.transfer(sa1, 3000);
	sa1.Display();
	sa2.Display();
	
}