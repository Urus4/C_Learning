/* OPEN Challenge
	n���� �ϴ� �ѱ� �����ձ� ������ �ۼ��غ���. �Ʒ��� ����� ���� ������ ���� �Է¹ް�,
	���� �� ����� �̸��� �Է¹޾� ������ �����Ѵ�.*/


#include "WordGame.h"


int main() {

	WordGame wordgame;
	Player player[5];
	string tmp;
	int n = 0;
	int i = 0;

	cout << "���� �ձ� ������ �����մϴ�\n";
	cout << "���ӿ� �����ϴ� �ο��� ����Դϱ�?(�ִ� 5��)";

	cin >> n;

	for (int j = 0; j < n; j++)
	{
		cout << "�������� �̸��� �Է��ϼ���. ��ĭ����>>";
		string p;
		cin >> p;
		player[j].setplayername(p);
	}

	
	cout << "�����ϴ� �ܾ�� '�ƹ���' �Դϴ�." << endl;
	wordgame.setword("�ƹ���");

	do {
		cout << player[i].getplayername() << ">>";
		cin >> tmp;
		wordgame.setword(tmp);

		if (wordgame.compareword())
		{
			wordgame.changeword();
			i++;
			if (i == 3) i = 0;
		}
		else
		{
			cout << player[i].getplayername() << "��, Ʋ���̽��ϴ�" << endl;
			break;
		}
	} while (1);

	return 0;
}