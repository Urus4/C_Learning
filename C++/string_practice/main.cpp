/* OPEN Challenge
	n���� �ϴ� �ѱ� �����ձ� ������ �ۼ��غ���. �Ʒ��� ����� ���� ������ ���� �Է¹ް�,
	���� �� ����� �̸��� �Է¹޾� ������ �����Ѵ�.*/

#include <iostream>
#include <string>
using namespace std;

class WordGame {	// �����ձ� ���� ��ü�� ��ϴ� Ŭ����
private:
	string a;
	string b;
public:
	void changeword(string p);
	void readword(string a);
};

void WordGame::changeword(string p) {
	;
	
}





class Player {		// ������ ǥ���ϴ� Ŭ����
private:
	string playername;
public:
	void setplayername(string p);
};

void Player::setplayername(string p) {

	playername = p;
}



int main() {

	WordGame wordgame;
	Player player[5];
	int n;


	cout << "���� �ձ� ������ �����մϴ�\n";
	cout << "���ӿ� �����ϴ� �ο��� ����Դϱ�?(�ִ� 5��)";

	cin >> n;

	cout << "�������� �̸��� �Է��ϼ���. ��ĭ����.";

	for (int i = 0; i < n; i++)
	{
		string p;
		cin >> p;
		player[i].setplayername(p);
	}

	cout << "�����ϴ� �ܾ�� '�ƹ���' �Դϴ�." << endl;






	return 0;
}