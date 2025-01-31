#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void cal1(){
	int figureType;
    cout << "Choose the figure type:\n";
    cout << "1. Three-sided figure\n";
    cout << "2. Four-sided figure\n";
    cout << "Enter choice (1 or 2): ";
    cin >> figureType;

    if (figureType == 1) {
        int triangleType;
        cout << "Choose the type of triangle:\n";
        cout << "1. Right Triangle\n";
        cout << "2. Isosceles Triangle\n";
        cout << "Enter choice (1 or 2): ";
        cin >> triangleType;

        if (triangleType == 1) {
            int choice;
            cout << "Choose the sides you know:\n";
            cout << "1. Hypotenuse and Perpendicular\n";
            cout << "2. Base and Hypotenuse\n";
            cout << "3. Base and Perpendicular\n";
            cout << "Enter choice (1, 2 or 3): ";
            cin >> choice;

            double base, perpendicular, hypotenuse, area;

            if (choice == 1) {
                cout << "Enter hypotenuse: ";
                cin >> hypotenuse;
                cout << "Enter perpendicular: ";
                cin >> perpendicular;
                base = sqrt(pow(hypotenuse, 2) - pow(perpendicular, 2));
            } else if (choice == 2) {
                cout << "Enter base: ";
                cin >> base;
                cout << "Enter hypotenuse: ";
                cin >> hypotenuse;
                perpendicular = sqrt(pow(hypotenuse, 2) - pow(base, 2));
            } else if (choice == 3) {
                cout << "Enter base: ";
                cin >> base;
                cout << "Enter perpendicular: ";
                cin >> perpendicular;
                hypotenuse = sqrt(pow(base, 2) + pow(perpendicular, 2));
            } else {
                cout << "Invalid choice!" << endl;
                return 1;
            }

            area = 0.5 * base * perpendicular;
            cout << "Area of the Right Triangle: " << area << endl;

        } else if (triangleType == 2) {
            double base, height, area;
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;

            area = 0.5 * base * height;
            cout << "Area of the Isosceles Triangle: " << area << endl;
        } else {
            cout << "Invalid triangle type!" << endl;
        }

    } else if (figureType == 2) {
        int quadType;
        cout << "Choose the type of four-sided figure:\n";
        cout << "1. Rectangle\n";
        cout << "2. Square\n";
        cout << "Enter choice (1 or 2): ";
        cin >> quadType;

        if (quadType == 1) {
            double width, height, area;
            cout << "Enter width: ";
            cin >> width;
            cout << "Enter height: ";
            cin >> height;

            area = width * height;
            cout << "Area of the Rectangle: " << area << endl;

        } else if (quadType == 2) {
            double side, area;
            cout << "Enter side length: ";
            cin >> side;

            area = pow(side, 2);
            cout << "Area of the Square: " << area << endl;
        } else {
            cout << "Invalid four-sided figure type!" << endl;
        }

    } else {
        cout << "Invalid figure type!" << endl;
    }

}

void swap2(){
	int C, D, temp;

    cout << "Enter value for C: ";
    cin >> C;
    cout << "Enter value for D: ";
    cin >> D;

    cout << "\nBefore swapping:" << endl;
    cout << "C = " << C << ", D = " << D << endl;

    temp = C;
    C = D;
    D = temp;

    cout << "\nAfter swapping:" << endl;
    cout << "C = " << C << ", D = " << D << endl;
}

void temp3(){
	int choice;
    double temperature, convertedTemperature;

    cout << "Press 1 to convert Fahrenheit to Celsius" << endl;
    cout << "Press 2 to convert Celsius to Fahrenheit" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        convertedTemperature = (temperature - 32) * 5.0 / 9.0;
        cout << "Temperature in Celsius: " << convertedTemperature << endl;
    } else if (choice == 2) {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        convertedTemperature = (temperature * 9.0 / 5.0) + 32;
        cout << "Temperature in Fahrenheit: " << convertedTemperature << endl;
    } else {
        cout << "Invalid choice. Please run the program again and enter 1 or 2." << endl;
    }
}

void rev4(){
    
    int number, originalNumber, reversedNumber = 0;

    cout << "Enter a five-digit number: ";
    cin >> number;

    originalNumber = number;

    if (number < 10000 || number > 99999) {
        cout << "Invalid input. Please enter a five-digit number." << endl;
    }

    while (number != 0) {
        int lastDigit = number % 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
        number /= 10;
    }

    cout << "Reversed number: " << reversedNumber << endl;

    if (originalNumber == reversedNumber) {
        cout << "The original and reversed numbers are equal." << endl;
    } else {
        cout << "The original and reversed numbers are not equal." << endl;
    }

}

void kilo5(){
	
    double distanceKm;

    cout << "Enter the distance between two cities in kilometers: ";
    cin >> distanceKm;

    double distanceMeters = distanceKm * 1000;
    double distanceFeet = distanceKm * 3280.84;
    double distanceInches = distanceKm * 39370.1;
    double distanceCentimeters = distanceKm * 100000;

    cout << "Distance in meters: " << distanceMeters << " m" << endl;
    cout << "Distance in feet: " << distanceFeet << " ft" << endl;
    cout << "Distance in inches: " << distanceInches << " in" << endl;
    cout << "Distance in centimeters: " << distanceCentimeters << " cm" << endl;

}

void tforce6(){

    double mass, velocity, radius;

    cout << "Enter mass (kg): ";
    cin >> mass;

    cout << "Enter velocity (m/s): ";
    cin >> velocity;

    cout << "Enter radius (m): ";
    cin >> radius;

    double centripetalForce = (mass * velocity * velocity) / radius;

    cout << "\nCentripetal Force: " << centripetalForce << " N" << endl;

}

void fforce7(){

    double mass, radius, angularVelocity;

    cout << "Enter mass (kg): ";
    cin >> mass;

    cout << "Enter radius (m): ";
    cin >> radius;

    cout << "Enter angular velocity (rad/s): ";
    cin >> angularVelocity;

    double centrifugalForce = mass * radius * angularVelocity * angularVelocity;

    cout << "\nCentrifugal Force: " << centrifugalForce << " N" << endl;

}

void cash8(){
    int amount;
    cout << "Enter the amount to withdraw (in hundreds): ";
    cin >> amount;

    if (amount % 10 != 0) {
        cout << "Invalid amount. Please enter an amount in multiples of 10." << endl;
        return 1;
    }

    int numHundred = amount / 100;
    int remainder = amount % 100;

    int numFifty = remainder / 50;
    remainder %= 50;

    int numTen = remainder / 10;

    cout << "Currency notes needed:" << endl;
    cout << "100s: " << numHundred << endl;
    cout << "50s: " << numFifty << endl;
    cout << "10s: " << numTen << endl;


}

void grave9(){

    const double G = 6.67430e-11;
    double m1, m2, r;

    cout << "Enter mass of the first object (kg): ";
    cin >> m1;

    cout << "Enter mass of the second object (kg): ";
    cin >> m2;

    cout << "Enter distance between the objects (m): ";
    cin >> r;

    double force = G * (m1 * m2) / (r * r);

    cout << "\nGravitational Force between the objects: " << force << " N" << endl;

    return 0;

}
	
int main() {














    return 0;
}