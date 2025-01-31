#include <iostream>
using namespace std;

int main() {
    double x, y;
    int z;
    char e;

    while (z >= 0){

        cout << "\nEnter the first number: ";
        cin >> x;
        cout << "\nEnter the second number: ";
        cin >> y;
        cout << "\nChoose an operation number 1) + , 2) - , 3) * , 4) / : ";
        cin >> z;

         if (z == 1) {
            cout << "\nResult: " << x + y << endl;
        } else if (z == 2) {
            cout << "\nResult: " << x - y << endl;
        } else if (z == 3) {
            cout << "\nResult: " << x * y << endl;
        } else if (z == 4) {
            if (y != 0) {
                cout << "\nResult: " << x / y << endl;
            } else {
                cout << "\nError: Division by zero is undefined!" << endl;
            }
        } else {
            cout << "\nError: Invalid operation choice!" << endl;
        }

    }


    return 0;
}
