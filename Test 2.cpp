#include <iostream>
#include <iomanip>
using namespace std;

void Fact1(){
    int n;
    unsigned long long factorial = 1;
    
    cout << "Enter a positive integer to calculate its factorial: ";
    cin >> n;
    
    if (n < 0) {
        cout << "Error! Factorial is not defined for negative numbers." << endl;
        return 1;
    }
    

    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    cout << "Factorial of " << n << " (" << n << "!) = " << factorial << endl;
    
}
void Rent2(){

    const double PRICE1 = 2.98;
    const double PRICE2 = 4.50;
    const double PRICE3 = 9.98;
    const double PRICE4 = 4.49;
    const double PRICE5 = 6.87;
    
    int productNumber;
    int quantity;
    double totalRetailValue = 0.0;
    

    cout << "Available Products:\n";
    cout << "1. Product 1 - $2.98\n";
    cout << "2. Product 2 - $4.50\n";
    cout << "3. Product 3 - $9.98\n";
    cout << "4. Product 4 - $4.49\n";
    cout << "5. Product 5 - $6.87\n";
    cout << "\nEnter -1 for product number to end program\n\n";
    
 
    while (true) {

        cout << "Enter product number (1-5): ";
        cin >> productNumber;
        
        if (productNumber == -1) {
            break;
        }
        
        if (productNumber < 1 || productNumber > 5) {
            cout << "Invalid product number. Please try again.\n";
            continue;
        }
        
        cout << "Enter quantity sold: ";
        cin >> quantity;
        
        if (quantity < 0) {
            cout << "Invalid quantity. Please try again.\n";
            continue;
        }
        
        double productTotal = 0.0;
        switch (productNumber) {
            case 1:
                productTotal = PRICE1 * quantity;
                break;
            case 2:
                productTotal = PRICE2 * quantity;
                break;
            case 3:
                productTotal = PRICE3 * quantity;
                break;
            case 4:
                productTotal = PRICE4 * quantity;
                break;
            case 5:
                productTotal = PRICE5 * quantity;
                break;
        }
        
        totalRetailValue += productTotal;
        
        // Display product subtotal
        cout << fixed << setprecision(2);
        cout << "Subtotal for this product: $" << productTotal << "\n\n";
    }
    
    // Display final results
    cout << "\nFinal Results:\n";
    cout << "Total Retail Value: $" << fixed << setprecision(2) << totalRetailValue << endl;
    
    
}
void Call3(){

    int duration;
    int charges;
    
    cout << "Please Enter Total Call Duration in Minutes: ";
    cin >> duration;
    
    if (duration < 0) {
        cout << "Wrong Value entered!";
        return 1;
    }
    else if (duration >= 0 && duration <= 2) {
        charges = 12;
    }
    else if (duration > 2 && duration <= 5) {
        charges = 10;
    }
    else if (duration > 5 && duration <= 8) {
        charges = 7;
    }
    else if (duration > 8 && duration <= 10) {
        charges = 5;
    }
    else {  // duration > 10
        charges = 3;
    }
    
    int totalCharges = duration * charges;

    cout << "Total Call Duration is: " << duration << endl;
    cout << "Total Call Charges are: " << totalCharges << "Pkr." << endl;
    cout << "Press any key to continue";
    
}
void Bank4(){

    double balance;
    int choice;
    double amount;

    cout << "Welcome!\n";
    cout << "Enter your balance: ";
    cin >> balance;

    do {  // Main Loop

        cout << "\n---------------------------------\n";
        cout << "Select an option:\n";
        cout << "1. Withdraw Amount\n";
        cout << "2. Deposit Amount\n";
        cout << "3. Exit\n";
        cout << "-----------------------------------\n";
        cout << "\nYour option: ";
        cin >> choice;
        cout << endl;

        switch(choice) {
            case 1: // Withdraw
                cout << "How much amount you want to withdraw from your account?\n";
                cout << "Amount: ";
                cin >> amount;
                
                // Amount possible or not?
                if (amount > balance) {
                    cout << "Error: Insufficient balance. Cannot withdraw amount greater than balance.\n";
                } else if (amount < 0) {
                    cout << "Error: Cannot withdraw negative amount.\n";
                } else {
                    balance -= amount;
                    cout << "Your new balance is: " << fixed << setprecision(2) << balance << endl;
                }
                break;
                
            case 2: // Deposit
                cout << "How much amount you want to deposit in your account?\n";
                cout << "Amount: ";
                cin >> amount;
                
                // Validate deposit amount
                if (amount < 0) {
                    cout << "Error: Cannot deposit negative amount.\n";
                } else {
                    balance += amount;
                    cout << "Your new balance is: " << fixed << setprecision(2) << balance << endl;
                }
                break;
                
            case 3: // Exit
                cout << "\nThank you for using the system!\n";
                break;
                
            default:
                cout << "Invalid option! Please select 1, 2, or 3.\n";
        }
        
    } while (choice != 3);

}
void Insu5(){

    //  For user input
    char health, location, gender;
    int age;
    
    // For Output variables
    bool isInsured = false;
    double premiumRate = 0;
    int maxPolicyAmount = 0;
    
    cout << "Enter health status (E for Excellent, P for Poor): ";
    cin >> health;
    health = toupper(health);
    
    cout << "Enter age: ";
    cin >> age;
    
    cout << "Enter location (C for City, V for Village): ";
    cin >> location;
    location = toupper(location);
    
    cout << "Enter gender (M for Male, F for Female): ";
    cin >> gender;
    gender = toupper(gender);
    
    if (age >= 25 && age <= 35) {

        if (health == 'E' && location == 'C' && gender == 'M') {
            isInsured = true;
            premiumRate = 4;
            maxPolicyAmount = 200000;
        }

        else if (health == 'E' && location == 'C' && gender == 'F') {
            isInsured = true;
            premiumRate = 3;
            maxPolicyAmount = 100000;
        }

        else if (health == 'P' && location == 'V' && gender == 'M') {
            isInsured = true;
            premiumRate = 6;
            maxPolicyAmount = 10000;
        }
    }
    
    // Display results
    cout << "\nInsurance Details:\n";
    cout << "----------------------------------------\n";
    
    if (isInsured) {
        cout << "Status: Person can be insured\n";
        cout << "Premium Rate: Rs. " << premiumRate << " per thousand\n";
        cout << "Maximum Policy Amount: Rs. " << maxPolicyAmount << endl;
        
        double totalPremium = (maxPolicyAmount / 1000.0) * premiumRate;
        cout << "\nFor maximum policy amount:\n";
        cout << "Total Premium: Rs. " << totalPremium << endl;
    } else {
        cout << "Status: Person cannot be insured\n";
        cout << "Reason: Does not meet eligibility criteria\n";
    }
    
}
void Bill6(){

    int units;
    double billAmount = 0.0;
    const double FUEL_SURCHARGE = 0.20;  // 20%
    const double GOVT_TAX = 0.10;        // 10%
    
    cout << "Enter the number of units consumed: ";
    cin >> units;
    
    if (units < 0) {
        cout << "Error: Units cannot be negative!" << endl;
        return 1;
    }
    
    if (units <= 100) {
        billAmount = units * 4.0;
    }
    else if (units <= 300) {
        billAmount = (100 * 4.0) + ((units - 100) * 4.50);
    }
    else if (units <= 500) {
        billAmount = (100 * 4.0) + (200 * 4.50) + ((units - 300) * 4.75);
    }
    else {
        billAmount = (100 * 4.0) + (200 * 4.50) + (200 * 4.75) + ((units - 500) * 5.0);
    }
    
    // additional charges
    double fuelSurchargeAmount = billAmount * FUEL_SURCHARGE;
    double govtTaxAmount = billAmount * GOVT_TAX;
    double totalBill = billAmount + fuelSurchargeAmount + govtTaxAmount;
    
    // Display bill
    cout << fixed << setprecision(2);
    cout << "\n=== Electricity Bill ===" << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "---------------------------" << endl;
    cout << "Base Amount: Rs. " << billAmount << endl;
    cout << "Fuel Surcharge (20%): Rs. " << fuelSurchargeAmount << endl;
    cout << "Government Tax (10%): Rs. " << govtTaxAmount << endl;
    cout << "---------------------------" << endl;
    cout << "Total Bill: Rs. " << totalBill << endl;
    cout << "===========================" << endl;
    
}


int main() {



    return 0;
}