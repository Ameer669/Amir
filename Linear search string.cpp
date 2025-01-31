#include <iostream>
using namespace std;

int searchCar(string arr[], int size, string myCar){
    for (int i = 0; i < size; i++){
        if (arr[i] == myCar){
            return i;
        }
    }
    return -1;
}

int main() {
    string arr[] = {"Mercedes", "BMW", "Audi", "Toyota", "Honda", "Ford", "Chevrolet", "Nissan", "Hyundai", "Kia", "Volkswagen"};
    int size = sizeof(arr)/sizeof(arr[0]);
    string myCar;

    cout << "Enter a car to search: " << endl;
    cin >> myCar;

    int result = searchCar(arr, size, myCar);
    if (result == -1) {
        cout << "Car not found in the array" << endl;
    } else {
        cout << "Car found: " << arr[result] << " at index " << result << endl;
    }
    return 0;
}