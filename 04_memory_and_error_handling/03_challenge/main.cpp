//
// Created by koki-ota on 23/12/27.
//

#include <iostream>
#include <vector>

// コードを入力してください
std::vector<int> double_elements(const std::vector<int>& numbers){
    std::vector<int> new_numbers;
    for (int i = 0; i < numbers.size(); i++) {
        new_numbers.push_back(numbers[i] * 2);
    }
    return new_numbers;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // コードを入力してください
    std::vector<int> doubled_numbers = double_elements(numbers);
    for (int i = 0; i < numbers.size(); i++) {
        std::cout << "numbers: " << numbers[i] << std::endl;
        std::cout << "doubled_number: " << doubled_numbers[i] << std::endl;
    }

    return 0;
}