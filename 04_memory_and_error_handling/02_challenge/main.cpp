//
// Created by koki-ota on 23/12/27.
//

#include <iostream>

// コードを入力してください
void swap_int(int* a, int* b){
   int tmp = *a;
   *a = *b;
   *b = tmp;
}

int main() {
    int a = 10;
    int b = 20;

    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    // コードを入力してください
    swap_int(&a, &b);
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    return 0;
}
