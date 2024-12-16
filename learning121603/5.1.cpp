#include<iostream>
using namespace std;

class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void setHour() {
		int hour;
		cin >> hour;
		this->hour = hour;
	}
	void setMinute() {
		int minute;
		cin >> minute;
		this->minute = minute;
	}
	void setSec() {
		int sec;
		cin >> sec;
		this->sec = sec;
	}
	void getHour() {
		cout << this->hour << endl;
	}
	void getMinute() {
		cout << this->minute << endl;
	}
	void getSec() {
		cout << this->sec << endl;
	}
};
//int main()
//{
//	Time t1;           //定义t1为Time类对象
//	t1.setHour();
//	t1.setMinute();
//	t1.setSec();
//	t1.getHour();
//	t1.getMinute();
//	t1.getSec();
//	return 0;
//}