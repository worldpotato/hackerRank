/**
 * @author      : worldpotato (worldpotato@$HOSTNAME)
 * @file        : main
 * @created     : Sunday Aug 23, 2020 22:19:32 CEST
 */

#include <iostream>
#include "src/student/include/Student.hpp"

int main()
{
    int numberOfStudents;

    std::cin >> numberOfStudents;
    Student students[numberOfStudents];

    for (int i = 0; i < numberOfStudents; i++) {
        students[i].input();
        std::cout << students[i].calculateTotalScore() << std::endl;
    }
    return 0;
}

