#include <iostream>
#define pi 3.14159
using namespace std;

int main()
{
    float radius, area, circumference;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    cout << "The area of the circle: " << area << endl;
    cout << "The circumference of the circle: " << circumference << endl;
    return 0;
} 
