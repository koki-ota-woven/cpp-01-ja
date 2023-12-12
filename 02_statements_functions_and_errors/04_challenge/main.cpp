//
// Created by koki-ota on 23/12/12.
//

#include <iostream>

int main() {
    int num1;
    int num2;
    int max;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    if (num1 > num2) {
        max = num1;
    } else {
        max = num2;
    }

    std::cout << "Maximum is: " << max << std::endl;

    return 0;
}