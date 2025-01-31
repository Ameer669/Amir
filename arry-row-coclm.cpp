#include <iostream>
#include<iomanip>
using namespace std;

struct schedule{
	string name;
	int salary;
};

int main(){
	schedule salaries[]={
	{"Amir", 350000},
	{"Ahmad", 170000},
	{"Sultan", 200000},
	{"Mohammed", 230000},
	{"Sayed", 100000},
	{"Mostafa", 300000},
	{"AbuBaker", 240000},
	{"Tamer", 250000},
	{"Salman", 290000},
	{"Abbas", 190000}
	};
			
	cout <<"\n\n-------------------------------------------------------\n";
    cout <<left<<setw(20)<<"Name"<<setw(20)<<"Salary (Rs)"<<setw(20)<<"Taxability"<<endl;
    cout <<"-------------------------------------------------------\n";
				
	for(int i=0; i<10; i++){
		cout<< left <<setw(22)<<salaries[i].name
			<< setw(19)<<salaries[i].salary
			<< (salaries[i].salary >= 250000 ? "(Taxable)" : "(No Tax)")
			<< endl;
	}

	return 0;	
	
	}