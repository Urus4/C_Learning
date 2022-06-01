/* OPEN Challenge
	n명이 하는 한글 끝말잇기 게임을 작성해보자. 아래의 결과와 같이 선수의 수를 입력받고,
	선수 각 사람의 이름을 입력받아 게임을 시작한다.*/


#include "WordGame.h"


int main() {

	WordGame wordgame;
	Player player[5];
	string tmp;
	int n = 0;
	int i = 0;

	cout << "끝말 잇기 게임을 시작합니다\n";
	cout << "게임에 참가하는 인원은 몇명입니까?(최대 5인)";

	cin >> n;

	for (int j = 0; j < n; j++)
	{
		cout << "참가자의 이름을 입력하세요. 빈칸없이>>";
		string p;
		cin >> p;
		player[j].setplayername(p);
	}

	
	cout << "시작하는 단어는 '아버지' 입니다." << endl;
	wordgame.setword("아버지");

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
			cout << player[i].getplayername() << "님, 틀리셨습니다" << endl;
			break;
		}
	} while (1);

	return 0;
}