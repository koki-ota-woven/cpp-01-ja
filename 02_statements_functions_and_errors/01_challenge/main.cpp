//
// Created by koki-ota on 23/12/12.
//

#include <iostream>
#include <stdexcept>


int main() {
    int user_input;
    std::cout << "Input some number\n";
    std::cin >> user_input;
    if (user_input > 0) {
       std::cout << "Your input is a positive value" << std::endl;
    } else if (user_input < 0){
        std::cout << "Your input is a negative value" << std::endl;
    } else if (user_input == 0){
        std::cout << "Your input is zero" << std::endl;
    } else {
        std::cout << "Error. Please input an int value" << std::endl;
    }
    return 0;
}