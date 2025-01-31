#include <iostream>

using namespace std;

int Max(int a, int b, int c) {
    return max(a, max(b,c));
}

int main() {
    int a,b,c;
    cout << "Enter 3 Digits To find the Maximum Value: ";
    cin >> a >> b >> c;
    cout <<"Maximum Value of: "<< a <<", "<< b <<", "<< c <<" is: "<< Max(a,b,c) << endl;
	return 0;
}