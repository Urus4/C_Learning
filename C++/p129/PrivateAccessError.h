// #pragma once --> �̰� �����̳�?? ������� �ߺ� ���� , �̰� VS������ ����ϴ� ��

#ifndef _PrivateAccessError_H_   // �� ����� ����ϱ�
#define _PrivateAccessError_H_

class PrivateAccessError {
private:
	int a;
	//void f();
	//PrivateAccessError();
public:
	void setA(int);				// private�� �����ִ� ���� a�� ���� �ٲ��ֱ� ���� �Լ� 
	int getA();					// private�� �����ִ� ���� a�� ���� �������� ���� �Լ�

	void f();
	PrivateAccessError();


	int b;
	PrivateAccessError(int x);
	void g();
};





#endif