#include <iostream>

using namespace std;

int main() {
    int number, thousand, hundread, ten, one;

    cout << "Enter a number 4 algarism: ";
    cin >> number;

    thousand = number / 1000;
    hundread = number / 100;
    ten = number / 10;

    cout << thousand << "\n" << hundread << "\n" << ten;

    return 0;
}