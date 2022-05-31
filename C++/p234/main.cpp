#include <iostream>
using namespace std;


//call by reference
//void swap(int &a, int &b) {
//	int tmp;
//	tmp = a;
//	a = b;
//	b = tmp;
//	cout << "a :" << a << " b :" << b << endl;
//}


//call by address
//void swap(int *a, int *b) {
//	int tmp;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//	cout << "a :" << *a << " b :" << *b << endl;
//}

//call by value
void swap(int a, int b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	cout << "a :" << a << " b :" << b << endl;
}


int main() {
	int m = 2, n = 9;
	swap(m, n);
	cout << "m :" << m << " n :" << n << endl;
}