#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;


class Circle {
	int radius;
	char name[12] = "";
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	Circle(const Circle& c);
	void setRadius(int r) { radius = r; }
	void setName(const char* np) {
		strcpy(name, np);
	}
	char* getName() {
		return name;
	}
	double getArea();
};


double Circle::getArea() {
	return 3.14 * radius * radius;
}

Circle::Circle(const Circle& c) {	// �ڱ��ڽ��� ����Ÿ������
	this->radius = c.radius;
	strcpy(this->name, c.name);
}

int main() {

	Circle src(30);
	src.setName("ȫ�浿");
	cout << "������ ���� = " << src.getArea() << endl;
	cout << "������ ���� = " << src.getName() << endl;

	Circle dest(src);
	cout << "�纻�� ���� = " << dest.getArea() << endl;
	cout << "������ ���� = " << dest.getName() << endl;

}
