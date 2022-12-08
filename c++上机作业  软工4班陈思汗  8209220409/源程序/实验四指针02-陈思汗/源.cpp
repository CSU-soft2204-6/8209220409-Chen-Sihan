#include<iostream>
using namespace std;
int indexof(const char* s1,const char*s2)
{
	int size1 = strlen(s1), size2 = strlen(s2),j=0,num=0;//用于计数
	for (j = 0; j < size2; j++)
	{
		if (s1[0] == s2[j])
		{
			if ((size1 - 1) > (size2 - j))
				break;//此时由数组大小可判断出已不能成立
			else
				for (int i = 1; i < size1; i++)
				{
					if (s1[i] == s2[j + i])
						num++;
				}
		}
		if (num == size1 - 1)//如果相等，则说明从第一个字母到最后一个字母都相等
			break;
		else
			num = 0;
	}
	if (num == (size1 - 1))
		return j;
	else
		return -1;
}
int main()
{
	char s1[1000],s2[10000];
	cout << "Enter the list :";
	gets_s(s1);
	cout << "Enter the list :";
	gets_s(s2);
	cout << "indexof(s1,s2) is" << ' ' << indexof(s1, s2);
	return 0;
}
