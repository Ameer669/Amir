#include <iostream>
using namespace std;

int search(int arr[], int size, int myNum) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == myNum) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int size = sizeof(arr)/sizeof(arr[0]);
    int myNum;

    cout << "Enter a number to search: " << endl;
    cin >> myNum;

    int index = search(arr, size, myNum);
    if (index == -1) {
        cout << "Number not found in the array" << endl;
    } else {
        cout << "Number found at index: " << index << endl;
    }
    return 0;
}