#include<iostream>

using namespace std;

int main() {
	cout << "�ּҸ� �Է��ϼ���>>";

	char address[100];
	cin.getline(address, 100, '\n');

	cout << "�ּҴ�" << address << "�Դϴ�\n";







#if 0 // ���Ǻ� ������
	cout << "�̸��� �Է��ϼ���>>";

	char name[11];
	cin >> name;
	
	cout << "�̸���" << name << "�Դϴ�.\n";



	int width;
	int height;
	int area;

	cout << "�ʺ�� ���̸� �Է��ϼ���>>";
	cin >> width >> height;

	area = width * height;
	cout << "������" << area << "\n"
#endif

	return 0;
}