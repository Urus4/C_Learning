#include <iostream>
using namespace std;

class Person {
public:
	int money;								// ���ε�
	void addMoney(int money){
		this->money += money;
	}

	static int sharedMoney;					// ����
	static void addShared(int n) {
		sharedMoney += n;
	}
};

			
int Person::sharedMoney = 10;				// Ŭ���� ���� ������ static �Լ� �ʱ�ȭ

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