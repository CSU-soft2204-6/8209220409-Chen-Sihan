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
	cout << "����10��ֻʣһ������" << endl;
	cout << "��ժ��" << sum(10) << "������" << endl;
}