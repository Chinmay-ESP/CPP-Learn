#include <iostream>
using namespace std;

double sum(double a, double b) {
    return a + b;
}

double sub(double a, double b) {
    return a - b;
}

double mul(double a, double b) {
    return a * b;
}

double dis(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero!\n";
        return 0;
    }
    return a / b;
}

int main() {
    double a, b;
    int choice;

    cout << "Welcome to the Simple Calculator!" << endl;

    do {
        cout << "\nEnter Number A: ";
        cin >> a;
        cout << "Enter Number B: ";
        cin >> b;

        cout << "\nChoose an operation:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "0. Exit\n";
        cout << "Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << " Result: " << sum(a, b) << endl;
                break;
            case 2:
                cout << " Result: " << sub(a, b) << endl;
                break;
            case 3:
                cout << " Result: " << mul(a, b) << endl;
                break;
            case 4:
                cout << " Result: " << dis(a, b) << endl;
                break;
            case 0:
                cout << " Exiting Calculator. Goodbye!\n";
                break;
            default:
                cout << " Invalid option. Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}
