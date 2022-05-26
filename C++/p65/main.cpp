#include<iostream>

using namespace std;

int main() {
	cout << "주소를 입력하세요>>";

	char address[100];
	cin.getline(address, 100, '\n');

	cout << "주소는" << address << "입니다\n";







#if 0 // 조건부 컴파일
	cout << "이름을 입력하세요>>";

	char name[11];
	cin >> name;
	
	cout << "이름은" << name << "입니다.\n";



	int width;
	int height;
	int area;

	cout << "너비와 높이를 입력하세요>>";
	cin >> width >> height;

	area = width * height;
	cout << "면적은" << area << "\n"
#endif

	return 0;
}