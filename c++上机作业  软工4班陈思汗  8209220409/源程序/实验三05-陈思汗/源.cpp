#include<iostream>
using namespace std;
int sum(int a)
{
	int n;
	if (a == 1)
		n = 4;
	else
		n = 2 * (sum(a - 1) + 1);
	return n;
}
int main()
{
	cout << "若第10天只剩一个桃子" << endl;
	cout << "则共摘了" << sum(10) << "个桃子" << endl;
}