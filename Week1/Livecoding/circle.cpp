#include <iostream>
using namespace std;
const double PI = 3.14;

double circumference(double radius) {
    return 2*radius*PI;
}

double area(double radius) {
    return radius*radius*PI;
}
int main() {
    double radius;

    cout << "Enter the radius: ";
    cin >> radius;
    
    //cout << "The circumference is " << circumference(radius);
    //cout << "The area is " << area(radius);

}
