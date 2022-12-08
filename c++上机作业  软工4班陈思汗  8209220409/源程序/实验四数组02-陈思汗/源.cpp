#include<iostream>
using namespace std;
int main()
{
	double a[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
		{
			if (a[j] > a[j + 1])
			{
				int t;
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
				changed = true;
			}
		}
	} while (changed);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << '\t';
	}
	return 0;
}