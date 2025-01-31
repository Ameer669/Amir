#include <iostream>
using namespace std;

int main() {
    int no[] = {1, 2, 3, 4, 5};
    int n = sizeof(no) / sizeof(no[0]);
    int maxVal = no[0];  
    
    for (int i = 1; i < n; i++) {  
        if (no[i] > maxVal) {
            maxVal = no[i];
        }
    }

    cout << "The maximum value in the array is: " << maxVal << endl;

    return 0;
}
