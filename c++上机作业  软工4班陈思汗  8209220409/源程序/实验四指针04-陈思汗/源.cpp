#include<iostream>
using namespace std;
void sort(int a[],int n)
{
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[i] < a[j])
			{
				int t;
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}
int main()
{
	int size;
	cout << "Please input the number and the array element:";
	cin >> size;
	int* p = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> p[i];
	}
	cout << "ָ��p����" << p << '\t' << "pָ��" << *p << endl;
	sort(p, size);
	cout << "��������������Ϊ";
	for (int i = 0; i < size; i++)
	{
		cout << *(p + i) << ' ';
	}
	delete[]p;
	return 0;
}
