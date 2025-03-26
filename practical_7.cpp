#include <iostream>
using namespace std;

int main() {
    int num[10];
    int sum = 0;
    float average;
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> num[i];
        sum += num[i];

        average = sum / 10;
    }
    cout << "Sum of numbers: " << sum << endl;
    cout << "Average of numbers: " << average << endl;
    return 0;
}