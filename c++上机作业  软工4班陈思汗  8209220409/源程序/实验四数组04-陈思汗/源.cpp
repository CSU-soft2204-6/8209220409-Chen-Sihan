#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int j = 0, i = 0, m = 0;
	while (j < size2 && i < size1)
	{
		while (list2[j] > list1[i]&&i<size1)
		{
			i++;
		}//�жϵڶ�������Ӧ�ò嵽��һ��������ĸ�λ��
		list3[i + j] = list2[j];
		for (int k = m + j; k < i + j; k++)
		{
			list3[k] = list1[k - j];
		}
		m = i;//m���ڱ�ʾ�ϴε�i�Ӷ����Լ�������β���ڶ�������֮�����֮��ľ��벢���м䲹���һ���������
		j++;
	}
	if(j==size2)
		for (int n = 0; n < (size1 + size2 - j -i); n++)
		{
			list3[i + j + n] = list1[i + n];
		}//����ڶ��������Ѿ�ȫ�����꣬��ʣ�µ�ȫ���õ�һ����������������
	else
		for (int n = 0; n < (size1 + size2 - j - i); n++)
		{
			list3[i + j + n] = list2[j + n];
		}//����˵���Ѿ��ﵽ��һ����������һ����ʣ�µ�ȫ���õڶ�����������
}
int main()
{
	int size1, size2;
	int list1[80], list2[80], list3[160];
	cout << "Enter list1:";
	cin >> size1;
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "Enter list2:";
	cin >> size2;
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	merge(list1, size1, list2, size2, list3);
	cout << "The merge list is"<<' ';
	for (int i = 0; i < (size1 + size2); i++)
	{
		cout<<list3[i]<<" ";
	}
	return 0;
}