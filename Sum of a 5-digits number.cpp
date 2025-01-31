#include <iostream>

using namespace std;

int Sum(int no){
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        sum += no % 10;
        no /= 10;
    }
    return sum;
}

int main(){
	int no;
    cout <<"Enter A 5-Digits number: ";
    cin >> no;
    cout <<"Sum of " << no << " is: " << Sum(no) << endl;
    return 0;
}