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
//���������ݳ�ԱӦ������Ϊ˽���Կ������Բ���������ģ�������ԱӦ������Ϊ������ʹ�����ԣ�
//      ����ν϶̵ĺ�����÷������ж��壻����νϳ��ĺ�����÷������ⶨ�壻