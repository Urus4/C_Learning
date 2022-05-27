#include <iostream>
#include "PrivateAccessError.h"
using namespace std;

int main() {
	PrivateAccessError objA;
	PrivateAccessError objB(100);
	
	//objA. a = 10;					// 변수a는 private로 보호되고 있으므로 변경 불가
	objB.setA(10);					// 대신 setA로 접근하여 변경해줌
	objB.b = 20;
	objB.f();					
	objB.g();
}
