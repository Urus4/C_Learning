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
	cout << str1.size() << endl;				// 디폴트로 널로 초기화가 되므로 = 0 반환
	cout << str1.capacity() << endl;			// 디폴트로 할당된 메모리크기 =  15바이트

	string str2 = "1234567890123456";
	cout << str2.size() << endl;				// 문자열의 길이 = 16 반환
	cout << str2.capacity() << endl;			// 디폴트로 15바이트 씩 할당되므로, 16바이트가 넘어가게 되면 그 두배인 30바이트가 할당된다. ---> 근데 31바이트??
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
		cout << "Circle" << i << "의 면적은" << circleArray[i].getArea() << endl;

	Circle* p;
	p = circleArray;
	circle_print(p);

	//Circle* p;
	//p = circleArray;
	//for (int i = 0; i < 3; i++) {
	//	cout << "Circle" << i << "의 면적은" << p->getArea() << endl;
	//	p++;
	//}
#endif
}

void circle_print(Circle* p) {

	for (int i = 0; i < 3; i++) {
		cout << "Circle" << i << "의 면적은" << p->getArea() << endl;
		p++;
	}

}
