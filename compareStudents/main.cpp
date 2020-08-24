/**
 * @author      : worldpotato
 * @file        : main
 * @created     : Sunday Aug 23, 2020 22:19:32 CEST
 */

#include <iostream>
#include "Student.hpp"

int main()
{
    int numberOfStudents;

    std::cin >> numberOfStudents;
    Student* students = new Student[numberOfStudents];

    for (int i = 0; i < numberOfStudents; i++) {
        students[i].input();
        std::cout << students[i].calculateTotalScore() << std::endl;
    }

    delete[] students;
    return 0;
}

