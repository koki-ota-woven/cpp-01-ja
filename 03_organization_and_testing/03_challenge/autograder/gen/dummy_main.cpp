//
// Created by koki-ota on 23/12/16.
//

#include "math_operations.h"
#include <iostream>

int dummy_main(){
    float num1, num2;
    char operation;
    float output {};
    std::cout << "Enter a calculation: ";
    std::cin >> num1 >> operation >> num2;
    if (operation == '+') {
        output =  MathOps::addition(num1, num2);
    } else if (operation == '-') {
        output = MathOps::subtraction(num1, num2);
    } else if (operation == '*') {
        output = MathOps::multiplication(num1, num2);
    } else if (operation == '/') {
        output = MathOps::division(num1, num2);
    } else {
        std::cout << "Invalid Operand. Please input +, -, *, / "  << std::endl;
        return 1;
    }

    std::cout << "Result: " << output << std::endl;
    return 0;
}
