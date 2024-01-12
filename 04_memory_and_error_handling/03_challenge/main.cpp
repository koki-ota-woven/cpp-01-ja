//
// Created by koki-ota on 23/12/27.
//

#include <iostream>
#include <vector>
#include <string>

// コードを入力してください
std::vector<int> double_elements(const std::vector<int>& numbers){
    std::vector<int> new_numbers;
    for (int i: numbers){
        new_numbers.push_back(i * 2);
    }
    return new_numbers;
}

void print_numbers(std::string title, const std::vector<int>& array){
    for (int element: array){
        std::cout << title << ": " << element << std::endl;
    }
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // コードを入力してください
    std::vector<int> doubled_numbers = double_elements(numbers);

    print_numbers("numbers", numbers);
    print_numbers("doubled_numbers", doubled_numbers);

    return 0;
}