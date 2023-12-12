//
// Created by koki-ota on 23/12/12.
//

#include <iostream>

int power(int base, int exponent = 2){
    int result = 1;
    while (exponent > 0){
        result *= base;
        exponent--;
    }
    return result;
};

int main(){
    std::cout << power(3, 4) << std::endl;
    return 0;
}