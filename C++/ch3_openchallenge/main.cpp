/* �Ǽ��� ���� ǥ���� Ŭ���� Exp�� �ۼ��϶�. Exp�� �̿��ϴ� main() �Լ��� ���� ����� ������ ����.
	Ŭ���� Exp�� Exp.h ��� ���ϰ� Exp.cpp ���Ϸ� �и��Ͽ� �ۼ��϶�.*/


#include <iostream>
using namespace std;

#include "Exp.h"


int main() {
	Exp a(3, 2);	//3^2 = 9. ���̽� 3, ���� 2
	Exp b(9);
	Exp c;

	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
	cout << "a�� ���̽� " << a.getBase() << ',' << "����" << a.getExp() << endl;

	if (a.equals(b))
		cout << "same" << endl;
	else
		cout << "not same" << endl;

}