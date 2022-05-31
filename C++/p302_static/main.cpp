#include <iostream>
using namespace std;

class Person {
public:
	int money;								// 개인돈
	void addMoney(int money){
		this->money += money;
	}

	static int sharedMoney;					// 공금
	static void addShared(int n) {
		sharedMoney += n;
	}
};

			
int Person::sharedMoney = 10;				// 클래스 내에 생성된 static 함수 초기화

int main() {
	Person::addShared(50);
	cout << Person::sharedMoney << endl;

	Person han;
	han.money = 100;
	han.sharedMoney = 200;
	Person::sharedMoney=300;
	Person::addShared(100);


	cout << han.money << Person::sharedMoney << endl;

}