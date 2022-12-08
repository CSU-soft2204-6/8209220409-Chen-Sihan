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
		}//判断第二个数组应该插到第一个数组的哪个位置
		list3[i + j] = list2[j];
		for (int k = m + j; k < i + j; k++)
		{
			list3[k] = list1[k - j];
		}
		m = i;//m用于表示上次的i从而可以计算出两次插入第二个数组之间的数之间的距离并在中间补齐第一个数组的数
		j++;
	}
	if(j==size2)
		for (int n = 0; n < (size1 + size2 - j -i); n++)
		{
			list3[i + j + n] = list1[i + n];
		}//如果第二个数组已经全部插完，则剩下的全部用第一个数组后面的数来排
	else
		for (int n = 0; n < (size1 + size2 - j - i); n++)
		{
			list3[i + j + n] = list2[j + n];
		}//否则说明已经达到第一个数组的最后一个，剩下的全部用第二个数组来排
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