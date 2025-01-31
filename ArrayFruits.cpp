#include <iostream>
#include <iomanip>
using namespace std;

struct menuitems{
	string name;
	int price; 
};

int main() {
    int cu;
    cout << "Enter the number of customers: ";
    cin >> cu;
    
    menuitems menu[]={
	{"Mangoes",20},
	{"Oranges",10},
	{"Bananas",5}
	};
	
	int arr[cu][3];
	
	cout<<"\n\n    (Menu)    \n\n1)Mangoes. 20Rs.\n2)Oranges. 10Rs.\n3)Banans   5Rs.\n\n";
	
	for(int i = 0; i<cu; i++){
		cout<<"\n- Customer "<<i+1<<endl<<endl;
		cout<<"How many Mangoes do you want?  ";
		cin>>arr[i][0];
		cout<<"How many Oranges do you want?  ";
		cin>>arr[i][1];
		cout<<"How many Bananas do you want?  ";
		cin>>arr[i][2];
	}

    cout << "\n\n------------------------------------------------------------------------------------\n";
    cout << "Customer No.    Mangoes        Oranges        Bananas        Total Bill\n";
    cout << "------------------------------------------------------------------------------------\n";
    
    for(int i = 0; i < cu; i++) {
        int totalBill = 0;

        totalBill = arr[i][0] * menu[0].price + 
                    arr[i][1] * menu[1].price + 
                    arr[i][2] * menu[2].price;

		cout<<setw(6)<<i+1<<setw(14)<<arr[i][0]<<setw(15)<<arr[i][1]<<setw(15)<<arr[i][2]<<setw(16)<<totalBill<<"Rs.\n";
	}
   


    return 0;
}
