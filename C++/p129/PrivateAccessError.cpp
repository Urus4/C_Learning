#include "PrivateAccessError.h"


void PrivateAccessError::setA(int a)
{
	this->a = a; 				// this 는 본인 클래스에 속한 변수를 가리키는 
}

int PrivateAccessError::getA()
{
	return a;
}

PrivateAccessError::PrivateAccessError() {
	a = 1;
	b = 1;
}


PrivateAccessError::PrivateAccessError(int x) {
	a = x;
	b = x;
}

void PrivateAccessError::f() {
	a = 5;
	b = 5;
}

void PrivateAccessError::g() {
	a = 6;
	b = 6;
}