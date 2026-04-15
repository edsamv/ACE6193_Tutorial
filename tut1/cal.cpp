#include <iostream>
using namespace std;

int main() {
    int option;
    cout << "Enter option: 1)+ 2)- 3)* 4)/ 5) mod(x1,x2) -1) Exit Your selection" << endl;
    cout << "Enter your option: ";
    cin >> option;
    while (option != -1) {
        if (option == 1) {
            int x1, x2;
            cout << "Enter the first number: ";
            cin >> x1;
            cout << "Enter the second number: ";
            cin >> x2;
            cout << "Result: " << x1 + x2 << endl;
        } else if (option == 2) {
            int x1, x2;
            cout << "Enter the first number: ";
            cin >> x1;
            cout << "Enter the second number: ";
            cin >> x2;
            cout << "Result: " << x1 - x2 << endl;
        } else if (option == 3) {
            int x1, x2;
            cout << "Enter the first number: ";
            cin >> x1;
            cout << "Enter the second number: ";
            cin >> x2;
            cout << "Result: " << x1 * x2 << endl;
        } else if (option == 4) {
            int x1, x2;
            cout << "Enter the first number: ";
            cin >> x1;
            cout << "Enter the second number: ";
            cin >> x2;

            if (x2 != 0) {
                cout << "Result: " << x1 / x2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
        } else if (option == 5) {
            int x1, x2;
            cout << "Enter the first number: ";
            cin >> x1;
            cout << "Enter the second number: ";
            cin >> x2;
            if (x2 != 0) {
                cout << "Result: " << x1 % x2 << endl;
            } else {
                cout << "Error: Modulo by zero is not allowed." << endl;
            }
        } else {
            cout << "Invalid option. Please try again." << endl;
        }
        cout << "Enter your option: ";
        cin >> option;
    } 
    return 0;   
}