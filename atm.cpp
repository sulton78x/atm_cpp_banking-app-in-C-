#include <iostream>
using namespace std;

// show menu
void showMenu() {
    cout << "**********MENU**********" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "Press any other Digit to exit." << endl;
    cout << "************************" << endl;
}

// double showBalance() {

// }

int main() {
    // check balance, deposit, withdraw, show menu
    // Next Version Features: Transfer btw accounts,
    // create new accounts.
    int options;
    double balance = 800;

    showMenu();
    // loop through
    do {
        cout << "Choose an Option: ";
        cin >> options;

        switch (options) {
            case 1:
                cout << "Your Balance is: " << balance << endl;
                break;
            case 2:
                cout << "Enter Amount to Deposit: ";
                double depositAmount;
                cin >> depositAmount;
                balance += depositAmount;
                cout << "Your new Balance is " << balance << endl;
                break;
            case 3:
                cout << "Enter Amount to Withdraw: ";
                double withdrawAmount;
                cin >> withdrawAmount;
                // check if withdrawAmount is equal to or lesser than balance.
                if (withdrawAmount <= balance) {
                    balance -= withdrawAmount;
                    cout << "Your Available Balance is: " << balance << endl;
                } else {
                    cout << "Sorry! Insufficient funds" << endl;
                }
                break;
    }
    } while (options <= 3);

    



    // system("pause>0");
    // cin.ignore;
    cin.get();
}