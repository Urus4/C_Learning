#include "WordGame.h"


WordGame::WordGame() {
	a = "\0";
	b = "\0";
}

bool WordGame::compareword() {
	if (a.size() == 4) // �ձ��ڰ� �α����϶�
	{
		if (a.at(2) == b.at(0) && a.at(3) == b.at(1))
			return 1;
		else return 0;
	}
	else // �ձ��ڰ� �������϶�
	{
		if (a.at(4) == b.at(0) && a.at(5) == b.at(1))
			return 1;
		else return 0;
	}
}

void WordGame::setword(string p) {
	if (a == "\0") {
		a = p;
	}
	else
		b = p;
}

void WordGame::changeword()
{
	a = b;
}

//===================================================================================

void Player::setplayername(string p) {

	playername = p;
}
string Player::getplayername() {

	return playername;
}