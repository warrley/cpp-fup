#include <iostream>

using namespace std;

int main() {
    int hour, minute, second, time, h2, m2, s2, duration;

    cout << "Enter the start hour: ";
    cin >> hour;

    cout << "Enter the start minute: ";
    cin >> minute;

    cout << "Enter the start second: ";
    cin >> second;

    cout << "What's the duration in seconds? ";
    cin >> duration;

    time = duration + second + (minute * 60) + (hour * 3600);

    h2 = time / 3600;
    m2 = (time % 3600) / 60;
    s2 = ((time % 3600) % 60);

    cout << "The end time is: " << h2 << ":" << m2 << ":" << s2;

    return 0;
}