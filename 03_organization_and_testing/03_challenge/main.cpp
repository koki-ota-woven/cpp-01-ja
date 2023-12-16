//
// Created by koki-ota on 23/12/16.
//

#include "math_operations.h"
#include <iostream>
#include <string.h>

int main(){
    float num1;
    std::string operation;
    float num2;
    std::cout << "Enter a calculation: ";
    std::cin >> num1 >> operation >> num2;
    if (operation == "+") {
        std::cout << "Result: " << MathOps::addition(num1, num2) << std::endl;
    } else if (operation == "-") {
        std::cout << "Result: " << MathOps::subtraction(num1, num2) << std::endl;
    } else if (operation == "*") {
        std::cout << "Result: " << MathOps::multiplication(num1, num2) << std::endl;
    } else if (operation == "/") {
        std::cout << "Result: " << MathOps::division(num1, num2) << std::endl;
    } else {
        std::cout << "Invalid Operand. Please input +, -, *, / "  << std::endl;
    }
    return 0;
}
