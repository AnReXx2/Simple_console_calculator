// Calculator.cpp - Professional Console Calculator with Error Handling
// Author: Anri - C++ Developer
// GitHub: https://github.com/AnReXx2
// Version: 2.0 | Date: 2026-01-28
// Description: Advanced console calculator with input validation, loop, and division-by-zero protection

#include <iostream>
#include <limits>
using namespace std;

int main() {
    char op, again;
    double num1, num2, res;

    cout << "===================== PROFESSIONAL CALCULATOR v2.0 =====================\n";
    cout << "Author: Anri | C++ Beginner-to-Intermediate Project | Error Handling Included\n\n";

    do {
        cout << "Enter operator (+, -, *, /): ";
        cin >> op;

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        // 🔥 Input Validation
        if (cin.fail()) {
            cout << "❌ Invalid input! Please enter NUMBERS only.\n";
            cin.clear();  // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clear input buffer
            continue;     // Skip to next iteration
        }

        // 💡 Switch Statement with Professional Output
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
                cout << "\nError: Division by ZERO is not allowed!\n";
            }
            else {
                res = num1 / num2;
                cout << num1 << " / " << num2 << " = " << res << endl;
            }
            break;
        default:
            cout << "\nError: Invalid operator! Use ONLY: +, -, *, /\n";
            break;
        }

        cout << "\nCalculate again? (y/n): ";
        cin >> again;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clean buffer for next input

    } while (again == 'y' || again == 'Y');

    cout << "\nThank you for using Professional Calculator v2.0!\n";
    cout << "============================================================================\n";
    return 0;
}