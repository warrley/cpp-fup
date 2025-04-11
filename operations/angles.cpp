#include <iostream>

using namespace std;

int main() {
    float rad, deg;
    const float PI = 3.14;

    cout << "Enter the angle in degrees: ";
    cin >> deg;

    rad = deg * PI / 180;

    cout << "The angle in radians is: " << rad;

    return 0;
}