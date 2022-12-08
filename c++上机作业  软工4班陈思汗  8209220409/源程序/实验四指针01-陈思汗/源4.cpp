#include<iostream>
using namespace std;
int* f()
{
	int* q;
	q=new int [4];
	for (int i = 0; i < 4; i++)
	{
		q[i] = i + 1;
	}
	return q;
}
void main()
{
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete[]p;
}
