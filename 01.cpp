#include<bits/stdc++.h>

using namespace std;

const double PI = 3.14;

void test01() {
	int k = 0;//未定义变量k
	int i = k + 1;//int 大写
	cout << i++ << endl;
	i = 1;//重复定义
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
}

void findV() {
	int r = 0, h = 0;
	cin >> r >> h;
	cout << PI * r * r * h / 3 << endl;
}

void test02() {
	cout << "char length:" << sizeof(char) << endl;
	cout << "int length:" << sizeof(int) << endl;
	cout << "int short:" << sizeof(short) << endl;
	cout << "int long:" << sizeof(long) << endl;
	cout << "int long:" << sizeof(long long) << endl;
	cout << "int double:" << sizeof(double) << endl;
	cout << "int float:" << sizeof(float) << endl;
}

void test03() {
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testUnint<< endl; //<<oct;
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?:
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出

	cout << "output in oct type:" <<oct<< testUnint << endl;

	system("pause");
}

void switchTemp() {
	double temp1 = 0;
	cin >> temp1;
	double temp2 = (temp1 - 32) * 5 / 9;	
	cout <<fixed<<setprecision(2) <<temp2;
}
