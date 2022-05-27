// #pragma once --> 이게 무엇이냐?? 헤더파일 중복 방지 , 이건 VS에서만 사용하는 것

#ifndef _PrivateAccessError_H_   // 이 방식을 사용하기
#define _PrivateAccessError_H_

class PrivateAccessError {
private:
	int a;
	//void f();
	//PrivateAccessError();
public:
	void setA(int);				// private에 속해있는 변수 a의 값을 바꿔주기 위한 함수 
	int getA();					// private에 속해있는 변수 a의 값을 가져오기 위한 함수

	void f();
	PrivateAccessError();


	int b;
	PrivateAccessError(int x);
	void g();
};





#endif