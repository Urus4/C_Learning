#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "������ ���� radis = " << radius << endl;

}


Circle::Circle(int radius) {
	this->radius = radius;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}


void increase(Circle c) {
	int r = c.getRadius();
	c.setRadius(r + 1);
}

int main() {

	int n = 2;
	int& refn = n;
	int i = 3;

	cout << "n :"<< n << " refn :" << refn <<endl;	//������� ���� n�� �ּ�(&n)�� refn�� �ּ�(&refn) ��� Ȯ���غ��� ���� �ּҸ� ����Ű�� �ִ� ���� �� �� �ִ�.
													//�׷��� Ȯ���غ��� ���ÿ����� refn�� ���� ��������� �����ְ�, n�� �ּҸ� ������ �ִ� ���� �� �� �ִ�?
													//�׷��� �� �����͸� �Ⱦ��� ���۷����� ���� ���ΰ�?
													//������ó�� �������굵 �ȵǰ�, ���� �ٲ� �� ����.
													// �׷��� �־�?


#if 0
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << endl;

#endif
	return 0;
}

