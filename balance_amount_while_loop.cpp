#include<iostream>
using namespace std;

int main() {
    int amount, balance = 50000;
    char choice;
    
    do {
        cout << "\nEnter the amount you want to withdraw: ";
        cin >> amount;

        if (amount <= balance) 
        {
            balance -= amount;
            cout << "\nYou have withdrawn: " << amount;
            cout << "\nYour remaining balance is: " << balance;
        } 
        else 
        {
            cout << "\nInsufficient balance!";
        }

        cout << "\nDo you want to continue? Press 'y' for yes, 'n' for no: ";
        cin >> choice;

    } while (choice == 'y');
    
    cout << "\nThank you for using our service.\n";

    return 0;
}