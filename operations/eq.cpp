#include <iostream>

using namespace std;

int main() {
    float num, res;

    cout << "Enter a number: ";
    cin >> num;

    res = ((num * 3) + 1) + ((num * 2) - 1);

    cout << "The sum of the successor of its triple with the predecessor of its double is: " << res;

    return 0;
}