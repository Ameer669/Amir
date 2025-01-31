#include <iostream>
#include <vector> // arr
#include <cctype> // tolower()
using namespace std;

void cinfail() {
    if (cin.fail()) {
        cout << "\nInvalid input!\n" << endl;
        cin.clear();            
        cin.ignore(1000, '\n');
    }
}

int main() {
    int n, userGuess;
    cout << "Welcome To Odd Or Even Game!\n\n";
    cout << "Enter the number of numbers you want to calculate: ";
    cin >> n;
    cinfail(); 
    vector<int> arr(n);
    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter number " << i + 1 << ": ";
        cin >> arr[i];
        cinfail();
    }

    for (int i = 0; i < n; i++) {
        cout << "\n\nIs number " << arr[i] << " 1) Even or 2) Odd? ";
        cin >> userGuess;
        cinfail();
        bool isEven = (arr[i] % 2 == 0);
        if ((userGuess == 1 && isEven) || (userGuess == 2 && !isEven)) {
            cout << "\nCorrect! " << arr[i] << " is " << (isEven ? "Even.\n" : "Odd.\n");
        } else {
            cout << "\nWrong! " << arr[i] << " is actually " << (isEven ? "Even.\n" : "Odd.\n");
        }
    }

    return 0;
}
