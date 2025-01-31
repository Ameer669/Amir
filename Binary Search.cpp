#include <iostream>
using namespace std;

int search(int arr[], int s, int myNum) {
    int left = 0;
    int right = s - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (myNum == arr[mid]) {
            return mid;
        } else if (myNum < arr[mid]) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    int s = sizeof(arr)/sizeof(arr[0]);
    int myNum;

    cout << "Enter a number to search: " << endl;
    cin >> myNum;

    int index = search(arr, s - 1, myNum);
    if (index == -1){
        cout << "Number not found in the array" << endl;
    } else {
        cout << "Number found at index: " << index << endl;
    }
    return 0;
}