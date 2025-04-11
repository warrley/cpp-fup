#include <iostream>

using namespace std;

int main() {
    float step, height, quant;

    cout << "Enter the height of stair step: ";
    cin >> step;

    cout << "Enter the total height of stair: ";
    cin >> height;

    quant = height / step;

    cout << "You need to climb " << quant << " steps";

    return 0;
}