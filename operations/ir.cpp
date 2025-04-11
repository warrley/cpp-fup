#include <iostream>

using namespace std;

int main() {
    float days, res;

    cout << "Enter the quantity of days: ";
    cin >> days;

    res = (30 * days) * 0.92;

    cout << "The net amount to be paid is " << res;

    return 0;
}