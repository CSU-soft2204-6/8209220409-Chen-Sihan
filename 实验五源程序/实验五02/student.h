#pragma once
class Student
{
private:
	int num;
	char name[20];
	char sex;
public:
	void display();
	void setvalue(int n,const char name[], char s);
};