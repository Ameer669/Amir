#include <iostream>
using namespace std;

int main(){
	double products[5] = {2.98, 4.50, 9.98, 4.49, 6.87};
	int choice;
	double total = 0.0;
	int no = 0;
	
	cout<<"Welcome To The Retail House, Select The Products You desire!\n";
	cout<<"\n\n0) Exit\n1) $2.98\n2) $4.50\n3) $9.98\n4) $4.49\n5) $6.87\n6) View Your Cart\n";
	cout<<"\nTodays discount is 50% if the total exceeds $50\n";

	while(true){
		cout<<"\nChoose a Product : ";
		cin>>choice;
	
		if(cin.fail()){
			cout<<"\nPlease Enter a vaild input!";
			cin.clear();
			cin.ignore(1000,'\n');
			continue;
		}
		
		if(choice == 0){
			break;
		} else if(choice > 0 && choice <= 5){
			total += products[choice - 1];
			cout<<"\n$"<<products[choice - 1]<<" is added to your cart!\n";
			no++;
		} else if(choice == 6){
			cout<<endl<<"You Have Bought "<<no<<" Products And The Total Of Your Choices is: $"<<total<<endl;
		} else{
			cout<<"\nPlease Enter A Vaild Choice!\n";
		}
	}
	
	double discount = total * 0.50;
	double disto = total - discount;
	
	if(total >= 50){
		cout<<endl<<"You Have Bought "<<no<<" Products And Received A 50% Discount!\n";
		cout<<"The Total Of Your Choices Before Discount is: $"<<total<<endl;
		cout<<"The Total Of Your Choices after Discount is: $"<<disto<<endl;
	} else{
		cout<<endl<<"You Have Bought "<<no<<" Products And The Total Of Your Choices is: $"<<total;
	}
	
	return 0;
}