#include <iostream>
using namespace std;

double calculateElectricityBill(int units) {
    double bill = 0.0;
    const double rateFirst50 = 1.0;
    const double rateNext100 = 2.0; 
    const double rateRemaining = 5.0; 
    const double tax = 50.0; 

    if (units > 0) {
        if (units <= 50) {
            bill = units * rateFirst50;
        } else if (units <= 150) {
            bill = 50 * rateFirst50 + (units - 50) * rateNext100;
        } else {
            bill = 50 * rateFirst50 + 100 * rateNext100 + (units - 150) * rateRemaining;
        }

        // Adding the fixed tax
        bill += tax;
    }

    return bill;
}

int main() {
    int consumedUnits;
    cout << "Enter the number of units consumed: ";
    cin >> consumedUnits;

    double totalBill = calculateElectricityBill(consumedUnits);
    cout << "Electricity Bill: $" << totalBill << endl;

    return 0;
}
