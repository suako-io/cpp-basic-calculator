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

void runCalculator()
{
    int firstNumber;
    int secondNumber;
    double result;
    char operation;

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
}

int main()
{
    bool exitApplication = false;

    std::cout << "Basic calculator" << std::endl
        << "================" << std::endl;

    while (exitApplication == false)
    {
        runCalculator();

        // Ask the user if they want to continue
        char userChoice;
        std::cout << std::endl << "Start a new calculation? (y/n) ";
        std::cin >> userChoice;
        std::cout << std::endl;

        // Covering all cases so I don't forget
        if (userChoice == 'y')
        {
            continue;
        }
        else if (userChoice == 'n')
        {
            exitApplication = true;
            std::cout << "Goodbye :D" << std::endl;
        }
        else
        {
            std::cout << "Not a valid choice, starting a  new calculation" << std::endl;
            std::cout << std::endl;
        }
    }

    return 0;
}