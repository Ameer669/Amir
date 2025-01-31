#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	
	srand(time(0));
	
	int uc;
	int cc = rand() %3;

	while(uc>=0){

		cout << "\n---------------------------------------\n";

		cout << "\n\nWelcome to The Rock, Paper, Scissors Game!\n";
		cout << "\nChoose one of the following:\n";
		cout << "\n0) Rock\n";
		cout << "1) Paper\n";
		cout << "2) Scissors\n";
		cout << "\nEnter your choice (0, 1, or 2): ";
		cin >> uc;
		
		cout<<"\nYour Choice Is: ";
		if(uc == 0){
			cout<<"Rock \n";
			
		} else if(uc == 1){
			cout<<"Paper \n";
			
		} else if(uc == 2){
			cout<<"Scissors \n";
			
		} else {
			cout<<"invalid choice! \n";
			return 1;

		} 
		
		cout<<"\nThe Computer Choice Is: ";
			if(cc == 0){
			cout<<"Rock \n";
			
		} else if(cc == 1){
			cout<<"Paper \n";
			
		} else if(cc == 2){
			cout<<"Scissors \n";
			
		} else {
			cout<<"invalid choice! \n";
			return 1;

		} 
		
		
		if(uc == cc){
			cout<<"\nIts A Tie! \n";
			
		} else if(uc == 0 && cc == 2|| uc == 1 && cc == 0 || uc == 2 && cc == 1){
			cout<<"\nYou Are The Winner !\n";
			
		} else {
			cout<<"\nYou Lose! \n";

		} 
		
		
		
		
		
		


	}
	
		
	return 0;
	
}