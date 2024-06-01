#include <iostream>

int main() {
    // Declare variables
    int feet = 30;           // Number of feet to convert
    int centimetersPerFoot = 30;  // Number of centimeters in one foot

    // Calculate the number of centimeters in 30 feet
    int centimeters = feet * centimetersPerFoot;

    // Print the result
    std::cout << feet << " feet is roughly equal to " << centimeters << " centimeters." << std::endl;
}
