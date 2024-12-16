#include"student.h"
#include<iostream>
using namespace std;

void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex： " << sex << endl;
}

Student::Student() {};

void Student::setNum() {
    cout << "input num: ";
    int n;
    cin >> n;
    this->num = n;
}
void Student::setName() {
    cout << "input name: ";
    string name1;
    cin >> name1;
    for (int i = 0; i < name1.length(); i++) {
        this->name[i] = name1[i];
    }
    this->name[name1.length()] = '\0';
}
void Student::setSex() {
    cout << "input sex: ";
    char sex;
    cin >> sex;
    this->sex= sex;
}