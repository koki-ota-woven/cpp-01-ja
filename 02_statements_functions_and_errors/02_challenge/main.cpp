//
// Created by koki-ota on 23/12/12.
//

#include <iostream>

int factorial(int n);

int main() {
    std::cout << "Factorial of 4 is " << factorial(4) << std::endl;
    return 0;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}