#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Enter your grade: ";
    cin >> a;
	cout<<endl;
	
	if(cin.fail()){
		cout<<"\nPlease enter a number!";
		return 1;
	}

    if (a >= 90 && a <= 100) {
        cout << "A" << endl;
    } else if (a >= 80 && a <= 89) {
        cout << "B" << endl;
    } else if (a >= 70 && a <= 79) {
        cout << "C" << endl;
    } else if (a >= 60 && a <= 69) {
        cout << "D" << endl;
    } else if (a >= 0 && a <= 59) {
        cout << "F" << endl;
    } else {
        cout <<endl<< "Invalid number! Grade must be between 0 and 100." << endl;
    }

    return 0;
}
