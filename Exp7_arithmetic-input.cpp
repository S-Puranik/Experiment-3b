#include <iostream>
using namespace std;

int main() {
    
    
    char arithmetic; 
    double a, b, operation;


    cout << "Enter an arithmetic operator such as +, -, *, and / : ";
    cin >> arithmetic;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    switch(arithmetic) {
        case '+':
            operation = a + b;
            cout << "\nThe operation of " << a << " + " << b << " is: " << operation;
            break;
        case '-':
            operation = a - b;
            cout << "\nThe operation of " << a << " - " << b << " is: " << operation;
            break;
        case '*':
            operation = a * b;
            cout << "\nThe operation of " << a << " * " << b << " is: " << operation;
            break;
        case '/':
            operation = a / b;
            cout << "\nThe operation of " << a << " / " << b << " is: " << operation;
            break;
        default:
            cout << "\nError: Invalid operator. Please use +, -, *, or /.";

    }

    return 0;

}
