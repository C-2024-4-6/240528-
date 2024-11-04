#include<bits/stdc++.h>
using namespace std;

void switchAlpha() {
	char a;
	cin >> a;
	if (a >= 'a' && a <= 'z') {
		cout << (char)(a -32 );
	}
	else {		
		cout <<a+1;
	}
}

int findX() {
	double x;
	cin >> x;
	double ret = 0;
	if (0 < x && x < 1) {
		ret = 3 - 2*x;		
	}
	else if (1 <= x && x < 5) {
		ret = (2 / (4 * x) )+ 1;
	}
	else if (5 <= x && x < 10) {
		ret = x * x;
	}
	else {
		cout << "x out of range" << endl;
		return 0;
	}
	cout << ret;
	return 1;
}

int triangle() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a) {
		cout << "This is NOT a triangle" << endl;
		return 0;
	}
	cout <<"周长为: "<< a + b + c << endl;
	if (a == b || b == c || a == c) {
		cout << "等腰" << endl;
		return 1;
	}
	else {
		cout << "不是等腰" << endl;
		return 1;
	}
}

void findString() {
	string str;
	int alpha = 0, num = 0,space = 0, other = 0;
	getline(cin, str);
	int len = str.length();
	for (int i = 0; i < len; i++) {
		if (('a' <= str[i] && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) alpha++;
		else if ('0' <= str[i] && str[i] <= '9') num++;
		else if (str[i] == ' ')space++;
		else other++;
	}
	cout << "字母： " << alpha << endl;
	cout << "数字： " << num << endl;
	cout << "空格： " << space << endl;
	cout << "其他字符： " << other << endl;
}

void outxing() {
	for (int i = 5; i > 0; i--) {
		for (int j = i; j <= 5; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

int main() {
	double a = 0.8;
	int num = 2;
	int sum = 0;
	int day = 0;
	do {
		sum += num * a;
		num *= 2;
		day++;
	} while (num <= 100);
	cout << sum /day;
}

//double mySqrt(double a) {//递归爆栈了QWQ
//	double val = a;
//	double last;
//	do {
//		last = val;
//		val = (val + a / val) / 2;
//	} while (abs(last - val) > 1e-5);
//	return val;
//}
//
//int main() {
//	double a;
//	cin >> a;
//	double ret = mySqrt(a);
//	cout<<ret;
//}

//int gcd(int a, int b) {
//	if (b == 0) return a;
//	return gcd(b,a%b);
//}
//
//int main() {
//	int a, b;
//	cin >> a >> b;
//	cout << "最大公约数: " << gcd(a, b) << endl;
//	cout << "最小公倍数: " << (a * b) / gcd(a, b) << endl;
//}

//void calculate() {
//	int a, b;
//	char c;
//	cin >> a >> c >> b;
//	switch (c)
//	{
//	case('+') :
//		cout << a + b << endl;
//		break;
//	case('-'):
//		cout << a - b << endl;
//		break;
//	case('*'):
//		cout << a * b << endl;
//		break;
//	case('/'):
//		if (b == 0) {
//			throw "被除数为0！";
//		}
//		cout << a / b << endl;
//		break;		
//	case('%'):
//		cout << a % b << endl;
//		break;
//	default:
//		cout << "请输入正确的运算符" << endl;
//		break;
//	}
//}
//
//int main() {
//	try {
//		calculate();
//	}
//	catch (const char* msg) {
//		cout << msg << endl;
//	}
//}