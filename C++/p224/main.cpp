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
	cout << "생성자 실행 radis = " << radius << endl;

}


Circle::Circle(int radius) {
	this->radius = radius;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}


void increase(Circle c) {
	int r = c.getRadius();
	c.setRadius(r + 1);
}

int main() {

	int n = 2;
	int& refn = n;
	int i = 3;

	cout << "n :"<< n << " refn :" << refn <<endl;	//디버깅을 통해 n의 주소(&n)와 refn의 주소(&refn) 모두 확인해보면 같은 주소를 가리키고 있는 것을 볼 수 있다.
													//그런데 확인해보면 스택영역에 refn에 대한 저장공간이 잡혀있고, n의 주소를 가지고 있는 것을 볼 수 있다?
													//그러면 왜 포인터를 안쓰고 레퍼런스를 쓰는 것인가?
													//포인터처럼 정수연산도 안되고, 값도 바꿀 수 없다.
													// 그런데 왜씀?


#if 0
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << endl;

#endif
	return 0;
}

