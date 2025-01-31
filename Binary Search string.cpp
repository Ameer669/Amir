#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<string> &arr, int left, int right, string myFood) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == myFood) {
            return mid;
        } else if (arr[mid] < myFood) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    vector<string> arr = {"Banana", "Apple", "Orange", "Grapes", "Mango"};
    sort(arr.begin(), arr.end());

    cout << "Enter food name: ";
    string myFood;
    cin >> myFood;

    int result = binarySearch(arr, 0, arr.size() - 1, myFood);
    
    if (result == -1) {
        cout << "Food not found" << endl;
    } else {
        cout << "Food found at index " << result << endl;
    }

    return 0;
}