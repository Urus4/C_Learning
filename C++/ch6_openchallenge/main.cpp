#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;


class RandomNum {
private:
	int Num;
public:
	void getRandomNum();
	int getNum();
	
};

void RandomNum::getRandomNum() {
	srand((unsigned)time(0));
	int n = rand();
	Num = n % 100;
}

int RandomNum::getNum(){
	return Num;
}

//======================================================
class Player {
private:
	string name;
public:
	void setName(string name);
	string getName();

};

void Player::setName(string name) {
	this->name = name;
}

string Player::getName() {
	return name;
}

//=====================================================
class Compare{
private:
	int Inputvalue;
	int Rvalue;
	int Lvalue;
public:
	Compare();
	int comparevalue(int Num);
	void noticeRange();
	void setInputvalue(int value);

};

Compare::Compare() {
	Inputvalue = 0;
	Rvalue = 99;
	Lvalue = 0;
}

int Compare::comparevalue(int Num){

	int mid;
	
	mid = (Rvalue + Lvalue) / 2;
	

	if (Num == Inputvalue)
	{
		return 1;
	}
	else if ((Num != Inputvalue) && (Num < Inputvalue))
	{
		Rvalue = Inputvalue;
		return 0;
	}
	else if ((Num != Inputvalue) && (Num > Inputvalue))
	{
		Lvalue = Inputvalue;
		return 0;
	}
}

void Compare::noticeRange() {

	cout << "답은 " << Lvalue << "과 " << Rvalue << " 사이에 있습니다.\n";
}

void Compare::setInputvalue(int value) {
	Inputvalue = value;
}



//================================================================================================================================================
int main() {

	RandomNum random;
	Player player[5];
	Compare compare;
	int num;
	int input;
	int playernum;
	int j=0;


	random.getRandomNum();
	num = random.getNum();


	cout << "게임에 참가할 인원수는 몇명입니까?(최대 5명) : ";
	cin >> playernum;

	for (int i = 0; i < playernum; i++)
	{
		string name;
		cout << "참가자의 이름을 적어주십시오 : ";
		cin >> name;
		player[i].setName(name);

	}

	cout << "Up & Down 게임을 시작합니다.\n";

	while (1)
	{
		compare.noticeRange();
		cout << player[j++].getName() << ">>";
		cin >> input;
		compare.setInputvalue(input);
		if (compare.comparevalue(num))
		{
			cout << player[j - 1].getName() << "가 이겼습니다!!\n";
			break;
		}
		if (j == playernum) {
			j = 0;
		}
	}

	return 0;
}