#include <iostream>

int main() {
    // Step 1: Declare an array to store 7 integers
    const int numElements = 7;
    int numbers[numElements];

    // Step 2: Ask the user to input 7 integers
    std::cout << "Enter 7 integers:\n";
    for (int i = 0; i < numElements; ++i) {
        std::cout << "Number " << i + 1 << ": ";
        std::cin >> numbers[i];
    }

    // Step 3: Count how many of the integers are multiples of 5
    int countMultiplesOfFive = 0;
    for (int i = 0; i < numElements; ++i) {
        if (numbers[i] % 5 == 0) {
            ++countMultiplesOfFive;
        }
    }

    // Step 4: Print the result
    std::cout << "\nNumber of integers that are multiples of five: " << countMultiplesOfFive << "\n";

    return 0;
}
