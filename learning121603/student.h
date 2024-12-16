#pragma once
#include"bits/stdc++.h"
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void setNum();
	void setName();
	void setSex();
	Student();
	Student(int num,const char name[], char sex) {
		this->num = num;
		strcpy_s(this->name, name);
		this->sex = sex;
	}
private:
	int num;
	char name[20];
	char sex;
};