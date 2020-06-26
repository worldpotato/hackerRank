#include "BadLengthException.hpp"

BadLengthException::BadLengthException(int n){
	this->n = n;
}

int BadLengthException::what(){
	return n;
}

