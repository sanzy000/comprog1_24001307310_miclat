#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    int choice;

    // Prompt the user for two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Display the numbers
    cout << "You entered: " << num1 << " and " << num2 << endl;

    // Prompt the user for the operation choice
    cout << "Select an operation:" << endl;
    cout << "Press 1 for Addition" << endl;
    cout << "Press 2 for Subtraction" << endl;
    cout << "Press 3 for Multiplication" << endl;
    cout << "Press 4 for Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // Check if the choice is valid
    if (choice < 1 || choice > 4) {
        cout << "Invalid choice! Please run the program again." << endl;
        return 1; // Exit the program with an error code
    }

    // Perform the operation based on user choice
    switch (choice) {
        case 1:
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case 4:
            // Check for division by zero
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0; // Exit the program successfully
}