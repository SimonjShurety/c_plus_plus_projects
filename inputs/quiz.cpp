#include <iostream>
using namespace std;

int main() {
    int score = 0;
    char answer;

    cout << "Welcome to the C++ Quiz!\n\n";

    // Question 1
    cout << "1. What is the capital of France?\n";
    cout << "a) Paris\nb) London\nc) Berlin\nd) Madrid\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'a' || answer == 'A') {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Incorrect! The correct answer is Paris.\n";
    }

    // Question 2
    cout << "\n2. Which planet is known as the Red Planet?\n";
    cout << "a) Mars\nb) Jupiter\nc) Venus\nd) Saturn\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'a' || answer == 'A') {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Incorrect! The correct answer is Mars.\n";
    }

    // Question 3
    cout << "\n3. What is the chemical symbol for water?\n";
    cout << "a) H2O\nb) CO2\nc) O2\nd) NaCl\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'a' || answer == 'A') {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Incorrect! The correct answer is H2O.\n";
    }

    // Display final score
    cout << "\nYour final score is: " << score << "/3\n";

    return 0;
}
 