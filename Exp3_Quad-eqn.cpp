#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int a, b, c;

    cout<< "Let the quadratic equation be ax² + bx + c = 0.\n";

    cout<< "\nEnter the value of a: ";
    cin >> a;
    cout<< "\nEnter the value of b: ";
    cin >> b;
    cout<< "\nEnter the value of c: ";
    cin >> c;

    //Calculating the Solution via the formula method:

    double delta, x1, x2;

    delta = (b*b) - (4*a*c);
    x1 = (-b + sqrt(delta))/ (2*a);
    x2 = (-b - sqrt(delta))/ (2*a);

    cout << "\n\nThe delta is " << delta;
    cout << "\nThe roots of the quadratic equation are: " << x1 << " or " << x2;

    if (delta == 0){

        cout << "\nThe roots are real and equal.";

    }

    if (delta >= 0){
        
        cout << "\nThe roots are real and unequal.";

    }

    else {

        cout << "\nThe roots are not real.";

    }

    return 0;
}
