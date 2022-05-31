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

Circle::Circle(const Circle& c) {	// 자기자신을 참조타입으로
	this->radius = c.radius;
	strcpy(this->name, c.name);
}

int main() {

	Circle src(30);
	src.setName("홍길동");
	cout << "원본의 면적 = " << src.getArea() << endl;
	cout << "원본의 면적 = " << src.getName() << endl;

	Circle dest(src);
	cout << "사본의 면적 = " << dest.getArea() << endl;
	cout << "원본의 면적 = " << dest.getName() << endl;

}
