#include "Exp.h"

Exp::Exp() { a = 1; b = 1; };

Exp::Exp(int a) { this->a = a; b = 1; };

Exp::Exp(int a, int b) { this->a = a; this->b = b; };

int Exp::getValue() {
	int cal = 1;

	for (int i = 0; i < b; i++)
	{
		cal = cal * a;
	}

	return cal;
}

int Exp::getBase() {

	return a;
}

int Exp::getExp() {

	return b;
}

bool Exp::equals(Exp a) {

	if ((this->getValue()) == (a.getValue()))
		return true;
	else return false;
}