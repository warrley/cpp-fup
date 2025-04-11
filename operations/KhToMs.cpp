#include <iostream>

using namespace std;

int main() {
    double mhp, kmh;

    cout << "Enter the velocity in km/h: ";
    cin >> kmh;

    mhp = kmh / 3.6;

    cout << "The velocity in mhp is: " << mhp;
}