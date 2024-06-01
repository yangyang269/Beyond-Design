#include <iostream>

int main() {
    int score = 0;

    std::cout << "Welcome to the Simple Math Quiz Game!" << std::endl;

    // Question 1
    std::cout << "Question 1: What is 5 + 3?" << std::endl;
    std::cout << "1: 6  2: 7  3: 8  4: 9" << std::endl;
    int answer1;
    std::cin >> answer1;
    if (answer1 == 3) {
        std::cout << "Correct!" << std::endl;
        score++;
    } else {
        std::cout << "Incorrect. The correct answer was 8." << std::endl;
    }

    // Question 2
    std::cout << "Question 2: What is 10 - 4?" << std::endl;
    std::cout << "1: 5  2: 6  3: 7  4: 8" << std::endl;
    int answer2;
    std::cin >> answer2;
    if (answer2 == 2) {
        std::cout << "Correct!" << std::endl;
        score++;
    } else {
        std::cout << "Incorrect. The correct answer was 6." << std::endl;
    }

    // Question 3
    std::cout << "Question 3: What is 7 * 2?" << std::endl;
    std::cout << "1: 12  2: 14  3: 16  4: 18" << std::endl;
    int answer3;
    std::cin >> answer3;
    if (answer3 == 2) {
        std::cout << "Correct!" << std::endl;
        score++;
    } else {
        std::cout << "Incorrect. The correct answer was 14." << std::endl;
    }

    // Question 4
    std::cout << "Question 4: What is 18 / 3?" << std::endl;
    std::cout << "1: 4  2: 5  3: 6  4: 7" << std::endl;
    int answer4;
    std::cin >> answer4;
    if (answer4 == 3) {
        std::cout << "Correct!" << std::endl;
        score++;
    } else {
        std::cout << "Incorrect. The correct answer was 6." << std::endl;
    }

    // Question 5
    std::cout << "Question 5: What is 3 + 5?" << std::endl;
    std::cout << "1: 6  2: 7  3: 8  4: 9" << std::endl;
    int answer5;
    std::cin >> answer5;
    if (answer5 == 3) {
        std::cout << "Correct!" << std::endl;
        score++;
    } else {
        std::cout << "Incorrect. The correct answer was 8." << std::endl;
    }

    // Question 6
    std::cout << "Question 6: What is 9 - 4?" << std::endl;
    std::cout << "1: 4  2: 5  3: 6  4: 7" << std::endl;
    int answer6;
    std::cin >> answer6;
    if (answer6 == 2) {
        std::cout << "Correct!" << std::endl;
        score++;
    } else {
        std::cout << "Incorrect. The correct answer was 5." << std::endl;
    }

    // Question 7
    std::cout << "Question 7: What is 10 * 3?" << std::endl;
    std::cout << "1: 20  2: 25  3: 30  4: 35" << std::endl;
    int answer7;
    std::cin >> answer7;
    if (answer7 == 3) {
        std::cout << "Correct!" << std::endl;
        score++;
    } else {
        std::cout << "Incorrect. The correct answer was 30." << std::endl;
    }

    // Question 8
    std::cout << "Question 8: What is 16 / 4?" << std::endl;
    std::cout << "1: 4  2: 3  3: 2  4: 5" << std::endl;
    int answer8;
    std::cin >> answer8;
    if (answer8 == 1) {
        std::cout << "Correct!" << std::endl;
        score++;
    } else {
        std::cout << "Incorrect. The correct answer was 4." << std::endl;
    }

    // Question 9
    std::cout << "Question 9: What is 12 + 8?" << std::endl;
    std::cout << "1: 18  2: 20  3: 24  4: 21" << std::endl;
    int answer9;
    std::cin >> answer9;
    if (answer9 == 2) {
        std::cout << "Correct!" << std::endl;
        score++;
    } else {
        std::cout << "Incorrect. The correct answer was 20." << std::endl;
    }

    // Question 10
    std::cout << "Question 10: What is 25 - 7?" << std::endl;
    std::cout << "1: 16  2: 17  3: 18  4: 19" << std::endl;
    int answer10;
    std::cin >> answer10;
    if (answer10 == 3) {
        std::cout << "Correct!" << std::endl;
        score++;
    } else {
        std::cout << "Incorrect. The correct answer was 18." << std::endl;
    }

    std::cout << "You got " << score << " out of 10 questions right!" << std::endl;
    std::cout << "Thank you for playing!" << std::endl;

    return 0;
}
