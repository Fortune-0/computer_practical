
#include <iostream>
using namespace std;

int main() {
    int deposit, withdrawn, total_expenditure;
    {
        cout << "Enter the amount deposited" << endl;
        cin >> deposit;
        cout << "Depsited amount is : " << deposit << endl;
        cout << "Enter the amount withdrawn" << endl;
        cin >> withdrawn;
        cout << "Withdrawn amount is : " << withdrawn << endl;
        total_expenditure = deposit - withdrawn;
        
        cout << "Total expenditure is : " << total_expenditure << endl;

    }
    return 0;
}