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
					int n = 0;//用于计数，以判断v3中是否已经有了这个元素
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
		cout << "这两个向量没有交集!" << endl;
	}
	return v3;
}
int main()
{
	cout << "这是一个测试程序:" << endl;
	vector<string>v1, v2;
	cout << "请输入第一个向量的v1的五个字符串:" << endl;
	for (int i = 0; i < 5; i++)
	{
		string s;
		cin >> s;
		v1.push_back(s);
	}
	cout << "请输入第二个向量的v2的五个字符串:" << endl;
	for (int i = 0; i < 5; i++)
	{
		string s;
		cin >> s;
		v2.push_back(s);
	}
	vector<string>v3 = intersection(v1, v2);
	if (v3.size() != 0)
	{
		cout << "向量v1和v2的交集v3为" << ' ';
		for (int i = 0; i < v3.size(); i++)
		{
			cout << v3[i] << ' ';
		}
	}
	return 0;
}