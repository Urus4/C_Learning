#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle() : Circle(1) {}
//{
//	radius = 1;
//	cout << "반지름" << radius << " 원 생성" << endl;
//}

Circle::Circle(int r)
{
	radius = r;
	cout << "반지름" << radius << " 원 생성" << endl;
}

Circle::~Circle()
{
	cout << "반지름" << radius << " 원 소멸" << endl;			
}


double Circle::getArea() {
	return 3.14 * radius * radius;
}


void print_circle(Circle* p);


int main() {

	Circle donut;

	//donut.radius = 1;
	double area = donut.getArea();
	cout << "donut 면적은" << area << endl;

	Circle* p;
	p = &donut;
	//area = p->getArea();
	//cout << "donut 면적은" << area << endl;
	print_circle(p);


	Circle pizza(30);
	//pizza.radius = 30;
	area = pizza.getArea ();
	cout << "pizza 면적은" << area << endl;
}

void print_circle(Circle* p)
{	
	double area;
	area = p->getArea();
	
	cout << "donut 면적은(print_circle)" << area << endl;

}