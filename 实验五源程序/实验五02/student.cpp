//student.cpp
#include<iostream>
#include"student.h"
using namespace std;
void Student::display()
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}
void Student::setvalue(int n,const char N[],char s)
{
	num = n;
	for (int i = 0; i < 20; i++)
	{
		name[i] = N[i];
	}
	sex = s;
}