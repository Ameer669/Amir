#include <iostream>
using namespace std;

int main() {
    int squareSize = 5;  
    int triangleHeight = 5;

   
    for (int i = 0; i < squareSize; i++) {
        for (int j = 0; j < squareSize; j++) {
            cout << "X  ";
        }
        cout << endl;
    }

   
    for (int i = 1; i <= triangleHeight; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "X  ";
        }
        cout << endl;
    }

    return 0;
}
