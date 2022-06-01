#ifndef WORDGAME_H
#define WORDGAME_H
#include <iostream>
#include <string>
using namespace std;

class WordGame {
private:
	string a;
	string b;
public:
	WordGame();
	bool compareword();
	void setword(string p);
	void changeword();
};


class Player {
private:
	string playername;
public:
	void setplayername(string p);
	string getplayername();
};


#endif WORDGAME_H