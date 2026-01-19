#include<iostream>
#include<iomanip>
using namespace std;
int main()
 {
    char choice;
    int item, quantity;
    double price = 0.0, total;
    cout << "Welcome to Fast Food/Snack Parlor\n";
    cout << "Press M/m for Meals or B/b for Beverages: ";
    cin >> choice;
     if (choice == 'M' || choice == 'm') {
        cout << "\n Meals Menu:\n";
        cout << "1. Burger - Rs. 350\n";
        cout << "2. Roll Paratha - Rs. 190\n";
        cout << "3. Spaghetti - Rs. 225\n";
        cout << "Enter your choice (1, 2, or 3): ";
        cin >> item;

        if (item == 1) price = 350;
        else if (item == 2) price = 190;
        else if (item == 3) price = 225;
        else {
            cout << "Invalid choice.\n";
            return 1;
        }
    }
    else if (choice == 'B' || choice == 'b') {
        cout << "\nBeverages Menu:\n";
        cout << "1. Coffee - Rs. 150/cup\n";
        cout << "2. Fresh Juice - Rs. 340/glass\n";
        cout << "3. Green Tea - Rs. 75/cup\n";
        cout << "Enter your choice (1, 2, or 3): ";
        cin >> item;

        if (item == 1) price = 150;
        else if (item == 2) price = 340;
        else if (item == 3) price = 75;
        else {
            cout << "Invalid choice.\n";
            return 1;
        }
    }
    else {
        cout << "Invalid choice.\n";
        return 1;
    }

    cout << "Enter quantity: ";
    cin >> quantity;

    total = price * quantity;
    double tax = total * 0.035;
    total += tax;

    cout << fixed << setprecision(2);
    cout << "Total bill (including 3.5% tax): Rs. " << total << endl;

    return 0;
}