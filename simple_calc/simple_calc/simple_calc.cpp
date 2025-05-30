#include <iostream>

using namespace std;

void showMenu() {
    cout << "\n--- SIMPLE CALCULATOR ---\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "5. Exit\n";
    cout << "Choose an option: ";
}

int main() {
    int choice;
    double num1, num2;

    while (true) {
        showMenu();
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting calculator. Goodbye!\n";
            break;
        }

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        switch (choice) {
        case 1:
            cout << "Result: " << (num1 + num2) << endl;
            break;
        case 2:
            cout << "Result: " << (num1 - num2) << endl;
            break;
        case 3:
            cout << "Result: " << (num1 * num2) << endl;
            break;
        case 4:
            if (num2 != 0)
                cout << "Result: " << (num1 / num2) << endl;
            else
                cout << "Error: Cannot divide by zero!\n";
            break;
        default:
            cout << "Invalid option. Try again.\n";
        }
    }

    return 0;
}