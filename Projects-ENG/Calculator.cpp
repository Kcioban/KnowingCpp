// Including libraries
#include <iostream>
#include <locale>

// Setting up STD namespace
using namespace std;

// Main function
int main() {
    // Variable setup
    float num1, num2, result;
    char operator;

    // Displaying the initial screen
    cout << "Enter the first value: ";
    cin >> num1;
    cout << "Enter the operator (+, -, *, /): ";
    cin >> operator;
    cout << "Enter the second value: ";
    cin >> num2;

    // Setting up Switch Case
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            cout << "Invalid operator" << endl;
            return 1;
    }

    // Displaying the result
    cout << num1 << " " << operator << " " << num2 << " = " << result << endl;

    return 0;
}
