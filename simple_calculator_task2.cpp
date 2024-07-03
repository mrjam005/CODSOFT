#include <bits/stdc++.h>

using namespace std;

void printMenu() {
    cout << "\nSimple Calculator\n";
    cout << "=================\n";
    cout << "Operations:\n";
    cout << " + : Addition\n";
    cout << " - : Subtraction\n";
    cout << " * : Multiplication\n";
    cout << " / : Division\n";
    cout << " q : Quit\n";
    cout << "=================\n";
}

int main() {
    double num1, num2;
    char op;
    bool running = true;

    while (running) {
        system("clear"); // Use "cls" on Windows
        printMenu();

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        cout << "Enter an operator (+, -, *, /) or 'q' to quit: ";
        cin >> op;

        cout << fixed << setprecision(2); // Set precision for floating point output

        switch (op) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0) {
                    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                } else {
                    cout << "Error! Division by zero." << endl;
                }
                break;
            case 'q':
                running = false;
                break;
            default:
                cout << "Error! Invalid operator." << endl;
        }

        if (running) {
            cout << "\nPress Enter to continue...";
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the newline left in the input buffer
            cin.get(); // Wait for user to press Enter
        }
    }

    cout << "Thank you for using the calculator.\n";
    return 0;
}
