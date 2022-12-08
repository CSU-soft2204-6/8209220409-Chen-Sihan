#include<iostream>
using namespace std;
int main()
{
	int a[10];
	cout << "Enter ten numbers:";
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	cout << "The distinct numbers are:";
	for (int j = 0; j < 10; j++)
	{
		int n=0;
		for (int k = 0; k < j - 1; k++)
		{
			if (a[j] == a[k])
				n++;
		}
		if (n == 0)
			cout << a[j]<<' ';
	}
	return 0;
}