#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int A[size], B[size], sum[size];

    cout << "Enter elements of first array: ";
    for (int i = 0; i < size; i++)
        cin >> A[i];

    cout << "Enter elements of second array: ";
    for (int i = 0; i < size; i++)
        cin >> B[i];

    for (int i = 0; i < size; i++)
        sum[i] = A[i] + B[i];

    cout << "Sum of arrays: ";
    for (int i = 0; i < size; i++)
        cout << sum[i] << " ";
    cout << endl;

    return 0;
}
