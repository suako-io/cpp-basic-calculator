#include <iostream>

double calculate(char operation, int firstNumber, int secondNumber)
{
    double result = 0;

    switch (operation)
    {
        case '+':
            result = firstNumber + secondNumber;
            break;

        case '-':
            result = firstNumber - secondNumber;
            break;

        case '/':
            result = firstNumber / secondNumber;
            break;

        case '*':
            result = firstNumber * secondNumber;
            break;
        
        default:
            break;
    }

    return result;
}

int main()
{
    int firstNumber;
    int secondNumber;
    double result;
    char operation;

    std::cout << "Basic calculator" << std::endl 
        << "================" << std::endl;

    // Take first number input
    std::cout << "Input first number: ";
    std::cin >> firstNumber;

    // Take second number input
    std::cout << "Input second number: ";
    std::cin >> secondNumber;

    // Take operation input
    std::cout << "Select operation (+, -, /, *): ";
    std::cin >> operation;
    std::cout << std::endl;

    // Calculate the result and return it
    result = calculate(operation, firstNumber, secondNumber);
    std::cout << "Answer is: " << result << std::endl;

    return 0;
}