#include <iostream>
#include "PrivateAccessError.h"
using namespace std;

int main() {
	PrivateAccessError objA;
	PrivateAccessError objB(100);
	
	//objA. a = 10;					// ����a�� private�� ��ȣ�ǰ� �����Ƿ� ���� �Ұ�
	objB.setA(10);					// ��� setA�� �����Ͽ� ��������
	objB.b = 20;
	objB.f();					
	objB.g();
}
