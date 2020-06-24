#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <sstream>
#include "string"

class Student{
	private:
		int age, standard;
		std::string first_name, last_name;

	public:
		int get_age();
		int get_standard();
		std::string get_last_name();
		/** This is the function to get the firest name */
		std::string get_first_name();

		void set_age(int);
		void set_standard(int);
		void set_last_name(std::string);
		void set_first_name(std::string);

		std::string to_string();
};

#endif
