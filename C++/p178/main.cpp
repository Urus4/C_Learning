#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};


double Circle::getArea() {
	return 3.14 * radius * radius;
}

void circle_print(Circle* p);

int main() {

	string str1;
	cout << str1.size() << endl;				// ����Ʈ�� �η� �ʱ�ȭ�� �ǹǷ� = 0 ��ȯ
	cout << str1.capacity() << endl;			// ����Ʈ�� �Ҵ�� �޸�ũ�� =  15����Ʈ

	string str2 = "1234567890123456";
	cout << str2.size() << endl;				// ���ڿ��� ���� = 16 ��ȯ
	cout << str2.capacity() << endl;			// ����Ʈ�� 15����Ʈ �� �Ҵ�ǹǷ�, 16����Ʈ�� �Ѿ�� �Ǹ� �� �ι��� 30����Ʈ�� �Ҵ�ȴ�. ---> �ٵ� 31����Ʈ??
	cout << str2.find("8") << endl;				// 


#if 0
	Circle* p, * q;
	p = new Circle;
	q = new Circle(30);
	cout << p->getArea() << endl << q->getArea() << endl;

	delete p;
	delete q;

	


	Circle circleArray[3] = { Circle(10), Circle(20), Circle(30) };

	//circleArray[0].setRadius(10);
	//circleArray[1].setRadius(20);
	//circleArray[2].setRadius(30);

	for (int i = 0; i < 3; i++)
		cout << "Circle" << i << "�� ������" << circleArray[i].getArea() << endl;

	Circle* p;
	p = circleArray;
	circle_print(p);

	//Circle* p;
	//p = circleArray;
	//for (int i = 0; i < 3; i++) {
	//	cout << "Circle" << i << "�� ������" << p->getArea() << endl;
	//	p++;
	//}
#endif
}

void circle_print(Circle* p) {

	for (int i = 0; i < 3; i++) {
		cout << "Circle" << i << "�� ������" << p->getArea() << endl;
		p++;
	}

}
