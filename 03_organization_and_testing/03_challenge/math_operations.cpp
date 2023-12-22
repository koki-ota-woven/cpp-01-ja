//
// Created by koki-ota on 23/12/16.
//
#include "math_operations.h"
#include <stdexcept>

namespace MathOps {
    float addition(float num1, float num2) {
        return num1 + num2;
    }

    float subtraction(float num1, float num2) {
        return num1 - num2;
    }

    float multiplication(float num1, float num2) {
        return num1 * num2;
    }

    float division(float num1, float num2) {
        if (num2 == 0){
            throw std::runtime_error("Division by zero");
        }
        return num1 / num2;
    }
}
