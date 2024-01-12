//
// Created by koki-ota on 23/12/27.
//

#include <iostream>
#include <stdexcept>
#include <vector>

// コードを入力してください
int element_at(const std::vector<int>& numbers, int index){
    if (index < numbers.size()) return numbers[index];
    throw std::out_of_range("Please input a valid index");
}

int main() {
    std::vector<int> numbers = {1, 3, 5, 7, 9};
    int input_index;
    std::cout << "Input index \n";
    std::cin >> input_index;

    // コードを入力してください
    try {
        int element = element_at(numbers, input_index);
        std::cout << "The element at the index is " << element << std::endl;
    } catch(const std::out_of_range& e){
        std::cout << e.what() << std::endl;
    }

    return 0;
}