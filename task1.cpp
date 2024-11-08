#include <iostream>

int main() {
    int size;
    std::cout << "Enter the size of an array: ";
    std::cin >> size;

    int* scores = new int[size];


    for (int i = 0; i < size; ++i) {
        std::cout << "enter value to store in an array " << i + 1 << ": ";
        std::cin >> scores[i];
    }


    for (int i = 0; i < size; ++i) {
        std::cout << scores[i] << "\n";
    }

    delete[] scores;

    return 0;
}
