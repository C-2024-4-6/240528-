#pragma once
using namespace std;

class _student {
private:
	int num;
	int score;
public:
	void setNum(int num);
	void setScore(int score);
	int getScore();
	int getNum();
};

int max(_student* s);
