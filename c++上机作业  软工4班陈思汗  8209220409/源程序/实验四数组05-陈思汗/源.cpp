#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	
	int size1 = strlen(s1), size2 = strlen(s2), j = 0, num = 0;//用于计数
	for (j = 0; j < size2; j++)
	{
		if (s1[0] == s2[j])
		{
			if (size1 > (size2 - j))
				break;//此时由数组长度可判断出已无法成立
			else
			{
				for (int k = 1; k < size1; k++)
				{
					if (s1[k] == s2[j + k])
						num++;
				}
			}
		}
		if (num == size1 - 1)//如果相等，则说明从第二个字母开始到最后一个字母都相等
			break;
		else
			num = 0;
	}
	if (num == size1 - 1)
		return j;
	else
		return -1;
}
int main()
{
	char s1[1000],s2[10000];
	cout << "Enter the first string :";
	gets_s(s1);
	cout << "Enter the second string :";
	gets_s(s2);
	cout << "indexOf(s1,s2) is" << ' ' << indexOf(s1, s2);
}