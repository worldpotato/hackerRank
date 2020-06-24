#include "box.hpp"

Box::Box(){
	this->l = 0;
	this->b = 0;
	this->h = 0;
}
Box::Box(int L, int B, int H){
	this->l = L;
	this->b = B;
	this->h = H;
}
Box::Box(Box& B){
	this->l = B.l;
	this->b = B.b;
	this->h = B.h;
}

long long Box::CalculateVolume(){
	long long v = static_cast<long long>(l) * h * b;
	return v;
}

bool Box::operator<(Box& B){
	if(this->l < B.l || (this->l == B.l && this->b < B.b) || (this->l == B.l && this->b == B.b && this->h < B.h))
		return true;
	else
		return false;
}

std::ostream& operator<< (std::ostream& output, Box& B){
	output << B.l << " " << B.b << " " << B.h;
	return output;
}

