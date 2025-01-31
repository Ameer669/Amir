#include <iostream>

using namespace std;

void swap(int &x, int temp, int &y){
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int x, y;
    cout << "Enter Two Digits To Swap: " << endl;
    cin >> x >> y;

    cout << "Digits Before Swap: x = " << x <<" , Y= "<< y << endl;
    swap(x, y);
    cout << "Digits After Swap: x = " << x <<" , Y= "<< y << endl;
    return 0;
}