#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "person.hpp"

#define NUMBER_OF_MARKS 6

class Student: public Person {
	public:
		/**
		 * Standard constructor
		 * Creates a new student with a new id
		 */
		Student(){
			this->cur_id = ++id;
		}

		int marks[NUMBER_OF_MARKS];
		int cur_id;
		static int id;

		/**
		 * Reads the std input from the user in the following order:
		 * 1. name
		 * 2. age
		 * 3. marks
		 */
		virtual void getdata(){
			std::cin >> this->name >> this->age;
			for ( int mark_number = 0; mark_number < NUMBER_OF_MARKS; mark_number++){
				std::cin >> marks[mark_number];
			}
		}

		/**
		 * Put the data to std out in the following order:
		 * 1. name
		 * 2. age
		 * 3. sum of marks
		 * 4. id
		 */
		virtual void putdata(){
			int sumOfMarks = 0;
			for ( int mark_number = 0; mark_number < NUMBER_OF_MARKS; mark_number++){
				sumOfMarks = sumOfMarks + marks[mark_number];
			}
			std::cout << this->name << " " << this->age << " " << sumOfMarks << " " << this->cur_id << std::endl;
		}
};

int Student::id = 0;

#endif
