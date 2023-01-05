#include<iostream>
#include<vector>
#include<string>
using namespace std;
template<typename T>
vector<T> intersection(const vector<T>& v1, const vector<T>& v2)
{
	vector<T>v3;
	for (int i = 0; i < v1.size(); i++)
	{
		for (int j = 0; j < v2.size(); j++)
		{
			if (v1[i] == v2[j])
			{
				if (v3.size() != 0)
				{
					int n = 0;//���ڼ��������ж�v3���Ƿ��Ѿ��������Ԫ��
					for (int m = 0; m < v3.size(); m++)
					{
						if (v3[m] == v1[i])
							n++;
					}
					if (n == 0)
						v3.push_back(v1[i]);
				}
				else 
					v3.push_back(v1[i]);
			}
		}
	}
	if (v3.size() == 0)
	{
		cout << "����������û�н���!" << endl;
	}
	return v3;
}
int main()
{
	cout << "����һ�����Գ���:" << endl;
	vector<string>v1, v2;
	cout << "�������һ��������v1������ַ���:" << endl;
	for (int i = 0; i < 5; i++)
	{
		string s;
		cin >> s;
		v1.push_back(s);
	}
	cout << "������ڶ���������v2������ַ���:" << endl;
	for (int i = 0; i < 5; i++)
	{
		string s;
		cin >> s;
		v2.push_back(s);
	}
	vector<string>v3 = intersection(v1, v2);
	if (v3.size() != 0)
	{
		cout << "����v1��v2�Ľ���v3Ϊ" << ' ';
		for (int i = 0; i < v3.size(); i++)
		{
			cout << v3[i] << ' ';
		}
	}
	return 0;
}