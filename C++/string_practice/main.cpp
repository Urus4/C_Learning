/* OPEN Challenge
	n명이 하는 한글 끝말잇기 게임을 작성해보자. 아래의 결과와 같이 선수의 수를 입력받고,
	선수 각 사람의 이름을 입력받아 게임을 시작한다.*/

#include <iostream>
#include <string>
using namespace std;

class WordGame {	// 끝말잇기 게임 전체를 운영하는 클래스
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





class Player {		// 선수를 표현하는 클래스
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


	cout << "끝말 잇기 게임을 시작합니다\n";
	cout << "게임에 참가하는 인원은 몇명입니까?(최대 5인)";

	cin >> n;

	cout << "참가자의 이름을 입력하세요. 빈칸없이.";

	for (int i = 0; i < n; i++)
	{
		string p;
		cin >> p;
		player[i].setplayername(p);
	}

	cout << "시작하는 단어는 '아버지' 입니다." << endl;






	return 0;
}