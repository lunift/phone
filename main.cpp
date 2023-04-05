#include <iostream>
int main() {
    std::cout << "====================================================\n";
    std::cout << "/===\\  |     |     /===\\ |   | /====\\ |\\    | |==== \n";
    std::cout << "|      |     |     |===/ |   | |    | | \\   | |\n";
    std::cout << "|    ===== =====   |     |===| |    | |  \\  | |====\n";
    std::cout << "|      |     |     |     |   | |    | |   \\ | |\n";
    std::cout << "\\===/  |     |     |     |   | \\====/ |    \\| |====\n";
    std::cout << "====================================================\n";
    // List apps
    std::cout << "Apps: \n";
    std::cout << "1. Calculator\n";
    std::cout << "2. Text Editor\n";
    std::cout << "3. Terminal\n";
    std::cout << "4. Settings\n";
    std::cout << "5. About\n";
    std::cout << "6. Exit\n";
    std::cout << "====================================================\n";
    std::cout << "Enter the number of the app you want to open: ";
    int app;
    std::cin >> app;
    if (app == 1) {
        std::cout << "Calculator\n";
    } else if (app == 2) {
        std::cout << "Text Editor\n";
    } else if (app == 3) {
        std::cout << "Terminal\n";
    } else if (app == 4) {
        std::cout << "Settings\n";
    } else if (app == 5) {
        std::cout << "About\n";
    } else if (app == 6) {
        std::cout << "Exit\n";
    } else {
        std::cout << "Invalid input\n";
    }

    if (app == 1) {
        std::cout << "Enter the first number: ";
        double num1;
        std::cin >> num1;
        std::cout << "Enter the second number: ";
        double num2;
        std::cin >> num2;
        std::cout << "Enter the operator: ";
        char op;
        std::cin >> op;
        if (op == '+') {
            std::cout << num1 + num2 << std::endl;
        } else if (op == '-') {
            std::cout << num1 - num2 << std::endl;
        } else if (op == '*') {
            std::cout << num1 * num2 << std::endl;
        } else if (op == '/') {
            std::cout << num1 / num2 << std::endl;
        } else {
            std::cout << "Invalid operator\n";
        }
    }
    if (app == 3) {
        std::cout << "Enter the command: ";
        std::string command;
        std::cin >> command;
        if (command == "help") {
            std::cout << "help - Shows this message\n";
            std::cout << "exit - Exits the terminal\n";
        } else if (command == "exit") {
            std::cout << "Exiting terminal...\n";
        } else {
            std::cout << "Invalid command\n";
        }
    }
    return 0;
}