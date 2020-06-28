#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include "person.hpp"

class Professor : public Person {
	public:
		int cur_id;
		int publications;
		static int id;

		/**
		 * Standard constructor
		 * Creates a new Professor with a new id
		 */
		Professor(){
			this->cur_id = ++id;
		}

		/**
		 * Reads the std input from the user in the following order:
		 * 1. name
		 * 2. age
		 * 3. publications
		 */
		virtual void getdata(){
			std::cin >> this->name >> this->age >> this->publications;
		}

		/**
		 * Put the data to std out in the following order:
		 * 1. name
		 * 2. age
		 * 3. publications
		 * 4. id
		 */
		virtual void putdata(){
			std::cout << this->name << " " << this->age << " " << this->publications << " " << this->cur_id << std::endl;
		}

};

int Professor::id = 0;
#endif

