#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
	//const char* firstFile = "c:\\temp\\student.txt";
	//const char* secondFile = "c:\\windows\\system.ini";

	fstream fout(argv[1], ios::out | ios::trunc);   // ���� ���� ���� ���� ( ios::out --> ������ , app --> �ڵ����� ���� �����Ͱ� ���� ������ �Ű���)
	if (!fout) {									// ���� ���� �˻�          ios::trunc --> ������ �� ��, ������ �����ϸ� ������ ������ ��� ���� ũ�⸦ 0���� �����)
		cout << argv[1] << " ���� ����";
		return 0;
	}

	fstream fin(argv[2], ios::in | ios::binary);	// �б� ���� ���� ����, ���̳ʸ��� �о�;��� ���๮�ڸ� �о�ö� 2����Ʈ( ĳ�������ϰ�, �ǵ����)�� �о���⶧����
													// �ҽ��� �ؿ� �ܿ��� 1����Ʈ�� �о���� ���� ��Ȯ�� �о�� �� �ִ�.
	if (!fin) {							// ���� ���� �˻�
		cout << argv[2] << " ���� ����";
		return 0;
	}

	int c;
	int count = 0;
	while ((c = fin.get()) != EOF) {	// ���� ������ ���� �б�
		fout.put(c);
		count++;							// ���� ���� ���
	}
	cout << "file size:" << count;
	fin.close();						// �Է� ���� �ݱ�
	fout.close();						// ��� ���� �ݱ�
}