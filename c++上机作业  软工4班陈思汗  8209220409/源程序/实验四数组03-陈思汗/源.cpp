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
	}//��ÿ�����ӱ��
	bool L[100] ;
	for (int i = 0; i < 100; i++)
	{
		L[i] = false; 
	}//�趨��ʼ���
	for (int i = 0; i < 100; i++)
	{
		turn(L[i]); 
	}//��һ���˴������й���
	for (int j = 2; j <100; j++)
	{
		int max = 100 / (j + 1);
		for (int k = 0; k < max; k++)
		{
			turn(L[j+k * (j + 1)-1]);
		}
	}//�ӵڶ����˵��ھ�ʮ�Ÿ��˴򿪹��ӵ����
	turn(L[99]);//��һ�ٸ��˵Ĵ򿪹������
	for (int m = 0; m < 100; m++)
	{
		if (L[m] == 1)
			cout << num[m] << ' ';
	}
	return 0;
}