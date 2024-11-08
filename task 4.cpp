#include <iostream>

int main() {
    // Step 1: Declare an array to store 10 numbers
    const int numElements = 10;
    int numbers[numElements];

    // Step 2: Input 10 numbers from the user
    std::cout << "Enter 10 numbers:\n";
    for (int i = 0; i < numElements; ++i) {
        std::cout << "Number " << i + 1 << ": ";
        std::cin >> numbers[i];
    }

    // Step 3: Print the array in reverse order
    std::cout << "\nArray in reverse order:\n";
    for (int i = numElements - 1; i >= 0; --i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
