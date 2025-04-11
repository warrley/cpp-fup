#include <iostream>

using namespace std;

int main() {
    float num, ant, suc;

    cout << "Enter a number: ";
    cin >> num;

    ant = num - 1;
    suc = num + 1;

    cout << "The predecessor is: " << ant << " and the successor is: " << suc;

    return 0;
}