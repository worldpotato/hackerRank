#ifndef BAD_LENGTH_EXCEPTION_HPP
#define BAD_LENGTH_EXCEPTION_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <exception>

class BadLengthException : public std::exception {
private:
	int n;

public:
	BadLengthException(int);
	int what();
};

#endif
