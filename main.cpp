#include <iostream>

int main() {
    double a, b;
    char op;

    std::cout << "Enter expression (e.g. 4 + 5): ";
    std::cin >> a >> op >> b;

    switch (op) {
        case '+': std::cout << "Result: " << a + b << std::endl; break;
        case '-': std::cout << "Result: " << a - b << std::endl; break;
        case '*': std::cout << "Result: " << a * b << std::endl; break;
        case '/': 
            if (b != 0) 
                std::cout << "Result: " << a / b << std::endl;
            else 
                std::cout << "Division by zero error!" << std::endl;
            break;
        default: std::cout << "Unknown operator!" << std::endl;
    }

    return 0;
}

