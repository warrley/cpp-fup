#include <iostream>

using namespace std;

int main() {
    int number, hundread, ten, one;

    cout << "Enter a number of 3 algarism: ";
    cin >> number;

    hundread = number / 100;
    ten = ((number % 100) / 10);
    one = number % 10;

    cout << one << ten << hundread;

    return 0;
}