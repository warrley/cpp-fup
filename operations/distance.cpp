#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x, y, distance;

    cout << "Enter a x coordenate: ";
    cin >> x;

    cout << "Enter a y coordenate: ";
    cin >> y;

    distance = sqrt((x * x) + (y * y));

    cout << "the distance to the point of origin is: " << distance;

    return 0;
}