#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int sec;
public:
	void settime()
	{
		int h, m, s;
		cin >> h >> m >> s;
		hour = h;
		minute = m;
		sec = s;
	}
	void showtime()
	{
		cout << hour << ":" << minute << ':' << sec << endl;
	}
};
int main()
{
	Time t1;
	t1.settime();
	t1.showtime();
}
//分析：数据成员应当被设为私有以控制属性不被随意更改；函数成员应被设置为公有来使用属性；
//      程序段较短的函数最好放在类中定义；程序段较长的函数最好放在类外定义；