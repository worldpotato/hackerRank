/**
 * @author      : worldpotato
 * @file        : Student
 * @created     : Sunday Aug 23, 2020 21:56:03 CEST
 */

#ifndef STUDENT_HPP

#define STUDENT_HPP

#include <iostream>

constexpr int numberOfScores = 5;

class Student {


public:
    Student();
    auto input() -> void;
    auto calculateTotalScore() -> int;
    virtual ~Student();

private:
    int scores[numberOfScores];
    /* private data */
};

#endif /* end of include guard STUDENT_HPP */

