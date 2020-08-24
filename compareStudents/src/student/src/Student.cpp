/**
 * @author      : worldpotato
 * @file        : Student
 * @created     : Sunday Aug 23, 2020 21:55:22 CEST
 */

#include "../include/Student.hpp"

Student::Student()
{
}

int Student::calculateTotalScore()
{
    int sum = 0;
    for (int i = 0; i < numberOfScores; i++) {
        sum += scores[i];
    }
    return sum;
}

void Student::input()
{
    for (int i = 0; i < numberOfScores; i++) {
        std::cin >> scores[i];
    }
}

Student::~Student()
{
}

