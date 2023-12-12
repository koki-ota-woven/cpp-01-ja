//
// Created by koki-ota on 23/12/12.
//

#include <iostream>

int main() {
    float num1;
    float num2;
    float num3;
    float average;

    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    average = (num1 + num2 + num3) / 3;

    std::cout << "Average is: " << average << std::endl;

    return 0;
}