#include <iostream>
#include <limits>
using namespace std;

int main() {
    char op;
    char again;
    double num1, num2, res;

    cout << "-------------------- CALCULATOR --------------------\n";

    do {
        cout << "\nEnter operator (+, -, *, /): ";
        cin >> op;

        cout << "Enter #1: ";
        cin >> num1;

        cout << "Enter #2: ";
        cin >> num2;

        if (cin.fail()) {
            cout << "Invalid input! Please enter numbers.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (op) {
        case '+':
            res = num1 + num2;
            cout << num1 << " + " << num2 << " = " << res << endl;
            break;

        case '-':
            res = num1 - num2;
            cout << num1 << " - " << num2 << " = " << res << endl;
            break;

        case '*':
            res = num1 * num2;
            cout << num1 << " * " << num2 << " = " << res << endl;
            break;

        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero!\n";
            }
            else {
                res = num1 / num2;
                cout << num1 << " / " << num2 << " = " << res << endl;
            }
            break;

        default:
            cout << "Error: Invalid operator! Use only +, -, *, /\n";
            break;
        }

        cout << "\nAgain? (y/n): ";
        cin >> again;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while (again == 'y' || again == 'Y');

    cout << "Thank you for using the calculator!\n";
    cout << "----------------------------------------------------\n";

    return 0;
}