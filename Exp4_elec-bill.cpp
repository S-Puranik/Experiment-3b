#include <iostream>
using namespace std;

int main(){

    // Input = No. of units consumed.
    // Desired Output = Initial base bill amount, bill amount, 
    // percentage discount applied, the discount amount applied 
    // and the total bill amount after applying the discount.


    float units, base, discount, disc_percentage, disc_amt, amount, total, cost_unit;

    cout<< "Enter the number of units consumed: ";
    cin >> units;

    base = 100.00;
    cost_unit = 10.00;
    disc_percentage = 0.00;
    

    amount  = base + (units * cost_unit);


     if (amount <= 200) {

        disc_percentage = 0.0;

    } else if (amount <= 500) {

        disc_percentage = 5.0;

    } else if (amount <= 800) {

        disc_percentage = 10.0;

    } else if (amount <= 1100) {

        disc_percentage = 15.0;

    } else {

        disc_percentage = 20.0;
    }

    disc_amt = (amount * disc_percentage) / 100.0;
    total = amount - disc_amt;

    cout << "\nInitial Base Bill Amount: Rs " << base;
    cout << "\nBill Amount before Discount: Rs " << amount;
    cout << "\nDiscount Percentage: " << disc_percentage << "%";
    cout << "\nDiscount Amount: Rs " << disc_amt;
    cout << "\nTotal Bill Amount after Discount: Rs " << total;

    return 0;
}
