#include <iostream>
#include <cmath>

int main(){


    std::cout << "Enter a mathematical operation is being performed: ";
    std::string operation{};
    std::cin >> operation;

    std::cout << "Enter a first number: ";
    float number_1{};
    std::cin >> number_1;


    std::cout << "Enter a second number: ";
    float number_2{};
    std::cin >> number_2;


    if (operation == "+" || operation == "addition")
    {
        std::cout << number_1 << " + " << number_2 << (number_1 + number_2);
    }    
    else if (operation == "-" || operation == "subtraction")
    {
        std::cout << number_1 << " - " << number_2 << (number_1 - number_2);
    }    
    else if (operation == "*" || operation == "multiplication")
    {
        std::cout << number_1 << " * " << number_2 << (number_1 * number_2);
    }    
    else if (operation == "/" || operation == "division")
    {
        std::cout << number_1 << " / " << number_2 << (number_1 / number_2);
    }    
    else if (operation == "^" || operation == "exponents")
    {
        std::cout << number_1 << " ^ " << number_2 << (pow(number_1, number_2));
    }
    else
    {
        std::cout << "Invalid value.";
    }   
}