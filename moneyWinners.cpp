#include <iostream>

using namespace std;

int main() {
    float total, person1, person2, person3;

    cout << "Enter the quntity of money: ";
    cin >> total;

    person1 = total * 0.46;
    person2 = total * 0.32;
    person3 = total * 0.22;

    cout << "The person1 will receive R$ " << person1 << ", the person2 will receive R$ " << person2 << ", the person3 will receive R$ " << person3;

    return 0;
}