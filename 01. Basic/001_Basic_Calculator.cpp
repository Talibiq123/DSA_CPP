#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    char op;

    cout << "This is a program for a Basic Calculator" << endl;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter the second number: ";
    cin >> num2;

    switch (op) {
        case '+':
            cout << "The sum of the two numbers is " << num1 + num2 << endl;
            break;
        case '-':
            cout << "The subtraction of the two numbers is " << num1 - num2 << endl;
            break;
        case '*':
            cout << "The multiplication of the two numbers is " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "The division of the two numbers is " << num1 / num2 << endl;
            } else {
                cout << "Cannot divide by 0" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator. Please use one of +, -, *, /." << endl;
    }

    return 0;
}
