#ifndef EXP_H
#define EXP_H

class Exp {
public:
	int a;
	int b;

	Exp();
	Exp(int a);
	Exp(int a, int b);

	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp a);
};


#endif EXP_H
