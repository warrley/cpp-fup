#include <iostream>

using namespace std;

int main() {
    char letter, newLetter;

    cout << "Enter a letter: ";
    cin >> letter;

    newLetter = letter - 32;

    cout << newLetter;

    return 0;
}