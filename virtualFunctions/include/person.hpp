#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
#include <iostream>

class Person{
public:
	int age;
	std::string name;

	/**
	 * Reads the std input from the user in the following order:
	 * 1. name
	 * 2. age
	 */
	virtual void getdata(){
		std::cin >> this->name >> this->age;
	}

	/**
	 * Put the data to std out in the following order:
	 * 1. name
	 * 2. age
	 */
	virtual void putdata(){
		std::cout << this->name << this->age << std::endl;
	}
};

#endif
