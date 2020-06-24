#include "student.hpp"

int Student::get_age(){
	return age;
}
int Student::get_standard(){
	return standard;
}
std::string Student::get_last_name(){
	return last_name;
}
std::string Student::get_first_name(){
	return first_name;
}

void Student::set_age(int _age){
	age = _age;
}
void Student::set_standard(int _standard){
	standard = _standard;
}
void Student::set_last_name(std::string _last_name){
	last_name = _last_name;
}
void Student::set_first_name(std::string _first_name){
	first_name = _first_name;
}

std::string Student::to_string(){
	return std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard);
}

