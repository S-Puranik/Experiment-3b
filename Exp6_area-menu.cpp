#include <iostream>
using namespace std;

int main(){

    int num;

    void Triangle();
    void Rectangle ();
    void Circle();
    void Sphere();

    cout<< "\nPlease select the number from the following menu:";
    cout<< "\n1. Calculate the area of a triangle.";
    cout<< "\n2. Calculate the area of a rectangle.";
    cout<< "\n3. Calculate the area of a circle.";
    cout<< "\n4. Calculate the area of a sphere.";
    cout<< "\nEnter the operation to be done (1-4): ";
    cin >> num;

    switch(num) {

        case 1:
            Triangle();
            break;
        case 2:
            Rectangle();
            break;
        case 3:
            Circle();
            break;
        case 4:
            Sphere();
            break;

        default:
            cout<< "Please enter a number between 1 and 5 according to the Menu.";
        }

    return 0;
}

    void Triangle() {

        double base, height;
        cout << "Enter the base of the triangle: ";
        cin >> base;
        cout << "Enter the height of the triangle: ";
        cin >> height;
        double area = 0.5 * base * height;
        cout << "The area of the triangle is: " << area;
        }
    void Rectangle() {

        double length, width;
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        double area = length * width;
        cout << "The area of the rectangle is: " << area;
        }

    void Circle() {

        double radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        double area = 3.14 * radius * radius;
        cout << "The area of the circle is: " << area << endl;
        }

    void Sphere() {

        double radius;
        cout << "Enter the radius of the sphere: ";
        cin >> radius;
        double surfaceArea;
        surfaceArea = 4 * 3.14 * radius * radius;
        cout << "The surface area of the sphere is: " << surfaceArea << endl;
    }
