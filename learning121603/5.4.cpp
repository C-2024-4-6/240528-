#include"5.4.h"
#include<iostream>

void _student::setNum(int num) {
	this->num = num;
}

void _student::setScore(int score) {
	this->score = score;
}

int _student::getScore() {
	return this->score;
}

int _student::getNum() {
	return this->num;
}

int max(_student* s) {
	int ret = -1, ans=1;
	for (auto i = s; i <= s + 5; i++) {
		if (i->getScore() > ret) {
			ret = i->getScore();
			ans = i->getNum();
		}
	}
	return ans;
}

