#include <iostream>

int main() {
    // Step 1: Declare an array to store the hours for 10 students
    const int numStudents = 10;
    int hours[numStudents];

    // Step 2: Ask the user to input the number of hours for each student
    std::cout << "Enter the number of hours studied by each of the 10 students:\n";
    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Student " << i + 1 << ": ";
        std::cin >> hours[i];
    }

    // Step 3: Print the number of hours for each student
    std::cout << "\nHours studied by each student:\n";
    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Student " << i + 1 << ": " << hours[i] << " hours\n";
    }

    // Step 4: Find the student who studied the most
    int maxHours = hours[0];
    int studentIndex = 0;
    for (int i = 1; i < numStudents; ++i) {
        if (hours[i] > maxHours) {
            maxHours = hours[i];
            studentIndex = i;
        }
    }

    // Step 5: Print the result
    std::cout << "\nThe student who studied the most is Student " << studentIndex + 1;
    std::cout << " with " << maxHours << " hours.\n";

    return 0;
}
