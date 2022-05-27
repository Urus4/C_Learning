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
//	cout << "������" << radius << " �� ����" << endl;
//}

Circle::Circle(int r)
{
	radius = r;
	cout << "������" << radius << " �� ����" << endl;
}

Circle::~Circle()
{
	cout << "������" << radius << " �� �Ҹ�" << endl;			
}


double Circle::getArea() {
	return 3.14 * radius * radius;
}


void print_circle(Circle* p);


int main() {

	Circle donut;

	//donut.radius = 1;
	double area = donut.getArea();
	cout << "donut ������" << area << endl;

	Circle* p;
	p = &donut;
	//area = p->getArea();
	//cout << "donut ������" << area << endl;
	print_circle(p);


	Circle pizza(30);
	//pizza.radius = 30;
	area = pizza.getArea ();
	cout << "pizza ������" << area << endl;
}

void print_circle(Circle* p)
{	
	double area;
	area = p->getArea();
	
	cout << "donut ������(print_circle)" << area << endl;

}