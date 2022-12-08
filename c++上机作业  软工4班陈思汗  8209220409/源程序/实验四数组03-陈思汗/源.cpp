#include<iostream>
using namespace std;
void turn(bool &a)
{
	if (a == true)
		a = false;
	else
		a = true;
}
int main()
{
	int num[100];
	for (int i=0 ; i < 100; i++)
	{
		num[i] = i + 1; 
	}//给每个柜子编号
	bool L[100] ;
	for (int i = 0; i < 100; i++)
	{
		L[i] = false; 
	}//设定初始情况
	for (int i = 0; i < 100; i++)
	{
		turn(L[i]); 
	}//第一个人打开了所有柜子
	for (int j = 2; j <100; j++)
	{
		int max = 100 / (j + 1);
		for (int k = 0; k < max; k++)
		{
			turn(L[j+k * (j + 1)-1]);
		}
	}//从第二个人到第九十九个人打开柜子的情况
	turn(L[99]);//第一百个人的打开柜子情况
	for (int m = 0; m < 100; m++)
	{
		if (L[m] == 1)
			cout << num[m] << ' ';
	}
	return 0;
}