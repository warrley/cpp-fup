#include <iostream>

using namespace std;

int main() {
    float price, newPrice;

    cout << "Enter the price of product: ";
    cin >> price;

    newPrice = 0.88 * price;

    cout << "The new price with 12% of descount is: " << newPrice;

    return 0;
}