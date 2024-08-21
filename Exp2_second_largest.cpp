#include <iostream>
using namespace std;

int main() {
    
    int a, b, c;
    
    cout << "Enter the three numbers: \n a: ";
    cin >> a;
    cout << " b: ";
    cin >> b;
    cout << " c: ";
    cin >> c;
    
    if(a > b) {
        if(b < c) {
            cout << "The second largest number is " << c;
        }
        if(b > c) {
            cout << "The second largest number is " << b;
        }
    }
    if(b > a) {
        if(a < c) {
            cout << "The second largest number is " << c;
        }
        if(a > c) {
            cout << "The second largest number is " << a;
        }
    }
    if(c > a) {
        if(a < b) {
            cout << "The second largest number is " << b;
        }
        if(a > b) {
            cout << "The second largest number is " << a;
        }
    }
    
    return 0;
}
