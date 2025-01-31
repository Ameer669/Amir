#include <iostream>
using namespace std;

int main() {
   
    long long numbers;
    long long revNumbers = 0;

    cout << "Enter a number: ";
    cin >> numbers;

    if (numbers == 0) {
        cout << "Reversed numbers: 0\n";
        return 0;
    }

    while (numbers != 0) {
      
        revNumbers = revNumbers * 10 + numbers % 10;
        numbers /= 10;
    }

    cout << "Reversed numbers: " << revNumbers << "\n";

    return 0;
}
