//
// Created by koki-ota on 23/12/26.
//

#include <iostream>

int main() {
    int x = 42;
    std::cout << &x << std::endl;

    int* p = &x;

    std::cout << *p << std::endl;

    return 0;
}
