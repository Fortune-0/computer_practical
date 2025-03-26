#include <iostream>
using namespace std;

int main() {
    int num[3];
    int sum = 0;

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> num[i];
        sum = sum + num[i];
        // sum += num[i];
    }
    cout<<endl;
    cout << "Sum of numbers: " << sum << endl;
    return 0;
}