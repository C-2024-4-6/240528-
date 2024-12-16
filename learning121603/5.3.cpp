#include<iostream>
#include"5.3.h"

void CFZ::getHeight() {
	cout << "input height: ";
	int h;
	cin >> h;
	this->height = h;
}

void CFZ::getWid() {
	cout << "input width: ";
	int w;
	cin >> w;
	this->width = w;
}
void CFZ::getLen() {
	cout << "input length: ";
	int l;
	cin >> l;
	this->length = l;
}

void CFZ::cal() {
	CFZ::getHeight();
	CFZ::getWid();
	CFZ::getLen();
	cout << "V is: " << this->height * this->length * this->width << "\n";
}